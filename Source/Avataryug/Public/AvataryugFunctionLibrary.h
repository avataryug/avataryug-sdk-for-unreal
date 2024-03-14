// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AvataryugFunctionLibrary.generated.h"

/**
 *
 */
UCLASS()
class AVATARYUG_API UAvataryugFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Linear Color to Hex", Keywords = "Color Conversion LinearColor Hex"), Category = "Color Picker|Conversion")
	static void LinearColorToHex(const FLinearColor &Color, FString &OutHex);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Linear Color to RGB", Keywords = "Color Conversion LinearColor RGB"), Category = "Color Picker|Conversion")
	static void LinearColorToRGB(const FLinearColor &Color, int &OutR, int &OutG, int &OutB);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Linear Color to HSV", Keywords = "Color Conversion LinearColor HSV"), Category = "Color Picker|Conversion")
	static void LinearColorToHSV(const FLinearColor &Color, float &OutH, float &OutS, float &OutV);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Linear Color to CMYK", Keywords = "Color Conversion LinearColor CMYK"), Category = "Color Picker|Conversion")
	static void LinearColorToCMYK(const FLinearColor &Color, float &OutC, float &OutM, float &OutY, float &OutK);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Linear Color to HSL", Keywords = "Color Conversion LinearColor HSL"), Category = "Color Picker|Conversion")
	static void LinearColorToHSL(const FLinearColor &Color, float &OutH, float &OutS, float &OutL);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Hex to Linear Color", Keywords = "Color Conversion LinearColor Hex"), Category = "Color Picker|Conversion")
	static void HexToLinearColor(const FString &Hex, FLinearColor &OutColor);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "RGB to Linear Color", Keywords = "Color Conversion LinearColor RGB"), Category = "Color Picker|Conversion")
	static void RGBToLinearColor(const int R, const int G, const int B, FLinearColor &OutColor);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "HSV to Linear Color", Keywords = "Color Conversion LinearColor HSV"), Category = "Color Picker|Conversion")
	static void HSVToLinearColor(const float H, const float S, const float V, FLinearColor &OutColor);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "CMYK to Linear Color", Keywords = "Color Conversion LinearColor CMYK"), Category = "Color Picker|Conversion")
	static void CMYKToLinearColor(const float C, const float M, const float Y, const float K, FLinearColor &OutColor);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "HSL to Linear Color", Keywords = "Color Conversion LinearColor HSL"), Category = "Color Picker|Conversion")
	static void HSLToLinearColor(const float H, const float S, const float L, FLinearColor &OutColor);
};
