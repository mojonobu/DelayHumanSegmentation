using UnityEngine;
using UnityEngine.Rendering;
using UnityEngine.Experimental.Rendering;

using System;
using Unity.Collections;
using Unity.Collections.LowLevel.Unsafe;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
// using System.Collections;

[RequireComponent(typeof(ARCameraManager))]
public class PeopleOcclusionPostEffect : MonoBehaviour
{
    [SerializeField] private ARSessionOrigin m_arOrigin = null;
    [SerializeField] private AROcclusionManager m_arOcclusionManager = null;
    [SerializeField] private ARCameraManager m_cameraManager = null;
    [SerializeField] private Shader m_peopleOcclusionShader = null;
    [SerializeField] private Shader m_peopleOcclusionShader_fullRendering = null;


    private Texture2D m_cameraFeedTexture = null;
    private Material m_material = null;
    private Material m_materialFull = null;


    [SerializeField]
    public RenderTexture handTexture;
    void Awake()
    {
        m_material = new Material(m_peopleOcclusionShader);
        m_materialFull = new Material(m_peopleOcclusionShader_fullRendering);

        GetComponent<Camera>().depthTextureMode |= DepthTextureMode.Depth;

        // RenderTextureDescriptor descriptor = new RenderTextureDescriptor();
        // descriptor.dimension = TextureDimension.Any;
        // descriptor.width = Screen.width/10;
        // descriptor.height = Screen.height/10;
        // descriptor.depthBufferBits = 24;
        // descriptor.graphicsFormat = GraphicsFormat.R8G8B8A8_UNorm;
        // Debug.Log("descriptor :" + descriptor.ToString());
        // {
        //     dimension =  TextureDimension.Any,
        //     width = Screen.width/10,
        //     height = Screen.height/10,
        //     depthBufferBits = 24,
        //     graphicsFormat = GraphicsFormat.R8G8B8A8_UNorm
        // };

        // handTexture = new RenderTexture(Screen.width/10, Screen.height/10,24);
    }

    private void OnEnable()
    {
        m_cameraManager.frameReceived += OnCameraFrameReceived;
    }

    private void OnDisable()
    {
        m_cameraManager.frameReceived -= OnCameraFrameReceived;
    }

    void OnRenderImage(RenderTexture source, RenderTexture destination)
    {

        if (PeopleOcclusionSupported())
        {
            if (m_cameraFeedTexture != null)
            {
                //m_material.SetFloat("_UVMultiplier", CalculateUVMultiplier(m_cameraFeedTexture));
                m_material.SetFloat("_UVMultiplierLandScape", CalculateUVMultiplierLandScape(m_cameraFeedTexture));
                m_material.SetFloat("_UVMultiplierPortrait", CalculateUVMultiplierPortrait(m_cameraFeedTexture));

                m_materialFull.SetFloat("_UVMultiplierLandScape", CalculateUVMultiplierLandScape(m_cameraFeedTexture));
                m_materialFull.SetFloat("_UVMultiplierPortrait", CalculateUVMultiplierPortrait(m_cameraFeedTexture));
            }

            if (Input.deviceOrientation == DeviceOrientation.LandscapeRight)
            {
                m_material.SetFloat("_UVFlip", 0);
                m_material.SetInt("_ONWIDE", 1);
                m_materialFull.SetFloat("_UVFlip", 0);
                m_materialFull.SetInt("_ONWIDE", 1);
            }
            else if (Input.deviceOrientation == DeviceOrientation.LandscapeLeft)
            {
                m_material.SetFloat("_UVFlip", 1);
                m_material.SetInt("_ONWIDE", 1);
                m_materialFull.SetFloat("_UVFlip", 1);
                m_materialFull.SetInt("_ONWIDE", 1);
            }
            else
            {
                m_material.SetInt("_ONWIDE", 0);
                m_materialFull.SetInt("_ONWIDE", 0);
            }

            //m_material.SetFloat("_UVFlip", Input.deviceOrientation == DeviceOrientation.LandscapeRight ? 0.0f : 1.0f);

            m_material.SetTexture("_OcclusionDepth", m_arOcclusionManager.humanDepthTexture);
            m_material.SetTexture("_OcclusionStencil", m_arOcclusionManager.humanStencilTexture);
            m_materialFull.SetTexture("_OcclusionDepth", m_arOcclusionManager.humanDepthTexture);
            m_materialFull.SetTexture("_OcclusionStencil", m_arOcclusionManager.humanStencilTexture);

            //m_material.SetFloat("_ARWorldScale", 1f/m_arOrigin.transform.localScale.x);

            // StartCoroutine(DelayRendering(source, destination, m_material));

            
            Graphics.Blit(source, null as RenderTexture, m_materialFull);

            Graphics.Blit(source, handTexture, m_material);
        }
        else
        {
            // StartCoroutine(DelayRendering(source, destination, null));
            Graphics.Blit(source, null as RenderTexture);
            Graphics.Blit(source, handTexture);
        }
    }

    // IEnumerator DelayRendering(RenderTexture source, RenderTexture destination,Material m_material) {

    //     yield return new WaitForSeconds(1f);

    //     if(m_material != null){
    //         Graphics.Blit(source, destination, m_material);
    //     } else {
    //         Graphics.Blit(source, destination);
    //     }
    // }

    private void OnCameraFrameReceived(ARCameraFrameEventArgs eventArgs)
    {
        if (PeopleOcclusionSupported())
        {
            RefreshCameraFeedTexture();
        }
    }

    private bool PeopleOcclusionSupported()
    {
        return m_arOcclusionManager.subsystem != null && m_arOcclusionManager.humanDepthTexture != null && m_arOcclusionManager.humanStencilTexture != null;
    }

    private void RefreshCameraFeedTexture()
    {
        XRCpuImage cameraImage;
        m_cameraManager.TryAcquireLatestCpuImage(out cameraImage);

        if (m_cameraFeedTexture == null || m_cameraFeedTexture.width != cameraImage.width || m_cameraFeedTexture.height != cameraImage.height)
        {
            m_cameraFeedTexture = new Texture2D(cameraImage.width, cameraImage.height, TextureFormat.RGBA32, false);
        }

        XRCpuImage.Transformation imageTransformation = Input.deviceOrientation == DeviceOrientation.LandscapeRight ? XRCpuImage.Transformation.MirrorY : XRCpuImage.Transformation.MirrorX;
        XRCpuImage.ConversionParams conversionParams = new XRCpuImage.ConversionParams(cameraImage, TextureFormat.RGBA32, imageTransformation);

        NativeArray<byte> rawTextureData = m_cameraFeedTexture.GetRawTextureData<byte>();

        try
        {
            unsafe
            {
                cameraImage.Convert(conversionParams, new IntPtr(rawTextureData.GetUnsafePtr()), rawTextureData.Length);
            }
        }
        finally
        {
            cameraImage.Dispose();
        }

        m_cameraFeedTexture.Apply();
        m_material.SetTexture("_CameraFeed", m_cameraFeedTexture);
        m_materialFull.SetTexture("_CameraFeed", m_cameraFeedTexture);

    }

    /*
        private float CalculateUVMultiplier(Texture2D cameraTexture)
        {
            float screenAspect = (float)Screen.width / (float)Screen.height;
            float cameraTextureAspect = (float)cameraTexture.width / (float)cameraTexture.height;
            return screenAspect / cameraTextureAspect;
        }
    */
    private float CalculateUVMultiplierLandScape(Texture2D cameraTexture)
    {
        float screenAspect = (float)Screen.width / (float)Screen.height;
        float cameraTextureAspect = (float)cameraTexture.width / (float)cameraTexture.height;
        return screenAspect / cameraTextureAspect;

    }
    private float CalculateUVMultiplierPortrait(Texture2D cameraTexture)
    {
        float screenAspect = (float)Screen.height / (float)Screen.width;
        float cameraTextureAspect = (float)cameraTexture.width / (float)cameraTexture.height;
        return screenAspect / cameraTextureAspect;
    }

}