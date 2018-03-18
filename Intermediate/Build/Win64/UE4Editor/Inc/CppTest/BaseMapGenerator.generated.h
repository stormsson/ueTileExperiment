// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CPPTEST_BaseMapGenerator_generated_h
#error "BaseMapGenerator.generated.h already included, missing '#pragma once' in BaseMapGenerator.h"
#endif
#define CPPTEST_BaseMapGenerator_generated_h

#define CppTest_4_19_Source_CppTest_BaseMapGenerator_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execgetTileSize) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->getTileSize(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetTilePadding) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->getTilePadding(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetMapHeight) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->getMapHeight(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetMapWidth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->getMapWidth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbuildMap) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->buildMap(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgenerateAllowedTilesReferences) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->generateAllowedTilesReferences(); \
		P_NATIVE_END; \
	}


#define CppTest_4_19_Source_CppTest_BaseMapGenerator_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execgetTileSize) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->getTileSize(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetTilePadding) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->getTilePadding(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetMapHeight) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->getMapHeight(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetMapWidth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->getMapWidth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbuildMap) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->buildMap(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgenerateAllowedTilesReferences) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->generateAllowedTilesReferences(); \
		P_NATIVE_END; \
	}


#define CppTest_4_19_Source_CppTest_BaseMapGenerator_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseMapGenerator(); \
	friend CPPTEST_API class UClass* Z_Construct_UClass_ABaseMapGenerator(); \
public: \
	DECLARE_CLASS(ABaseMapGenerator, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CppTest"), NO_API) \
	DECLARE_SERIALIZER(ABaseMapGenerator) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define CppTest_4_19_Source_CppTest_BaseMapGenerator_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABaseMapGenerator(); \
	friend CPPTEST_API class UClass* Z_Construct_UClass_ABaseMapGenerator(); \
public: \
	DECLARE_CLASS(ABaseMapGenerator, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CppTest"), NO_API) \
	DECLARE_SERIALIZER(ABaseMapGenerator) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define CppTest_4_19_Source_CppTest_BaseMapGenerator_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseMapGenerator(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseMapGenerator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseMapGenerator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseMapGenerator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseMapGenerator(ABaseMapGenerator&&); \
	NO_API ABaseMapGenerator(const ABaseMapGenerator&); \
public:


#define CppTest_4_19_Source_CppTest_BaseMapGenerator_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseMapGenerator(ABaseMapGenerator&&); \
	NO_API ABaseMapGenerator(const ABaseMapGenerator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseMapGenerator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseMapGenerator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseMapGenerator)


#define CppTest_4_19_Source_CppTest_BaseMapGenerator_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mapWidth() { return STRUCT_OFFSET(ABaseMapGenerator, mapWidth); } \
	FORCEINLINE static uint32 __PPO__mapHeight() { return STRUCT_OFFSET(ABaseMapGenerator, mapHeight); } \
	FORCEINLINE static uint32 __PPO__AllowedTiles() { return STRUCT_OFFSET(ABaseMapGenerator, AllowedTiles); } \
	FORCEINLINE static uint32 __PPO__tileSize() { return STRUCT_OFFSET(ABaseMapGenerator, tileSize); } \
	FORCEINLINE static uint32 __PPO__tilePadding() { return STRUCT_OFFSET(ABaseMapGenerator, tilePadding); }


#define CppTest_4_19_Source_CppTest_BaseMapGenerator_h_12_PROLOG
#define CppTest_4_19_Source_CppTest_BaseMapGenerator_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CppTest_4_19_Source_CppTest_BaseMapGenerator_h_15_PRIVATE_PROPERTY_OFFSET \
	CppTest_4_19_Source_CppTest_BaseMapGenerator_h_15_RPC_WRAPPERS \
	CppTest_4_19_Source_CppTest_BaseMapGenerator_h_15_INCLASS \
	CppTest_4_19_Source_CppTest_BaseMapGenerator_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CppTest_4_19_Source_CppTest_BaseMapGenerator_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CppTest_4_19_Source_CppTest_BaseMapGenerator_h_15_PRIVATE_PROPERTY_OFFSET \
	CppTest_4_19_Source_CppTest_BaseMapGenerator_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	CppTest_4_19_Source_CppTest_BaseMapGenerator_h_15_INCLASS_NO_PURE_DECLS \
	CppTest_4_19_Source_CppTest_BaseMapGenerator_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CppTest_4_19_Source_CppTest_BaseMapGenerator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
