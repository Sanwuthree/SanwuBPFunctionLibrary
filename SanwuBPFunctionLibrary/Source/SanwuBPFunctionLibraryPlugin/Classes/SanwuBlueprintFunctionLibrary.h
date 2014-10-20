// Copyright 2014 Vladimir Alyamkin. All Rights Reserved.

#pragma once
#include "SanwuBPFunctionLibraryPluginPrivatePCH.h"
#include "SocketSubsystem.h"
#include "IPAddress.h"
#include "Sockets.h"
#include "SanwuSocketObject.h"
#include "SanwuHttpObject.h"
#include "SanwuJsonObject.h"
#include "SanwuBlueprintFunctionLibrary.generated.h"

//class UVaQuoleUIComponent;
using namespace UF;

/**
 * Class that handles view of one web page
 */
UCLASS()
class SANWUBPFUNCTIONLIBRARYPLUGIN_API USanwuBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()
	
	/**
	* get project singleton 
	*��ȡ��Ŀ�ĵ�����
	*/
	UFUNCTION(BlueprintCallable,Category="Sanwu|GlobalFunctionLib")
	static UObject* GetSingleton();

	/**
	* Connect a socket server
	*/


	UFUNCTION(BlueprintCallable, Category = "Sanwu|GlobalFunctionLib|Socket")
	static USanwuSocketObject* CreateSocketObject();

	UFUNCTION(BlueprintCallable, Category = "Sanwu|GlobalFunctionLib|Http")
	static USanwuHttpObject* CreateHttpObject();

	UFUNCTION(BlueprintCallable, Category = "Sanwu|GlobalFunctionLib|Socket|ByteArray")
	static USanwuByteArray* CreateByteArray();

	UFUNCTION(BlueprintCallable, Category = "Sanwu|GlobalFunctionLib|Json")
	static USanwuJsonObject* CreateJsonObject();
	
};
