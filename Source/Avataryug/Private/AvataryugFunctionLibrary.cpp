// Fill out your copyright notice in the Description page of Project Settings.

#include "AvataryugFunctionLibrary.h"

void UAvataryugFunctionLibrary::LinearColorToHex(const FLinearColor &Color, FString &OutHex)
{
    OutHex = "#" + Color.ToFColor(true).ToHex().LeftChop(2);
}

void UAvataryugFunctionLibrary::LinearColorToRGB(const FLinearColor &Color, int &OutR, int &OutG, int &OutB)
{
    FColor ConvertColor = Color.ToFColor(true);
    OutR = ConvertColor.R;
    OutG = ConvertColor.G;
    OutB = ConvertColor.B;
}

void UAvataryugFunctionLibrary::LinearColorToHSV(const FLinearColor &Color, float &OutH, float &OutS, float &OutV)
{
    FColor ConvertColor = Color.ToFColor(true);
    const float RGBMin = FMath::Min3(ConvertColor.R, ConvertColor.G, ConvertColor.B);
    const float RGBMax = FMath::Max3(ConvertColor.R, ConvertColor.G, ConvertColor.B);
    const float RGBRange = RGBMax - RGBMin;

    OutH = (RGBMax == RGBMin ? 0.0f : RGBMax == (float)ConvertColor.R ? FMath::Fmod((((float)(ConvertColor.G - ConvertColor.B) / RGBRange) * 60.0f) + 360.0f, 360.0f)
                                  : RGBMax == (float)ConvertColor.G   ? (((float)(ConvertColor.B - ConvertColor.R) / RGBRange) * 60.0f) + 120.0f
                                  : RGBMax == (float)ConvertColor.B   ? (((float)(ConvertColor.R - ConvertColor.G) / RGBRange) * 60.0f) + 240.0f
                                                                      : 0.0f);
    OutS = (RGBMax == 0.0f ? 0.0f : RGBRange / RGBMax);
    OutV = RGBMax / 255.f;
}

void UAvataryugFunctionLibrary::LinearColorToCMYK(const FLinearColor &Color, float &OutC, float &OutM, float &OutY, float &OutK)
{
    FColor ConvertColor = Color.ToFColor(true);
    const float Max = FMath::Max3(ConvertColor.R, ConvertColor.G, ConvertColor.B);

    OutC = (Max - (float)ConvertColor.R) / Max;
    OutM = (Max - (float)ConvertColor.G) / Max;
    OutY = (Max - (float)ConvertColor.B) / Max;
    OutK = 1.f - Max / 255.f;
}

void UAvataryugFunctionLibrary::LinearColorToHSL(const FLinearColor &Color, float &OutH, float &OutS, float &OutL)
{
    FColor ConvertColor = Color.ToFColor(true);
    const float RGBMin = FMath::Min3(ConvertColor.R, ConvertColor.G, ConvertColor.B);
    const float RGBMax = FMath::Max3(ConvertColor.R, ConvertColor.G, ConvertColor.B);
    const float RGBRange = RGBMax - RGBMin;
    const float RGBSum = RGBMax + RGBMin;

    OutH = (RGBMax == RGBMin ? 0.0f : RGBMax == (float)ConvertColor.R ? FMath::Fmod((((float)(ConvertColor.G - ConvertColor.B) / RGBRange) * 60.0f) + 360.0f, 360.0f)
                                  : RGBMax == (float)ConvertColor.G   ? (((float)(ConvertColor.B - ConvertColor.R) / RGBRange) * 60.0f) + 120.0f
                                  : RGBMax == (float)ConvertColor.B   ? (((float)(ConvertColor.R - ConvertColor.G) / RGBRange) * 60.0f) + 240.0f
                                                                      : 0.0f);
    OutS = RGBMax == 0.0f ? 0.0f : RGBRange / (255.0f - FMath::Abs(RGBSum - 255.0f));
    OutL = RGBSum / 510.0f;
}

void UAvataryugFunctionLibrary::HexToLinearColor(const FString &Hex, FLinearColor &OutColor)
{
    OutColor = FLinearColor::FromSRGBColor(FColor::FromHex(Hex));
}

void UAvataryugFunctionLibrary::RGBToLinearColor(const int R, const int G, const int B, FLinearColor &OutColor)
{
    OutColor = FLinearColor::FromSRGBColor(FColor(FMath::Clamp(R, 0, 255), FMath::Clamp(G, 0, 255), FMath::Clamp(B, 0, 255)));
}

void UAvataryugFunctionLibrary::HSVToLinearColor(const float H, const float S, const float V, FLinearColor &OutColor)
{
    const float HClamp = FMath::Clamp(H, 0.0f, 360.0f);
    const float SClamp = FMath::Clamp(S, 0.0f, 1.0f);
    const float VClamp = FMath::Clamp(V, 0.0f, 1.0f);
    const float HDiv60 = HClamp / 60.0f;
    const float HDiv60_Floor = floorf(HDiv60);
    const float HDiv60_Fraction = HDiv60 - HDiv60_Floor;
    const float RGBValues[4] = {
        VClamp * 255.f,
        VClamp * (1.0f - SClamp) * 255.f,
        VClamp * (1.0f - (HDiv60_Fraction * SClamp)) * 255.f,
        VClamp * (1.0f - ((1.0f - HDiv60_Fraction) * SClamp)) * 255.f};
    const uint32 RGBSwizzle[6][3] = {
        {0, 3, 1},
        {2, 0, 1},
        {1, 0, 3},
        {1, 2, 0},
        {3, 1, 0},
        {0, 1, 2},
    };
    const uint32 SwizzleIndex = ((uint32)HDiv60_Floor) % 6;

    OutColor = FLinearColor::FromSRGBColor(FColor(RGBValues[RGBSwizzle[SwizzleIndex][0]],
                                                  RGBValues[RGBSwizzle[SwizzleIndex][1]],
                                                  RGBValues[RGBSwizzle[SwizzleIndex][2]]));
}

void UAvataryugFunctionLibrary::CMYKToLinearColor(const float C, const float M, const float Y, const float K, FLinearColor &OutColor)
{
    const float R = 255.f * (1 - FMath::Clamp(C, 0.f, 1.0f)) * (1 - FMath::Clamp(K, 0.f, 1.0f));
    const float G = 255.f * (1 - FMath::Clamp(M, 0.f, 1.0f)) * (1 - FMath::Clamp(K, 0.f, 1.0f));
    const float B = 255.f * (1 - FMath::Clamp(Y, 0.f, 1.0f)) * (1 - FMath::Clamp(K, 0.f, 1.0f));

    OutColor = FLinearColor::FromSRGBColor(FColor(R, G, B));
}

void UAvataryugFunctionLibrary::HSLToLinearColor(const float H, const float S, const float L, FLinearColor &OutColor)
{
    const float HClamp = FMath::Clamp(H, 0.0f, 360.0f);
    const float SClamp = FMath::Clamp(S, 0.0f, 1.0f);
    const float LClamp = FMath::Clamp(L, 0.0f, 1.0f);
    const float CHalf = (1.0f - FMath::Abs(2.0f * LClamp - 1.0f)) * SClamp / 2.0f;
    const float HDiv60 = HClamp / 60.0f;
    const float HDiv60_Floor = floorf(HDiv60);
    const float HDiv60_Fraction_Double = (HDiv60 - HDiv60_Floor) * 2.0f;
    const float RGBValues[4] = {
        (LClamp + CHalf) * 255.f,
        (LClamp - CHalf) * 255.f,
        (LClamp + CHalf * (1.0f - HDiv60_Fraction_Double)) * 255.f,
        (LClamp + CHalf * (HDiv60_Fraction_Double - 1.0f)) * 255.f};
    const uint32 RGBSwizzle[6][3] = {
        {0, 3, 1},
        {2, 0, 1},
        {1, 0, 3},
        {1, 2, 0},
        {3, 1, 0},
        {0, 1, 2},
    };
    const uint32 SwizzleIndex = ((uint32)HDiv60_Floor) % 6;

    OutColor = FLinearColor::FromSRGBColor(FColor(RGBValues[RGBSwizzle[SwizzleIndex][0]],
                                                  RGBValues[RGBSwizzle[SwizzleIndex][1]],
                                                  RGBValues[RGBSwizzle[SwizzleIndex][2]]));
}
