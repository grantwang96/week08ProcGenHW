#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t1612828712;
// System.Collections.Generic.Stack`1<UnityEngine.Vector3>
struct Stack_1_t3331435734;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FloorSpawner
struct  FloorSpawner_t1927986702  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Vector3> FloorSpawner::floorList
	List_1_t1612828712 * ___floorList_2;
	// System.Int32 FloorSpawner::moveDistance
	int32_t ___moveDistance_3;
	// UnityEngine.Vector3 FloorSpawner::downOffset
	Vector3_t2243707580  ___downOffset_4;
	// System.Single FloorSpawner::roomStyle
	float ___roomStyle_5;
	// System.Single FloorSpawner::objectChance
	float ___objectChance_6;
	// System.Collections.Generic.Stack`1<UnityEngine.Vector3> FloorSpawner::posWeLookedAt
	Stack_1_t3331435734 * ___posWeLookedAt_7;
	// UnityEngine.Transform FloorSpawner::floor
	Transform_t3275118058 * ___floor_8;
	// UnityEngine.Transform FloorSpawner::floorSpawner
	Transform_t3275118058 * ___floorSpawner_9;
	// UnityEngine.Transform FloorSpawner::statue
	Transform_t3275118058 * ___statue_10;
	// UnityEngine.Transform FloorSpawner::crate
	Transform_t3275118058 * ___crate_11;
	// System.Boolean FloorSpawner::canSpawnMoreFS
	bool ___canSpawnMoreFS_12;
	// System.Boolean FloorSpawner::active
	bool ___active_13;

public:
	inline static int32_t get_offset_of_floorList_2() { return static_cast<int32_t>(offsetof(FloorSpawner_t1927986702, ___floorList_2)); }
	inline List_1_t1612828712 * get_floorList_2() const { return ___floorList_2; }
	inline List_1_t1612828712 ** get_address_of_floorList_2() { return &___floorList_2; }
	inline void set_floorList_2(List_1_t1612828712 * value)
	{
		___floorList_2 = value;
		Il2CppCodeGenWriteBarrier(&___floorList_2, value);
	}

	inline static int32_t get_offset_of_moveDistance_3() { return static_cast<int32_t>(offsetof(FloorSpawner_t1927986702, ___moveDistance_3)); }
	inline int32_t get_moveDistance_3() const { return ___moveDistance_3; }
	inline int32_t* get_address_of_moveDistance_3() { return &___moveDistance_3; }
	inline void set_moveDistance_3(int32_t value)
	{
		___moveDistance_3 = value;
	}

	inline static int32_t get_offset_of_downOffset_4() { return static_cast<int32_t>(offsetof(FloorSpawner_t1927986702, ___downOffset_4)); }
	inline Vector3_t2243707580  get_downOffset_4() const { return ___downOffset_4; }
	inline Vector3_t2243707580 * get_address_of_downOffset_4() { return &___downOffset_4; }
	inline void set_downOffset_4(Vector3_t2243707580  value)
	{
		___downOffset_4 = value;
	}

	inline static int32_t get_offset_of_roomStyle_5() { return static_cast<int32_t>(offsetof(FloorSpawner_t1927986702, ___roomStyle_5)); }
	inline float get_roomStyle_5() const { return ___roomStyle_5; }
	inline float* get_address_of_roomStyle_5() { return &___roomStyle_5; }
	inline void set_roomStyle_5(float value)
	{
		___roomStyle_5 = value;
	}

	inline static int32_t get_offset_of_objectChance_6() { return static_cast<int32_t>(offsetof(FloorSpawner_t1927986702, ___objectChance_6)); }
	inline float get_objectChance_6() const { return ___objectChance_6; }
	inline float* get_address_of_objectChance_6() { return &___objectChance_6; }
	inline void set_objectChance_6(float value)
	{
		___objectChance_6 = value;
	}

	inline static int32_t get_offset_of_posWeLookedAt_7() { return static_cast<int32_t>(offsetof(FloorSpawner_t1927986702, ___posWeLookedAt_7)); }
	inline Stack_1_t3331435734 * get_posWeLookedAt_7() const { return ___posWeLookedAt_7; }
	inline Stack_1_t3331435734 ** get_address_of_posWeLookedAt_7() { return &___posWeLookedAt_7; }
	inline void set_posWeLookedAt_7(Stack_1_t3331435734 * value)
	{
		___posWeLookedAt_7 = value;
		Il2CppCodeGenWriteBarrier(&___posWeLookedAt_7, value);
	}

	inline static int32_t get_offset_of_floor_8() { return static_cast<int32_t>(offsetof(FloorSpawner_t1927986702, ___floor_8)); }
	inline Transform_t3275118058 * get_floor_8() const { return ___floor_8; }
	inline Transform_t3275118058 ** get_address_of_floor_8() { return &___floor_8; }
	inline void set_floor_8(Transform_t3275118058 * value)
	{
		___floor_8 = value;
		Il2CppCodeGenWriteBarrier(&___floor_8, value);
	}

	inline static int32_t get_offset_of_floorSpawner_9() { return static_cast<int32_t>(offsetof(FloorSpawner_t1927986702, ___floorSpawner_9)); }
	inline Transform_t3275118058 * get_floorSpawner_9() const { return ___floorSpawner_9; }
	inline Transform_t3275118058 ** get_address_of_floorSpawner_9() { return &___floorSpawner_9; }
	inline void set_floorSpawner_9(Transform_t3275118058 * value)
	{
		___floorSpawner_9 = value;
		Il2CppCodeGenWriteBarrier(&___floorSpawner_9, value);
	}

	inline static int32_t get_offset_of_statue_10() { return static_cast<int32_t>(offsetof(FloorSpawner_t1927986702, ___statue_10)); }
	inline Transform_t3275118058 * get_statue_10() const { return ___statue_10; }
	inline Transform_t3275118058 ** get_address_of_statue_10() { return &___statue_10; }
	inline void set_statue_10(Transform_t3275118058 * value)
	{
		___statue_10 = value;
		Il2CppCodeGenWriteBarrier(&___statue_10, value);
	}

	inline static int32_t get_offset_of_crate_11() { return static_cast<int32_t>(offsetof(FloorSpawner_t1927986702, ___crate_11)); }
	inline Transform_t3275118058 * get_crate_11() const { return ___crate_11; }
	inline Transform_t3275118058 ** get_address_of_crate_11() { return &___crate_11; }
	inline void set_crate_11(Transform_t3275118058 * value)
	{
		___crate_11 = value;
		Il2CppCodeGenWriteBarrier(&___crate_11, value);
	}

	inline static int32_t get_offset_of_canSpawnMoreFS_12() { return static_cast<int32_t>(offsetof(FloorSpawner_t1927986702, ___canSpawnMoreFS_12)); }
	inline bool get_canSpawnMoreFS_12() const { return ___canSpawnMoreFS_12; }
	inline bool* get_address_of_canSpawnMoreFS_12() { return &___canSpawnMoreFS_12; }
	inline void set_canSpawnMoreFS_12(bool value)
	{
		___canSpawnMoreFS_12 = value;
	}

	inline static int32_t get_offset_of_active_13() { return static_cast<int32_t>(offsetof(FloorSpawner_t1927986702, ___active_13)); }
	inline bool get_active_13() const { return ___active_13; }
	inline bool* get_address_of_active_13() { return &___active_13; }
	inline void set_active_13(bool value)
	{
		___active_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
