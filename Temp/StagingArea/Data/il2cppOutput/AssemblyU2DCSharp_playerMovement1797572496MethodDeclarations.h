#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// playerMovement
struct playerMovement_t1797572496;
// UnityEngine.ControllerColliderHit
struct ControllerColliderHit_t4070855101;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_ControllerColliderHit4070855101.h"

// System.Void playerMovement::.ctor()
extern "C"  void playerMovement__ctor_m521735931 (playerMovement_t1797572496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void playerMovement::Start()
extern "C"  void playerMovement_Start_m479329551 (playerMovement_t1797572496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void playerMovement::Update()
extern "C"  void playerMovement_Update_m276026098 (playerMovement_t1797572496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void playerMovement::FixedUpdate()
extern "C"  void playerMovement_FixedUpdate_m3702006244 (playerMovement_t1797572496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single playerMovement::jumpCalculator()
extern "C"  float playerMovement_jumpCalculator_m876551031 (playerMovement_t1797572496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single playerMovement::playerGravity()
extern "C"  float playerMovement_playerGravity_m989422688 (playerMovement_t1797572496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void playerMovement::OnControllerColliderHit(UnityEngine.ControllerColliderHit)
extern "C"  void playerMovement_OnControllerColliderHit_m2584076057 (playerMovement_t1797572496 * __this, ControllerColliderHit_t4070855101 * ___coll0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
