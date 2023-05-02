// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChatGPTAPIWrapper.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALGPT_REVB_ChatGPTAPIWrapper_generated_h
#error "ChatGPTAPIWrapper.generated.h already included, missing '#pragma once' in ChatGPTAPIWrapper.h"
#endif
#define UNREALGPT_REVB_ChatGPTAPIWrapper_generated_h

#define FID_UnrealGPT_RevB_Source_UnrealGPT_RevB_ChatGPTAPIWrapper_h_11_DELEGATE \
struct _Script_UnrealGPT_RevB_eventOnSuccessDelegate_Parms \
{ \
	FString GeneratedText; \
}; \
static inline void FOnSuccessDelegate_DelegateWrapper(const FScriptDelegate& OnSuccessDelegate, const FString& GeneratedText) \
{ \
	_Script_UnrealGPT_RevB_eventOnSuccessDelegate_Parms Parms; \
	Parms.GeneratedText=GeneratedText; \
	OnSuccessDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define FID_UnrealGPT_RevB_Source_UnrealGPT_RevB_ChatGPTAPIWrapper_h_12_DELEGATE \
struct _Script_UnrealGPT_RevB_eventOnErrorDelegate_Parms \
{ \
	int32 ResponseCode; \
	FString ErrorMessage; \
}; \
static inline void FOnErrorDelegate_DelegateWrapper(const FScriptDelegate& OnErrorDelegate, int32 ResponseCode, const FString& ErrorMessage) \
{ \
	_Script_UnrealGPT_RevB_eventOnErrorDelegate_Parms Parms; \
	Parms.ResponseCode=ResponseCode; \
	Parms.ErrorMessage=ErrorMessage; \
	OnErrorDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define FID_UnrealGPT_RevB_Source_UnrealGPT_RevB_ChatGPTAPIWrapper_h_19_SPARSE_DATA
#define FID_UnrealGPT_RevB_Source_UnrealGPT_RevB_ChatGPTAPIWrapper_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetOpenAIAPIKey); \
	DECLARE_FUNCTION(execSetOpenAIAPIKey); \
	DECLARE_FUNCTION(execSendRequest);


#define FID_UnrealGPT_RevB_Source_UnrealGPT_RevB_ChatGPTAPIWrapper_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetOpenAIAPIKey); \
	DECLARE_FUNCTION(execSetOpenAIAPIKey); \
	DECLARE_FUNCTION(execSendRequest);


#define FID_UnrealGPT_RevB_Source_UnrealGPT_RevB_ChatGPTAPIWrapper_h_19_ACCESSORS
#define FID_UnrealGPT_RevB_Source_UnrealGPT_RevB_ChatGPTAPIWrapper_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChatGPTAPIWrapper(); \
	friend struct Z_Construct_UClass_UChatGPTAPIWrapper_Statics; \
public: \
	DECLARE_CLASS(UChatGPTAPIWrapper, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealGPT_RevB"), NO_API) \
	DECLARE_SERIALIZER(UChatGPTAPIWrapper)


#define FID_UnrealGPT_RevB_Source_UnrealGPT_RevB_ChatGPTAPIWrapper_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUChatGPTAPIWrapper(); \
	friend struct Z_Construct_UClass_UChatGPTAPIWrapper_Statics; \
public: \
	DECLARE_CLASS(UChatGPTAPIWrapper, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealGPT_RevB"), NO_API) \
	DECLARE_SERIALIZER(UChatGPTAPIWrapper)


#define FID_UnrealGPT_RevB_Source_UnrealGPT_RevB_ChatGPTAPIWrapper_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChatGPTAPIWrapper(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChatGPTAPIWrapper) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChatGPTAPIWrapper); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChatGPTAPIWrapper); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UChatGPTAPIWrapper(UChatGPTAPIWrapper&&); \
	NO_API UChatGPTAPIWrapper(const UChatGPTAPIWrapper&); \
public: \
	NO_API virtual ~UChatGPTAPIWrapper();


#define FID_UnrealGPT_RevB_Source_UnrealGPT_RevB_ChatGPTAPIWrapper_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UChatGPTAPIWrapper(UChatGPTAPIWrapper&&); \
	NO_API UChatGPTAPIWrapper(const UChatGPTAPIWrapper&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChatGPTAPIWrapper); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChatGPTAPIWrapper); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UChatGPTAPIWrapper) \
	NO_API virtual ~UChatGPTAPIWrapper();


#define FID_UnrealGPT_RevB_Source_UnrealGPT_RevB_ChatGPTAPIWrapper_h_16_PROLOG
#define FID_UnrealGPT_RevB_Source_UnrealGPT_RevB_ChatGPTAPIWrapper_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealGPT_RevB_Source_UnrealGPT_RevB_ChatGPTAPIWrapper_h_19_SPARSE_DATA \
	FID_UnrealGPT_RevB_Source_UnrealGPT_RevB_ChatGPTAPIWrapper_h_19_RPC_WRAPPERS \
	FID_UnrealGPT_RevB_Source_UnrealGPT_RevB_ChatGPTAPIWrapper_h_19_ACCESSORS \
	FID_UnrealGPT_RevB_Source_UnrealGPT_RevB_ChatGPTAPIWrapper_h_19_INCLASS \
	FID_UnrealGPT_RevB_Source_UnrealGPT_RevB_ChatGPTAPIWrapper_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealGPT_RevB_Source_UnrealGPT_RevB_ChatGPTAPIWrapper_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealGPT_RevB_Source_UnrealGPT_RevB_ChatGPTAPIWrapper_h_19_SPARSE_DATA \
	FID_UnrealGPT_RevB_Source_UnrealGPT_RevB_ChatGPTAPIWrapper_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealGPT_RevB_Source_UnrealGPT_RevB_ChatGPTAPIWrapper_h_19_ACCESSORS \
	FID_UnrealGPT_RevB_Source_UnrealGPT_RevB_ChatGPTAPIWrapper_h_19_INCLASS_NO_PURE_DECLS \
	FID_UnrealGPT_RevB_Source_UnrealGPT_RevB_ChatGPTAPIWrapper_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALGPT_REVB_API UClass* StaticClass<class UChatGPTAPIWrapper>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealGPT_RevB_Source_UnrealGPT_RevB_ChatGPTAPIWrapper_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
