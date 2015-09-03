#pragma once

#define PLAYER_CLOTHING_SLOTS 18

#define TORSO_CLOTHING_MAX 68
#define HAIR_CLOTHING_MAX 33
#define LEGS_CLOTHING_MAX 45
#define SHOES_CLOTHING_MAX 38
#define LEFT_UPPER_ARM_CLOTHING_MAX 3
#define LEFT_LOWER_ARM_CLOTHING_MAX 4
#define RIGHT_UPPER_ARM_CLOTHING_MAX 4
#define RIGHT_LOWER_ARM_CLOTHING_MAX 4
#define BACK_TOP_CLOTHING_MAX 7
#define LEFT_CHEST_CLOTHING_MAX 6
#define RIGHT_CHEST_CLOTHING_MAX 7
#define STOMACH_CLOTHING_MAX 7
#define LOWER_BACK_CLOTHING_MAX 6
#define CHAINS_CLOTHING_MAX 12
#define WATCHES_CLOTHING_MAX 12
#define GLASSES_CLOTHING_MAX 17
#define HATS_CLOTHING_MAX 57
#define SPECIAL_CLOTHING_MAX 9

struct SPlayerClothingType
{
	char szName [ 32 ];
};

struct SPlayerClothing
{
	char szTexture [ 32 ];
	char szModel [ 24 ];
	unsigned __int8 uiBodyPart;
	char szName [ 64 ];
};

extern SPlayerClothingType sClothesNames [ PLAYER_CLOTHING_SLOTS ];

extern SPlayerClothing sTorsoClothing [ TORSO_CLOTHING_MAX ];
extern SPlayerClothing sHairClothing [ HAIR_CLOTHING_MAX ];
extern SPlayerClothing sLegsClothing [ LEGS_CLOTHING_MAX ];
extern SPlayerClothing sShoesClothing [ SHOES_CLOTHING_MAX ];
extern SPlayerClothing sLeftLowerArmClothing [ LEFT_UPPER_ARM_CLOTHING_MAX ];
extern SPlayerClothing sLeftUpperArmClothing [ LEFT_LOWER_ARM_CLOTHING_MAX ];
extern SPlayerClothing sRightUpperArmClothing [ RIGHT_UPPER_ARM_CLOTHING_MAX ];
extern SPlayerClothing sRightLowerArmClothing [ RIGHT_LOWER_ARM_CLOTHING_MAX ];
extern SPlayerClothing sBackTopClothing [ BACK_TOP_CLOTHING_MAX ];
extern SPlayerClothing sLeftChestClothing [ LEFT_CHEST_CLOTHING_MAX ];
extern SPlayerClothing sRightChestClothing [ RIGHT_CHEST_CLOTHING_MAX ];
extern SPlayerClothing sStomachClothing [ STOMACH_CLOTHING_MAX ];
extern SPlayerClothing sLowerBackClothing [ LOWER_BACK_CLOTHING_MAX ];
extern SPlayerClothing sChainsClothing [ CHAINS_CLOTHING_MAX ];
extern SPlayerClothing sWatchesClothing [ WATCHES_CLOTHING_MAX ];
extern SPlayerClothing sGlassesClothing [ GLASSES_CLOTHING_MAX ];
extern SPlayerClothing sHatsClothing [ HATS_CLOTHING_MAX ];
extern SPlayerClothing sSpecialClothing [ SPECIAL_CLOTHING_MAX ];