#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// FloorOverseer
struct FloorOverseer_t1423935705;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t1612828712;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t2644239190;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FloorOverseer
struct  FloorOverseer_t1423935705  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Vector3> FloorOverseer::floorPlan
	List_1_t1612828712 * ___floorPlan_3;
	// System.Collections.Generic.List`1<UnityEngine.Transform> FloorOverseer::pathMakers
	List_1_t2644239190 * ___pathMakers_4;
	// System.Boolean FloorOverseer::spawningFloors
	bool ___spawningFloors_5;
	// System.Boolean FloorOverseer::attachingCamera
	bool ___attachingCamera_6;
	// UnityEngine.GameObject FloorOverseer::player
	GameObject_t1756533147 * ___player_7;
	// UnityEngine.GameObject FloorOverseer::lePlayer
	GameObject_t1756533147 * ___lePlayer_8;
	// System.Int32 FloorOverseer::maxSize
	int32_t ___maxSize_9;

public:
	inline static int32_t get_offset_of_floorPlan_3() { return static_cast<int32_t>(offsetof(FloorOverseer_t1423935705, ___floorPlan_3)); }
	inline List_1_t1612828712 * get_floorPlan_3() const { return ___floorPlan_3; }
	inline List_1_t1612828712 ** get_address_of_floorPlan_3() { return &___floorPlan_3; }
	inline void set_floorPlan_3(List_1_t1612828712 * value)
	{
		___floorPlan_3 = value;
		Il2CppCodeGenWriteBarrier(&___floorPlan_3, value);
	}

	inline static int32_t get_offset_of_pathMakers_4() { return static_cast<int32_t>(offsetof(FloorOverseer_t1423935705, ___pathMakers_4)); }
	inline List_1_t2644239190 * get_pathMakers_4() const { return ___pathMakers_4; }
	inline List_1_t2644239190 ** get_address_of_pathMakers_4() { return &___pathMakers_4; }
	inline void set_pathMakers_4(List_1_t2644239190 * value)
	{
		___pathMakers_4 = value;
		Il2CppCodeGenWriteBarrier(&___pathMakers_4, value);
	}

	inline static int32_t get_offset_of_spawningFloors_5() { return static_cast<int32_t>(offsetof(FloorOverseer_t1423935705, ___spawningFloors_5)); }
	inline bool get_spawningFloors_5() const { return ___spawningFloors_5; }
	inline bool* get_address_of_spawningFloors_5() { return &___spawningFloors_5; }
	inline void set_spawningFloors_5(bool value)
	{
		___spawningFloors_5 = value;
	}

	inline static int32_t get_offset_of_attachingCamera_6() { return static_cast<int32_t>(offsetof(FloorOverseer_t1423935705, ___attachingCamera_6)); }
	inline bool get_attachingCamera_6() const { return ___attachingCamera_6; }
	inline bool* get_address_of_attachingCamera_6() { return &___attachingCamera_6; }
	inline void set_attachingCamera_6(bool value)
	{
		___attachingCamera_6 = value;
	}

	inline static int32_t get_offset_of_player_7() { return static_cast<int32_t>(offsetof(FloorOverseer_t1423935705, ___player_7)); }
	inline GameObject_t1756533147 * get_player_7() const { return ___player_7; }
	inline GameObject_t1756533147 ** get_address_of_player_7() { return &___player_7; }
	inline void set_player_7(GameObject_t1756533147 * value)
	{
		___player_7 = value;
		Il2CppCodeGenWriteBarrier(&___player_7, value);
	}

	inline static int32_t get_offset_of_lePlayer_8() { return static_cast<int32_t>(offsetof(FloorOverseer_t1423935705, ___lePlayer_8)); }
	inline GameObject_t1756533147 * get_lePlayer_8() const { return ___lePlayer_8; }
	inline GameObject_t1756533147 ** get_address_of_lePlayer_8() { return &___lePlayer_8; }
	inline void set_lePlayer_8(GameObject_t1756533147 * value)
	{
		___lePlayer_8 = value;
		Il2CppCodeGenWriteBarrier(&___lePlayer_8, value);
	}

	inline static int32_t get_offset_of_maxSize_9() { return static_cast<int32_t>(offsetof(FloorOverseer_t1423935705, ___maxSize_9)); }
	inline int32_t get_maxSize_9() const { return ___maxSize_9; }
	inline int32_t* get_address_of_maxSize_9() { return &___maxSize_9; }
	inline void set_maxSize_9(int32_t value)
	{
		___maxSize_9 = value;
	}
};

struct FloorOverseer_t1423935705_StaticFields
{
public:
	// FloorOverseer FloorOverseer::instance
	FloorOverseer_t1423935705 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(FloorOverseer_t1423935705_StaticFields, ___instance_2)); }
	inline FloorOverseer_t1423935705 * get_instance_2() const { return ___instance_2; }
	inline FloorOverseer_t1423935705 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(FloorOverseer_t1423935705 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
