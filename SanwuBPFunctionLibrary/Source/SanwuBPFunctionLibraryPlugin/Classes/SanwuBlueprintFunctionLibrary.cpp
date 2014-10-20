#include "SanwuBPFunctionLibraryPluginPrivatePCH.h"
#include "SanwuBlueprintFunctionLibrary.h"

USanwuBlueprintFunctionLibrary::USanwuBlueprintFunctionLibrary(const class FPostConstructInitializeProperties& PCIP)
: Super(PCIP)
{

}
UObject* USanwuBlueprintFunctionLibrary::GetSingleton()
{
	return GEngine->GameSingleton;
}

USanwuSocketObject* USanwuBlueprintFunctionLibrary::CreateSocketObject()
{
	//����Socket����
	USanwuSocketObject* socketObj;
	socketObj=ConstructObject<USanwuSocketObject>(USanwuSocketObject::StaticClass());
	return socketObj;
}


USanwuHttpObject* USanwuBlueprintFunctionLibrary::CreateHttpObject()
{
	//����Http����
	USanwuHttpObject* httpObj;
	httpObj = ConstructObject<USanwuHttpObject>(USanwuHttpObject::StaticClass());
	return httpObj;
}

USanwuByteArray* USanwuBlueprintFunctionLibrary::CreateByteArray()
{
	//����ByteArray����
	USanwuByteArray* byteArray;
	byteArray = ConstructObject<USanwuByteArray>(USanwuByteArray::StaticClass());
	return byteArray;
}
USanwuJsonObject* USanwuBlueprintFunctionLibrary::CreateJsonObject()
{
	//����Json����
	USanwuJsonObject* json;
	json = ConstructObject<USanwuJsonObject>(USanwuJsonObject::StaticClass());
	return json;
}