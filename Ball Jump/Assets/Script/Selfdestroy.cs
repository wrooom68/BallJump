using UnityEngine;
using System.Collections;

public class Selfdestroy : MonoBehaviour {

	public GameObject mgr;
	// Use this for initialization
	void Start () {
		mgr=GameObject.Find("Manager");
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	IEnumerator Destroyme(){
		yield return new WaitForSeconds(3f);
		Destroy (gameObject);

	}

	void OnCollisionEnter(Collision col){
		if (col.gameObject.tag == "Player") {
			mgr.GetComponent<Manager>().balltouch.Play();
		}
	}
		
	void OnCollisionExit(Collision col){
		if (col.gameObject.tag == "Player") {
			mgr.GetComponent<Manager>().Newball();
			Destroy(gameObject);
		}
	}
 
}
