// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALSTUDY_MyCharacter_generated_h
#error "MyCharacter.generated.h already included, missing '#pragma once' in MyCharacter.h"
#endif
#define UNREALSTUDY_MyCharacter_generated_h

#define UnrealStudy_Source_UnrealStudy_MyCharacter_h_12_SPARSE_DATA
#define UnrealStudy_Source_UnrealStudy_MyCharacter_h_12_RPC_WRAPPERS
#define UnrealStudy_Source_UnrealStudy_MyCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define UnrealStudy_Source_UnrealStudy_MyCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyCharacter(); \
	friend struct Z_Construct_UClass_AMyCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealStudy"), NO_API) \
	DECLARE_SERIALIZER(AMyCharacter)


#define UnrealStudy_Source_UnrealStudy_MyCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMyCharacter(); \
	friend struct Z_Construct_UClass_AMyCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealStudy"), NO_API) \
	DECLARE_SERIALIZER(AMyCharacter)


#define UnrealStudy_Source_UnrealStudy_MyCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyCharacter(AMyCharacter&&); \
	NO_API AMyCharacter(const AMyCharacter&); \
public:


#define UnrealStudy_Source_UnrealStudy_MyCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyCharacter(AMyCharacter&&); \
	NO_API AMyCharacter(const AMyCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyCharacter)


#define UnrealStudy_Source_UnrealStudy_MyCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(AMyCharacter, SpringArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(AMyCharacter, Camera); } \
	FORCEINLINE static uint32 __PPO__HP() { return STRUCT_OFFSET(AMyCharacter, HP); } \
	FORCEINLINE static uint32 __PPO__IsAttacking() { return STRUCT_OFFSET(AMyCharacter, IsAttacking); }


#define UnrealStudy_Source_UnrealStudy_MyCharacter_h_9_PROLOG
#define UnrealStudy_Source_UnrealStudy_MyCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealStudy_Source_UnrealStudy_MyCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	UnrealStudy_Source_UnrealStudy_MyCharacter_h_12_SPARSE_DATA \
	UnrealStudy_Source_UnrealStudy_MyCharacter_h_12_RPC_WRAPPERS \
	UnrealStudy_Source_UnrealStudy_MyCharacter_h_12_INCLASS \
	UnrealStudy_Source_UnrealStudy_MyCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealStudy_Source_UnrealStudy_MyCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealStudy_Source_UnrealStudy_MyCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	UnrealStudy_Source_UnrealStudy_MyCharacter_h_12_SPARSE_DATA \
	UnrealStudy_Source_UnrealStudy_MyCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealStudy_Source_UnrealStudy_MyCharacter_h_12_INCLASS_NO_PURE_DECLS \
	UnrealStudy_Source_UnrealStudy_MyCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALSTUDY_API UClass* StaticClass<class AMyCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealStudy_Source_UnrealStudy_MyCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
