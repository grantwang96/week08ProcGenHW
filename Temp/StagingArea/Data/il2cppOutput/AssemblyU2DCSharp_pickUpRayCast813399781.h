#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// pickUpRayCast
struct  pickUpRayCast_t813399781  : public MonoBehaviour_t1158329972
{
public:
	// System.Single pickUpRayCast::pickUpDistance
	float ___pickUpDistance_2;
	// UnityEngine.GameObject pickUpRayCast::currentlyHeld
	GameObject_t1756533147 * ___currentlyHeld_3;
	// System.Boolean pickUpRayCast::dropping
	bool ___dropping_4;
	// UnityEngine.Vector3 pickUpRayCast::localPos
	Vector3_t2243707580  ___localPos_5;
	// System.Single pickUpRayCast::distanceFromPlayer
	float ___distanceFromPlayer_6;

public:
	inline static int32_t get_offset_of_pickUpDistance_2() { return static_cast<int32_t>(offsetof(pickUpRayCast_t813399781, ___pickUpDistance_2)); }
	inline float get_pickUpDistance_2() const { return ___pickUpDistance_2; }
	inline float* get_address_of_pickUpDistance_2() { return &___pickUpDistance_2; }
	inline void set_pickUpDistance_2(float value)
	{
		___pickUpDistance_2 = value;
	}

	inline static int32_t get_offset_of_currentlyHeld_3() { return static_cast<int32_t>(offsetof(pickUpRayCast_t813399781, ___currentlyHeld_3)); }
	inline GameObject_t1756533147 * get_currentlyHeld_3() const { return ___currentlyHeld_3; }
	inline GameObject_t1756533147 ** get_address_of_currentlyHeld_3() { return &___currentlyHeld_3; }
	inline void set_currentlyHeld_3(GameObject_t1756533147 * value)
	{
		___currentlyHeld_3 = value;
		Il2CppCodeGenWriteBarrier(&___currentlyHeld_3, value);
	}

	inline static int32_t get_offset_of_dropping_4() { return static_cast<int32_t>(offsetof(pickUpRayCast_t813399781, ___dropping_4)); }
	inline bool get_dropping_4() const { return ___dropping_4; }
	inline bool* get_address_of_dropping_4() { return &___dropping_4; }
	inline void set_dropping_4(bool value)
	{
		___dropping_4 = value;
	}

	inline static int32_t get_offset_of_localPos_5() { return static_cast<int32_t>(offsetof(pickUpRayCast_t813399781, ___localPos_5)); }
	inline Vector3_t2243707580  get_localPos_5() const { return ___localPos_5; }
	inline Vector3_t2243707580 * get_address_of_localPos_5() { return &___localPos_5; }
	inline void set_localPos_5(Vector3_t2243707580  value)
	{
		___localPos_5 = value;
	}

	inline static int32_t get_offset_of_distanceFromPlayer_6() { return static_cast<int32_t>(offsetof(pickUpRayCast_t813399781, ___distanceFromPlayer_6)); }
	inline float get_distanceFromPlayer_6() const { return ___distanceFromPlayer_6; }
	inline float* get_address_of_distanceFromPlayer_6() { return &___distanceFromPlayer_6; }
	inline void set_distanceFromPlayer_6(float value)
	{
		___distanceFromPlayer_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
