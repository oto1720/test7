// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "test7WeaponComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class Atest7Character;
#ifdef TEST7_test7WeaponComponent_generated_h
#error "test7WeaponComponent.generated.h already included, missing '#pragma once' in test7WeaponComponent.h"
#endif
#define TEST7_test7WeaponComponent_generated_h

#define FID_Users_kotar_Downloads_GitHub_test7_test7_Source_test7_test7WeaponComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEndPlay); \
	DECLARE_FUNCTION(execFire); \
	DECLARE_FUNCTION(execAttachWeapon);


#define FID_Users_kotar_Downloads_GitHub_test7_test7_Source_test7_test7WeaponComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUtest7WeaponComponent(); \
	friend struct Z_Construct_UClass_Utest7WeaponComponent_Statics; \
public: \
	DECLARE_CLASS(Utest7WeaponComponent, USkeletalMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/test7"), NO_API) \
	DECLARE_SERIALIZER(Utest7WeaponComponent)


#define FID_Users_kotar_Downloads_GitHub_test7_test7_Source_test7_test7WeaponComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	Utest7WeaponComponent(Utest7WeaponComponent&&); \
	Utest7WeaponComponent(const Utest7WeaponComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Utest7WeaponComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Utest7WeaponComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(Utest7WeaponComponent) \
	NO_API virtual ~Utest7WeaponComponent();


#define FID_Users_kotar_Downloads_GitHub_test7_test7_Source_test7_test7WeaponComponent_h_11_PROLOG
#define FID_Users_kotar_Downloads_GitHub_test7_test7_Source_test7_test7WeaponComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_kotar_Downloads_GitHub_test7_test7_Source_test7_test7WeaponComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_kotar_Downloads_GitHub_test7_test7_Source_test7_test7WeaponComponent_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_kotar_Downloads_GitHub_test7_test7_Source_test7_test7WeaponComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEST7_API UClass* StaticClass<class Utest7WeaponComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_kotar_Downloads_GitHub_test7_test7_Source_test7_test7WeaponComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
