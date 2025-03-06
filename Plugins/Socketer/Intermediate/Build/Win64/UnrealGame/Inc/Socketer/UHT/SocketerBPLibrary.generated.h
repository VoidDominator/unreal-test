// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SocketerBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USocketerSocket;
#ifdef SOCKETER_SocketerBPLibrary_generated_h
#error "SocketerBPLibrary.generated.h already included, missing '#pragma once' in SocketerBPLibrary.h"
#endif
#define SOCKETER_SocketerBPLibrary_generated_h

#define FID_Temp_Socketer_HostProject_Plugins_Socketer_Source_Socketer_Public_SocketerBPLibrary_h_37_RPC_WRAPPERS \
	DECLARE_FUNCTION(execCloseConnection); \
	DECLARE_FUNCTION(execHasPendingData); \
	DECLARE_FUNCTION(execGetMessage); \
	DECLARE_FUNCTION(execSendMessage); \
	DECLARE_FUNCTION(execConnect);


#define FID_Temp_Socketer_HostProject_Plugins_Socketer_Source_Socketer_Public_SocketerBPLibrary_h_37_INCLASS \
private: \
	static void StaticRegisterNativesUSocketerBPLibrary(); \
	friend struct Z_Construct_UClass_USocketerBPLibrary_Statics; \
public: \
	DECLARE_CLASS(USocketerBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Socketer"), NO_API) \
	DECLARE_SERIALIZER(USocketerBPLibrary)


#define FID_Temp_Socketer_HostProject_Plugins_Socketer_Source_Socketer_Public_SocketerBPLibrary_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USocketerBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USocketerBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USocketerBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USocketerBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USocketerBPLibrary(USocketerBPLibrary&&); \
	USocketerBPLibrary(const USocketerBPLibrary&); \
public: \
	NO_API virtual ~USocketerBPLibrary();


#define FID_Temp_Socketer_HostProject_Plugins_Socketer_Source_Socketer_Public_SocketerBPLibrary_h_34_PROLOG
#define FID_Temp_Socketer_HostProject_Plugins_Socketer_Source_Socketer_Public_SocketerBPLibrary_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Temp_Socketer_HostProject_Plugins_Socketer_Source_Socketer_Public_SocketerBPLibrary_h_37_RPC_WRAPPERS \
	FID_Temp_Socketer_HostProject_Plugins_Socketer_Source_Socketer_Public_SocketerBPLibrary_h_37_INCLASS \
	FID_Temp_Socketer_HostProject_Plugins_Socketer_Source_Socketer_Public_SocketerBPLibrary_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOCKETER_API UClass* StaticClass<class USocketerBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Temp_Socketer_HostProject_Plugins_Socketer_Source_Socketer_Public_SocketerBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
