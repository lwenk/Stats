#include "mod/Hook/Hook.h"

#include "mod/MyMod.h"

namespace stats::hook {
void hook() {
    player::hookPlayerAddEffect();
    player::hookPlayerBlockUsingShield();
    player::hookPlayerDropItem();
    player::hookPlayerStartSleep();
    player::hookServerPlayerOpenTrading();
    player::hookPlayerUseItem();
    player::hookPlayerBreedAnimal();

    mob::hookMobGetDamageAfterResistanceEffect();

    block::hookBlockUse();
    block::hookBlockOnFallOn();
    block::hookCakeRemoveSlice();
    block::hookCauldronBlockUseInventory();
    block::hookCauldronBlockClean();
    block::hookFlowerPotBlockPlaceFlower();
    block::hookNoteBlockAttack();
    block::hookProjectileHitTargetBlock();

    // item::hookFishingRodUsed();
    item::hookItemStackBaseHurtAndBroken();

    container::hookLevelContainerChanged();

    // test::hookTest();
}

void unhook() {}

ll::io::Logger& getLogger() { return lk::MyMod::getInstance().getSelf().getLogger(); }
} // namespace stats::hook