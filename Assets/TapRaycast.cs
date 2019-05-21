using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TapRaycast : MonoBehaviour {


    public Camera cam;
    public Transform nextSphere;
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
        if (Application.platform == RuntimePlatform.Android || Application.platform == RuntimePlatform.IPhonePlayer)
        {
            if (Input.touchCount > 0 && Input.touchCount < 2)
            {
                if (Input.GetTouch(0).phase == TouchPhase.Began)
                {
                    //checkTouch(Input.GetTouch(0).position);
                    Ray raycast = cam.ScreenPointToRay(Input.GetTouch(0).position);
                    RaycastHit raycastHit;
                    if (Physics.Raycast(raycast, out raycastHit))
                    {

                        GameObject objHit = raycastHit.collider.gameObject;
                        Debug.Log("Hit " + objHit.name);

                        //OR with Tag

                        if (raycastHit.collider.CompareTag("Digital"))
                        {
                            Debug.Log("BIENVENIDO A LAS HUMANIDADES DIGITALES");
                            GetComponent<SphereChanger>().ChangeSphere(nextSphere);
                        }
                    }
                }

                //if (Input.touchCount > 0)
                //{
                   
                //}
                //else
                //{
                //    //pos claro como va a tochar si esta en la pantalla
                //    Debug.Log("No touches available");
                //}

            }
        }
        else if (Application.platform == RuntimePlatform.WindowsEditor || Application.platform == RuntimePlatform.OSXEditor)
        {
            if (Input.GetMouseButtonDown(0))
            {
                
                Ray raycast = cam.ScreenPointToRay(Input.mousePosition);
                RaycastHit raycastHit;
                if (Physics.Raycast(raycast, out raycastHit))
                {

                    GameObject objHit = raycastHit.collider.gameObject;
                    Debug.Log("Hit "+ objHit.name );
                      
                    //OR with Tag

                    if (raycastHit.collider.CompareTag("Digital"))
                    {
                        Debug.Log("BIENVENIDO A LAS HUMANIDADES DIGITALES");
                        GetComponent<SphereChanger>().ChangeSphere(nextSphere);
                    }
                }
            }
        }
    }

    private void checkTouch(Vector3 pos)
    {
        Vector3 wp = cam.ScreenToWorldPoint(pos);
        Vector2 touchPos = new Vector2(wp.x, wp.y);
        Collider2D hit = Physics2D.OverlapPoint(touchPos);

        if (hit && hit == gameObject.GetComponent<Collider2D>())
        {

            // do something
        }
    }
}
