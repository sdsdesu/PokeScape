Lumbridge_House_Starter1_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Lumbridge_House_Starter1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Lumbridge_House_Starter1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_TEMP_0, 0, Explorer_Jack_1
	.2byte 0


Explorer_Jack_1::
	compare VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto_if_eq Explorer_Jack_1_1
	setvar VAR_TEMP_0, 1
	release
	return

Explorer_Jack_1_1:
	goto_if_unset FLAG_SET_WALL_CLOCK, Explorer_Jack_1_4
	setvar VAR_TEMP_0, 1
	release
	end

Explorer_Jack_1_4:
	lockall
	setvar VAR_POKESCAPE_STARTER_HOUSE_STATE, 1
	playse SE_PIN
	applymovement 1, Movement_Explorer_Jack_1
	waitmovement 0
	namebox Explorer_Jack_1_Text_0
	msgbox Explorer_Jack_1_Text_1
	goto SetClock
	hidenamebox
	setvar VAR_TEMP_0, 1
	release
	end


SetClock::
	fadescreenswapbuffers FADE_TO_BLACK
	special StartWallClock
	waitstate
	setflag FLAG_SET_WALL_CLOCK
	goto Explorer_Jack_2
	return


Explorer_Jack_2::
	namebox Explorer_Jack_1_Text_0
	special GetTimeOfDaySpecial
	switch VAR_RESULT
	case 0, Explorer_Jack_2_3
	case 1, Explorer_Jack_2_4
	case 2, Explorer_Jack_2_5
	case 3, Explorer_Jack_2_6
Explorer_Jack_2_1:
	msgbox Explorer_Jack_2_Text_4
	closemessage
	hidenamebox
	applymovement 1, Movement_Explorer_Jack_2
	waitmovement 0
	setflag FLAG_RECEIVED_RUNNING_SHOES
	setflag FLAG_SYS_B_DASH
	setflag FLAG_SYS_QUEST_MENU_GET
	additem ITEM_ROTTEN_POTATO
	setvar VAR_POKESCAPE_STORYMODE_PROGRESS, 1
	startquest QUEST_MAIN_STORY
	release
	end

Explorer_Jack_2_3:
	msgbox Explorer_Jack_2_Text_0
	goto Explorer_Jack_2_1

Explorer_Jack_2_4:
	msgbox Explorer_Jack_2_Text_1
	goto Explorer_Jack_2_1

Explorer_Jack_2_5:
	msgbox Explorer_Jack_2_Text_2
	goto Explorer_Jack_2_1

Explorer_Jack_2_6:
	msgbox Explorer_Jack_2_Text_3
	goto Explorer_Jack_2_1


Movement_Explorer_Jack_1:
	face_up
	emote_exclamation_mark
	delay_8
	walk_up
	walk_up
	walk_right
	face_up
	step_end

Movement_Explorer_Jack_2:
	walk_left
	walk_left
	walk_left
	walk_up
	step_end

Explorer_Jack_3::
	lock
	faceplayer
	compare VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto_if_eq Explorer_Jack_3_1
	namebox Explorer_Jack_1_Text_0
	msgbox Explorer_Jack_3_Text_2
	hidenamebox
	release
	end

Explorer_Jack_3_1:
	compare VAR_POKESCAPE_COOKS_ASSISTANT_QUEST_STATE, 0
	goto_if_eq Explorer_Jack_3_4
	namebox Explorer_Jack_1_Text_0
	msgbox Explorer_Jack_3_Text_1
	hidenamebox
	release
	end

Explorer_Jack_3_4:
	namebox Explorer_Jack_1_Text_0
	msgbox Explorer_Jack_3_Text_0
	hidenamebox
	release
	end


CHEAT_ITEM_PULSE_CORE::
	checkitem ITEM_PULSE_CORE, 1
	compare VAR_RESULT, 0
	goto_if_ne CHEAT_ITEM_PULSE_CORE_2
	finditem ITEM_PULSE_CORE
	applymovement 1, Movement_InteractFACEDOWN
	waitmovement 0
	namebox Explorer_Jack_1_Text_0
	msgbox CHEAT_ITEM_PULSE_CORE_Text_1
	closemessage
	hidenamebox
CHEAT_ITEM_PULSE_CORE_1:
	applymovement 1, Movement_InteractFACEUP
	waitmovement 0
	end

CHEAT_ITEM_PULSE_CORE_2:
	finditem ITEM_PRISMATIC_STAR
	applymovement 1, Movement_InteractFACEDOWN
	waitmovement 0
	namebox Explorer_Jack_1_Text_0
	msgbox CHEAT_ITEM_PULSE_CORE_Text_0
	closemessage
	hidenamebox
	goto CHEAT_ITEM_PULSE_CORE_1


FIND_ITEM_BREAD::
	finditem ITEM_BREAD
	end


FIND_ITEM_CAKE::
	finditem ITEM_CAKE
	end


FIND_ITEM_CHOCOLATE_CAKE::
	finditem ITEM_CHOCOLATE_CAKE
	end


FIND_ITEM_CABBAGE::
	finditem ITEM_CABBAGE
	end


FIND_ITEM_EASTER_EGG::
	finditem ITEM_EASTER_EGG
	end


FIND_ITEM_PRAYER_POTION::
	finditem ITEM_PRAYER_POTION
	end


FIND_ITEM_SUPER_PRAYER_POTION::
	finditem ITEM_SUPER_PRAYER_POTION
	end


FIND_ITEM_BEER::
	finditem ITEM_STAT_BEER
	end


FIND_ITEM_MOONLIGHT_MEAD::
	finditem ITEM_STAT_MOONLIGHT_MEAD
	end


FIND_ITEM_DONUT::
	finditem ITEM_DONUT_SANDWICH
	end


FIND_ITEM_TRIANGLE_SANDWICH::
	finditem ITEM_TRIANGLE_SANDWICH
	end


FIND_ITEM_SQUARE_SANDWICH::
	finditem ITEM_SQUARE_SANDWICH
	end


FIND_ITEM_MEAT_PIE_SANDWICH::
	finditem ITEM_MEAT_PIE_SANDWICH
	end


FIND_ITEM_APPLES::
	finditem ITEM_APPLE, 5
	end


FIND_ITEM_BANANAS::
	finditem ITEM_BANANA, 5
	end


FIND_ITEM_CADAVABERRIES::
	finditem ITEM_CADAVABERRY, 5
	end


FIND_ITEM_COCONUTS::
	finditem ITEM_COCONUT, 5
	end


FIND_ITEM_CORN::
	finditem ITEM_CORN, 5
	end


FIND_ITEM_GARLIC::
	finditem ITEM_GARLIC, 5
	end


FIND_ITEM_GRAPES::
	finditem ITEM_GRAPES, 5
	end


FIND_ITEM_JANGERBERRIES::
	finditem ITEM_JANGERBERRY, 5
	end


FIND_ITEM_LEMONS::
	finditem ITEM_LEMON, 5
	end


FIND_ITEM_ONIONS::
	finditem ITEM_ONION, 5
	end


FIND_ITEM_ORANGES::
	finditem ITEM_ORANGE, 5
	end


FIND_ITEM_PINEAPPLES::
	finditem ITEM_PINEAPPLE, 5
	end


FIND_ITEM_POTATOES::
	finditem ITEM_POTATO, 5
	end


FIND_ITEM_REDBERRIES::
	finditem ITEM_REDBERRY, 5
	end


FIND_ITEM_STRAWBERRIES::
	finditem ITEM_STRAWBERRY, 5
	end


FIND_ITEM_TOMATOES::
	finditem ITEM_TOMATO, 5
	end


FIND_ITEM_TURNIPS::
	finditem ITEM_TURNIP, 5
	end


FIND_ITEM_WATERMELONS::
	finditem ITEM_WATERMELON, 5
	end


FIND_ITEM_WHITEBERRIES::
	finditem ITEM_WHITEBERRY, 5
	end


FIND_ITEM_PAPAYA::
	finditem ITEM_PAPAYA, 5
	end


FIND_ITEM_DWELLBERRIES::
	finditem ITEM_DWELLBERRY, 5
	end


FIND_ITEM_COFFEEBEANS::
	finditem ITEM_COFFEEBEAN, 5
	end


FIND_ITEM_POISON_IVY_BERRIES::
	finditem ITEM_POISON_IVY, 5
	end


FIND_ITEM_BLUEBERRIES::
	finditem ITEM_BLUEBERRY, 5
	end


FIND_ITEM_CHEESES::
	finditem ITEM_CHEESE, 5
	end


FIND_ITEM_GLOOP_SOUPS::
	finditem ITEM_GLOOP_SOUP, 5
	end


FIND_ITEM_FINGERS::
	finditem ITEM_FINGERS, 5
	end


FIND_ITEM_BAT_SHISHES::
	finditem ITEM_BAT_SHISH, 5
	end


FIND_ITEM_FROGBURGERS::
	finditem ITEM_FROGBURGER, 5
	end


FIND_ITEM_EEL_SUSHI::
	finditem ITEM_EEL_SUSHI, 5
	end


FIND_ITEM_DRUNK_DRAGON::
	finditem ITEM_DRUNK_DRAGON
	end


FIND_ITEM_CHOCOLATE_SUNDAY::
	finditem ITEM_CHOCOLATE_SUNDAY
	end


FIND_ITEM_WIZARDS_BLIZZARD::
	finditem ITEM_WIZARDS_BLIZZARD
	end


FIND_ITEM_FRUIT_BLAST::
	finditem ITEM_FRUIT_BLAST
	end


FIND_ITEM_PINEAPPLE_PUNCH::
	finditem ITEM_PINEAPPLE_PUNCH
	end


FIND_ITEM_BLUEBERRY_SPECIAL::
	finditem ITEM_BLUEBERRY_SPECIAL
	end


FIND_ITEM_POUCHES::
	finditem ITEM_POUCH, 5
	end


FIND_ITEM_BRONZE_POUCHES::
	finditem ITEM_POUCH_BRONZE, 5
	end


FIND_ITEM_IRON_POUCHES::
	finditem ITEM_POUCH_IRON, 5
	end


FIND_ITEM_STEEL_POUCHES::
	finditem ITEM_POUCH_STEEL, 5
	end


FIND_ITEM_MITHRIL_POUCHES::
	finditem ITEM_POUCH_MITHRIL, 5
	end


FIND_ITEM_ADAMANT_POUCHES::
	finditem ITEM_POUCH_ADAMANT, 5
	end


FIND_ITEM_RUNE_POUCHES::
	finditem ITEM_POUCH_RUNE, 5
	end


FIND_ITEM_DRAGON_POUCH::
	finditem ITEM_POUCH_DRAGON
	end


FIND_ITEM_CRYSTAL_POUCH::
	finditem ITEM_POUCH_CRYSTAL
	end


FIND_ITEM_BLACK_POUCHES::
	finditem ITEM_POUCH_BLACK, 5
	end


FIND_ITEM_WHITE_POUCHES::
	finditem ITEM_POUCH_WHITE, 5
	end


FIND_ITEM_ELEMENTAL_POUCHES::
	finditem ITEM_POUCH_ELEMENTAL, 5
	end


FIND_ITEM_CATALYTIC_POUCHES::
	finditem ITEM_POUCH_CATALYTIC, 5
	end


FIND_ITEM_BANE_POUCHES::
	finditem ITEM_POUCH_BANE, 5
	end


FIND_ITEM_AUGMENTED_POUCHES::
	finditem ITEM_POUCH_AUGMENTED, 5
	end


FIND_ITEM_ANCIENT_POUCHES::
	finditem ITEM_POUCH_ANCIENT, 5
	end


FIND_ITEM_BARROWS_POUCHES::
	finditem ITEM_POUCH_BARROWS, 5
	end


FIND_ITEM_GRANITE_POUCHES::
	finditem ITEM_POUCH_GRANITE, 5
	end


FIND_ITEM_SPLITBARK_POUCHES::
	finditem ITEM_POUCH_SPLITBARK, 5
	end


FIND_ITEM_MYSTIC_POUCHES::
	finditem ITEM_POUCH_MYSTIC, 5
	end


FIND_ITEM_RUNE_ESSENCE::
	finditem ITEM_RUNE_ESSENCE
	end


FIND_ITEM_AIR_RUNE::
	finditem ITEM_AIR_RUNE
	end


FIND_ITEM_WATER_RUNE::
	finditem ITEM_WATER_RUNE
	end


FIND_ITEM_EARTH_RUNE::
	finditem ITEM_EARTH_RUNE
	end


FIND_ITEM_FIRE_RUNE::
	finditem ITEM_FIRE_RUNE
	end


FIND_ITEM_MIND_RUNE::
	finditem ITEM_MIND_RUNE
	end


FIND_ITEM_CHAOS_RUNE::
	finditem ITEM_CHAOS_RUNE
	end


FIND_ITEM_DEATH_RUNE::
	finditem ITEM_DEATH_RUNE
	end


FIND_ITEM_BLOOD_RUNE::
	finditem ITEM_BLOOD_RUNE
	end


FIND_ITEM_BODY_RUNE::
	finditem ITEM_BODY_RUNE
	end


FIND_ITEM_COSMIC_RUNE::
	finditem ITEM_COSMIC_RUNE
	end


FIND_ITEM_NATURE_RUNE::
	finditem ITEM_NATURE_RUNE
	end


FIND_ITEM_LAW_RUNE::
	finditem ITEM_LAW_RUNE
	end


FIND_ITEM_SOUL_RUNE::
	finditem ITEM_SOUL_RUNE
	end


FIND_ITEM_ASTRAL_RUNE::
	finditem ITEM_ASTRAL_RUNE
	end


FIND_ITEM_LIFE_RUNE::
	finditem ITEM_LIFE_RUNE
	end


FIND_ITEM_MUD_RUNE::
	finditem ITEM_MUD_RUNE
	end


FIND_ITEM_MIST_RUNE::
	finditem ITEM_MIST_RUNE
	end


FIND_ITEM_DUST_RUNE::
	finditem ITEM_DUST_RUNE
	end


FIND_ITEM_LAVA_RUNE::
	finditem ITEM_LAVA_RUNE
	end


FIND_ITEM_SPIRIT_CHARM::
	finditem ITEM_SPIRIT_CHARM
	end


FIND_ITEM_REPEL_TEA_1::
	finditem ITEM_REPEL_TEA_1
	end


FIND_ITEM_REPEL_TEA_2::
	finditem ITEM_REPEL_TEA_2, 3
	end


FIND_ITEM_REPEL_TEA_3::
	finditem ITEM_REPEL_TEA_3, 3
	end


FIND_ITEM_ATT_LAMP::
	finditem ITEM_LAMP_ATT
	end


FIND_ITEM_DEF_LAMP::
	finditem ITEM_LAMP_DEF
	end


FIND_ITEM_HP_LAMP::
	finditem ITEM_LAMP_HP
	end


FIND_ITEM_SPATT_LAMP::
	finditem ITEM_LAMP_SPATT
	end


FIND_ITEM_SPDEF_LAMP::
	finditem ITEM_LAMP_SPDEF
	end


FIND_ITEM_SPEED_LAMP::
	finditem ITEM_LAMP_SPEED
	end


FIND_ITEM_ACC_POTION::
	finditem ITEM_POTION_ACC
	end


FIND_ITEM_ATT_POTION::
	finditem ITEM_POTION_ATT
	end


FIND_ITEM_DEF_POTION::
	finditem ITEM_POTION_DEF
	end


FIND_ITEM_SPATT_POTION::
	finditem ITEM_POTION_SPATT
	end


FIND_ITEM_SPDEF_POTION::
	finditem ITEM_POTION_SPDEF
	end


FIND_ITEM_SPEED_POTION::
	finditem ITEM_POTION_SPEED
	end


FIND_ITEM_FLAX::
	finditem ITEM_FLAX
	end


FIND_ITEM_SPIRIT_SHARD::
	finditem ITEM_SPIRIT_SHARD
	end


FIND_ITEM_MINT_CAKE::
	finditem ITEM_MINT_CAKE
	end


FIND_ITEM_HWEEN_MASK::
	finditem ITEM_HWEEN_MASK
	end


FIND_ITEM_SANTA_HAT::
	finditem ITEM_SANTA_HAT
	end


FIND_ITEM_WHITE_SWEETS::
	finditem ITEM_EXP_CANDY_XS
	end


FIND_ITEM_YELLOW_SWEETS::
	finditem ITEM_EXP_CANDY_S
	end


FIND_ITEM_ORANGE_SWEETS::
	finditem ITEM_EXP_CANDY_M
	end


FIND_ITEM_RED_SWEETS::
	finditem ITEM_EXP_CANDY_L
	end


FIND_ITEM_PURPLE_SWEETS::
	finditem ITEM_EXP_CANDY_XL
	end


FIND_ITEM_MANY_SWEETS::
	finditem ITEM_MANY_SWEETS
	end


FIND_ITEM_MANY_SWEETS_2::
	finditem ITEM_MANY_SWEETS, 2
	end


FIND_ITEM_MANY_SWEETS_5::
	finditem ITEM_MANY_SWEETS, 5
	end


FIND_ITEM_MANY_SWEETS_10::
	finditem ITEM_MANY_SWEETS, 10
	end


FIND_ITEM_MANY_SWEETS_13::
	finditem ITEM_MANY_SWEETS, 13
	end


FIND_ITEM_MANY_SWEETS_15::
	finditem ITEM_MANY_SWEETS, 15
	end


FIND_ITEM_BALL_OF_WOOL::
	finditem ITEM_BALL_OF_WOOL
	end


FIND_ITEM_ROCKCAKE::
	finditem ITEM_ROCKCAKE
	end


FIND_ITEM_SARADOMIN_BREW::
	finditem ITEM_SARADOMIN_BREW
	end


FIND_ITEM_FIGHTER_BOOTS::
	finditem ITEM_FIGHTER_BOOTS
	end


FIND_ITEM_FANCY_BOOTS::
	finditem ITEM_FANCY_BOOTS
	end


FIND_ITEM_BRONZE_HELMET::
	finditem ITEM_BRONZEHELMET
	end


FIND_ITEM_IRONMAN_HELMET::
	finditem ITEM_IRONMAN_HELMET
	end


FIND_ITEM_PHOENIX_NECKLACE::
	finditem ITEM_PHOENIX_NECKLACE
	end


FIND_ITEM_MITHRIL_SCIMITAR::
	finditem ITEM_MITHRIL_SCIMITAR
	end


FIND_ITEM_SPOTTED_CAPE::
	finditem ITEM_SPOTTEDCAPE
	end


FIND_ITEM_TINDERBOX::
	finditem ITEM_TINDERBOX
	end


FIND_ITEM_WATERSKIN::
	finditem ITEM_WATERSKIN
	end


FIND_ITEM_EFFIGY::
	finditem ITEM_EFFIGY
	end


FIND_ITEM_DRAGONFIRE_SHIELD::
	finditem ITEM_DFS
	end


FIND_ITEM_STAFF_OF_EARTH::
	finditem ITEM_STAFF_OF_EARTH
	end


FIND_ITEM_KERIS::
	finditem ITEM_KERIS
	end


FIND_ITEM_BLUE_BOATER::
	finditem ITEM_BLUEBOATER
	end


FIND_ITEM_BONE_CROSSBOW::
	finditem ITEM_BONECROSSBOW
	end


FIND_ITEM_LUCKY_FOOT::
	finditem ITEM_LUCKYRABBITFOOT
	end


FIND_ITEM_BLESSED_FOOT::
	finditem ITEM_GODRABBITFOOT
	end


FIND_ITEM_SNELM::
	finditem ITEM_SNELM
	end


FIND_ITEM_GUTHANS_SPEAR::
	finditem ITEM_GUTHANSPEAR
	end


FIND_ITEM_TORAGS_HAMMERS::
	finditem ITEM_TORAGHAMMER
	end


FIND_ITEM_AHRIMS_STAFF::
	finditem ITEM_AHRIMSTAFF
	end


FIND_ITEM_VERACS_FLAIL::
	finditem ITEM_VERACFLAIL
	end


FIND_ITEM_FIGHTER_TORSO::
	finditem ITEM_FIGHTER_TORSO
	end


FIND_ITEM_DOUBLE_EYEPATCH::
	finditem ITEM_DOUBLE_EYEPATCH
	end


FIND_ITEM_ABYSSAL_WHIP::
	finditem ITEM_ABYSSAL_WHIP
	end


FIND_ITEM_WIZARDS_HAT::
	finditem ITEM_WIZARDS_HAT
	end


FIND_ITEM_BOOK_OF_GUTHIX::
	finditem ITEM_BOOK_OF_GUTHIX
	end


FIND_ITEM_BOOK_OF_SARADOMIN::
	finditem ITEM_BOOK_OF_SARADOMIN
	end


FIND_ITEM_BOOK_OF_ARMADYL::
	finditem ITEM_BOOK_OF_ARMADYL
	end


FIND_ITEM_BOOK_OF_BANDOS::
	finditem ITEM_BOOK_OF_BANDOS
	end


FIND_ITEM_BOOK_OF_TUMEKEN::
	finditem ITEM_BOOK_OF_TUMEKEN
	end


FIND_ITEM_BOOK_OF_ZAROS::
	finditem ITEM_BOOK_OF_ZAROS
	end


FIND_ITEM_ROPE::
	finditem ITEM_ROPE
	end


FIND_ITEM_SCURRIUS_CHEESE::
	finditem ITEM_SCURRIUS_CHEESE
	end


ITEM_LUMBRIDGE_PRISMATIC_STAR::
	finditem ITEM_PRISMATIC_STAR
	end


ITEM_PORTSARIM_RING_OF_LIFE::
	finditem ITEM_RING_OF_LIFE
	end


Explorer_Jack_1_Text_0:
	.string "Explorer Jack$"

Explorer_Jack_1_Text_1:
	.string "You're awake!\p"
	.string "Do you know what time it is?!$"

Explorer_Jack_2_Text_0:
	.string "It's quite late.\p"
	.string "Are you sure you don't want to go back\n"
	.string "to bed?$"

Explorer_Jack_2_Text_1:
	.string "I am surprised you're up this early, you\n"
	.string "usually oversleep.$"

Explorer_Jack_2_Text_2:
	.string "That's right it's time to start the day.$"

Explorer_Jack_2_Text_3:
	.string "It's about time you got up, you've been\n"
	.string "sleeping all day.$"

Explorer_Jack_2_Text_4:
	.string "Anyhow, I've got some news for you.\p"
	.string "Apparently a famous researcher is\n"
	.string "currently visiting the Duke in\l"
	.string "Lumbridge Castle and I heard he is\l"
	.string "giving out Monsters to anyone who can\l"
	.string "help him with a quest!\p"
	.string "I think you should go pay him a visit\n"
	.string "seeing as you've always had a fondness\l"
	.string "for adventures.$"

Explorer_Jack_3_Text_0:
	.string "You should make your way to Lumbridge\n"
	.string "Castle.$"

Explorer_Jack_3_Text_1:
	.string "Wow!\p"
	.string "The researcher gave you a monster and\n"
	.string "you've been invited to participate in\l"
	.string "the MvM Championships?!\p"
	.string "How Lucky!$"

Explorer_Jack_3_Text_2:
	.string "Lumbridge Castle is where this towns\n"
	.string "MvM Championships battle is held.\p"
	.string "The current Leader of our town is Duke\n"
	.string "Horacio.$"

CHEAT_ITEM_PULSE_CORE_Text_0:
	.string "A Prismatic Star will gain a little bit of\n"
	.string "boosted experience to the monster\l"
	.string "holding it during battles.\p"
	.string "Give it to a monster to hold.$"

CHEAT_ITEM_PULSE_CORE_Text_1:
	.string "A Pulse Core will help your monsters\n"
	.string "share a little bit of extra experience\l"
	.string "after battles.\p"
	.string "To use it, open your BAG and toggle it\n"
	.string "on in the KEY ITEMS section.$"
