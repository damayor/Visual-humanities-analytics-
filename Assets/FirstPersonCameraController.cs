using UnityEngine;
using System.Collections;

// A very simplistic car driving on the x-z plane.

public class FirstPersonCameraController : MonoBehaviour
{

    public float speed = 40.0f;
    public float rotationSpeed = 100.0f;

    float horizontalSpeed = 2.0f;
    float verticalSpeed = 2.0f;

    public bl_Joystick Joystick;

    public bl_Joystick JoystickR;



    public bool rotate = false;


//uso del # para compilacion con unity
    void Update()
    {
        // Get the horizontal and vertical axis.
        // By default they are mapped to the arrow keys.
        // The value is in the range -1 to 1


#if UNITY_EDITOR


        float translation = Input.GetAxis("Vertical") * 40f; //speed;
        float rotation = Input.GetAxis("Horizontal") * rotationSpeed;

        // Make it move 10 meters per second instead of 10 meters per frame...
        translation *= Time.deltaTime;
        rotation *= Time.deltaTime;

        // Move translation along the object's z-axis
        transform.Translate(0, 0, translation);

        // Rotate around our y-axis
        transform.Rotate(0, rotation, 0);

        if (rotate)
        {
            // Get the mouse delta. This is not in the range -1...1
            //float h = horizontalSpeed * Input.GetAxis("Mouse X");

            float v = verticalSpeed * Input.GetAxis("Fire1");
           // transform.Rotate(-translation, 0, 0);
        }

#else

        float translation = Joystick.Vertical * 5.0f;
        float rotation = Joystick.Horizontal * 20.0f;

        // Make it move 10 meters per second instead of 10 meters per frame...
        translation *= Time.deltaTime;
        rotation *= Time.deltaTime;

        // Move translation along the object's z-axis
        transform.Translate(0, 0, translation);

        // Rotate around our y-axis
        transform.Rotate(0, rotation, 0);

        if (rotate)
        {

            float v =  JoystickR.Vertical;

            transform.Rotate(-v, 0, 0);
        }
#endif

    }
}