using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class Manager : MonoBehaviour {

	public Rigidbody rb;
	bool jumpcheck = true;
	public GameObject cube;
	public float posZ;
	public float[] posx = {1,0,-1};
	Vector3 lastpos;

	public Text scoreText;
	public Text yourScoretxt;
	public Text bestScoretxt;
	public Text bestScoretxtI;

	public Material[] cubeColor;

	int score;
	public GameObject starter;
	public GameObject player;
	public GameObject finisher;

	bool stopGame;
	GameObject gg;

	//------------------------------------------sound------------------------------------------
	public AudioSource gameStart;
	public AudioSource gamePlay;
	public AudioSource gameOvr;
	public AudioSource ballmove;
	public AudioSource balljump;
	public AudioSource balltouch;
	public AudioSource newCube;
	public AudioSource click;
	public AudioSource bestScore;
	//------------------------------------------+++++------------------------------------------

	[SerializeField] InterstitialAdExample _interstitialAdExample;

	void Awake(){
		starter.SetActive (true);
		player.SetActive (false);
		finisher.SetActive (false);
	}

	// Use this for initialization
	void Start () {

		Time.timeScale = 1;
		gg = GameObject.Find ("Main Camera");
		starter.SetActive (true);
		player.SetActive (false);
		finisher.SetActive (false);
		stopGame = true;
		bestScoretxtI.text = PlayerPrefs.GetInt ("BestScore").ToString ();
		gg.GetComponent<Animation> ().PlayQueued ("camAnimSteady");
		gameStart.Play (); //sound

	
	}

	void Update(){
		if (Input.GetKeyDown(KeyCode.Escape)) {	Application.Quit();}
	}
	
	public void OnPlayClick(){

		click.Play ();  //sound

		GameObject.Find ("Sphere").GetComponent<Rigidbody> ().useGravity = true;

		lastpos = new Vector3 (0, 0.5f, 0);
		starter.SetActive (false);
		player.SetActive (true);
		player.GetComponent<DoFade> ().Start ();
		finisher.SetActive (false);
		Newball ();
		score = 0;
		scoreText.text = "" + score.ToString ();
		GameObject.Find ("Main Camera").GetComponent<FollowTarget> ().enabled = true;

		gameStart.Stop (); //sound
		gamePlay.Play ();  //sound

	}



	public void Reset(){
		click.Play ();  //sound

		SceneManager.LoadScene(0);
		//Application.LoadLevel (Application.loadedLevel);
	}

	public void gameOver(){
		if (stopGame) {
			stopGame = false;
			gamePlay.Stop();  //sound
			gameOvr.Play(); //sound
			gameStart.PlayDelayed(2.5f);
			starter.SetActive(false);
			player.SetActive(false);
			finisher.SetActive(true);
			finisher.GetComponent<DoFade> ().Start ();
			StartCoroutine ("gmOvr");
			int oldScore = PlayerPrefs.GetInt ("BestScore");
			if(score > oldScore){
				PlayerPrefs.SetInt ("BestScore",score);
				bestScore.PlayDelayed(1.2f);
			}
			bestScoretxt.text = "" + PlayerPrefs.GetInt ("BestScore").ToString ();
			yourScoretxt.text = "" + score.ToString();
			//GetComponent<GoogleMobileAdScript>().ShowInterstial();
			_interstitialAdExample.ShowAd();
		}
	}

	IEnumerator gmOvr(){
		gg.GetComponent<FollowTarget> ().enabled = false;
		yield return new WaitForSeconds (0.5f);
		gg.GetComponent<Animation> ().Play ("camAnimFinal");
		gg.GetComponent<Animation> ().PlayQueued ("camAnimSteady");
		//GetComponent<GoogleMobileAdScript> ().ShowBannerside ();
	}

	public void Jump(){
		if(jumpcheck){
		rb.AddForce (0, 250, 0);
			balljump.Play(); //sound
			StartCoroutine("Onjump");
		}
	}

	IEnumerator Onjump(){
		jumpcheck = false;
		yield return new WaitForSeconds (1.5f);
		jumpcheck = true;
	}

 	public void Newball(){
		GameObject cc= Instantiate(cube) as GameObject;
		int rndm = Random.Range (0, cubeColor.Length);
		cc.GetComponent<Renderer> ().material = cubeColor [rndm];
		Vector3 temp = lastpos;
		int random = Random.Range (0, 4);
		if (random == 3) {
			temp.z -= 2;
		} else if (random == 2) {
			temp.x += 2;
		} else if (random == 1) {
			temp.x -= 2;
		} else {
			temp.z +=2;
		}
		cc.transform.position = temp;
		lastpos = temp;
		score++;
		scoreText.text = "" + score.ToString ();

		newCube.Play (); //sound
	//	yield return new WaitForSeconds (2f);
	}

	public void OnRateUsClick(){
		Application.OpenURL ("https://play.google.com/store/apps/details?id=com.wrooom68.balljumping");
	}
}
