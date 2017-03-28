using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class FloorOverseer : MonoBehaviour {

    public static FloorOverseer instance;
    public List<Vector3> floorPlan = new List<Vector3>();
    public List<Transform> pathMakers = new List<Transform>();
    public bool spawningFloors;
    public bool attachingCamera;

    public GameObject player;
    GameObject lePlayer;

    public int maxSize;

	// Use this for initialization
	void Start () {
        instance = this;
        spawningFloors = true;
        attachingCamera = false;
	}
	
	// Update is called once per frame
	void Update () {
        if(attachingCamera)
        {
            attachCameraToPlayer();
        }
        if (spawningFloors)
        {
            floorSpawnerClear();
            if (!spawningFloors)
            {
                GameObject newPlayer = Instantiate(player, new Vector3(0, 10, 0), Quaternion.identity);
                lePlayer = newPlayer;
                attachingCamera = true;
                // Camera.main.transform.parent = newPlayer.transform;
                // Camera.main.gameObject.AddComponent<mouseFollowScript>();
            }
        }
		
        if (Input.GetKeyDown(KeyCode.R))
        {
            Cursor.lockState = CursorLockMode.None;
            Cursor.visible = true;
            SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
        }
	}

    void floorSpawnerClear()
    {
        if (floorPlan.Count > maxSize)
        {
            foreach (Transform floorMaker in pathMakers)
            {
                // pathMakers.Remove(floorMaker);
                Destroy(floorMaker.gameObject);
            }
            spawningFloors = false;
            return;
        }
        /*
        if (pathMakers.Count > 0)
        {
            foreach (Transform floorMaker in pathMakers)
            {
                if (!floorMaker.GetComponent<FloorSpawner>().active)
                {
                    pathMakers.Remove(floorMaker);
                    Destroy(floorMaker.gameObject);
                }
            }
        }
        */
        if(pathMakers.Count <= 0)
        {
            spawningFloors = false;
            return;
        }
    }

    void attachCameraToPlayer()
    {
        Camera.main.transform.position = Vector3.LerpUnclamped(Camera.main.transform.position, lePlayer.transform.position + Vector3.up, 0.1f);
        Camera.main.transform.rotation = Quaternion.Lerp(Camera.main.transform.rotation, lePlayer.transform.rotation, Time.deltaTime);
        float dist = Vector3.Distance(Camera.main.transform.position, lePlayer.transform.position + Vector3.up);
        if(dist < 0.5f)
        {
            attachingCamera = false;
            Camera.main.transform.position = lePlayer.transform.position + Vector3.up;
            Camera.main.transform.rotation = lePlayer.transform.rotation;
            Camera.main.transform.parent = lePlayer.transform;
            Camera.main.gameObject.AddComponent<mouseFollowScript>();
            lePlayer.AddComponent<playerMovement>();
        }
    }
}
