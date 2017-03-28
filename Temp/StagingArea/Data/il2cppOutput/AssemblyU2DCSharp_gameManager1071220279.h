#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// gameManager
struct gameManager_t1071220279;
// UnityEngine.UI.Slider
struct Slider_t297367283;
// UnityEngine.UI.Text
struct Text_t356221433;
// FloorOverseer
struct FloorOverseer_t1423935705;
// FloorSpawner
struct FloorSpawner_t1927986702;
// UnityEngine.UI.Button
struct Button_t2872111280;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// gameManager
struct  gameManager_t1071220279  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 gameManager::maxTiles
	int32_t ___maxTiles_3;
	// System.Single gameManager::roomStyles
	float ___roomStyles_4;
	// UnityEngine.UI.Slider gameManager::maxTileSlider
	Slider_t297367283 * ___maxTileSlider_5;
	// UnityEngine.UI.Slider gameManager::roomStylesSlider
	Slider_t297367283 * ___roomStylesSlider_6;
	// UnityEngine.UI.Text gameManager::maxTilesText
	Text_t356221433 * ___maxTilesText_7;
	// UnityEngine.UI.Text gameManager::roomStylesText
	Text_t356221433 * ___roomStylesText_8;
	// FloorOverseer gameManager::leOverseer
	FloorOverseer_t1423935705 * ___leOverseer_9;
	// FloorSpawner gameManager::leFloorSpawner
	FloorSpawner_t1927986702 * ___leFloorSpawner_10;
	// UnityEngine.UI.Button gameManager::playButton
	Button_t2872111280 * ___playButton_11;

public:
	inline static int32_t get_offset_of_maxTiles_3() { return static_cast<int32_t>(offsetof(gameManager_t1071220279, ___maxTiles_3)); }
	inline int32_t get_maxTiles_3() const { return ___maxTiles_3; }
	inline int32_t* get_address_of_maxTiles_3() { return &___maxTiles_3; }
	inline void set_maxTiles_3(int32_t value)
	{
		___maxTiles_3 = value;
	}

	inline static int32_t get_offset_of_roomStyles_4() { return static_cast<int32_t>(offsetof(gameManager_t1071220279, ___roomStyles_4)); }
	inline float get_roomStyles_4() const { return ___roomStyles_4; }
	inline float* get_address_of_roomStyles_4() { return &___roomStyles_4; }
	inline void set_roomStyles_4(float value)
	{
		___roomStyles_4 = value;
	}

	inline static int32_t get_offset_of_maxTileSlider_5() { return static_cast<int32_t>(offsetof(gameManager_t1071220279, ___maxTileSlider_5)); }
	inline Slider_t297367283 * get_maxTileSlider_5() const { return ___maxTileSlider_5; }
	inline Slider_t297367283 ** get_address_of_maxTileSlider_5() { return &___maxTileSlider_5; }
	inline void set_maxTileSlider_5(Slider_t297367283 * value)
	{
		___maxTileSlider_5 = value;
		Il2CppCodeGenWriteBarrier(&___maxTileSlider_5, value);
	}

	inline static int32_t get_offset_of_roomStylesSlider_6() { return static_cast<int32_t>(offsetof(gameManager_t1071220279, ___roomStylesSlider_6)); }
	inline Slider_t297367283 * get_roomStylesSlider_6() const { return ___roomStylesSlider_6; }
	inline Slider_t297367283 ** get_address_of_roomStylesSlider_6() { return &___roomStylesSlider_6; }
	inline void set_roomStylesSlider_6(Slider_t297367283 * value)
	{
		___roomStylesSlider_6 = value;
		Il2CppCodeGenWriteBarrier(&___roomStylesSlider_6, value);
	}

	inline static int32_t get_offset_of_maxTilesText_7() { return static_cast<int32_t>(offsetof(gameManager_t1071220279, ___maxTilesText_7)); }
	inline Text_t356221433 * get_maxTilesText_7() const { return ___maxTilesText_7; }
	inline Text_t356221433 ** get_address_of_maxTilesText_7() { return &___maxTilesText_7; }
	inline void set_maxTilesText_7(Text_t356221433 * value)
	{
		___maxTilesText_7 = value;
		Il2CppCodeGenWriteBarrier(&___maxTilesText_7, value);
	}

	inline static int32_t get_offset_of_roomStylesText_8() { return static_cast<int32_t>(offsetof(gameManager_t1071220279, ___roomStylesText_8)); }
	inline Text_t356221433 * get_roomStylesText_8() const { return ___roomStylesText_8; }
	inline Text_t356221433 ** get_address_of_roomStylesText_8() { return &___roomStylesText_8; }
	inline void set_roomStylesText_8(Text_t356221433 * value)
	{
		___roomStylesText_8 = value;
		Il2CppCodeGenWriteBarrier(&___roomStylesText_8, value);
	}

	inline static int32_t get_offset_of_leOverseer_9() { return static_cast<int32_t>(offsetof(gameManager_t1071220279, ___leOverseer_9)); }
	inline FloorOverseer_t1423935705 * get_leOverseer_9() const { return ___leOverseer_9; }
	inline FloorOverseer_t1423935705 ** get_address_of_leOverseer_9() { return &___leOverseer_9; }
	inline void set_leOverseer_9(FloorOverseer_t1423935705 * value)
	{
		___leOverseer_9 = value;
		Il2CppCodeGenWriteBarrier(&___leOverseer_9, value);
	}

	inline static int32_t get_offset_of_leFloorSpawner_10() { return static_cast<int32_t>(offsetof(gameManager_t1071220279, ___leFloorSpawner_10)); }
	inline FloorSpawner_t1927986702 * get_leFloorSpawner_10() const { return ___leFloorSpawner_10; }
	inline FloorSpawner_t1927986702 ** get_address_of_leFloorSpawner_10() { return &___leFloorSpawner_10; }
	inline void set_leFloorSpawner_10(FloorSpawner_t1927986702 * value)
	{
		___leFloorSpawner_10 = value;
		Il2CppCodeGenWriteBarrier(&___leFloorSpawner_10, value);
	}

	inline static int32_t get_offset_of_playButton_11() { return static_cast<int32_t>(offsetof(gameManager_t1071220279, ___playButton_11)); }
	inline Button_t2872111280 * get_playButton_11() const { return ___playButton_11; }
	inline Button_t2872111280 ** get_address_of_playButton_11() { return &___playButton_11; }
	inline void set_playButton_11(Button_t2872111280 * value)
	{
		___playButton_11 = value;
		Il2CppCodeGenWriteBarrier(&___playButton_11, value);
	}
};

struct gameManager_t1071220279_StaticFields
{
public:
	// gameManager gameManager::instance
	gameManager_t1071220279 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(gameManager_t1071220279_StaticFields, ___instance_2)); }
	inline gameManager_t1071220279 * get_instance_2() const { return ___instance_2; }
	inline gameManager_t1071220279 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(gameManager_t1071220279 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
