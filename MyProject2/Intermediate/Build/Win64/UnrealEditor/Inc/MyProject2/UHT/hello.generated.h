// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "hello.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT2_hello_generated_h
#error "hello.generated.h already included, missing '#pragma once' in hello.h"
#endif
#define MYPROJECT2_hello_generated_h

#define FID_MyProject2_Source_MyProject2_Public_hello_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAhello(); \
	friend struct Z_Construct_UClass_Ahello_Statics; \
public: \
	DECLARE_CLASS(Ahello, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject2"), NO_API) \
	DECLARE_SERIALIZER(Ahello)


#define FID_MyProject2_Source_MyProject2_Public_hello_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	Ahello(Ahello&&); \
	Ahello(const Ahello&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Ahello); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Ahello); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(Ahello) \
	NO_API virtual ~Ahello();


#define FID_MyProject2_Source_MyProject2_Public_hello_h_9_PROLOG
#define FID_MyProject2_Source_MyProject2_Public_hello_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject2_Source_MyProject2_Public_hello_h_12_INCLASS_NO_PURE_DECLS \
	FID_MyProject2_Source_MyProject2_Public_hello_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT2_API UClass* StaticClass<class Ahello>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProject2_Source_MyProject2_Public_hello_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
