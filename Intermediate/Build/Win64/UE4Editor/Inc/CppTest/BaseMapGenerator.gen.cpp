// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "BaseMapGenerator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseMapGenerator() {}
// Cross Module References
	CPPTEST_API UClass* Z_Construct_UClass_ABaseMapGenerator_NoRegister();
	CPPTEST_API UClass* Z_Construct_UClass_ABaseMapGenerator();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CppTest();
	CPPTEST_API UFunction* Z_Construct_UFunction_ABaseMapGenerator_buildMap();
	CPPTEST_API UFunction* Z_Construct_UFunction_ABaseMapGenerator_generateAllowedTilesReferences();
	CPPTEST_API UFunction* Z_Construct_UFunction_ABaseMapGenerator_getMapHeight();
	CPPTEST_API UFunction* Z_Construct_UFunction_ABaseMapGenerator_getMapWidth();
	CPPTEST_API UFunction* Z_Construct_UFunction_ABaseMapGenerator_getTilePadding();
	CPPTEST_API UFunction* Z_Construct_UFunction_ABaseMapGenerator_getTileSize();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint_NoRegister();
// End Cross Module References
	void ABaseMapGenerator::StaticRegisterNativesABaseMapGenerator()
	{
		UClass* Class = ABaseMapGenerator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "buildMap", &ABaseMapGenerator::execbuildMap },
			{ "generateAllowedTilesReferences", &ABaseMapGenerator::execgenerateAllowedTilesReferences },
			{ "getMapHeight", &ABaseMapGenerator::execgetMapHeight },
			{ "getMapWidth", &ABaseMapGenerator::execgetMapWidth },
			{ "getTilePadding", &ABaseMapGenerator::execgetTilePadding },
			{ "getTileSize", &ABaseMapGenerator::execgetTileSize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ABaseMapGenerator_buildMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Map|Construction" },
				{ "ModuleRelativePath", "BaseMapGenerator.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseMapGenerator, "buildMap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABaseMapGenerator_generateAllowedTilesReferences()
	{
		struct BaseMapGenerator_eventgenerateAllowedTilesReferences_Parms
		{
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BaseMapGenerator_eventgenerateAllowedTilesReferences_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Map|Construction" },
				{ "ModuleRelativePath", "BaseMapGenerator.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseMapGenerator, "generateAllowedTilesReferences", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080400, sizeof(BaseMapGenerator_eventgenerateAllowedTilesReferences_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABaseMapGenerator_getMapHeight()
	{
		struct BaseMapGenerator_eventgetMapHeight_Parms
		{
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BaseMapGenerator_eventgetMapHeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "BaseMapGenerator.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseMapGenerator, "getMapHeight", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(BaseMapGenerator_eventgetMapHeight_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABaseMapGenerator_getMapWidth()
	{
		struct BaseMapGenerator_eventgetMapWidth_Parms
		{
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BaseMapGenerator_eventgetMapWidth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "BaseMapGenerator.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseMapGenerator, "getMapWidth", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(BaseMapGenerator_eventgetMapWidth_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABaseMapGenerator_getTilePadding()
	{
		struct BaseMapGenerator_eventgetTilePadding_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BaseMapGenerator_eventgetTilePadding_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "BaseMapGenerator.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseMapGenerator, "getTilePadding", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(BaseMapGenerator_eventgetTilePadding_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABaseMapGenerator_getTileSize()
	{
		struct BaseMapGenerator_eventgetTileSize_Parms
		{
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BaseMapGenerator_eventgetTileSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "BaseMapGenerator.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseMapGenerator, "getTileSize", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(BaseMapGenerator_eventgetTileSize_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABaseMapGenerator_NoRegister()
	{
		return ABaseMapGenerator::StaticClass();
	}
	UClass* Z_Construct_UClass_ABaseMapGenerator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_CppTest,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ABaseMapGenerator_buildMap, "buildMap" }, // 2127215989
				{ &Z_Construct_UFunction_ABaseMapGenerator_generateAllowedTilesReferences, "generateAllowedTilesReferences" }, // 2892016813
				{ &Z_Construct_UFunction_ABaseMapGenerator_getMapHeight, "getMapHeight" }, // 3252758811
				{ &Z_Construct_UFunction_ABaseMapGenerator_getMapWidth, "getMapWidth" }, // 2485999282
				{ &Z_Construct_UFunction_ABaseMapGenerator_getTilePadding, "getTilePadding" }, // 1269291817
				{ &Z_Construct_UFunction_ABaseMapGenerator_getTileSize, "getTileSize" }, // 975682515
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "BaseMapGenerator.h" },
				{ "ModuleRelativePath", "BaseMapGenerator.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tilePadding_MetaData[] = {
				{ "Category", "Tiles" },
				{ "ModuleRelativePath", "BaseMapGenerator.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_tilePadding = { UE4CodeGen_Private::EPropertyClass::Float, "tilePadding", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(ABaseMapGenerator, tilePadding), METADATA_PARAMS(NewProp_tilePadding_MetaData, ARRAY_COUNT(NewProp_tilePadding_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tileSize_MetaData[] = {
				{ "Category", "Tiles" },
				{ "ModuleRelativePath", "BaseMapGenerator.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_tileSize = { UE4CodeGen_Private::EPropertyClass::Int, "tileSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, STRUCT_OFFSET(ABaseMapGenerator, tileSize), METADATA_PARAMS(NewProp_tileSize_MetaData, ARRAY_COUNT(NewProp_tileSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowedTiles_MetaData[] = {
				{ "Category", "Tiles" },
				{ "ModuleRelativePath", "BaseMapGenerator.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllowedTiles = { UE4CodeGen_Private::EPropertyClass::Array, "AllowedTiles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(ABaseMapGenerator, AllowedTiles), METADATA_PARAMS(NewProp_AllowedTiles_MetaData, ARRAY_COUNT(NewProp_AllowedTiles_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllowedTiles_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "AllowedTiles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mapHeight_MetaData[] = {
				{ "Category", "Map|Setup" },
				{ "ModuleRelativePath", "BaseMapGenerator.h" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_mapHeight = { UE4CodeGen_Private::EPropertyClass::Int, "mapHeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(ABaseMapGenerator, mapHeight), METADATA_PARAMS(NewProp_mapHeight_MetaData, ARRAY_COUNT(NewProp_mapHeight_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mapWidth_MetaData[] = {
				{ "Category", "Map|Setup" },
				{ "ModuleRelativePath", "BaseMapGenerator.h" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_mapWidth = { UE4CodeGen_Private::EPropertyClass::Int, "mapWidth", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(ABaseMapGenerator, mapWidth), METADATA_PARAMS(NewProp_mapWidth_MetaData, ARRAY_COUNT(NewProp_mapWidth_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_tilePadding,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_tileSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AllowedTiles,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AllowedTiles_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_mapHeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_mapWidth,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ABaseMapGenerator>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ABaseMapGenerator::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseMapGenerator, 2057005920);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseMapGenerator(Z_Construct_UClass_ABaseMapGenerator, &ABaseMapGenerator::StaticClass, TEXT("/Script/CppTest"), TEXT("ABaseMapGenerator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseMapGenerator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
