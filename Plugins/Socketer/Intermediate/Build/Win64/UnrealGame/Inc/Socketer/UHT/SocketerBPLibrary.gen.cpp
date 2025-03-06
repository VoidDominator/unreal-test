// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Socketer/Public/SocketerBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSocketerBPLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
SOCKETER_API UClass* Z_Construct_UClass_USocketerBPLibrary();
SOCKETER_API UClass* Z_Construct_UClass_USocketerBPLibrary_NoRegister();
SOCKETER_API UClass* Z_Construct_UClass_USocketerSocket_NoRegister();
UPackage* Z_Construct_UPackage__Script_Socketer();
// End Cross Module References

// Begin Class USocketerBPLibrary Function CloseConnection
struct Z_Construct_UFunction_USocketerBPLibrary_CloseConnection_Statics
{
	struct SocketerBPLibrary_eventCloseConnection_Parms
	{
		USocketerSocket* Connection;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Networking|Socketer" },
		{ "Comment", "/*\n\x09* Closes a TCP connection\n\x09*\n\x09* @Param Connection The TCP connection to close\n\x09* \n\x09* @return True if the socket was successfully closed, false otherwise.\n\x09*/" },
		{ "DisplayName", "Close connection to TCP server" },
		{ "Keywords", "Socketer disconnect close tcpclose tcp tcpdisconnect socketerdisconnect" },
		{ "ModuleRelativePath", "Public/SocketerBPLibrary.h" },
		{ "ToolTip", "* Closes a TCP connection\n*\n* @Param Connection The TCP connection to close\n*\n* @return True if the socket was successfully closed, false otherwise." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Connection;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USocketerBPLibrary_CloseConnection_Statics::NewProp_Connection = { "Connection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SocketerBPLibrary_eventCloseConnection_Parms, Connection), Z_Construct_UClass_USocketerSocket_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USocketerBPLibrary_CloseConnection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SocketerBPLibrary_eventCloseConnection_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USocketerBPLibrary_CloseConnection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SocketerBPLibrary_eventCloseConnection_Parms), &Z_Construct_UFunction_USocketerBPLibrary_CloseConnection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketerBPLibrary_CloseConnection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketerBPLibrary_CloseConnection_Statics::NewProp_Connection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketerBPLibrary_CloseConnection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USocketerBPLibrary_CloseConnection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketerBPLibrary_CloseConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketerBPLibrary, nullptr, "CloseConnection", nullptr, nullptr, Z_Construct_UFunction_USocketerBPLibrary_CloseConnection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketerBPLibrary_CloseConnection_Statics::PropPointers), sizeof(Z_Construct_UFunction_USocketerBPLibrary_CloseConnection_Statics::SocketerBPLibrary_eventCloseConnection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USocketerBPLibrary_CloseConnection_Statics::Function_MetaDataParams), Z_Construct_UFunction_USocketerBPLibrary_CloseConnection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USocketerBPLibrary_CloseConnection_Statics::SocketerBPLibrary_eventCloseConnection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USocketerBPLibrary_CloseConnection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocketerBPLibrary_CloseConnection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USocketerBPLibrary::execCloseConnection)
{
	P_GET_OBJECT(USocketerSocket,Z_Param_Connection);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USocketerBPLibrary::CloseConnection(Z_Param_Connection);
	P_NATIVE_END;
}
// End Class USocketerBPLibrary Function CloseConnection

// Begin Class USocketerBPLibrary Function Connect
struct Z_Construct_UFunction_USocketerBPLibrary_Connect_Statics
{
	struct SocketerBPLibrary_eventConnect_Parms
	{
		FString Host;
		int32 port;
		bool success;
		USocketerSocket* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Networking|Socketer" },
		{ "Comment", "/*\n\x09* Connect to a TCP server.\n\x09* \n\x09* @param Host The host name or IP address of the server you'd like to connect to.\n\x09* @param port The port your server application is listening on.\n\x09* \n\x09* @param success True if a connection was correctly established, false otherwise.\n\x09*/" },
		{ "DisplayName", "Connect to a TCP server" },
		{ "Keywords", "Socketer connect tcp tcpconnect socketerconnect" },
		{ "ModuleRelativePath", "Public/SocketerBPLibrary.h" },
		{ "ToolTip", "* Connect to a TCP server.\n*\n* @param Host The host name or IP address of the server you'd like to connect to.\n* @param port The port your server application is listening on.\n*\n* @param success True if a connection was correctly established, false otherwise." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Host;
	static const UECodeGen_Private::FIntPropertyParams NewProp_port;
	static void NewProp_success_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_success;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketerBPLibrary_Connect_Statics::NewProp_Host = { "Host", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SocketerBPLibrary_eventConnect_Parms, Host), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USocketerBPLibrary_Connect_Statics::NewProp_port = { "port", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SocketerBPLibrary_eventConnect_Parms, port), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USocketerBPLibrary_Connect_Statics::NewProp_success_SetBit(void* Obj)
{
	((SocketerBPLibrary_eventConnect_Parms*)Obj)->success = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USocketerBPLibrary_Connect_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SocketerBPLibrary_eventConnect_Parms), &Z_Construct_UFunction_USocketerBPLibrary_Connect_Statics::NewProp_success_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USocketerBPLibrary_Connect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SocketerBPLibrary_eventConnect_Parms, ReturnValue), Z_Construct_UClass_USocketerSocket_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketerBPLibrary_Connect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketerBPLibrary_Connect_Statics::NewProp_Host,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketerBPLibrary_Connect_Statics::NewProp_port,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketerBPLibrary_Connect_Statics::NewProp_success,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketerBPLibrary_Connect_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USocketerBPLibrary_Connect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketerBPLibrary_Connect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketerBPLibrary, nullptr, "Connect", nullptr, nullptr, Z_Construct_UFunction_USocketerBPLibrary_Connect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketerBPLibrary_Connect_Statics::PropPointers), sizeof(Z_Construct_UFunction_USocketerBPLibrary_Connect_Statics::SocketerBPLibrary_eventConnect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USocketerBPLibrary_Connect_Statics::Function_MetaDataParams), Z_Construct_UFunction_USocketerBPLibrary_Connect_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USocketerBPLibrary_Connect_Statics::SocketerBPLibrary_eventConnect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USocketerBPLibrary_Connect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocketerBPLibrary_Connect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USocketerBPLibrary::execConnect)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Host);
	P_GET_PROPERTY(FIntProperty,Z_Param_port);
	P_GET_UBOOL_REF(Z_Param_Out_success);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USocketerSocket**)Z_Param__Result=USocketerBPLibrary::Connect(Z_Param_Host,Z_Param_port,Z_Param_Out_success);
	P_NATIVE_END;
}
// End Class USocketerBPLibrary Function Connect

// Begin Class USocketerBPLibrary Function GetMessage
struct Z_Construct_UFunction_USocketerBPLibrary_GetMessage_Statics
{
	struct SocketerBPLibrary_eventGetMessage_Parms
	{
		USocketerSocket* Connection;
		FString Message;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Networking|Socketer" },
		{ "Comment", "/*\n\x09* Receive a string from a TCP connection. WARNING: Game could hang till timeout if no data is available, please check using HasPendingData first.\n\x09*\n\x09* @Param Connection TCP socket connection to receive the message from.\n\x09* \n\x09* @Param Message The received message\n\x09* @return True if a message was successfully received, false otherwise.\n\x09*/" },
		{ "DisplayName", "Get buffer (converted to FString) from server" },
		{ "Keywords", "Socketer send message tcpsend tcp tcpdisconnect socketersend" },
		{ "ModuleRelativePath", "Public/SocketerBPLibrary.h" },
		{ "ToolTip", "* Receive a string from a TCP connection. WARNING: Game could hang till timeout if no data is available, please check using HasPendingData first.\n*\n* @Param Connection TCP socket connection to receive the message from.\n*\n* @Param Message The received message\n* @return True if a message was successfully received, false otherwise." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Connection;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USocketerBPLibrary_GetMessage_Statics::NewProp_Connection = { "Connection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SocketerBPLibrary_eventGetMessage_Parms, Connection), Z_Construct_UClass_USocketerSocket_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketerBPLibrary_GetMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SocketerBPLibrary_eventGetMessage_Parms, Message), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USocketerBPLibrary_GetMessage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SocketerBPLibrary_eventGetMessage_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USocketerBPLibrary_GetMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SocketerBPLibrary_eventGetMessage_Parms), &Z_Construct_UFunction_USocketerBPLibrary_GetMessage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketerBPLibrary_GetMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketerBPLibrary_GetMessage_Statics::NewProp_Connection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketerBPLibrary_GetMessage_Statics::NewProp_Message,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketerBPLibrary_GetMessage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USocketerBPLibrary_GetMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketerBPLibrary_GetMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketerBPLibrary, nullptr, "GetMessage", nullptr, nullptr, Z_Construct_UFunction_USocketerBPLibrary_GetMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketerBPLibrary_GetMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_USocketerBPLibrary_GetMessage_Statics::SocketerBPLibrary_eventGetMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USocketerBPLibrary_GetMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_USocketerBPLibrary_GetMessage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USocketerBPLibrary_GetMessage_Statics::SocketerBPLibrary_eventGetMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USocketerBPLibrary_GetMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocketerBPLibrary_GetMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USocketerBPLibrary::execGetMessage)
{
	P_GET_OBJECT(USocketerSocket,Z_Param_Connection);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USocketerBPLibrary::GetMessage(Z_Param_Connection,Z_Param_Out_Message);
	P_NATIVE_END;
}
// End Class USocketerBPLibrary Function GetMessage

// Begin Class USocketerBPLibrary Function HasPendingData
struct Z_Construct_UFunction_USocketerBPLibrary_HasPendingData_Statics
{
	struct SocketerBPLibrary_eventHasPendingData_Parms
	{
		USocketerSocket* Connection;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Networking|Socketer" },
		{ "Comment", "/*\n\x09* Checks if a TCP connection has any pending data.\n\x09*\n\x09* @Param Connection TCP socket connection to check.\n\x09*\n\x09* @Param Message The received message\n\x09* @return True if a message was successfully received, false otherwise.\n\x09*/" },
		{ "DisplayName", "HasPendingData" },
		{ "Keywords", "Socketer send message tcpsend tcp tcpdisconnect socketersend" },
		{ "ModuleRelativePath", "Public/SocketerBPLibrary.h" },
		{ "ToolTip", "* Checks if a TCP connection has any pending data.\n*\n* @Param Connection TCP socket connection to check.\n*\n* @Param Message The received message\n* @return True if a message was successfully received, false otherwise." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Connection;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USocketerBPLibrary_HasPendingData_Statics::NewProp_Connection = { "Connection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SocketerBPLibrary_eventHasPendingData_Parms, Connection), Z_Construct_UClass_USocketerSocket_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USocketerBPLibrary_HasPendingData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SocketerBPLibrary_eventHasPendingData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USocketerBPLibrary_HasPendingData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SocketerBPLibrary_eventHasPendingData_Parms), &Z_Construct_UFunction_USocketerBPLibrary_HasPendingData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketerBPLibrary_HasPendingData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketerBPLibrary_HasPendingData_Statics::NewProp_Connection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketerBPLibrary_HasPendingData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USocketerBPLibrary_HasPendingData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketerBPLibrary_HasPendingData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketerBPLibrary, nullptr, "HasPendingData", nullptr, nullptr, Z_Construct_UFunction_USocketerBPLibrary_HasPendingData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketerBPLibrary_HasPendingData_Statics::PropPointers), sizeof(Z_Construct_UFunction_USocketerBPLibrary_HasPendingData_Statics::SocketerBPLibrary_eventHasPendingData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USocketerBPLibrary_HasPendingData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USocketerBPLibrary_HasPendingData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USocketerBPLibrary_HasPendingData_Statics::SocketerBPLibrary_eventHasPendingData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USocketerBPLibrary_HasPendingData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocketerBPLibrary_HasPendingData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USocketerBPLibrary::execHasPendingData)
{
	P_GET_OBJECT(USocketerSocket,Z_Param_Connection);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USocketerBPLibrary::HasPendingData(Z_Param_Connection);
	P_NATIVE_END;
}
// End Class USocketerBPLibrary Function HasPendingData

// Begin Class USocketerBPLibrary Function SendMessage
struct Z_Construct_UFunction_USocketerBPLibrary_SendMessage_Statics
{
	struct SocketerBPLibrary_eventSendMessage_Parms
	{
		USocketerSocket* Connection;
		FString Message;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Networking|Socketer" },
		{ "Comment", "/*\n\x09* Send a string over a TCP connection.\n\x09* \n\x09* @Param Connection TCP socket connection to send the message over.\n\x09* @Param Message The string to send to the server.\n\x09*\n\x09* @return True if a message was successfully sent, false otherwise.\n\x09*/" },
		{ "DisplayName", "Send message to the server" },
		{ "Keywords", "Socketer send message tcpsend tcp tcpdisconnect socketersend" },
		{ "ModuleRelativePath", "Public/SocketerBPLibrary.h" },
		{ "ToolTip", "* Send a string over a TCP connection.\n*\n* @Param Connection TCP socket connection to send the message over.\n* @Param Message The string to send to the server.\n*\n* @return True if a message was successfully sent, false otherwise." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Connection;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USocketerBPLibrary_SendMessage_Statics::NewProp_Connection = { "Connection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SocketerBPLibrary_eventSendMessage_Parms, Connection), Z_Construct_UClass_USocketerSocket_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketerBPLibrary_SendMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SocketerBPLibrary_eventSendMessage_Parms, Message), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USocketerBPLibrary_SendMessage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SocketerBPLibrary_eventSendMessage_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USocketerBPLibrary_SendMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SocketerBPLibrary_eventSendMessage_Parms), &Z_Construct_UFunction_USocketerBPLibrary_SendMessage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketerBPLibrary_SendMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketerBPLibrary_SendMessage_Statics::NewProp_Connection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketerBPLibrary_SendMessage_Statics::NewProp_Message,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketerBPLibrary_SendMessage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USocketerBPLibrary_SendMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketerBPLibrary_SendMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketerBPLibrary, nullptr, "SendMessage", nullptr, nullptr, Z_Construct_UFunction_USocketerBPLibrary_SendMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketerBPLibrary_SendMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_USocketerBPLibrary_SendMessage_Statics::SocketerBPLibrary_eventSendMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USocketerBPLibrary_SendMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_USocketerBPLibrary_SendMessage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USocketerBPLibrary_SendMessage_Statics::SocketerBPLibrary_eventSendMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USocketerBPLibrary_SendMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocketerBPLibrary_SendMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USocketerBPLibrary::execSendMessage)
{
	P_GET_OBJECT(USocketerSocket,Z_Param_Connection);
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USocketerBPLibrary::SendMessage(Z_Param_Connection,Z_Param_Message);
	P_NATIVE_END;
}
// End Class USocketerBPLibrary Function SendMessage

// Begin Class USocketerBPLibrary
void USocketerBPLibrary::StaticRegisterNativesUSocketerBPLibrary()
{
	UClass* Class = USocketerBPLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CloseConnection", &USocketerBPLibrary::execCloseConnection },
		{ "Connect", &USocketerBPLibrary::execConnect },
		{ "GetMessage", &USocketerBPLibrary::execGetMessage },
		{ "HasPendingData", &USocketerBPLibrary::execHasPendingData },
		{ "SendMessage", &USocketerBPLibrary::execSendMessage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USocketerBPLibrary);
UClass* Z_Construct_UClass_USocketerBPLibrary_NoRegister()
{
	return USocketerBPLibrary::StaticClass();
}
struct Z_Construct_UClass_USocketerBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/* \n* TCP FSocket wrapper library for Unreal Engine 4.\n* \n* NOTE: This is a near 1-on-1wrapper, so use it with caution.\n* You are fully responsible for closing sockets, and ensuring\n* that there is data to be read. Not doing so, can result in\n* undefined and unwanted behavior.\n*/" },
		{ "IncludePath", "SocketerBPLibrary.h" },
		{ "ModuleRelativePath", "Public/SocketerBPLibrary.h" },
		{ "ToolTip", "* TCP FSocket wrapper library for Unreal Engine 4.\n*\n* NOTE: This is a near 1-on-1wrapper, so use it with caution.\n* You are fully responsible for closing sockets, and ensuring\n* that there is data to be read. Not doing so, can result in\n* undefined and unwanted behavior." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USocketerBPLibrary_CloseConnection, "CloseConnection" }, // 1690178471
		{ &Z_Construct_UFunction_USocketerBPLibrary_Connect, "Connect" }, // 3601597206
		{ &Z_Construct_UFunction_USocketerBPLibrary_GetMessage, "GetMessage" }, // 2283171634
		{ &Z_Construct_UFunction_USocketerBPLibrary_HasPendingData, "HasPendingData" }, // 333760055
		{ &Z_Construct_UFunction_USocketerBPLibrary_SendMessage, "SendMessage" }, // 2411138951
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USocketerBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USocketerBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Socketer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USocketerBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USocketerBPLibrary_Statics::ClassParams = {
	&USocketerBPLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USocketerBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USocketerBPLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USocketerBPLibrary()
{
	if (!Z_Registration_Info_UClass_USocketerBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USocketerBPLibrary.OuterSingleton, Z_Construct_UClass_USocketerBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USocketerBPLibrary.OuterSingleton;
}
template<> SOCKETER_API UClass* StaticClass<USocketerBPLibrary>()
{
	return USocketerBPLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USocketerBPLibrary);
USocketerBPLibrary::~USocketerBPLibrary() {}
// End Class USocketerBPLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Temp_Socketer_HostProject_Plugins_Socketer_Source_Socketer_Public_SocketerBPLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USocketerBPLibrary, USocketerBPLibrary::StaticClass, TEXT("USocketerBPLibrary"), &Z_Registration_Info_UClass_USocketerBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USocketerBPLibrary), 258095567U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Temp_Socketer_HostProject_Plugins_Socketer_Source_Socketer_Public_SocketerBPLibrary_h_2589130755(TEXT("/Script/Socketer"),
	Z_CompiledInDeferFile_FID_Temp_Socketer_HostProject_Plugins_Socketer_Source_Socketer_Public_SocketerBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Temp_Socketer_HostProject_Plugins_Socketer_Source_Socketer_Public_SocketerBPLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
