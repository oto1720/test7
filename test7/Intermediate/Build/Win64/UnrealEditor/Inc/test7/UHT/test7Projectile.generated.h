// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "test7Projectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef TEST7_test7Projectile_generated_h
#error "test7Projectile.generated.h already included, missing '#pragma once' in test7Projectile.h"
#endif
#define TEST7_test7Projectile_generated_h

#define FID_Users_kotar_Downloads_GitHub_test7_test7_Source_test7_test7Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_Users_kotar_Downloads_GitHub_test7_test7_Source_test7_test7Projectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAtest7Projectile(); \
	friend struct Z_Construct_UClass_Atest7Projectile_Statics; \
public: \
	DECLARE_CLASS(Atest7Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/test7"), NO_API) \
	DECLARE_SERIALIZER(Atest7Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Users_kotar_Downloads_GitHub_test7_test7_Source_test7_test7Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	Atest7Projectile(Atest7Projectile&&); \
	Atest7Projectile(const Atest7Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Atest7Projectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Atest7Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(Atest7Projectile) \
	NO_API virtual ~Atest7Projectile();


#define FID_Users_kotar_Downloads_GitHub_test7_test7_Source_test7_test7Projectile_h_12_PROLOG
#define FID_Users_kotar_Downloads_GitHub_test7_test7_Source_test7_test7Projectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_kotar_Downloads_GitHub_test7_test7_Source_test7_test7Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_kotar_Downloads_GitHub_test7_test7_Source_test7_test7Projectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_kotar_Downloads_GitHub_test7_test7_Source_test7_test7Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEST7_API UClass* StaticClass<class Atest7Projectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_kotar_Downloads_GitHub_test7_test7_Source_test7_test7Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
