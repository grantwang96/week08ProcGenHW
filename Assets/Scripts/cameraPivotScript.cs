﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class cameraPivotScript : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
        transform.Rotate(0f, 10f * Time.deltaTime, 0f);
	}
}
