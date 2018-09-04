#pragma once

// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Foliage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Foliage.FoliageInstancedStaticMeshComponent
// 0x0020 (0x08F0 - 0x08D0)
class UFoliageInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x08D0(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnInstanceTakeRadialDamage;                               // 0x08D8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData01[0x8];                                       // 0x08E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Foliage.FoliageInstancedStaticMeshComponent");
		return ptr;
	}

};


// Class Foliage.FoliageStatistics
// 0x0000 (0x0028 - 0x0028)
class UFoliageStatistics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Foliage.FoliageStatistics");
		return ptr;
	}


	static int FoliageOverlappingSphereCount(class UObject* WorldContextObject, class UStaticMesh* StaticMesh, const struct FVector& CenterPosition, float Radius);
	static int FoliageOverlappingBoxCount(class UObject* WorldContextObject, class UStaticMesh* StaticMesh, const struct FBox& Box);
};


// Class Foliage.FoliageType
// 0x03E8 (0x0410 - 0x0028)
class UFoliageType : public UObject
{
public:
	struct FGuid                                       UpdateGuid;                                               // 0x0028(0x0010) (CPF_IsPlainOldData)
	float                                              Density;                                                  // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DensityAdjustmentFactor;                                  // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Radius;                                                   // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EFoliageScaling                                    Scaling;                                                  // 0x0044(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	struct FFloatInterval                              ScaleX;                                                   // 0x0048(0x0008) (CPF_Edit)
	struct FFloatInterval                              ScaleY;                                                   // 0x0050(0x0008) (CPF_Edit)
	struct FFloatInterval                              ScaleZ;                                                   // 0x0058(0x0008) (CPF_Edit)
	struct FFoliageVertexColorChannelMask              VertexColorMaskByChannel[0x4];                            // 0x0060(0x000C) (CPF_Edit)
	TEnumAsByte<EFoliageVertexColorMask>               VertexColorMask;                                          // 0x0090(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0091(0x0003) MISSED OFFSET
	float                                              VertexColorMaskThreshold;                                 // 0x0094(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	unsigned char                                      VertexColorMaskInvert : 1;                                // 0x0098(0x0001) (CPF_Deprecated)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0099(0x0003) MISSED OFFSET
	struct FFloatInterval                              ZOffset;                                                  // 0x009C(0x0008) (CPF_Edit)
	unsigned char                                      AlignToNormal : 1;                                        // 0x00A4(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00A5(0x0003) MISSED OFFSET
	float                                              AlignMaxAngle;                                            // 0x00A8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      RandomYaw : 1;                                            // 0x00AC(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData04[0x3];                                       // 0x00AD(0x0003) MISSED OFFSET
	float                                              RandomPitchAngle;                                         // 0x00B0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FFloatInterval                              GroundSlopeAngle;                                         // 0x00B4(0x0008) (CPF_Edit)
	struct FFloatInterval                              Height;                                                   // 0x00BC(0x0008) (CPF_Edit)
	unsigned char                                      UnknownData05[0x4];                                       // 0x00C4(0x0004) MISSED OFFSET
	TArray<struct FName>                               LandscapeLayers;                                          // 0x00C8(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FName                                       LandscapeLayer;                                           // 0x00D8(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	unsigned char                                      CollisionWithWorld : 1;                                   // 0x00E0(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData06[0x3];                                       // 0x00E1(0x0003) MISSED OFFSET
	struct FVector                                     CollisionScale;                                           // 0x00E4(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	float                                              MinimumLayerWeight;                                       // 0x00F0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FBoxSphereBounds                            MeshBounds;                                               // 0x00F4(0x001C) (CPF_IsPlainOldData)
	struct FVector                                     LowBoundOriginRadius;                                     // 0x0110(0x000C) (CPF_IsPlainOldData)
	TEnumAsByte<EComponentMobility>                    Mobility;                                                 // 0x011C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x011D(0x0003) MISSED OFFSET
	struct FInt32Interval                              CullDistance;                                             // 0x0120(0x0008) (CPF_Edit)
	unsigned char                                      bEnableStaticLighting : 1;                                // 0x0128(0x0001) (CPF_Deprecated)
	unsigned char                                      CastShadow : 1;                                           // 0x0128(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bAffectDynamicIndirectLighting : 1;                       // 0x0128(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bAffectDistanceFieldLighting : 1;                         // 0x0128(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bCastDynamicShadow : 1;                                   // 0x0128(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bCastStaticShadow : 1;                                    // 0x0128(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bCastShadowAsTwoSided : 1;                                // 0x0128(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bReceivesDecals : 1;                                      // 0x0128(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bOverrideLightMapRes : 1;                                 // 0x0129(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      UnknownData08[0x2];                                       // 0x012A(0x0002) MISSED OFFSET
	int                                                OverriddenLightMapRes;                                    // 0x012C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	ELightmapType                                      LightmapType;                                             // 0x0130(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0131(0x0003) MISSED OFFSET
	unsigned char                                      bUseAsOccluder : 1;                                       // 0x0134(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      UnknownData10[0xB];                                       // 0x0135(0x000B) MISSED OFFSET
	struct FBodyInstance                               BodyInstance;                                             // 0x0140(0x0200) (CPF_Edit)
	TEnumAsByte<EHasCustomNavigableGeometry>           CustomNavigableGeometry;                                  // 0x0340(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLightingChannels                           LightingChannels;                                         // 0x0341(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      UnknownData11[0x2];                                       // 0x0342(0x0002) MISSED OFFSET
	unsigned char                                      bRenderCustomDepth : 1;                                   // 0x0344(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      UnknownData12[0x3];                                       // 0x0345(0x0003) MISSED OFFSET
	int                                                CustomDepthStencilValue;                                  // 0x0348(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CollisionRadius;                                          // 0x034C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ShadeRadius;                                              // 0x0350(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumSteps;                                                 // 0x0354(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InitialSeedDensity;                                       // 0x0358(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AverageSpreadDistance;                                    // 0x035C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SpreadVariance;                                           // 0x0360(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SeedsPerStep;                                             // 0x0364(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                DistributionSeed;                                         // 0x0368(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxInitialSeedOffset;                                     // 0x036C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bCanGrowInShade;                                          // 0x0370(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bSpawnsInShade;                                           // 0x0371(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData13[0x2];                                       // 0x0372(0x0002) MISSED OFFSET
	float                                              MaxInitialAge;                                            // 0x0374(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxAge;                                                   // 0x0378(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OverlapPriority;                                          // 0x037C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FFloatInterval                              ProceduralScale;                                          // 0x0380(0x0008) (CPF_Edit)
	struct FRuntimeFloatCurve                          ScaleCurve;                                               // 0x0388(0x0078) (CPF_Edit)
	int                                                ChangeCount;                                              // 0x0400(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      ReapplyDensity : 1;                                       // 0x0404(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      ReapplyRadius : 1;                                        // 0x0404(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      ReapplyAlignToNormal : 1;                                 // 0x0404(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      ReapplyRandomYaw : 1;                                     // 0x0404(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      ReapplyScaling : 1;                                       // 0x0404(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      ReapplyScaleX : 1;                                        // 0x0404(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      ReapplyScaleY : 1;                                        // 0x0404(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      ReapplyScaleZ : 1;                                        // 0x0404(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      ReapplyRandomPitchAngle : 1;                              // 0x0405(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      ReapplyGroundSlope : 1;                                   // 0x0405(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      ReapplyHeight : 1;                                        // 0x0405(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      ReapplyLandscapeLayers : 1;                               // 0x0405(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      ReapplyZOffset : 1;                                       // 0x0405(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      ReapplyCollisionWithWorld : 1;                            // 0x0405(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      ReapplyVertexColorMask : 1;                               // 0x0405(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      bEnableDensityScaling : 1;                                // 0x0405(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData14[0xA];                                       // 0x0406(0x000A) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Foliage.FoliageType");
		return ptr;
	}

};


// Class Foliage.FoliageType_InstancedStaticMesh
// 0x0020 (0x0430 - 0x0410)
class UFoliageType_InstancedStaticMesh : public UFoliageType
{
public:
	TArray<class UMaterialInterface*>                  OverrideMaterials;                                        // 0x0410(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	class UClass*                                      ComponentClass;                                           // 0x0420(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0428(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Foliage.FoliageType_InstancedStaticMesh");
		return ptr;
	}

};


// Class Foliage.InstancedFoliageActor
// 0x0050 (0x0368 - 0x0318)
class AInstancedFoliageActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0318(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Foliage.InstancedFoliageActor");
		return ptr;
	}

};


// Class Foliage.InteractiveFoliageActor
// 0x0060 (0x0388 - 0x0328)
class AInteractiveFoliageActor : public AStaticMeshActor
{
public:
	class UCapsuleComponent*                           CapsuleComponent;                                         // 0x0328(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FVector                                     TouchingActorEntryPosition;                               // 0x0330(0x000C) (CPF_Transient, CPF_IsPlainOldData)
	struct FVector                                     FoliageVelocity;                                          // 0x033C(0x000C) (CPF_Transient, CPF_IsPlainOldData)
	struct FVector                                     FoliageForce;                                             // 0x0348(0x000C) (CPF_Transient, CPF_IsPlainOldData)
	struct FVector                                     FoliagePosition;                                          // 0x0354(0x000C) (CPF_Transient, CPF_IsPlainOldData)
	float                                              FoliageDamageImpulseScale;                                // 0x0360(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FoliageTouchImpulseScale;                                 // 0x0364(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FoliageStiffness;                                         // 0x0368(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FoliageStiffnessQuadratic;                                // 0x036C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FoliageDamping;                                           // 0x0370(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxDamageImpulse;                                         // 0x0374(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxTouchImpulse;                                          // 0x0378(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxForce;                                                 // 0x037C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Mass;                                                     // 0x0380(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0384(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Foliage.InteractiveFoliageActor");
		return ptr;
	}


	void CapsuleTouched(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& OverlapInfo);
};


// Class Foliage.InteractiveFoliageComponent
// 0x0010 (0x0700 - 0x06F0)
class UInteractiveFoliageComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x06F0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Foliage.InteractiveFoliageComponent");
		return ptr;
	}

};


// Class Foliage.ProceduralFoliageBlockingVolume
// 0x0008 (0x0358 - 0x0350)
class AProceduralFoliageBlockingVolume : public AVolume
{
public:
	class AProceduralFoliageVolume*                    ProceduralFoliageVolume;                                  // 0x0350(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Foliage.ProceduralFoliageBlockingVolume");
		return ptr;
	}

};


// Class Foliage.ProceduralFoliageComponent
// 0x0028 (0x0118 - 0x00F0)
class UProceduralFoliageComponent : public UActorComponent
{
public:
	class UProceduralFoliageSpawner*                   FoliageSpawner;                                           // 0x00F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TileOverlap;                                              // 0x00F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET
	class AVolume*                                     SpawningVolume;                                           // 0x0100(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGuid                                       ProceduralGuid;                                           // 0x0108(0x0010) (CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Foliage.ProceduralFoliageComponent");
		return ptr;
	}

};


// Class Foliage.ProceduralFoliageSpawner
// 0x0048 (0x0070 - 0x0028)
class UProceduralFoliageSpawner : public UObject
{
public:
	int                                                randomSeed;                                               // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TileSize;                                                 // 0x002C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumUniqueTiles;                                           // 0x0030(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinimumQuadTreeSize;                                      // 0x0034(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	TArray<struct FFoliageTypeObject>                  FoliageTypes;                                             // 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	bool                                               bNeedsSimulation;                                         // 0x0050(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1F];                                      // 0x0051(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Foliage.ProceduralFoliageSpawner");
		return ptr;
	}


	void Simulate(int NumSteps);
};


// Class Foliage.ProceduralFoliageTile
// 0x0130 (0x0158 - 0x0028)
class UProceduralFoliageTile : public UObject
{
public:
	class UProceduralFoliageSpawner*                   FoliageSpawner;                                           // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0030(0x00A0) MISSED OFFSET
	TArray<struct FProceduralFoliageInstance>          InstancesArray;                                           // 0x00D0(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData01[0x78];                                      // 0x00E0(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Foliage.ProceduralFoliageTile");
		return ptr;
	}

};


// Class Foliage.ProceduralFoliageVolume
// 0x0008 (0x0358 - 0x0350)
class AProceduralFoliageVolume : public AVolume
{
public:
	class UProceduralFoliageComponent*                 ProceduralComponent;                                      // 0x0350(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Foliage.ProceduralFoliageVolume");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
