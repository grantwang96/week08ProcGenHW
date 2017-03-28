#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.CharacterController
struct CharacterController_t4094781467;
// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// playerMovement
struct  playerMovement_t1797572496  : public MonoBehaviour_t1158329972
{
public:
	// System.Single playerMovement::moveSpeed
	float ___moveSpeed_2;
	// System.Single playerMovement::maxSpeed
	float ___maxSpeed_3;
	// System.Single playerMovement::sprintMult
	float ___sprintMult_4;
	// System.Single playerMovement::jumpPower
	float ___jumpPower_5;
	// System.Single playerMovement::stoppingPower
	float ___stoppingPower_6;
	// System.Single playerMovement::horizontal
	float ___horizontal_7;
	// System.Single playerMovement::vertical
	float ___vertical_8;
	// System.Single playerMovement::jumpVelocity
	float ___jumpVelocity_9;
	// System.Single playerMovement::fallVelocity
	float ___fallVelocity_10;
	// System.Single playerMovement::gravity
	float ___gravity_11;
	// System.Single playerMovement::pushForce
	float ___pushForce_12;
	// UnityEngine.CharacterController playerMovement::playerCharCon
	CharacterController_t4094781467 * ___playerCharCon_13;
	// UnityEngine.Rigidbody playerMovement::rbody
	Rigidbody_t4233889191 * ___rbody_14;
	// UnityEngine.Vector3 playerMovement::inputVector
	Vector3_t2243707580  ___inputVector_15;
	// System.Boolean playerMovement::canJump
	bool ___canJump_16;
	// System.Boolean playerMovement::jumping
	bool ___jumping_17;

public:
	inline static int32_t get_offset_of_moveSpeed_2() { return static_cast<int32_t>(offsetof(playerMovement_t1797572496, ___moveSpeed_2)); }
	inline float get_moveSpeed_2() const { return ___moveSpeed_2; }
	inline float* get_address_of_moveSpeed_2() { return &___moveSpeed_2; }
	inline void set_moveSpeed_2(float value)
	{
		___moveSpeed_2 = value;
	}

	inline static int32_t get_offset_of_maxSpeed_3() { return static_cast<int32_t>(offsetof(playerMovement_t1797572496, ___maxSpeed_3)); }
	inline float get_maxSpeed_3() const { return ___maxSpeed_3; }
	inline float* get_address_of_maxSpeed_3() { return &___maxSpeed_3; }
	inline void set_maxSpeed_3(float value)
	{
		___maxSpeed_3 = value;
	}

	inline static int32_t get_offset_of_sprintMult_4() { return static_cast<int32_t>(offsetof(playerMovement_t1797572496, ___sprintMult_4)); }
	inline float get_sprintMult_4() const { return ___sprintMult_4; }
	inline float* get_address_of_sprintMult_4() { return &___sprintMult_4; }
	inline void set_sprintMult_4(float value)
	{
		___sprintMult_4 = value;
	}

	inline static int32_t get_offset_of_jumpPower_5() { return static_cast<int32_t>(offsetof(playerMovement_t1797572496, ___jumpPower_5)); }
	inline float get_jumpPower_5() const { return ___jumpPower_5; }
	inline float* get_address_of_jumpPower_5() { return &___jumpPower_5; }
	inline void set_jumpPower_5(float value)
	{
		___jumpPower_5 = value;
	}

	inline static int32_t get_offset_of_stoppingPower_6() { return static_cast<int32_t>(offsetof(playerMovement_t1797572496, ___stoppingPower_6)); }
	inline float get_stoppingPower_6() const { return ___stoppingPower_6; }
	inline float* get_address_of_stoppingPower_6() { return &___stoppingPower_6; }
	inline void set_stoppingPower_6(float value)
	{
		___stoppingPower_6 = value;
	}

	inline static int32_t get_offset_of_horizontal_7() { return static_cast<int32_t>(offsetof(playerMovement_t1797572496, ___horizontal_7)); }
	inline float get_horizontal_7() const { return ___horizontal_7; }
	inline float* get_address_of_horizontal_7() { return &___horizontal_7; }
	inline void set_horizontal_7(float value)
	{
		___horizontal_7 = value;
	}

	inline static int32_t get_offset_of_vertical_8() { return static_cast<int32_t>(offsetof(playerMovement_t1797572496, ___vertical_8)); }
	inline float get_vertical_8() const { return ___vertical_8; }
	inline float* get_address_of_vertical_8() { return &___vertical_8; }
	inline void set_vertical_8(float value)
	{
		___vertical_8 = value;
	}

	inline static int32_t get_offset_of_jumpVelocity_9() { return static_cast<int32_t>(offsetof(playerMovement_t1797572496, ___jumpVelocity_9)); }
	inline float get_jumpVelocity_9() const { return ___jumpVelocity_9; }
	inline float* get_address_of_jumpVelocity_9() { return &___jumpVelocity_9; }
	inline void set_jumpVelocity_9(float value)
	{
		___jumpVelocity_9 = value;
	}

	inline static int32_t get_offset_of_fallVelocity_10() { return static_cast<int32_t>(offsetof(playerMovement_t1797572496, ___fallVelocity_10)); }
	inline float get_fallVelocity_10() const { return ___fallVelocity_10; }
	inline float* get_address_of_fallVelocity_10() { return &___fallVelocity_10; }
	inline void set_fallVelocity_10(float value)
	{
		___fallVelocity_10 = value;
	}

	inline static int32_t get_offset_of_gravity_11() { return static_cast<int32_t>(offsetof(playerMovement_t1797572496, ___gravity_11)); }
	inline float get_gravity_11() const { return ___gravity_11; }
	inline float* get_address_of_gravity_11() { return &___gravity_11; }
	inline void set_gravity_11(float value)
	{
		___gravity_11 = value;
	}

	inline static int32_t get_offset_of_pushForce_12() { return static_cast<int32_t>(offsetof(playerMovement_t1797572496, ___pushForce_12)); }
	inline float get_pushForce_12() const { return ___pushForce_12; }
	inline float* get_address_of_pushForce_12() { return &___pushForce_12; }
	inline void set_pushForce_12(float value)
	{
		___pushForce_12 = value;
	}

	inline static int32_t get_offset_of_playerCharCon_13() { return static_cast<int32_t>(offsetof(playerMovement_t1797572496, ___playerCharCon_13)); }
	inline CharacterController_t4094781467 * get_playerCharCon_13() const { return ___playerCharCon_13; }
	inline CharacterController_t4094781467 ** get_address_of_playerCharCon_13() { return &___playerCharCon_13; }
	inline void set_playerCharCon_13(CharacterController_t4094781467 * value)
	{
		___playerCharCon_13 = value;
		Il2CppCodeGenWriteBarrier(&___playerCharCon_13, value);
	}

	inline static int32_t get_offset_of_rbody_14() { return static_cast<int32_t>(offsetof(playerMovement_t1797572496, ___rbody_14)); }
	inline Rigidbody_t4233889191 * get_rbody_14() const { return ___rbody_14; }
	inline Rigidbody_t4233889191 ** get_address_of_rbody_14() { return &___rbody_14; }
	inline void set_rbody_14(Rigidbody_t4233889191 * value)
	{
		___rbody_14 = value;
		Il2CppCodeGenWriteBarrier(&___rbody_14, value);
	}

	inline static int32_t get_offset_of_inputVector_15() { return static_cast<int32_t>(offsetof(playerMovement_t1797572496, ___inputVector_15)); }
	inline Vector3_t2243707580  get_inputVector_15() const { return ___inputVector_15; }
	inline Vector3_t2243707580 * get_address_of_inputVector_15() { return &___inputVector_15; }
	inline void set_inputVector_15(Vector3_t2243707580  value)
	{
		___inputVector_15 = value;
	}

	inline static int32_t get_offset_of_canJump_16() { return static_cast<int32_t>(offsetof(playerMovement_t1797572496, ___canJump_16)); }
	inline bool get_canJump_16() const { return ___canJump_16; }
	inline bool* get_address_of_canJump_16() { return &___canJump_16; }
	inline void set_canJump_16(bool value)
	{
		___canJump_16 = value;
	}

	inline static int32_t get_offset_of_jumping_17() { return static_cast<int32_t>(offsetof(playerMovement_t1797572496, ___jumping_17)); }
	inline bool get_jumping_17() const { return ___jumping_17; }
	inline bool* get_address_of_jumping_17() { return &___jumping_17; }
	inline void set_jumping_17(bool value)
	{
		___jumping_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
