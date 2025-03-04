#pragma once

namespace stats {
namespace hook {
void hook();
void unhook();

namespace player {
void hookPlayerAddEffect();
void hookPlayerBlockUsingShield();
void hookPlayerDropItem();
void hookPlayerStartSleep();
void hookServerPlayerOpenTrading();
void hookPlayerUseItem();
void hookPlayerInteractActor();
void hookPlayerBreedAnimal();
void hookPlayerUseBucketItemOnFish();
void hookPlayerRiding();
void hookPlayerAuthInput();
} // namespace player

namespace mob {
void hookMobGetDamageAfterResistanceEffect();
}

namespace block {
void hookBlockUse();
void hookBlockOnFallOn();
void hookCakeRemoveSlice();
void hookCauldronBlockUseInventory();
void hookCauldronBlockClean();
void hookFlowerPotBlockPlaceFlower();
void hookNoteBlockAttack();
void hookProjectileHitTargetBlock();
} // namespace block

namespace item {
// void hookFishingRodUsed();
void hookItemStackBaseHurtAndBroken();
} // namespace item

namespace container {
void hookLevelContainerChanged();
}

namespace inventory {
void hookItemStackRequestActionHandlerTransfer();
}

} // namespace hook
} // namespace stats