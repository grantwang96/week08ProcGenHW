﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class playerMovement : MonoBehaviour {

    float moveSpeed = 6f;
    float maxSpeed = 8f;
    float sprintMult = 1.25f;
    float jumpPower = 21f; // Jump power
    float stoppingPower = 10f;
    float horizontal;
    float vertical;
    float jumpVelocity;
    float fallVelocity;
    float gravity = -2.5f;
    float pushForce = 16f;

    CharacterController playerCharCon; // For quick access to player's character controller
    Rigidbody rbody; // For quick access to player's rigidbody
    Vector3 inputVector; //To calculate player's movement based on inputs

    public bool canJump; // To check if playing can jump.
    public bool jumping; // To check if player has commenced jumping for FixedUpdate()

    // Use this for initialization
    void Start () {
        playerCharCon = this.GetComponent<CharacterController>();
        rbody = GetComponent<Rigidbody>();
        jumpVelocity = 0;
        fallVelocity = 0;
    }
	
	// Update is called once per frame
	void Update () {
        //GRAB INPUT FROM DEVICES
        horizontal = Input.GetAxis("Horizontal"); // this is bound to the horizontal axis: A and D (left/right movement)
        vertical = Input.GetAxis("Vertical"); // this is bound to the vertical axis: W and S (up/down movement)
        inputVector = new Vector3(horizontal, 0f, vertical);
        //ROTATING BASED ON MOUSE!
        transform.Rotate(0f, Input.GetAxis("Mouse X") * Time.deltaTime * 150f, 0f); // Turn with mouse movement

        if (Input.GetKey(KeyCode.LeftShift)) { sprintMult = 1.5f; }
        else { sprintMult = 1f; }

        //GETTING PLAYER'S MOVEMENT
        playerCharCon.Move(transform.forward * Time.deltaTime * maxSpeed * vertical * sprintMult); // move along forward facing
        playerCharCon.Move(transform.right * Time.deltaTime * maxSpeed * horizontal * sprintMult); // move along right/left

        //CHECKING FOR JUMP
        canJump = Physics.Raycast(transform.position, Vector3.down, 1.51f);
        if (canJump && Input.GetButtonDown("Jump"))
        {
            jumping = true;
            jumpVelocity = jumpPower;
            fallVelocity = 0f;
            //jumpCalculator();
        }

        Debug.Log(playerCharCon.velocity);
    }

    // For the silly Unity Physics
    void FixedUpdate()
    {
        if (jumping)
        {
            jumpVelocity = jumpCalculator();
            playerCharCon.Move(transform.up * Time.deltaTime * jumpVelocity);
            playerCharCon.Move(vertical * transform.forward * Time.deltaTime * maxSpeed * 2);
            if (jumpVelocity <= 0) { jumping = false; }
        }
        else
        {
            playerGravity();
            // Debug.Log("Fall Velocity: "+fallVelocity);
            playerCharCon.Move(transform.up * Time.deltaTime * fallVelocity); // move the controller down
        }
        //FOR STOPPING
        //if (horizontal == 0 && canJump) { rbody.velocity = new Vector3(0, rbody.velocity.y, rbody.velocity.z); }
        //if (vertical == 0 && canJump) { rbody.velocity = new Vector3(rbody.velocity.x, rbody.velocity.y, 0); }
    }

    float jumpCalculator()
    {
        float jumpResult = jumpVelocity + (Physics.gravity.y * 0.2f);
        // Debug.Log(jumpResult);
        return jumpResult;
    }

    float playerGravity()
    {
        fallVelocity += gravity;
        if (fallVelocity > 10) { fallVelocity = 10; }
        return fallVelocity;
    }

    void OnControllerColliderHit(ControllerColliderHit coll)
    {
        if(coll.collider.attachedRigidbody != null)
        {
            Vector3 pushDir = coll.transform.position - transform.position;
            coll.collider.attachedRigidbody.AddForce(pushDir.normalized * pushForce * sprintMult);
            // Debug.Log(pushDir);
        }
    }
}
