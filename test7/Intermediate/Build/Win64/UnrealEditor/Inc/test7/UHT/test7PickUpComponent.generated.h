// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "test7PickUpComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class Atest7Character;
class UPrimitiveComponent;
struct FHitResult;
#ifdef TEST7_test7PickUpComponent_generated_h
#error "test7PickUpComponent.generated.h already included, missing '#pragma once' in test7PickUpComponent.h"
#endif
#define TEST7_test7PickUpComponent_generated_h

#define FID_Users_kotar_Downloads_GitHub_test7_test7_Source_test7_test7PickUpComponent_h_12_DELEGATE \
TEST7_API void FOnPickUp_DelegateWrapper(const FMulticastScriptDelegate& OnPickUp, Atest7Character* PickUpCharacter);


#define FID_Users_kotar_Downloads_GitHub_test7_test7_Source_test7_test7PickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnSphereBeginOverlap);


#define FID_Users_kotar_Downloads_GitHub_test7_test7_Source_test7_test7PickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUtest7PickUpComponent(); \
	friend struct Z_Construct_UClass_Utest7PickUpComponent_Statics; \
public: \
	DECLARE_CLASS(Utest7PickUpComponent, USphereComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/test7"), NO_API) \
	DECLARE_SERIALIZER(Utest7PickUpComponent)


#define FID_Users_kotar_Downloads_GitHub_test7_test7_Source_test7_test7PickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	Utest7PickUpComponent(Utest7PickUpComponent&&); \
	Utest7PickUpComponent(const Utest7PickUpComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Utest7PickUpComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Utest7PickUpComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(Utest7PickUpComponent) \
	NO_API virtual ~Utest7PickUpComponent();


#define FID_Users_kotar_Downloads_GitHub_test7_test7_Source_test7_test7PickUpComponent_h_14_PROLOG
#define FID_Users_kotar_Downloads_GitHub_test7_test7_Source_test7_test7PickUpComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_kotar_Downloads_GitHub_test7_test7_Source_test7_test7PickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_kotar_Downloads_GitHub_test7_test7_Source_test7_test7PickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_kotar_Downloads_GitHub_test7_test7_Source_test7_test7PickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEST7_API UClass* StaticClass<class Utest7PickUpComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_kotar_Downloads_GitHub_test7_test7_Source_test7_test7PickUpComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
