using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


/**
 * Script para llenar un grid
 * pre: tiene un padre un viewport, el cual tiene un padre como un ScrollRect
 * gridlayout group como hermano
 * https://www.studica.com/blog/unity-ui-tutorial-scroll-grid
 **/
public class PopulateGrid : MonoBehaviour
{
    public GameObject prefab; // This is our prefab object that will be exposed in the inspector

    public int numberToCreate; // number of objects to create. Exposed in inspector

    private string[] butonsLabels = { "abss", "abcss", "abst", "saasd", "olad", "powe", "lsdfou" };

    void Start()
    {
        
        Populate();
    }

    void Update()
    {

    }

    void Populate()
    {
        GameObject newObj; // Create GameObject instance

        for (int i = 0; i < butonsLabels.Length; i++)
        {
            // Create new instances of our prefab until we've created as many as we specified
            newObj = Instantiate(prefab, transform);

            // Randomize the color or the componente that the prefab have to got.
            //newObj.GetComponent<Image>().color = Random.ColorHSV();
            //newObj.GetComponentInChildren<Text>().text = butonsLabels[i];  
        }

    }
}