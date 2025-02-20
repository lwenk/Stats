#pragma once

#include <map>
#include <string>
#include <unordered_map>

namespace stats {
enum class StatsDataType { custom, mined, broken, crafted, used, picked_up, dropped, killed, killed_by };

static const std::map<StatsDataType, std::string> StatsDataTypeMap = {
    {StatsDataType::custom,    "minecraft:custom"   },
    {StatsDataType::mined,     "minecraft:mined"    },
    {StatsDataType::broken,    "minecraft:broken"   },
    {StatsDataType::crafted,   "minecraft:crafted"  },
    {StatsDataType::used,      "minecraft:used"     },
    {StatsDataType::picked_up, "minecraft:picked_up"},
    {StatsDataType::dropped,   "minecraft:dropped"  },
    {StatsDataType::killed,    "minecraft:killed"   },
    {StatsDataType::killed_by, "minecraft:killed_by"},
};

typedef std::unordered_map<std::string, int> StatsDataMap;
struct PlayerInfo {
    std::string uuid;
    std::string xuid;
    std::string name;
};
struct StatsData {
    StatsDataMap custom;
    StatsDataMap mined;
    StatsDataMap broken;
    StatsDataMap crafted;
    StatsDataMap used;
    StatsDataMap picked_up;
    StatsDataMap dropped;
    StatsDataMap killed;
    StatsDataMap killed_by;
};
enum struct CustomType {
    animals_bred,
    clean_armor,
    clean_banner,
    open_barrel,
    bell_ring,
    eat_cake_slice,
    fill_cauldron,
    open_chest,
    damage_absorbed,
    damage_blocked_by_shield,
    damage_dealt,
    damage_dealt_absorbed,
    damage_dealt_resisted,
    damage_resisted,
    damage_taken,
    inspect_dispenser,
    boat_one_cm,
    aviate_one_cm,
    horse_one_cm,
    minecart_one_cm,
    pig_one_cm,
    strider_one_cm,
    climb_one_cm,
    crouch_one_cm,
    fall_one_cm,
    fly_one_cm,
    sprint_one_cm,
    swim_one_cm,
    walk_one_cm,
    walk_on_water_one_cm,
    walk_under_water_one_cm,
    inspect_dropper,
    open_enderchest,
    fish_caught,
    leave_game,
    inspect_hopper,
    interact_with_anvil,
    interact_with_beacon,
    interact_with_blast_furnace,
    interact_with_brewingstand,
    interact_with_campfire,
    interact_with_cartography_table,
    interact_with_crafting_table,
    interact_with_furnace,
    interact_with_grindstone,
    interact_with_lectern,
    interact_with_loom,
    interact_with_smithing_table,
    interact_with_smoker,
    interact_with_stonecutter,
    drop,
    enchant_item,
    jump,
    mob_kills,
    play_record,
    play_noteblock,
    tune_noteblock,
    deaths,
    pot_flower,
    player_kills,
    raid_trigger,
    raid_win,
    clean_shulker_box,
    open_shulker_box,
    time_since_death,
    time_since_rest,
    sneak_time,
    talked_to_villager,
    target_hit,
    play_time,
    total_world_time,
    sleep_in_bed,
    traded_with_villager,
    trigger_trapped_chest,
    use_cauldron
};
static const std::map<CustomType, std::string> CustomTypeMap = {
    {CustomType::animals_bred,                    "minecraft:animals_bred"                   },
    {CustomType::clean_armor,                     "minecraft:clean_armor"                    },
    {CustomType::clean_banner,                    "minecraft:clean_banner"                   },
    {CustomType::open_barrel,                     "minecraft:open_barrel"                    },
    {CustomType::bell_ring,                       "minecraft:bell_ring"                      },
    {CustomType::eat_cake_slice,                  "minecraft:eat_cake_slice"                 },
    {CustomType::fill_cauldron,                   "minecraft:fill_cauldron"                  },
    {CustomType::open_chest,                      "minecraft:open_chest"                     },
    {CustomType::damage_absorbed,                 "minecraft:damage_absorbed"                },
    {CustomType::damage_blocked_by_shield,        "minecraft:damage_blocked_by_shield"       },
    {CustomType::damage_dealt,                    "minecraft:damage_dealt"                   },
    {CustomType::damage_dealt_absorbed,           "minecraft:damage_dealt_absorbed"          },
    {CustomType::damage_dealt_resisted,           "minecraft:damage_dealt_resisted"          },
    {CustomType::damage_resisted,                 "minecraft:damage_resisted"                },
    {CustomType::damage_taken,                    "minecraft:damage_taken"                   },
    {CustomType::inspect_dispenser,               "minecraft:inspect_dispenser"              },
    {CustomType::boat_one_cm,                     "minecraft:boat_one_cm"                    },
    {CustomType::aviate_one_cm,                   "minecraft:aviate_one_cm"                  },
    {CustomType::horse_one_cm,                    "minecraft:horse_one_cm"                   },
    {CustomType::minecart_one_cm,                 "minecraft:minecart_one_cm"                },
    {CustomType::pig_one_cm,                      "minecraft:pig_one_cm"                     },
    {CustomType::strider_one_cm,                  "minecraft:strider_one_cm"                 },
    {CustomType::climb_one_cm,                    "minecraft:climb_one_cm"                   },
    {CustomType::crouch_one_cm,                   "minecraft:crouch_one_cm"                  },
    {CustomType::fall_one_cm,                     "minecraft:fall_one_cm"                    },
    {CustomType::fly_one_cm,                      "minecraft:fly_one_cm"                     },
    {CustomType::sprint_one_cm,                   "minecraft:sprint_one_cm"                  },
    {CustomType::swim_one_cm,                     "minecraft:swim_one_cm"                    },
    {CustomType::walk_one_cm,                     "minecraft:walk_one_cm"                    },
    {CustomType::walk_on_water_one_cm,            "minecraft:walk_on_water_one_cm"           },
    {CustomType::walk_under_water_one_cm,         "minecraft:walk_under_water_one_cm"        },
    {CustomType::inspect_dropper,                 "minecraft:inspect_dropper"                },
    {CustomType::open_enderchest,                 "minecraft:open_enderchest"                },
    {CustomType::fish_caught,                     "minecraft:fish_caught"                    },
    {CustomType::leave_game,                      "minecraft:leave_game"                     },
    {CustomType::inspect_hopper,                  "minecraft:inspect_hopper"                 },
    {CustomType::interact_with_anvil,             "minecraft:interact_with_anvil"            },
    {CustomType::interact_with_beacon,            "minecraft:interact_with_beacon"           },
    {CustomType::interact_with_blast_furnace,     "minecraft:interact_with_blast_furnace"    },
    {CustomType::interact_with_brewingstand,      "minecraft:interact_with_brewingstand"     },
    {CustomType::interact_with_campfire,          "minecraft:interact_with_campfire"         },
    {CustomType::interact_with_cartography_table, "minecraft:interact_with_cartography_table"},
    {CustomType::interact_with_crafting_table,    "minecraft:interact_with_crafting_table"   },
    {CustomType::interact_with_furnace,           "minecraft:interact_with_furnace"          },
    {CustomType::interact_with_grindstone,        "minecraft:interact_with_grindstone"       },
    {CustomType::interact_with_lectern,           "minecraft:interact_with_lectern"          },
    {CustomType::interact_with_loom,              "minecraft:interact_with_loom"             },
    {CustomType::interact_with_smithing_table,    "minecraft:interact_with_smithing_table"   },
    {CustomType::interact_with_smoker,            "minecraft:interact_with_smoker"           },
    {CustomType::interact_with_stonecutter,       "minecraft:interact_with_stonecutter"      },
    {CustomType::drop,                            "minecraft:drop"                           },
    {CustomType::enchant_item,                    "minecraft:enchant_item"                   },
    {CustomType::jump,                            "minecraft:jump"                           },
    {CustomType::mob_kills,                       "minecraft:mob_kills"                      },
    {CustomType::play_record,                     "minecraft:play_record"                    },
    {CustomType::play_noteblock,                  "minecraft:play_noteblock"                 },
    {CustomType::tune_noteblock,                  "minecraft:tune_noteblock"                 },
    {CustomType::deaths,                          "minecraft:deaths"                         },
    {CustomType::pot_flower,                      "minecraft:pot_flower"                     },
    {CustomType::player_kills,                    "minecraft:player_kills"                   },
    {CustomType::raid_trigger,                    "minecraft:raid_trigger"                   },
    {CustomType::raid_win,                        "minecraft:raid_win"                       },
    {CustomType::clean_shulker_box,               "minecraft:clean_shulker_box"              },
    {CustomType::open_shulker_box,                "minecraft:open_shulker_box"               },
    {CustomType::time_since_death,                "minecraft:time_since_death"               },
    {CustomType::time_since_rest,                 "minecraft:time_since_rest"                },
    {CustomType::sneak_time,                      "minecraft:sneak_time"                     },
    {CustomType::talked_to_villager,              "minecraft:talked_to_villager"             },
    {CustomType::target_hit,                      "minecraft:target_hit"                     },
    {CustomType::play_time,                       "minecraft:play_time"                      },
    {CustomType::total_world_time,                "minecraft:total_world_time"               },
    {CustomType::sleep_in_bed,                    "minecraft:sleep_in_bed"                   },
    {CustomType::traded_with_villager,            "minecraft:traded_with_villager"           },
    {CustomType::trigger_trapped_chest,           "minecraft:trigger_trapped_chest"          },
    {CustomType::use_cauldron,                    "minecraft:use_cauldron"                   }
};
static const std::map<std::string, CustomType> CustomInteractBlockMap = {
    // 交互工作方块 营火 工作台无法通过监听方块交互检测到
    {"minecraft:anvil",                  CustomType::interact_with_anvil            },
    {"minecraft:beacon",                 CustomType::interact_with_beacon           },
    {"minecraft:blast_furnace",          CustomType::interact_with_blast_furnace    },
    {"minecraft:brewing_stand",          CustomType::interact_with_brewingstand     },
    {"minecraft:campfire",               CustomType::interact_with_campfire         },
    {"minecraft:cartography_table",      CustomType::interact_with_cartography_table},
    {"minecraft:crafting_table",         CustomType::interact_with_crafting_table   },
    {"minecraft:furnace",                CustomType::interact_with_furnace          },
    {"minecraft:grindstone",             CustomType::interact_with_grindstone       },
    {"minecraft:lectern",                CustomType::interact_with_lectern          },
    {"minecraft:loom",                   CustomType::interact_with_loom             },
    {"minecraft:smithing_table",         CustomType::interact_with_smithing_table   },
    {"minecraft:smoker",                 CustomType::interact_with_smoker           },
    {"minecraft:stonecutter_block",      CustomType::interact_with_stonecutter      },
    // 检查 漏斗 发射器 投掷器
    {"minecraft:dispenser",              CustomType::inspect_dispenser              },
    {"minecraft:dropper",                CustomType::inspect_dropper                },
    {"minecraft:hopper",                 CustomType::inspect_hopper                 },
    // 打开 箱子 容器
    {"minecraft:barrel",                 CustomType::open_barrel                    },
    {"minecraft:chest",                  CustomType::open_chest                     },
    {"minecraft:ender_chest",            CustomType::open_enderchest                },
    // 打开 潜影盒
    {"minecraft:shulker_box",            CustomType::open_shulker_box               },
    {"minecraft:undyed_shulker_box",     CustomType::open_shulker_box               },
    {"minecraft:white_shulker_box",      CustomType::open_shulker_box               },
    {"minecraft:orange_shulker_box",     CustomType::open_shulker_box               },
    {"minecraft:magenta_shulker_box",    CustomType::open_shulker_box               },
    {"minecraft:light_blue_shulker_box", CustomType::open_shulker_box               },
    {"minecraft:yellow_shulker_box",     CustomType::open_shulker_box               },
    {"minecraft:lime_shulker_box",       CustomType::open_shulker_box               },
    {"minecraft:pink_shulker_box",       CustomType::open_shulker_box               },
    {"minecraft:gray_shulker_box",       CustomType::open_shulker_box               },
    {"minecraft:light_gray_shulker_box", CustomType::open_shulker_box               },
    {"minecraft:cyan_shulker_box",       CustomType::open_shulker_box               },
    {"minecraft:purple_shulker_box",     CustomType::open_shulker_box               },
    {"minecraft:blue_shulker_box",       CustomType::open_shulker_box               },
    {"minecraft:brown_shulker_box",      CustomType::open_shulker_box               },
    {"minecraft:green_shulker_box",      CustomType::open_shulker_box               },
    {"minecraft:red_shulker_box",        CustomType::open_shulker_box               },
    {"minecraft:black_shulker_box",      CustomType::open_shulker_box               },

    // 敲钟
    {"minecraft:bell",                   CustomType::bell_ring                      },
    // 陷阱箱
    {"minecraft:trapped_chest",          CustomType::trigger_trapped_chest          },
    // 音符盒
    {"minecraft:noteblock",              CustomType::tune_noteblock                 }
};
} // namespace stats