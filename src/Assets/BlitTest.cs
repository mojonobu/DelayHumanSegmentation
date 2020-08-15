using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BlitTest : MonoBehaviour
{
    public RenderTexture testTexture;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    void OnRenderImage(RenderTexture source, RenderTexture destination){
        Debug.Log(source.dimension.ToString());
        Graphics.Blit(source, null as RenderTexture);
        Graphics.Blit(source, testTexture);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
