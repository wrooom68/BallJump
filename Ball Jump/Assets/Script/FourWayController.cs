using CnControls;
using UnityEngine;

namespace CustomJoystick
{
    public class FourWayController : MonoBehaviour
    {
        private Vector3[] directionalVectors = { Vector3.forward, Vector3.back, Vector3.right, Vector3.left };

//        private Transform _mainCameraTransform;
//
//
//		private float smooth = 2.0F;

	
        private void Awake()
        {
			Time.timeScale=1;
//            _mainCameraTransform = Camera.main.transform;
        }
		private Rigidbody rb;
		void Start() {
			rb = GetComponent<Rigidbody>();
		}
		
		private void Update()
        {
			Vector3 pos = transform.position;
			if (pos.y > -5f) {

				var movementVector = new Vector3 (CnInputManager.GetAxis ("Horizontal"), 0f, CnInputManager.GetAxis ("Vertical"));
				if (movementVector.sqrMagnitude < 0.0001f) {
					//rb.angularDrag = 10;
					return;
				}
				rb.angularDrag = 0.05f;
				// Clamping
				Vector3 closestDirectionVector = directionalVectors [0];
				float closestDot = Vector3.Dot (movementVector, closestDirectionVector);
				for (int i = 1; i < directionalVectors.Length; i++) {
					float dot = Vector3.Dot (movementVector, directionalVectors [i]);
					if (dot < closestDot) {
						closestDirectionVector = directionalVectors [i];
						closestDot = dot;
					}
				}

				// closestDirectionVector is what we need
//            var transformedDirection = _mainCameraTransform.InverseTransformDirection(closestDirectionVector);
//            transformedDirection.y = 0f;
//            transformedDirection.Normalize();

				// transform.position -= transformedDirection * Time.deltaTime;
				rb.AddForce (-closestDirectionVector);
			} else {
				GameObject.Find("Manager").GetComponent<Manager>().gameOver();
			}
		}


    }
}
