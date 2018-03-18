// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMapCoordinates;
#ifdef CPPTEST_BaseTile_generated_h
#error "BaseTile.generated.h already included, missing '#pragma once' in BaseTile.h"
#endif
#define CPPTEST_BaseTile_generated_h

#define CppTest_4_19_Source_CppTest_BaseTile_h_11_GENERATED_BODY \
	friend CPPTEST_API class UScriptStruct* Z_Construct_UScriptStruct_FMapCoordinates(); \
	CPPTEST_API static class UScriptStruct* StaticStruct();


#define CppTest_4_19_Source_CppTest_BaseTile_h_39_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execgetMapPosition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FMapCoordinates*)Z_Param__Result=P_THIS->getMapPosition(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetMapPosition) \
	{ \
		P_GET_STRUCT_REF(FMapCoordinates,Z_Param_Out_newMapPosition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->setMapPosition(Z_Param_Out_newMapPosition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execallowWestTiling) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->allowWestTiling(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execallowSouthTiling) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->allowSouthTiling(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execallowEastTiling) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->allowEastTiling(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execallowNorthTiling) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->allowNorthTiling(); \
		P_NATIVE_END; \
	}


#define CppTest_4_19_Source_CppTest_BaseTile_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execgetMapPosition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FMapCoordinates*)Z_Param__Result=P_THIS->getMapPosition(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetMapPosition) \
	{ \
		P_GET_STRUCT_REF(FMapCoordinates,Z_Param_Out_newMapPosition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->setMapPosition(Z_Param_Out_newMapPosition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execallowWestTiling) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->allowWestTiling(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execallowSouthTiling) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->allowSouthTiling(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execallowEastTiling) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->allowEastTiling(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execallowNorthTiling) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->allowNorthTiling(); \
		P_NATIVE_END; \
	}


#define CppTest_4_19_Source_CppTest_BaseTile_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseTile(); \
	friend CPPTEST_API class UClass* Z_Construct_UClass_ABaseTile(); \
public: \
	DECLARE_CLASS(ABaseTile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CppTest"), NO_API) \
	DECLARE_SERIALIZER(ABaseTile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define CppTest_4_19_Source_CppTest_BaseTile_h_39_INCLASS \
private: \
	static void StaticRegisterNativesABaseTile(); \
	friend CPPTEST_API class UClass* Z_Construct_UClass_ABaseTile(); \
public: \
	DECLARE_CLASS(ABaseTile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CppTest"), NO_API) \
	DECLARE_SERIALIZER(ABaseTile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define CppTest_4_19_Source_CppTest_BaseTile_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseTile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseTile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseTile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseTile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseTile(ABaseTile&&); \
	NO_API ABaseTile(const ABaseTile&); \
public:


#define CppTest_4_19_Source_CppTest_BaseTile_h_39_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseTile(ABaseTile&&); \
	NO_API ABaseTile(const ABaseTile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseTile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseTile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseTile)


#define CppTest_4_19_Source_CppTest_BaseTile_h_39_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Tile_ID() { return STRUCT_OFFSET(ABaseTile, Tile_ID); }


#define CppTest_4_19_Source_CppTest_BaseTile_h_36_PROLOG
#define CppTest_4_19_Source_CppTest_BaseTile_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CppTest_4_19_Source_CppTest_BaseTile_h_39_PRIVATE_PROPERTY_OFFSET \
	CppTest_4_19_Source_CppTest_BaseTile_h_39_RPC_WRAPPERS \
	CppTest_4_19_Source_CppTest_BaseTile_h_39_INCLASS \
	CppTest_4_19_Source_CppTest_BaseTile_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CppTest_4_19_Source_CppTest_BaseTile_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CppTest_4_19_Source_CppTest_BaseTile_h_39_PRIVATE_PROPERTY_OFFSET \
	CppTest_4_19_Source_CppTest_BaseTile_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	CppTest_4_19_Source_CppTest_BaseTile_h_39_INCLASS_NO_PURE_DECLS \
	CppTest_4_19_Source_CppTest_BaseTile_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CppTest_4_19_Source_CppTest_BaseTile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
