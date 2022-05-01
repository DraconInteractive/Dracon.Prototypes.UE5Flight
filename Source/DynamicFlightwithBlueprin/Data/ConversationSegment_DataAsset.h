// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ConversationSegment_DataAsset.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class DYNAMICFLIGHTWITHBLUEPRIN_API UConversationSegment_DataAsset : public UDataAsset
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString ID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString Text;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UConversationSegment_DataAsset *Next;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float TypeSpeed;

};
