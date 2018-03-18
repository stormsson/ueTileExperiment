// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "BaseTile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseTile() {}
// Cross Module References
	CPPTEST_API UScriptStruct* Z_Construct_UScriptStruct_FMapCoordinates();
	UPackage* Z_Construct_UPackage__Script_CppTest();
	CPPTEST_API UClass* Z_Construct_UClass_ABaseTile_NoRegister();
	CPPTEST_API UClass* Z_Construct_UClass_ABaseTile();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	CPPTEST_API UFunction* Z_Construct_UFunction_ABaseTile_allowEastTiling();
	CPPTEST_API UFunction* Z_Construct_UFunction_ABaseTile_allowNorthTiling();
	CPPTEST_API UFunction* Z_Construct_UFunction_ABaseTile_allowSouthTiling();
	CPPTEST_API UFunction* Z_Construct_UFunction_ABaseTile_allowWestTiling();
	CPPTEST_API UFunction* Z_Construct_UFunction_ABaseTile_getMapPosition();
	CPPTEST_API UFunction* Z_Construct_UFunction_ABaseTile_setMapPosition();
// End Cross Module References
class UScriptStruct* FMapCoordinates::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CPPTEST_API uint32 Get_Z_Construct_UScriptStruct_FMapCoordinates_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMapCoordinates, Z_Construct_UPackage__Script_CppTest(), TEXT("MapCoordinates"), sizeof(FMapCoordinates), Get_Z_Construct_UScriptStruct_FMapCoordinates_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMapCoordinates(FMapCoordinates::StaticStruct, TEXT("/Script/CppTest"), TEXT("MapCoordinates"), false, nullptr, nullptr);
static struct FScriptStruct_CppTest_StaticRegisterNativesFMapCoordinates
{
	FScriptStruct_CppTest_StaticRegisterNativesFMapCoordinates()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MapCoordinates")),new UScriptStruct::TCppStructOps<FMapCoordinates>);
	}
} ScriptStruct_CppTest_StaticRegisterNativesFMapCoordinates;
	UScriptStruct* Z_Construct_UScriptStruct_FMapCoordinates()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMapCoordinates_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_CppTest();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MapCoordinates"), sizeof(FMapCoordinates), Get_Z_Construct_UScriptStruct_FMapCoordinates_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "BaseTile.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMapCoordinates>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[] = {
				{ "Category", "Position" },
				{ "ModuleRelativePath", "BaseTile.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Y = { UE4CodeGen_Private::EPropertyClass::Int, "Y", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMapCoordinates, Y), METADATA_PARAMS(NewProp_Y_MetaData, ARRAY_COUNT(NewProp_Y_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[] = {
				{ "Category", "Position" },
				{ "ModuleRelativePath", "BaseTile.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_X = { UE4CodeGen_Private::EPropertyClass::Int, "X", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMapCoordinates, X), METADATA_PARAMS(NewProp_X_MetaData, ARRAY_COUNT(NewProp_X_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Y,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_X,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_CppTest,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MapCoordinates",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMapCoordinates),
				alignof(FMapCoordinates),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMapCoordinates_CRC() { return 1525244107U; }
	void ABaseTile::StaticRegisterNativesABaseTile()
	{
		UClass* Class = ABaseTile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "allowEastTiling", &ABaseTile::execallowEastTiling },
			{ "allowNorthTiling", &ABaseTile::execallowNorthTiling },
			{ "allowSouthTiling", &ABaseTile::execallowSouthTiling },
			{ "allowWestTiling", &ABaseTile::execallowWestTiling },
			{ "getMapPosition", &ABaseTile::execgetMapPosition },
			{ "setMapPosition", &ABaseTile::execsetMapPosition },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ABaseTile_allowEastTiling()
	{
		struct BaseTile_eventallowEastTiling_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((BaseTile_eventallowEastTiling_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BaseTile_eventallowEastTiling_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "BaseTile.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseTile, "allowEastTiling", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(BaseTile_eventallowEastTiling_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABaseTile_allowNorthTiling()
	{
		struct BaseTile_eventallowNorthTiling_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((BaseTile_eventallowNorthTiling_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BaseTile_eventallowNorthTiling_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "BaseTile.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseTile, "allowNorthTiling", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(BaseTile_eventallowNorthTiling_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABaseTile_allowSouthTiling()
	{
		struct BaseTile_eventallowSouthTiling_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((BaseTile_eventallowSouthTiling_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BaseTile_eventallowSouthTiling_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "BaseTile.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseTile, "allowSouthTiling", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(BaseTile_eventallowSouthTiling_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABaseTile_allowWestTiling()
	{
		struct BaseTile_eventallowWestTiling_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((BaseTile_eventallowWestTiling_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BaseTile_eventallowWestTiling_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "BaseTile.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseTile, "allowWestTiling", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(BaseTile_eventallowWestTiling_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABaseTile_getMapPosition()
	{
		struct BaseTile_eventgetMapPosition_Parms
		{
			FMapCoordinates ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BaseTile_eventgetMapPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FMapCoordinates, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "BaseTile.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseTile, "getMapPosition", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(BaseTile_eventgetMapPosition_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABaseTile_setMapPosition()
	{
		struct BaseTile_eventsetMapPosition_Parms
		{
			FMapCoordinates newMapPosition;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_newMapPosition_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_newMapPosition = { UE4CodeGen_Private::EPropertyClass::Struct, "newMapPosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BaseTile_eventsetMapPosition_Parms, newMapPosition), Z_Construct_UScriptStruct_FMapCoordinates, METADATA_PARAMS(NewProp_newMapPosition_MetaData, ARRAY_COUNT(NewProp_newMapPosition_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_newMapPosition,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "BaseTile.h" },
				{ "ToolTip", "UFUNCTION(BlueprintCallable)\nvoid setMapPosition(int32 X, int32 Y);" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseTile, "setMapPosition", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(BaseTile_eventsetMapPosition_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABaseTile_NoRegister()
	{
		return ABaseTile::StaticClass();
	}
	UClass* Z_Construct_UClass_ABaseTile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_CppTest,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ABaseTile_allowEastTiling, "allowEastTiling" }, // 3815109294
				{ &Z_Construct_UFunction_ABaseTile_allowNorthTiling, "allowNorthTiling" }, // 1870376408
				{ &Z_Construct_UFunction_ABaseTile_allowSouthTiling, "allowSouthTiling" }, // 3904772673
				{ &Z_Construct_UFunction_ABaseTile_allowWestTiling, "allowWestTiling" }, // 559643499
				{ &Z_Construct_UFunction_ABaseTile_getMapPosition, "getMapPosition" }, // 3851165582
				{ &Z_Construct_UFunction_ABaseTile_setMapPosition, "setMapPosition" }, // 631895793
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "BaseTile.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "BaseTile.h" },
				{ "ToolTip", "UENUM(BlueprintType)           //\"BlueprintType\" is essential to include\nenum class EConnectionEnum : uint8\n{\n       CE_NORTH        UMETA(DisplayName = \"Allow north connection\"),\n       CE_EAST         UMETA(DisplayName = \"Allow east connection\"),\n       CE_SOUTH        UMETA(DisplayName = \"Allow south connection\"),\n       CE_WEST         UMETA(DisplayName = \"Allow west connection\")\n};" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tile_ID_MetaData[] = {
				{ "Category", "Tile properties" },
				{ "ModuleRelativePath", "BaseTile.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tile_ID = { UE4CodeGen_Private::EPropertyClass::Name, "Tile_ID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010015, 1, nullptr, STRUCT_OFFSET(ABaseTile, Tile_ID), METADATA_PARAMS(NewProp_Tile_ID_MetaData, ARRAY_COUNT(NewProp_Tile_ID_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowWestTiling_MetaData[] = {
				{ "Category", "Tile properties|Neighbors" },
				{ "ModuleRelativePath", "BaseTile.h" },
			};
#endif
			auto NewProp_bAllowWestTiling_SetBit = [](void* Obj){ ((ABaseTile*)Obj)->bAllowWestTiling = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowWestTiling = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowWestTiling", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ABaseTile), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAllowWestTiling_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAllowWestTiling_MetaData, ARRAY_COUNT(NewProp_bAllowWestTiling_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowSouthTiling_MetaData[] = {
				{ "Category", "Tile properties|Neighbors" },
				{ "ModuleRelativePath", "BaseTile.h" },
			};
#endif
			auto NewProp_bAllowSouthTiling_SetBit = [](void* Obj){ ((ABaseTile*)Obj)->bAllowSouthTiling = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowSouthTiling = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowSouthTiling", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ABaseTile), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAllowSouthTiling_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAllowSouthTiling_MetaData, ARRAY_COUNT(NewProp_bAllowSouthTiling_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowEastTiling_MetaData[] = {
				{ "Category", "Tile properties|Neighbors" },
				{ "ModuleRelativePath", "BaseTile.h" },
			};
#endif
			auto NewProp_bAllowEastTiling_SetBit = [](void* Obj){ ((ABaseTile*)Obj)->bAllowEastTiling = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowEastTiling = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowEastTiling", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ABaseTile), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAllowEastTiling_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAllowEastTiling_MetaData, ARRAY_COUNT(NewProp_bAllowEastTiling_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowNorthTiling_MetaData[] = {
				{ "Category", "Tile properties|Neighbors" },
				{ "ModuleRelativePath", "BaseTile.h" },
			};
#endif
			auto NewProp_bAllowNorthTiling_SetBit = [](void* Obj){ ((ABaseTile*)Obj)->bAllowNorthTiling = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowNorthTiling = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowNorthTiling", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ABaseTile), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAllowNorthTiling_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAllowNorthTiling_MetaData, ARRAY_COUNT(NewProp_bAllowNorthTiling_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mapPosition_MetaData[] = {
				{ "Category", "Map Properties" },
				{ "ModuleRelativePath", "BaseTile.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_mapPosition = { UE4CodeGen_Private::EPropertyClass::Struct, "mapPosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020805, 1, nullptr, STRUCT_OFFSET(ABaseTile, mapPosition), Z_Construct_UScriptStruct_FMapCoordinates, METADATA_PARAMS(NewProp_mapPosition_MetaData, ARRAY_COUNT(NewProp_mapPosition_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Tile_ID,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAllowWestTiling,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAllowSouthTiling,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAllowEastTiling,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAllowNorthTiling,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_mapPosition,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ABaseTile>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ABaseTile::StaticClass,
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
	IMPLEMENT_CLASS(ABaseTile, 2854746727);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseTile(Z_Construct_UClass_ABaseTile, &ABaseTile::StaticClass, TEXT("/Script/CppTest"), TEXT("ABaseTile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseTile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
