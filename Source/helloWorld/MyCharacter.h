#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MyCharacter.generated.h"

class UInputComponent;
class UCameraComponent;

UCLASS()
class HELLOWORLD_API AMyCharacter : public ACharacter
{
	GENERATED_BODY()
		UPROPERTY(VisibleAnywhere) UCameraComponent* Camera;

public:
	AMyCharacter();

protected:
	virtual void BeginPlay() override;

public:
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
