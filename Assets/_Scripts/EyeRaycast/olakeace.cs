using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using VRStandardAssets.Utils;

public class olakeace : MonoBehaviour {

    public SelectionSlider slider;

    private bool done = false;

	// Use this for initialization
	void Start () {

       // slider = GetComponent<SelectionSlider>();
	}

    // Update is called once per frame
    void Update()
    {        
        slider.OnBarFilled += mievento;
    }


    void mievento()
    {
        if(done != true)
        {
            Debug.Log("hacer metodo del " + gameObject.name);
            done = true;
        }
        

        
        //y salgase de aca, llame la instruccion solo una vez
    }
}
