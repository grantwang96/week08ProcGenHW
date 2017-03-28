using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class gameManager : MonoBehaviour {

    public static gameManager instance;

    public int maxTiles;
    public float roomStyles;

    public Slider maxTileSlider;
    public Slider roomStylesSlider;
    public Text maxTilesText;
    public Text roomStylesText;

    public FloorOverseer leOverseer;
    public FloorSpawner leFloorSpawner;
    public Button playButton;

    void Start()
    {
        instance = this;
        updateMaxTiles();
        updateRoomStyle();
    }

    public void updateMaxTiles()
    {
        maxTiles = (int)maxTileSlider.value;
        maxTilesText.GetComponent<Text>().text = maxTiles.ToString() + " Max Tiles";
    }

    public void updateRoomStyle()
    {
        roomStyles = roomStylesSlider.value;
    }

    public void generateRoom()
    {
        FloorOverseer newFloorOverseer = Instantiate(leOverseer, new Vector3(0, 0, 0), Quaternion.identity);
        newFloorOverseer.maxSize = maxTiles;
        FloorSpawner newFloorSpawner = Instantiate(leFloorSpawner, new Vector3(0, 0, 0), Quaternion.identity);
        newFloorSpawner.roomStyle = roomStyles;
        newFloorSpawner.canSpawnMoreFS = true;
        newFloorOverseer.pathMakers.Add(newFloorSpawner.transform);
        playButton.gameObject.SetActive(false);
        maxTileSlider.gameObject.SetActive(false);
        roomStylesSlider.gameObject.SetActive(false);
        maxTilesText.gameObject.SetActive(false);
        roomStylesText.gameObject.SetActive(false);
    }
}
