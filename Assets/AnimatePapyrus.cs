using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AnimatePapyrus : MonoBehaviour {


    public float scrollSpeed = 0.5f;
    Renderer rend;

    void Start()
    {
        rend = GetComponent<Renderer>();
    }

    void Update()
    {
        // Animates main texture scale in a funky way!
       
        float offset = Time.time * scrollSpeed;
        rend.material.SetTextureOffset("_MainTex", new Vector2(0, offset));

    }
}
