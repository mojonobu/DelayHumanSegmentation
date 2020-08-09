using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering;
using UnityEngine.Experimental.Rendering;


public class RTTestScript : MonoBehaviour
{
    RenderTexture handTexture;
    public RenderTexture rt;

    // Start is called before the first frame update
    void Start()
    {
        // Debug.Log("before " + rt.descriptor.dimension.ToString());

        // rt.dimension = TextureDimension.Any;

        // Debug.Log("after " + rt.descriptor.dimension.ToString());

    
        RenderTextureDescriptor descriptor = new RenderTextureDescriptor();
        descriptor.dimension = TextureDimension.Any;
        descriptor.width = Screen.width/10;
        descriptor.height = Screen.height/10;
        descriptor.depthBufferBits = 24;
        descriptor.graphicsFormat = GraphicsFormat.R8G8B8A8_UNorm;
        descriptor.volumeDepth = 1;
        descriptor.msaaSamples = 1;
        // Debug.Log("volumeDepth :" + descriptor.volumeDepth);
        // {
        //     dimension =  TextureDimension.Any,
        //     width = Screen.width/10,
        //     height = Screen.height/10,
        //     depthBufferBits = 24,
        //     graphicsFormat = GraphicsFormat.R8G8B8A8_UNorm
        // };

        handTexture = new RenderTexture(descriptor);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
