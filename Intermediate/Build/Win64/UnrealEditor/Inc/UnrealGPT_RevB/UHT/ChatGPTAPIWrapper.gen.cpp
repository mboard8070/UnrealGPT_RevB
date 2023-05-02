// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealGPT_RevB/ChatGPTAPIWrapper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChatGPTAPIWrapper() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UNREALGPT_REVB_API UClass* Z_Construct_UClass_UChatGPTAPIWrapper();
	UNREALGPT_REVB_API UClass* Z_Construct_UClass_UChatGPTAPIWrapper_NoRegister();
	UNREALGPT_REVB_API UFunction* Z_Construct_UDelegateFunction_UnrealGPT_RevB_OnErrorDelegate__DelegateSignature();
	UNREALGPT_REVB_API UFunction* Z_Construct_UDelegateFunction_UnrealGPT_RevB_OnSuccessDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UnrealGPT_RevB();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UnrealGPT_RevB_OnSuccessDelegate__DelegateSignature_Statics
	{
		struct _Script_UnrealGPT_RevB_eventOnSuccessDelegate_Parms
		{
			FString GeneratedText;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedText_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GeneratedText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UnrealGPT_RevB_OnSuccessDelegate__DelegateSignature_Statics::NewProp_GeneratedText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UnrealGPT_RevB_OnSuccessDelegate__DelegateSignature_Statics::NewProp_GeneratedText = { "GeneratedText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_UnrealGPT_RevB_eventOnSuccessDelegate_Parms, GeneratedText), METADATA_PARAMS(Z_Construct_UDelegateFunction_UnrealGPT_RevB_OnSuccessDelegate__DelegateSignature_Statics::NewProp_GeneratedText_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnrealGPT_RevB_OnSuccessDelegate__DelegateSignature_Statics::NewProp_GeneratedText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UnrealGPT_RevB_OnSuccessDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UnrealGPT_RevB_OnSuccessDelegate__DelegateSignature_Statics::NewProp_GeneratedText,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UnrealGPT_RevB_OnSuccessDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ChatGPTAPIWrapper.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UnrealGPT_RevB_OnSuccessDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UnrealGPT_RevB, nullptr, "OnSuccessDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UnrealGPT_RevB_OnSuccessDelegate__DelegateSignature_Statics::_Script_UnrealGPT_RevB_eventOnSuccessDelegate_Parms), Z_Construct_UDelegateFunction_UnrealGPT_RevB_OnSuccessDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnrealGPT_RevB_OnSuccessDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UnrealGPT_RevB_OnSuccessDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnrealGPT_RevB_OnSuccessDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UnrealGPT_RevB_OnSuccessDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UnrealGPT_RevB_OnSuccessDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UnrealGPT_RevB_OnErrorDelegate__DelegateSignature_Statics
	{
		struct _Script_UnrealGPT_RevB_eventOnErrorDelegate_Parms
		{
			int32 ResponseCode;
			FString ErrorMessage;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ResponseCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UnrealGPT_RevB_OnErrorDelegate__DelegateSignature_Statics::NewProp_ResponseCode = { "ResponseCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_UnrealGPT_RevB_eventOnErrorDelegate_Parms, ResponseCode), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UnrealGPT_RevB_OnErrorDelegate__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UnrealGPT_RevB_OnErrorDelegate__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_UnrealGPT_RevB_eventOnErrorDelegate_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_UnrealGPT_RevB_OnErrorDelegate__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnrealGPT_RevB_OnErrorDelegate__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UnrealGPT_RevB_OnErrorDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UnrealGPT_RevB_OnErrorDelegate__DelegateSignature_Statics::NewProp_ResponseCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UnrealGPT_RevB_OnErrorDelegate__DelegateSignature_Statics::NewProp_ErrorMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UnrealGPT_RevB_OnErrorDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ChatGPTAPIWrapper.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UnrealGPT_RevB_OnErrorDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UnrealGPT_RevB, nullptr, "OnErrorDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UnrealGPT_RevB_OnErrorDelegate__DelegateSignature_Statics::_Script_UnrealGPT_RevB_eventOnErrorDelegate_Parms), Z_Construct_UDelegateFunction_UnrealGPT_RevB_OnErrorDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnrealGPT_RevB_OnErrorDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UnrealGPT_RevB_OnErrorDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnrealGPT_RevB_OnErrorDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UnrealGPT_RevB_OnErrorDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UnrealGPT_RevB_OnErrorDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UChatGPTAPIWrapper::execGetOpenAIAPIKey)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetOpenAIAPIKey();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChatGPTAPIWrapper::execSetOpenAIAPIKey)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_APIKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOpenAIAPIKey(Z_Param_APIKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChatGPTAPIWrapper::execSendRequest)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Prompt);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSuccess);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendRequest(Z_Param_Prompt,FOnSuccessDelegate(Z_Param_Out_OnSuccess),FOnErrorDelegate(Z_Param_Out_OnError));
		P_NATIVE_END;
	}
	void UChatGPTAPIWrapper::StaticRegisterNativesUChatGPTAPIWrapper()
	{
		UClass* Class = UChatGPTAPIWrapper::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOpenAIAPIKey", &UChatGPTAPIWrapper::execGetOpenAIAPIKey },
			{ "SendRequest", &UChatGPTAPIWrapper::execSendRequest },
			{ "SetOpenAIAPIKey", &UChatGPTAPIWrapper::execSetOpenAIAPIKey },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UChatGPTAPIWrapper_GetOpenAIAPIKey_Statics
	{
		struct ChatGPTAPIWrapper_eventGetOpenAIAPIKey_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UChatGPTAPIWrapper_GetOpenAIAPIKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChatGPTAPIWrapper_eventGetOpenAIAPIKey_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChatGPTAPIWrapper_GetOpenAIAPIKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChatGPTAPIWrapper_GetOpenAIAPIKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChatGPTAPIWrapper_GetOpenAIAPIKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "OpenAI" },
		{ "ModuleRelativePath", "ChatGPTAPIWrapper.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChatGPTAPIWrapper_GetOpenAIAPIKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChatGPTAPIWrapper, nullptr, "GetOpenAIAPIKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UChatGPTAPIWrapper_GetOpenAIAPIKey_Statics::ChatGPTAPIWrapper_eventGetOpenAIAPIKey_Parms), Z_Construct_UFunction_UChatGPTAPIWrapper_GetOpenAIAPIKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChatGPTAPIWrapper_GetOpenAIAPIKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChatGPTAPIWrapper_GetOpenAIAPIKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChatGPTAPIWrapper_GetOpenAIAPIKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChatGPTAPIWrapper_GetOpenAIAPIKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChatGPTAPIWrapper_GetOpenAIAPIKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChatGPTAPIWrapper_SendRequest_Statics
	{
		struct ChatGPTAPIWrapper_eventSendRequest_Parms
		{
			FString Prompt;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Prompt_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Prompt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChatGPTAPIWrapper_SendRequest_Statics::NewProp_Prompt_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UChatGPTAPIWrapper_SendRequest_Statics::NewProp_Prompt = { "Prompt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChatGPTAPIWrapper_eventSendRequest_Parms, Prompt), METADATA_PARAMS(Z_Construct_UFunction_UChatGPTAPIWrapper_SendRequest_Statics::NewProp_Prompt_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UChatGPTAPIWrapper_SendRequest_Statics::NewProp_Prompt_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChatGPTAPIWrapper_SendRequest_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UChatGPTAPIWrapper_SendRequest_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChatGPTAPIWrapper_eventSendRequest_Parms, OnSuccess), Z_Construct_UDelegateFunction_UnrealGPT_RevB_OnSuccessDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UChatGPTAPIWrapper_SendRequest_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UChatGPTAPIWrapper_SendRequest_Statics::NewProp_OnSuccess_MetaData)) }; // 1043938298
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChatGPTAPIWrapper_SendRequest_Statics::NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UChatGPTAPIWrapper_SendRequest_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChatGPTAPIWrapper_eventSendRequest_Parms, OnError), Z_Construct_UDelegateFunction_UnrealGPT_RevB_OnErrorDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UChatGPTAPIWrapper_SendRequest_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UChatGPTAPIWrapper_SendRequest_Statics::NewProp_OnError_MetaData)) }; // 989239287
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChatGPTAPIWrapper_SendRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChatGPTAPIWrapper_SendRequest_Statics::NewProp_Prompt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChatGPTAPIWrapper_SendRequest_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChatGPTAPIWrapper_SendRequest_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChatGPTAPIWrapper_SendRequest_Statics::Function_MetaDataParams[] = {
		{ "Category", "OpenAI" },
		{ "ModuleRelativePath", "ChatGPTAPIWrapper.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChatGPTAPIWrapper_SendRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChatGPTAPIWrapper, nullptr, "SendRequest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UChatGPTAPIWrapper_SendRequest_Statics::ChatGPTAPIWrapper_eventSendRequest_Parms), Z_Construct_UFunction_UChatGPTAPIWrapper_SendRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChatGPTAPIWrapper_SendRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChatGPTAPIWrapper_SendRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChatGPTAPIWrapper_SendRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChatGPTAPIWrapper_SendRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChatGPTAPIWrapper_SendRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChatGPTAPIWrapper_SetOpenAIAPIKey_Statics
	{
		struct ChatGPTAPIWrapper_eventSetOpenAIAPIKey_Parms
		{
			FString APIKey;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_APIKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_APIKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChatGPTAPIWrapper_SetOpenAIAPIKey_Statics::NewProp_APIKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UChatGPTAPIWrapper_SetOpenAIAPIKey_Statics::NewProp_APIKey = { "APIKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChatGPTAPIWrapper_eventSetOpenAIAPIKey_Parms, APIKey), METADATA_PARAMS(Z_Construct_UFunction_UChatGPTAPIWrapper_SetOpenAIAPIKey_Statics::NewProp_APIKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UChatGPTAPIWrapper_SetOpenAIAPIKey_Statics::NewProp_APIKey_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChatGPTAPIWrapper_SetOpenAIAPIKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChatGPTAPIWrapper_SetOpenAIAPIKey_Statics::NewProp_APIKey,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChatGPTAPIWrapper_SetOpenAIAPIKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "OpenAI" },
		{ "ModuleRelativePath", "ChatGPTAPIWrapper.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChatGPTAPIWrapper_SetOpenAIAPIKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChatGPTAPIWrapper, nullptr, "SetOpenAIAPIKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UChatGPTAPIWrapper_SetOpenAIAPIKey_Statics::ChatGPTAPIWrapper_eventSetOpenAIAPIKey_Parms), Z_Construct_UFunction_UChatGPTAPIWrapper_SetOpenAIAPIKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChatGPTAPIWrapper_SetOpenAIAPIKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChatGPTAPIWrapper_SetOpenAIAPIKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChatGPTAPIWrapper_SetOpenAIAPIKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChatGPTAPIWrapper_SetOpenAIAPIKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChatGPTAPIWrapper_SetOpenAIAPIKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChatGPTAPIWrapper);
	UClass* Z_Construct_UClass_UChatGPTAPIWrapper_NoRegister()
	{
		return UChatGPTAPIWrapper::StaticClass();
	}
	struct Z_Construct_UClass_UChatGPTAPIWrapper_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxTokens_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxTokens;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Temperature_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Temperature;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TopP_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TopP;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChatGPTAPIWrapper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealGPT_RevB,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UChatGPTAPIWrapper_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UChatGPTAPIWrapper_GetOpenAIAPIKey, "GetOpenAIAPIKey" }, // 587872146
		{ &Z_Construct_UFunction_UChatGPTAPIWrapper_SendRequest, "SendRequest" }, // 3983608116
		{ &Z_Construct_UFunction_UChatGPTAPIWrapper_SetOpenAIAPIKey, "SetOpenAIAPIKey" }, // 1393071136
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChatGPTAPIWrapper_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ChatGPTAPIWrapper.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "ChatGPTAPIWrapper.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChatGPTAPIWrapper_Statics::NewProp_MaxTokens_MetaData[] = {
		{ "Category", "OpenAI" },
		{ "ModuleRelativePath", "ChatGPTAPIWrapper.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UChatGPTAPIWrapper_Statics::NewProp_MaxTokens = { "MaxTokens", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChatGPTAPIWrapper, MaxTokens), METADATA_PARAMS(Z_Construct_UClass_UChatGPTAPIWrapper_Statics::NewProp_MaxTokens_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChatGPTAPIWrapper_Statics::NewProp_MaxTokens_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChatGPTAPIWrapper_Statics::NewProp_Temperature_MetaData[] = {
		{ "Category", "OpenAI" },
		{ "ModuleRelativePath", "ChatGPTAPIWrapper.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChatGPTAPIWrapper_Statics::NewProp_Temperature = { "Temperature", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChatGPTAPIWrapper, Temperature), METADATA_PARAMS(Z_Construct_UClass_UChatGPTAPIWrapper_Statics::NewProp_Temperature_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChatGPTAPIWrapper_Statics::NewProp_Temperature_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChatGPTAPIWrapper_Statics::NewProp_TopP_MetaData[] = {
		{ "Category", "OpenAI" },
		{ "ModuleRelativePath", "ChatGPTAPIWrapper.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChatGPTAPIWrapper_Statics::NewProp_TopP = { "TopP", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChatGPTAPIWrapper, TopP), METADATA_PARAMS(Z_Construct_UClass_UChatGPTAPIWrapper_Statics::NewProp_TopP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChatGPTAPIWrapper_Statics::NewProp_TopP_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChatGPTAPIWrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChatGPTAPIWrapper_Statics::NewProp_MaxTokens,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChatGPTAPIWrapper_Statics::NewProp_Temperature,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChatGPTAPIWrapper_Statics::NewProp_TopP,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChatGPTAPIWrapper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChatGPTAPIWrapper>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UChatGPTAPIWrapper_Statics::ClassParams = {
		&UChatGPTAPIWrapper::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UChatGPTAPIWrapper_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UChatGPTAPIWrapper_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UChatGPTAPIWrapper_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChatGPTAPIWrapper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChatGPTAPIWrapper()
	{
		if (!Z_Registration_Info_UClass_UChatGPTAPIWrapper.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChatGPTAPIWrapper.OuterSingleton, Z_Construct_UClass_UChatGPTAPIWrapper_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UChatGPTAPIWrapper.OuterSingleton;
	}
	template<> UNREALGPT_REVB_API UClass* StaticClass<UChatGPTAPIWrapper>()
	{
		return UChatGPTAPIWrapper::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChatGPTAPIWrapper);
	UChatGPTAPIWrapper::~UChatGPTAPIWrapper() {}
	struct Z_CompiledInDeferFile_FID_UnrealGPT_RevB_Source_UnrealGPT_RevB_ChatGPTAPIWrapper_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealGPT_RevB_Source_UnrealGPT_RevB_ChatGPTAPIWrapper_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UChatGPTAPIWrapper, UChatGPTAPIWrapper::StaticClass, TEXT("UChatGPTAPIWrapper"), &Z_Registration_Info_UClass_UChatGPTAPIWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChatGPTAPIWrapper), 2021117272U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealGPT_RevB_Source_UnrealGPT_RevB_ChatGPTAPIWrapper_h_2637917859(TEXT("/Script/UnrealGPT_RevB"),
		Z_CompiledInDeferFile_FID_UnrealGPT_RevB_Source_UnrealGPT_RevB_ChatGPTAPIWrapper_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealGPT_RevB_Source_UnrealGPT_RevB_ChatGPTAPIWrapper_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
