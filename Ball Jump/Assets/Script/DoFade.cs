using UnityEngine;
using System.Collections;

public class DoFade : MonoBehaviour {

 	public void Start(){
		StartCoroutine("Fadeit");
	}

	IEnumerator Fadeit(){
		CanvasGroup canvasgroup = GetComponent<CanvasGroup> ();
		while (canvasgroup.alpha < 1) {
			canvasgroup.alpha += Time.deltaTime;
			yield return null;
		}
		canvasgroup.interactable = true;
		yield return null;
	}

}
