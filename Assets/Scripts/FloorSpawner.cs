using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FloorSpawner : MonoBehaviour {

    List<Vector3> floorList = new List<Vector3>();

    // public int maxTiles = 50;
    int moveDistance = 5;
    Vector3 downOffset = new Vector3(0, -2, 0);

    public float roomStyle = 0.8f;
    float objectChance = 0.1f;

    Stack<Vector3> posWeLookedAt = new Stack<Vector3>();

    public Transform floor;
    public Transform floorSpawner;
    public Transform statue;
    public Transform crate;

    public bool canSpawnMoreFS;
    public bool active;

	// Use this for initialization
	void Start () {
        FloorOverseer.instance.pathMakers.Add(this.transform);
        active = true;
	}
	
	// Update is called once per frame
	void Update () {

        if (Random.value > 0.1f && canSpawnMoreFS)
        {
            Debug.Log("Spawn new spawner!");
            Transform newPathMaker = Instantiate(floorSpawner, transform.position, Quaternion.identity);
            if (Random.value > 0.25f) { newPathMaker.GetComponent<FloorSpawner>().canSpawnMoreFS = true; }
            else { newPathMaker.GetComponent<FloorSpawner>().canSpawnMoreFS = false; }
            canSpawnMoreFS = false;
            newPathMaker.GetComponent<FloorSpawner>().roomStyle = gameManager.instance.roomStyles;
            FloorOverseer.instance.pathMakers.Add(newPathMaker);
        }

        RaycastHit hit = new RaycastHit();
        Ray ray = new Ray(transform.position, downOffset);

        if (!Physics.Raycast(ray, out hit))
        {
            Transform newFloor = Instantiate(floor, transform.position + downOffset, Quaternion.identity);
            newFloor.transform.Find("floor").GetComponent<Renderer>().material.color = Random.ColorHSV();
            floorList.Add(newFloor.position);

            float genObject = Random.value;
            if(genObject < objectChance)
            {
                if(genObject < objectChance / 2)
                {
                    Instantiate(statue, newFloor.transform.position + new Vector3(0, 2.75f, 0), Quaternion.Euler(0, Random.Range(0, 360), 0));
                }
                else
                {
                    Instantiate(crate, newFloor.transform.position + new Vector3(0, 3, 0), Quaternion.identity);
                }
            }

            FloorOverseer.instance.floorPlan.Add(newFloor.position);
            Debug.Log("Spawned Floor!");
        }
        else
        {
            Debug.Log("Already Floor There!");
        }

        float nextMoveDir = Random.value;

        if (nextMoveDir > roomStyle)
        {
            if (Random.value < 0.25f) { transform.Rotate(0, -90, 0); }
            else { transform.Rotate(0, 90, 0); }
        }
        transform.position += transform.forward * moveDistance;
	}
    
    void dfsFloorGeneration(Vector3 startingPos)
    {
        floorList.Clear();
        posWeLookedAt.Clear();
        Vector3 current = transform.position;

        posWeLookedAt.Push(current);
        int counter = 0;
        while(counter < 500)
        {
            current = posWeLookedAt.Pop();
        }
    }
}
