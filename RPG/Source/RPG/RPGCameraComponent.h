// Developed by FrigidCoffin

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "RPGCameraComponent.generated.h"

/**
 * 
 */
UCLASS(meta = (BlueprintSpawnableComponent))
class RPG_API URPGCameraComponent : public UCameraComponent
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera Properties")
	float CameraPitch;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera Properties")
	float CameraDistance;
	virtual void GetCameraView(float DeltaTime, FMinimalViewInfo& DesiredView) override;
};
