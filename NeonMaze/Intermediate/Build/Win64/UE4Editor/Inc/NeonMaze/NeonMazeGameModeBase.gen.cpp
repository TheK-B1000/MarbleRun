// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NeonMaze/NeonMazeGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNeonMazeGameModeBase() {}
// Cross Module References
	NEONMAZE_API UClass* Z_Construct_UClass_ANeonMazeGameModeBase_NoRegister();
	NEONMAZE_API UClass* Z_Construct_UClass_ANeonMazeGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_NeonMaze();
// End Cross Module References
	void ANeonMazeGameModeBase::StaticRegisterNativesANeonMazeGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ANeonMazeGameModeBase_NoRegister()
	{
		return ANeonMazeGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ANeonMazeGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANeonMazeGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NeonMaze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANeonMazeGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "NeonMazeGameModeBase.h" },
		{ "ModuleRelativePath", "NeonMazeGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANeonMazeGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANeonMazeGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANeonMazeGameModeBase_Statics::ClassParams = {
		&ANeonMazeGameModeBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_ANeonMazeGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ANeonMazeGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANeonMazeGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANeonMazeGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANeonMazeGameModeBase, 3778032468);
	template<> NEONMAZE_API UClass* StaticClass<ANeonMazeGameModeBase>()
	{
		return ANeonMazeGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANeonMazeGameModeBase(Z_Construct_UClass_ANeonMazeGameModeBase, &ANeonMazeGameModeBase::StaticClass, TEXT("/Script/NeonMaze"), TEXT("ANeonMazeGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANeonMazeGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
