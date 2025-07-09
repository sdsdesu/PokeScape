Edgeville_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Edgeville_MapScripts_MAP_SCRIPT_ON_LOAD
	map_script MAP_SCRIPT_ON_TRANSITION, Edgeville_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Edgeville_MapScripts_MAP_SCRIPT_ON_LOAD:
	call EDGEVILLE_METATILES
	return

Edgeville_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflag FLAG_VISITED_EDGEVILLE
	setvar VAR_EVOLUTION_MAP_STATE, 15
	call EDGEVILLE_STATE
	call RANDOM_EVENT_SANDWICH_LADY
	return


EDGEVILLE_METATILES::
	switch VAR_FROGEEL_RIVAL
	case 20, EDGEVILLE_METATILES_2
	return

EDGEVILLE_METATILES_2:
	setmetatile 36, 10, METATILE_Edgeville_EDGEVILLE_BRIDGE, 0, 4
	return


EDGEVILLE_STATE::
	removeobject 25
	setflag FLAG_TEMP_10
	removeobject 24
	setflag FLAG_TEMP_1C
	compare VAR_FROGEEL_RIVAL, 20
	goto_if_eq EDGEVILLE_STATE_2
EDGEVILLE_STATE_1:
	compare VAR_MITHRILMAN_STATE, 15
	goto_if_eq EDGEVILLE_STATE_5
EDGEVILLE_STATE_4:
	return

EDGEVILLE_STATE_2:
	addobject 25
	clearflag FLAG_TEMP_10
	goto EDGEVILLE_STATE_1

EDGEVILLE_STATE_5:
	clearflag FLAG_TEMP_1C
	addobject 24
	goto EDGEVILLE_STATE_4


SIGNPOST_EDGEVILLE_GYM::
	lock
	msgbox SIGNPOST_EDGEVILLE_GYM_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_EDGEVILLE_1::
	lock
	faceplayer
	namebox NPC_EDGEVILLE_1_Text_0
	msgbox NPC_EDGEVILLE_1_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_EDGEVILLE_2::
	lock
	faceplayer
	namebox NPC_EDGEVILLE_2_Text_0
	msgbox NPC_EDGEVILLE_2_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_EDGEVILLE_3::
	lock
	faceplayer
	namebox NPC_EDGEVILLE_3_Text_0
	msgbox NPC_EDGEVILLE_3_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_EDGEVILLE_4::
	lock
	faceplayer
	namebox NPC_EDGEVILLE_4_Text_0
	msgbox NPC_EDGEVILLE_4_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_EDGEVILLE_5::
	lock
	faceplayer
	namebox NPC_EDGEVILLE_5_Text_0
	msgbox NPC_EDGEVILLE_5_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_EDGEVILLE_6::
	lock
	faceplayer
	namebox NPC_EDGEVILLE_6_Text_0
	msgbox NPC_EDGEVILLE_6_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_EDGEVILLE_7::
	lock
	faceplayer
	namebox NPC_EDGEVILLE_7_Text_0
	msgbox NPC_EDGEVILLE_7_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_EDGEVILLE_8::
	lock
	faceplayer
	namebox NPC_EDGEVILLE_8_Text_0
	msgbox NPC_EDGEVILLE_8_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_EDGEVILLE_9::
	lock
	faceplayer
	namebox NPC_EDGEVILLE_9_Text_0
	msgbox NPC_EDGEVILLE_9_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_EDGEVILLE_10::
	lock
	faceplayer
	namebox NPC_EDGEVILLE_9_Text_0
	msgbox NPC_EDGEVILLE_10_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_EDGEVILLE_11::
	lock
	faceplayer
	namebox NPC_EDGEVILLE_11_Text_0
	msgbox NPC_EDGEVILLE_11_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_EDGEVILLE_12::
	lock
	faceplayer
	namebox NPC_EDGEVILLE_12_Text_0
	msgbox NPC_EDGEVILLE_12_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_EDGEVILLE_13::
	lock
	faceplayer
	namebox NPC_EDGEVILLE_13_Text_0
	msgbox NPC_EDGEVILLE_13_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_EDGEVILLE_14::
	lock
	faceplayer
	namebox NPC_EDGEVILLE_14_Text_0
	msgbox NPC_EDGEVILLE_14_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_EDGEVILLE_15::
	lock
	faceplayer
	namebox NPC_EDGEVILLE_15_Text_0
	msgbox NPC_EDGEVILLE_15_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_EDGEVILLE_16::
	lock
	faceplayer
	namebox NPC_EDGEVILLE_16_Text_0
	msgbox NPC_EDGEVILLE_16_Text_1
	closemessage
	hidenamebox
	release
	end


EDGEVILLE_SIGN_3::
	lock
	faceplayer
	msgbox EDGEVILLE_SIGN_3_Text_0
	release
	end


EDGEVILLE_SIGN_2::
	lock
	faceplayer
	msgbox EDGEVILLE_SIGN_2_Text_0
	release
	end


EDGEVILLE_SIGN_1::
	lock
	faceplayer
	msgbox EDGEVILLE_SIGN_1_Text_0
	release
	end


NPC_EDGEVILLE_VANNAKA_SLAYER_MASTER::
	lock
	faceplayer
	namebox NPC_EDGEVILLE_VANNAKA_SLAYER_MASTER_Text_0
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_KOUREND_SLAYER
	goto_if_unset FLAG_BADGE07_GET, NPC_EDGEVILLE_VANNAKA_SLAYER_MASTER_2
	checkitem ! ITEM_SLAYER_GEM, 1
	compare VAR_RESULT, 0
	goto_if_ne NPC_EDGEVILLE_VANNAKA_SLAYER_MASTER_6
NPC_EDGEVILLE_VANNAKA_SLAYER_MASTER_5:
	msgbox NPC_EDGEVILLE_VANNAKA_SLAYER_MASTER_Text_1
	closemessage
	hidenamebox
	call FUNCTION_SLAYER_TASK_MASTER
NPC_EDGEVILLE_VANNAKA_SLAYER_MASTER_1:
	closemessage
	hidenamebox
	release
	end

NPC_EDGEVILLE_VANNAKA_SLAYER_MASTER_2:
	call EDGEVILLE_GYM_START
	goto NPC_EDGEVILLE_VANNAKA_SLAYER_MASTER_1

NPC_EDGEVILLE_VANNAKA_SLAYER_MASTER_6:
	call GIVEPLAYERSLAYERGEM
	goto NPC_EDGEVILLE_VANNAKA_SLAYER_MASTER_5


GIVEPLAYERSLAYERGEM::
	msgbox GIVEPLAYERSLAYERGEM_Text_0
	closemessage
	hidenamebox
	giveitem ITEM_SLAYER_GEM, 1
	namebox NPC_EDGEVILLE_VANNAKA_SLAYER_MASTER_Text_0
	msgbox GIVEPLAYERSLAYERGEM_Text_1
	closemessage
	hidenamebox
	return


EDGEVILLE_GYM_START::
	compare VAR_POKESCAPE_EDGEVILLE_GYM_QUEST, 0
	goto_if_eq EDGEVILLE_GYM_START_2
	compare VAR_POKESCAPE_EDGEVILLE_GYM_QUEST, 5
	goto_if_eq EDGEVILLE_GYM_START_5
	compare VAR_POKESCAPE_EDGEVILLE_GYM_QUEST, 10
	goto_if_eq EDGEVILLE_GYM_START_12
	compare VAR_POKESCAPE_EDGEVILLE_GYM_QUEST, 15
	goto_if_eq EDGEVILLE_GYM_START_15
	compare VAR_POKESCAPE_EDGEVILLE_GYM_QUEST, 20
	goto_if_eq EDGEVILLE_GYM_START_17
	return

EDGEVILLE_GYM_START_2:
	msgbox EDGEVILLE_GYM_START_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne EDGEVILLE_GYM_START_8
	msgbox EDGEVILLE_GYM_START_Text_3
EDGEVILLE_GYM_START_7:
	return

EDGEVILLE_GYM_START_5:
	msgbox EDGEVILLE_GYM_START_Text_4
	return

EDGEVILLE_GYM_START_8:
	msgbox EDGEVILLE_GYM_START_Text_1
	closemessage
	hidenamebox
	setvar VAR_POKESCAPE_EDGEVILLE_GYM_QUEST, 5
	playse SE_UNLOCK
	setmetatile 1, 15, METATILE_PokeScape_Sewers_GATE_OPEN_UP, 0
	setmetatile 1, 16, METATILE_PokeScape_Sewers_GATE_OPEN_DOWN, 1
	setmetatile 2, 15, METATILE_PokeScape_Sewers_SEWER_FLOOR_ENCOUNTERS, 0
	setmetatile 2, 16, METATILE_PokeScape_Sewers_SEWER_FLOOR_ENCOUNTERS, 0
	special DrawWholeMapView
	waitse
	namebox NPC_EDGEVILLE_VANNAKA_SLAYER_MASTER_Text_0
	msgbox EDGEVILLE_GYM_START_Text_2
	closemessage
	hidenamebox
	goto EDGEVILLE_GYM_START_7

EDGEVILLE_GYM_START_12:
	msgbox EDGEVILLE_GYM_START_Text_5
	return

EDGEVILLE_GYM_START_15:
	msgbox EDGEVILLE_GYM_START_Text_6
	call EDGEVILLE_GYM_BATTLE_VANNAKA
	return

EDGEVILLE_GYM_START_17:
	msgbox EDGEVILLE_GYM_START_Text_7
	call EDGEVILLE_GYM_BATTLE_VANNAKA
	return


EDGEVILLE_GYM_BATTLE_VANNAKA::
	call GYM_BATTLE_VANNAKA
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_eq EDGEVILLE_GYM_BATTLE_VANNAKA_2
	namebox NPC_EDGEVILLE_VANNAKA_SLAYER_MASTER_Text_0
	msgbox EDGEVILLE_GYM_BATTLE_VANNAKA_Text_0
	hidenamebox
	playfanfare MUS_PS_QUEST_COMPLETE
	msgbox EDGEVILLE_GYM_BATTLE_VANNAKA_Text_1
	waitfanfare
	waitmessage
	namebox NPC_EDGEVILLE_VANNAKA_SLAYER_MASTER_Text_0
	msgbox EDGEVILLE_GYM_BATTLE_VANNAKA_Text_2
	hidenamebox
	giveitem ITEM_TM74, 1
	compare VAR_RESULT, FALSE
	goto_if_eq Common_EventScript_ShowBagIsFull
	playfanfare MUS_PS_QUEST_COMPLETE
	setvar VAR_0x8004, 12
	special GiveFrontierBattlePoints
	msgbox EDGEVILLE_GYM_BATTLE_VANNAKA_Text_3
	waitmessage
	waitfanfare
	closemessage
	namebox NPC_EDGEVILLE_VANNAKA_SLAYER_MASTER_Text_0
	msgbox EDGEVILLE_GYM_BATTLE_VANNAKA_Text_4
	setvar VAR_POKESCAPE_EDGEVILLE_GYM_QUEST, 25
	setflag FLAG_BADGE07_GET
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_MVM_CHAMPIONSHIPS, 6
	call HIDDEN_GROTTO_RESET
	addvar VAR_GAMEMODE_LEVEL_SCALING, 1
	msgbox EDGEVILLE_GYM_BATTLE_VANNAKA_Text_5
	msgbox EDGEVILLE_GYM_BATTLE_VANNAKA_Text_6
	closemessage
	hidenamebox
	release
	return

EDGEVILLE_GYM_BATTLE_VANNAKA_2:
	setvar VAR_POKESCAPE_EDGEVILLE_GYM_QUEST, 20
	end


BATTLE_BASILISK_GYM::
	lock
	faceplayer
	namebox BATTLE_BASILISK_GYM_Text_0
	playmoncry SPECIES_BASILISK, 0
	msgbox BATTLE_BASILISK_GYM_Text_1
	waitmoncry
	hidenamebox
	closemessage
	setvar VAR_POKESCAPE_EDGEVILLE_GYM_QUEST, 10
	delay 1
	setwildbattle SPECIES_BASILISK, 45, ITEM_NONE
	dowildbattleNoCatch
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BATTLE_BASILISK_GYM_2
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BATTLE_BASILISK_GYM_3
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_eq BATTLE_BASILISK_GYM_4
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq BATTLE_BASILISK_GYM_5
BATTLE_BASILISK_GYM_1:
	release
	end

BATTLE_BASILISK_GYM_2:
	fadescreenswapbuffers FADE_TO_BLACK
	setvar VAR_POKESCAPE_EDGEVILLE_GYM_QUEST, 15
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	call EDGEVILLE_GYM_GIVE_SLAYER_POINTS
	goto BATTLE_BASILISK_GYM_1

BATTLE_BASILISK_GYM_3:
	fadescreenswapbuffers FADE_TO_BLACK
	setvar VAR_POKESCAPE_EDGEVILLE_GYM_QUEST, 15
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	call EDGEVILLE_GYM_GIVE_SLAYER_POINTS
	goto BATTLE_BASILISK_GYM_1

BATTLE_BASILISK_GYM_4:
	setvar VAR_POKESCAPE_EDGEVILLE_GYM_QUEST, 10
	closemessage
	release
	end

BATTLE_BASILISK_GYM_5:
	namebox BATTLE_BASILISK_GYM_Text_0
	playmoncry SPECIES_BASILISK, 0
	msgbox BATTLE_BASILISK_GYM_Text_2
	closemessage
	hidenamebox
	msgbox BATTLE_BASILISK_GYM_Text_3
	closemessage
	goto BATTLE_BASILISK_GYM_1


EDGEVILLE_GYM_GIVE_SLAYER_POINTS::
	playfanfare MUS_PS_QUEST_COMPLETE
	setvar VAR_0x8004, 12
	special GiveFrontierBattlePoints
	msgbox EDGEVILLE_GYM_GIVE_SLAYER_POINTS_Text_0
	waitmessage
	waitfanfare
	closemessage
	msgbox EDGEVILLE_GYM_GIVE_SLAYER_POINTS_Text_1
	closemessage
	return


NPC_EDGEVILLE_GYM_LADDER::
	msgbox NPC_EDGEVILLE_GYM_LADDER_Text_0
	closemessage
	end


ITEM_BRASS_HOUSE::
	finditem ITEM_EFFIGY
	end


TRIGGER_BRASS_KEY_DOOR::
	lock
	goto_if_unset FLAG_BRASS_KEY, TRIGGER_BRASS_KEY_DOOR_2
	setvar VAR_TEMP_1, 1
	release
	end

TRIGGER_BRASS_KEY_DOOR_2:
	msgbox TRIGGER_BRASS_KEY_DOOR_Text_0
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_WALK_DOWN
	waitmovement 0
	release
	end


FIND_BRASS_KEY::
	lock
	setflag FLAG_BRASS_KEY
	removeobject VAR_LAST_TALKED
	playfanfare MUS_OBTAIN_ITEM
	msgbox FIND_BRASS_KEY_Text_0
	waitfanfare
	closemessage
	release
	end


NPC_EDGEVILLE_HOUSE_NPC_1::
	lock
	faceplayer
	namebox NPC_EDGEVILLE_HOUSE_NPC_1_Text_0
	msgbox NPC_EDGEVILLE_HOUSE_NPC_1_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_EDGEVILLE_HOUSE_NPC_2::
	lock
	faceplayer
	namebox NPC_EDGEVILLE_HOUSE_NPC_1_Text_0
	msgbox NPC_EDGEVILLE_HOUSE_NPC_2_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_EDGEVILLE_HOUSE_NPC_3::
	lock
	faceplayer
	namebox NPC_EDGEVILLE_HOUSE_NPC_1_Text_0
	msgbox NPC_EDGEVILLE_HOUSE_NPC_3_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_EDGEVILLE_HOUSE_NPC_4::
	lock
	faceplayer
	namebox NPC_EDGEVILLE_HOUSE_NPC_1_Text_0
	msgbox NPC_EDGEVILLE_HOUSE_NPC_4_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_EDGEVILLE_HOUSE_NPC_5::
	lock
	faceplayer
	namebox NPC_EDGEVILLE_HOUSE_NPC_1_Text_0
	msgbox NPC_EDGEVILLE_HOUSE_NPC_5_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_EDGEVILLE_HOUSE_NPC_6::
	lock
	faceplayer
	namebox NPC_EDGEVILLE_HOUSE_NPC_6_Text_0
	msgbox NPC_EDGEVILLE_HOUSE_NPC_6_Text_1
	msgbox NPC_EDGEVILLE_HOUSE_NPC_6_Text_2
	closemessage
	hidenamebox
	release
	end


NPC_EDGEVILLE_HOUSE_NPC_7::
	lock
	faceplayer
	namebox NPC_EDGEVILLE_HOUSE_NPC_7_Text_0
	msgbox NPC_EDGEVILLE_HOUSE_NPC_7_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_EDGEVILLE_HOUSE_NPC_8::
	lock
	faceplayer
	namebox NPC_EDGEVILLE_HOUSE_NPC_8_Text_0
	msgbox NPC_EDGEVILLE_HOUSE_NPC_8_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_EDGEVILLE_HOUSE_NPC_9::
	lock
	faceplayer
	namebox NPC_EDGEVILLE_HOUSE_NPC_9_Text_0
	msgbox NPC_EDGEVILLE_HOUSE_NPC_9_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_EDGEVILLE_HOUSE_NPC_10::
	lock
	faceplayer
	namebox NPC_EDGEVILLE_HOUSE_NPC_10_Text_0
	msgbox NPC_EDGEVILLE_HOUSE_NPC_10_Text_1
	closemessage
	hidenamebox
	release
	end


BATTLE_TRAINER_EDGEVILLE_RIVER_1::
	trainerbattle_single TRAINER_EDGEVILLE_RIVER_1, BATTLE_TRAINER_EDGEVILLE_RIVER_1_Text_0, BATTLE_TRAINER_EDGEVILLE_RIVER_1_Text_1
	namebox BATTLE_TRAINER_EDGEVILLE_RIVER_1_Text_2
	msgbox BATTLE_TRAINER_EDGEVILLE_RIVER_1_Text_3
	hidenamebox
	release
	end


BATTLE_EDGEVILLE_GYM_1::
	trainerbattle_single TRAINER_EDGEVILLE_GYM_1, BATTLE_EDGEVILLE_GYM_1_Text_0, BATTLE_EDGEVILLE_GYM_1_Text_1
	namebox BATTLE_EDGEVILLE_GYM_1_Text_2
	msgbox BATTLE_EDGEVILLE_GYM_1_Text_3
	hidenamebox
	release
	end


BATTLE_EDGEVILLE_GYM_2::
	trainerbattle_single TRAINER_EDGEVILLE_GYM_2, BATTLE_EDGEVILLE_GYM_2_Text_0, BATTLE_EDGEVILLE_GYM_2_Text_1
	namebox BATTLE_EDGEVILLE_GYM_2_Text_2
	msgbox BATTLE_EDGEVILLE_GYM_2_Text_3
	hidenamebox
	release
	end


BATTLE_EDGEVILLE_GYM_3::
	trainerbattle_single TRAINER_EDGEVILLE_GYM_3, BATTLE_EDGEVILLE_GYM_3_Text_0, BATTLE_EDGEVILLE_GYM_3_Text_1
	hidenamebox
	msgbox BATTLE_EDGEVILLE_GYM_3_Text_2
	hidenamebox
	release
	end


BATTLE_EDGEVILLE_GYM_4::
	trainerbattle_single TRAINER_EDGEVILLE_GYM_4, BATTLE_EDGEVILLE_GYM_4_Text_0, BATTLE_EDGEVILLE_GYM_4_Text_1
	hidenamebox
	msgbox BATTLE_EDGEVILLE_GYM_4_Text_2
	hidenamebox
	release
	end


BATTLE_EDGEVILLE_GYM_5::
	trainerbattle_single TRAINER_EDGEVILLE_GYM_5, BATTLE_EDGEVILLE_GYM_5_Text_0, BATTLE_EDGEVILLE_GYM_5_Text_1
	namebox BATTLE_EDGEVILLE_GYM_5_Text_2
	msgbox BATTLE_EDGEVILLE_GYM_5_Text_3
	hidenamebox
	release
	end


BATTLE_EDGEVILLE_GYM_6::
	trainerbattle_single TRAINER_EDGEVILLE_GYM_6, BATTLE_EDGEVILLE_GYM_6_Text_0, BATTLE_EDGEVILLE_GYM_6_Text_1
	hidenamebox
	msgbox BATTLE_EDGEVILLE_GYM_6_Text_2
	hidenamebox
	release
	end


BATTLE_EDGEVILLE_GYM_7::
	trainerbattle_single TRAINER_EDGEVILLE_GYM_7, BATTLE_EDGEVILLE_GYM_7_Text_0, BATTLE_EDGEVILLE_GYM_7_Text_1
	namebox BATTLE_EDGEVILLE_GYM_7_Text_2
	msgbox BATTLE_EDGEVILLE_GYM_7_Text_3
	hidenamebox
	release
	end


BATTLE_EDGEVILLE_GYM_8::
	trainerbattle_single TRAINER_EDGEVILLE_GYM_8, BATTLE_EDGEVILLE_GYM_8_Text_0, BATTLE_EDGEVILLE_GYM_8_Text_1
	namebox BATTLE_EDGEVILLE_GYM_7_Text_2
	msgbox BATTLE_EDGEVILLE_GYM_8_Text_2
	hidenamebox
	release
	end


BATTLE_EDGEVILLE_GYM_9::
	trainerbattle_single TRAINER_EDGEVILLE_GYM_9, BATTLE_EDGEVILLE_GYM_9_Text_0, BATTLE_EDGEVILLE_GYM_9_Text_1
	namebox BATTLE_EDGEVILLE_GYM_7_Text_2
	msgbox BATTLE_EDGEVILLE_GYM_9_Text_1
	hidenamebox
	release
	end


GOBLIN_EDGEVILLE_GYM::
	lock
	faceplayer
	namebox GOBLIN_EDGEVILLE_GYM_Text_0
	msgbox GOBLIN_EDGEVILLE_GYM_Text_1
	closemessage
	hidenamebox
	release
	end


FROGEEL_RIVAL_5::
	lock
	faceplayer
	namebox FROGEEL_RIVAL_5_Text_0
	msgbox FROGEEL_RIVAL_5_Text_1
	hidenamebox
	closemessage
	playse SE_PIN
	applymovement 25, MOVEMENT_EXCLAMATIONMARK
	waitmovement 0
	namebox FROGEEL_RIVAL_5_Text_0
	msgbox FROGEEL_RIVAL_5_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne FROGEEL_RIVAL_5_1
	msgbox FROGEEL_RIVAL_5_Text_4
	goto BATTLE_FROGEEL_RIVAL_5
	return

FROGEEL_RIVAL_5_1:
	msgbox FROGEEL_RIVAL_5_Text_3
	goto BATTLE_FROGEEL_RIVAL_5
	return


BATTLE_FROGEEL_RIVAL_5::
	msgbox BATTLE_FROGEEL_RIVAL_5_Text_0
	hidenamebox
	closemessage
	goto_if_set FLAG_STARTER1, BATTLE_FROGEEL_RIVAL_5_2
	goto_if_set FLAG_STARTER2, BATTLE_FROGEEL_RIVAL_5_3
	goto_if_set FLAG_STARTER3, BATTLE_FROGEEL_RIVAL_5_4
BATTLE_FROGEEL_RIVAL_5_1:
	namebox FROGEEL_RIVAL_5_Text_0
	msgbox BATTLE_FROGEEL_RIVAL_5_Text_2
	closemessage
	hidenamebox
	playse SE_FLEE
	delay 60
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_QUESTIONMARK
	msgbox BATTLE_FROGEEL_RIVAL_5_Text_3
	closemessage
	giveitem ITEM_SPIRIT_CHARM, 1
	closemessage
	removeobject 25
	setflag FLAG_TEMP_10
	setvar VAR_FROGEEL_RIVAL, 25
	release
	end

BATTLE_FROGEEL_RIVAL_5_2:
	trainerbattle_no_intro TRAINER_FROGEEL_RIVAL_5_GRASS, BATTLE_FROGEEL_RIVAL_5_Text_1
	goto BATTLE_FROGEEL_RIVAL_5_1

BATTLE_FROGEEL_RIVAL_5_3:
	trainerbattle_no_intro TRAINER_FROGEEL_RIVAL_5_FIRE, BATTLE_FROGEEL_RIVAL_5_Text_1
	goto BATTLE_FROGEEL_RIVAL_5_1

BATTLE_FROGEEL_RIVAL_5_4:
	trainerbattle_no_intro TRAINER_FROGEEL_RIVAL_5_WATER, BATTLE_FROGEEL_RIVAL_5_Text_1
	goto BATTLE_FROGEEL_RIVAL_5_1


Mithrilman_Edgeville::
	playbgm MUS_ENCOUNTER_MAY, 1
	lock
	faceplayer
	namebox Mithrilman_Edgeville_Text_0
	msgbox Mithrilman_Edgeville_Text_1
	goto_if_set FLAG_STARTER1, Mithrilman_Edgeville_2
	goto_if_set FLAG_STARTER2, Mithrilman_Edgeville_3
	goto_if_set FLAG_STARTER3, Mithrilman_Edgeville_4
Mithrilman_Edgeville_1:
	namebox Mithrilman_Edgeville_Text_0
	msgbox Mithrilman_Edgeville_Text_3
	waitmessage
	closemessage
	hidenamebox
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	compare VAR_TEMP_1, 7
	goto_if_eq Mithrilman_Edgeville_9
	compare VAR_TEMP_1, 8
	goto_if_eq Mithrilman_Edgeville_10
Mithrilman_Edgeville_8:
	waitmovement 0
	setvar VAR_MITHRILMAN_STATE, 20
	setflag FLAG_TEMP_1C
	removeobject 24
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_MITHRILMAN_QUEST, 3
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_QUESTIONMARK
	waitmovement 0
	waitse
	msgbox Mithrilman_Edgeville_Text_4
	finditem ITEM_SOUL_RUNE, 1
	savebgm MUS_DUMMY
	fadedefaultbgm
	release
	end

Mithrilman_Edgeville_2:
	trainerbattle_no_intro TRAINER_MITHRILMAN4_GRASS, Mithrilman_Edgeville_Text_2
	goto Mithrilman_Edgeville_1

Mithrilman_Edgeville_3:
	trainerbattle_no_intro TRAINER_MITHRILMAN4_FIRE, Mithrilman_Edgeville_Text_2
	goto Mithrilman_Edgeville_1

Mithrilman_Edgeville_4:
	trainerbattle_no_intro TRAINER_MITHRILMAN4_WATER, Mithrilman_Edgeville_Text_2
	goto Mithrilman_Edgeville_1

Mithrilman_Edgeville_9:
	applymovement OBJ_EVENT_ID_PLAYER, Movement_InteractFACERIGHT
	applymovement 24, MOVEMENT_MITHRILMAN_EDGEVILLE_1
	goto Mithrilman_Edgeville_8

Mithrilman_Edgeville_10:
	applymovement OBJ_EVENT_ID_PLAYER, Movement_InteractFACEDOWN
	applymovement 24, MOVEMENT_MITHRILMAN_EDGEVILLE_2
	goto Mithrilman_Edgeville_8


MOVEMENT_MITHRILMAN_EDGEVILLE_1:
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

MOVEMENT_MITHRILMAN_EDGEVILLE_2:
	walk_down
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

SIGNPOST_EDGEVILLE_GYM_Text_0:
	.string "Edgeville Gym, located beneath the\n"
	.string "graveyard.$"

NPC_EDGEVILLE_1_Text_0:
	.string "Mugger$"

NPC_EDGEVILLE_1_Text_1:
	.string "Beyond here is the Wilderness.\p"
	.string "I'd suggest steering clear of it if I\n"
	.string "were you.\p"
	.string "Someone might mug you and take your\n"
	.string "stuff…$"

NPC_EDGEVILLE_2_Text_0:
	.string "Fisherman$"

NPC_EDGEVILLE_2_Text_1:
	.string "There's this crazy person in that house\n"
	.string "who lives with his mum.\p"
	.string "If you listen really carefully,\n"
	.string "sometimes you can hear his mum shout\l"
	.string "that he needs a bath, and you can hear\l"
	.string "him yell 'BUT I SMELL POSITIVELY\l"
	.string "EEEVIIILLLL'$"

NPC_EDGEVILLE_3_Text_0:
	.string "Choob$"

NPC_EDGEVILLE_3_Text_1:
	.string "Welcome to Edgeville.\n"
	.string "Are you looking for Vannaka?\p"
	.string "He's is just inside…{PAUSE 30} that spooky crypt!$"

NPC_EDGEVILLE_4_Text_0:
	.string "PVMer$"

NPC_EDGEVILLE_4_Text_1:
	.string "Do you know Vannaka?\p"
	.string "He taught me when I was just starting\n"
	.string "out.\p"
	.string "Who would have thought that one day he\n"
	.string "would have become a MvM leader.$"

NPC_EDGEVILLE_5_Text_0:
	.string "SkillSpecs$"

NPC_EDGEVILLE_5_Text_1:
	.string "Argh! I nearly smited an AGS but the guy\n"
	.string "I was fighting tele'd away…\p"
	.string "I'm going to restock and then head\n"
	.string "north again.\p"
	.string "I better not find you up in the\n"
	.string "Wilderness without your most expensive\l"
	.string "items…$"

NPC_EDGEVILLE_6_Text_0:
	.string "Hanannie$"

NPC_EDGEVILLE_6_Text_1:
	.string "Hey, this is my yew tree! Go get your\n"
	.string "own!$"

NPC_EDGEVILLE_7_Text_0:
	.string "Ironman$"

NPC_EDGEVILLE_7_Text_1:
	.string "Huh, what gives my Glacor evolved?\p"
	.string "I didn't do anything special I only had\n"
	.string "a Chinchompa in my party.\p"
	.string "I guess some monsters evolve when\n"
	.string "there are other monsters around them.$"

NPC_EDGEVILLE_8_Text_0:
	.string "Bruce$"

NPC_EDGEVILLE_8_Text_1:
	.string "Edgeville was recently rebuilt.\p"
	.string "But with all these adventurers\n"
	.string "constantly using the place it almost\l"
	.string "feels well lived.$"

NPC_EDGEVILLE_9_Text_0:
	.string "Jailer$"

NPC_EDGEVILLE_9_Text_1:
	.string "Edgeville doesn't really have a monarch\n"
	.string "of its own, so we abide by the King of\l"
	.string "Misthalin.\p"
	.string "It makes things easier when you can\n"
	.string "just follow orders without thinking too\l"
	.string "much about it.$"

NPC_EDGEVILLE_10_Text_0:
	.string "Let this be a fair warning.\p"
	.string "If you cause any trouble, we will lock\n"
	.string "you up and only feed you bread and\l"
	.string "water.$"

NPC_EDGEVILLE_11_Text_0:
	.string "Noob$"

NPC_EDGEVILLE_11_Text_1:
	.string "My canoe sank when I got here and I\n"
	.string "don't know how to make a new one.$"

NPC_EDGEVILLE_12_Text_0:
	.string "xXPKChampXx$"

NPC_EDGEVILLE_12_Text_1:
	.string "There used to be a lever here to\n"
	.string "teleport you deep into the Wilderness!\p"
	.string "It was amazing, you could catch noobs\n"
	.string "off guard and teleblock them so they\l"
	.string "couldn't escape.\p"
	.string "Sadly Vannaka decided it was too\n"
	.string "dangerous and had it removed.$"

NPC_EDGEVILLE_13_Text_0:
	.string "Alistair$"

NPC_EDGEVILLE_13_Text_1:
	.string "I finally got my hands on the Book o'\n"
	.string "Piracy by Cap'n Hook-Hand Morrisane.\p"
	.string "I've never been like the other pirates\n"
	.string "and was hoping it would help me to fit\l"
	.string "in, but I don't understand a single word\l"
	.string "of this!\p"
	.string "What does 'Cap'n, the gunners be a\n"
	.string "bunch of scurvy dogs' mean?\p"
	.string "I'll never be a real pirate at this rate.$"

NPC_EDGEVILLE_14_Text_0:
	.string "Pegasos9$"

NPC_EDGEVILLE_14_Text_1:
	.string "Have you heard of a pub called The\n"
	.string "Pandemonium?\p"
	.string "I met an adventurer in Port Sarim who\n"
	.string "said they were doing a delivery for them\l"
	.string "and they came across a bright pink\l"
	.string "troll.\p"
	.string "Or was it purple?\p"
	.string "Either way, I bet it was a shiny!$"

NPC_EDGEVILLE_15_Text_0:
	.string "Got Minnows$"

NPC_EDGEVILLE_15_Text_1:
	.string "Where are all the minnows?\p"
	.string "I've sailed around Gielinor and haven't\n"
	.string "been able to catch a single one!$"

NPC_EDGEVILLE_16_Text_0:
	.string "Rusher$"

NPC_EDGEVILLE_16_Text_1:
	.string "Did you know Mithril pouches are the\n"
	.string "best for catching monsters?\p"
	.string "You just throw one and it works!\p"
	.string "If it doesn't you just run away and try\n"
	.string "again!$"

EDGEVILLE_SIGN_3_Text_0:
	.string "East to Edgeville.\p"
	.string "North to the Monastery.\p"
	.string "West to Ice Mountain and the Dwarven\n"
	.string "Mines.$"

EDGEVILLE_SIGN_2_Text_0:
	.string "COMING SOON: a route to the Grand\n"
	.string "Exchange.\p"
	.string "Courtesy of King Roald III of Varrock.$"

EDGEVILLE_SIGN_1_Text_0:
	.string "Edgeville.\n"
	.string "Previously known as Ghost Town.$"

NPC_EDGEVILLE_VANNAKA_SLAYER_MASTER_Text_0:
	.string "Vannaka$"

NPC_EDGEVILLE_VANNAKA_SLAYER_MASTER_Text_1:
	.string "Hello {PLAYER}, what can I do for you?$"

GIVEPLAYERSLAYERGEM_Text_0:
	.string "Say no more {PLAYER}, I know you are\n"
	.string "interested in a Slayer task but first\l"
	.string "take this…$"

GIVEPLAYERSLAYERGEM_Text_1:
	.string "That's a Slayer Gem, it will allow us to\n"
	.string "stay in contact and let you check what\l"
	.string "your current slayer task is.\p"
	.string "Now then…$"

EDGEVILLE_GYM_START_Text_0:
	.string "Welcome to the Edgeville Gym.\p"
	.string "I am Vannaka, I suppose you want this\n"
	.string "badge.\p"
	.string "Before I give it to you I you will have\n"
	.string "to complete my gym challenge.\p"
	.string "The challenge is complete a Slayer task\n"
	.string "within this dungeon.\p"
	.string "Are you up for the challenge?$"

EDGEVILLE_GYM_START_Text_1:
	.string "Excellent, your current Slayer\n"
	.string "Assignment is to slay 1 Basilisk within\l"
	.string "this Dungeon.\p"
	.string "But as you would expect it won't be\n"
	.string "that simple, there are Hill Giants and\l"
	.string "Skeletons everywhere.\p"
	.string "Here I'll open the gate for you.$"

EDGEVILLE_GYM_START_Text_2:
	.string "Good luck on your task!$"

EDGEVILLE_GYM_START_Text_3:
	.string "Come back if you wish to challenge me.$"

EDGEVILLE_GYM_START_Text_4:
	.string "You can find a Basilisk deep within this\n"
	.string "dungeon.\p"
	.string "Feel free to show off to those pesky\n"
	.string "Hill Giants while you're at it.$"

EDGEVILLE_GYM_START_Text_5:
	.string "You lost to the Basilisk?\p"
	.string "Maybe you're not as strong as I thought\n"
	.string "you were.\p"
	.string "Go give it another try.$"

EDGEVILLE_GYM_START_Text_6:
	.string "Well done in defeating that Basilisk.\p"
	.string "It looks like you even got slayer points\n"
	.string "from defeating it!\p"
	.string "You can buy items from my slayer shop\n"
	.string "with those points.\p"
	.string "But I am getting ahead of myself, you\n"
	.string "have proven yourself worth of a battle\l"
	.string "with the mighty slayer master Vannaka.\p"
	.string "It is my duty of the Gym Leader of\n"
	.string "Edgeville to accept your challenge.\p"
	.string "Very well, show me what you've got!$"

EDGEVILLE_GYM_START_Text_7:
	.string "Back for more?\p"
	.string "Lets go!$"

EDGEVILLE_GYM_BATTLE_VANNAKA_Text_0:
	.string "Here, you deserve this Badge.$"

EDGEVILLE_GYM_BATTLE_VANNAKA_Text_1:
	.string "{PLAYER} received the EDGEVILLE\n"
	.string "BADGE from Vannaka.$"

EDGEVILLE_GYM_BATTLE_VANNAKA_Text_2:
	.string "Also have this Scroll and some Slayer\n"
	.string "Point(s).$"

EDGEVILLE_GYM_BATTLE_VANNAKA_Text_3:
	.string "{PLAYER} obtained 12 Slayer Point(s).$"

EDGEVILLE_GYM_BATTLE_VANNAKA_Text_4:
	.string "That scroll contains the move\n"
	.string "Ceaseless Edge.\p"
	.string "It's a high crit-ratio will slash through\n"
	.string "anyone who gets in your way.$"

EDGEVILLE_GYM_BATTLE_VANNAKA_Text_5:
	.string "Now that you've bested me you are\n"
	.string "eligible to take Slayer Tasks from me.\p"
	.string "Talk to me again if you'd like to\n"
	.string "particpate.$"

EDGEVILLE_GYM_BATTLE_VANNAKA_Text_6:
	.string "Also you should make your way to\n"
	.string "Daemonheim in the Wilderness for your\l"
	.string "next badge.$"

BATTLE_BASILISK_GYM_Text_0:
	.string "Basilisk$"

BATTLE_BASILISK_GYM_Text_1:
	.string "ZREOWWRAH!$"

BATTLE_BASILISK_GYM_Text_2:
	.string "ZGREOUWWRAHH!!!$"

BATTLE_BASILISK_GYM_Text_3:
	.string "The Basilisk seems to be angry with you.$"

EDGEVILLE_GYM_GIVE_SLAYER_POINTS_Text_0:
	.string "Slayer Assignment complete!\n"
	.string "{PLAYER} obtained 12 Slayer Point(s).$"

EDGEVILLE_GYM_GIVE_SLAYER_POINTS_Text_1:
	.string "You should return to Vannaka.$"

NPC_EDGEVILLE_GYM_LADDER_Text_0:
	.string "The ladder appears to be broken.$"

TRIGGER_BRASS_KEY_DOOR_Text_0:
	.string "The door is locked with what looks like\n"
	.string "a brass padlock.$"

FIND_BRASS_KEY_Text_0:
	.string "{PLAYER} obtained the BRASS KEY.$"

NPC_EDGEVILLE_HOUSE_NPC_1_Text_0:
	.string "Man$"

NPC_EDGEVILLE_HOUSE_NPC_1_Text_1:
	.string "Some dude asked me if I wanted his\n"
	.string "stuff, all I had to do is follow him to\l"
	.string "the Wilderness.\p"
	.string "I was tempted, but that would require\n"
	.string "way too much effort...$"

NPC_EDGEVILLE_HOUSE_NPC_2_Text_0:
	.string "Why are all of us dudes together in this\n"
	.string "weird barn?\p"
	.string "I have no idea, I was told there would\n"
	.string "be Beer...$"

NPC_EDGEVILLE_HOUSE_NPC_3_Text_0:
	.string "Living so close to the Wilderness can be\n"
	.string "scary, especially when you don't train\l"
	.string "monsters yourself, but I don't mind.$"

NPC_EDGEVILLE_HOUSE_NPC_4_Text_0:
	.string "How often do you think about the\n"
	.string "Zarosian Empire?$"

NPC_EDGEVILLE_HOUSE_NPC_5_Text_0:
	.string "Did you know there something are useful\n"
	.string "things in boxes?\p"
	.string "{PAUSE 15}These meet your Crate expectations!$"

NPC_EDGEVILLE_HOUSE_NPC_6_Text_0:
	.string "Oziach$"

NPC_EDGEVILLE_HOUSE_NPC_6_Text_1:
	.string "Aye… Another adventurer…\p"
	.string "I suppose you too wish to wear thee\n"
	.string "legendary Rune platemail like myself.\p"
	.string "Well as I told the other adventurers I\n"
	.string "will only let ye wear it if ye… Tame the\l"
	.string "dragon of Crandor!$"

NPC_EDGEVILLE_HOUSE_NPC_6_Text_2:
	.string "Come back when ye have tamed her.$"

NPC_EDGEVILLE_HOUSE_NPC_7_Text_0:
	.string "RUMadBr0$"

NPC_EDGEVILLE_HOUSE_NPC_7_Text_1:
	.string "What do you mean you don't sell PK\n"
	.string "supplies!?\p"
	.string "We are right next to the Wilderness!\p"
	.string "Who on Gielinor is going to come in here\n"
	.string "wanting to buy shears or a cake tin!$"

NPC_EDGEVILLE_HOUSE_NPC_8_Text_0:
	.string "DHBOMB99$"

NPC_EDGEVILLE_HOUSE_NPC_8_Text_1:
	.string "I'm waiting on my friend buying some\n"
	.string "supplies, then we are going to the\l"
	.string "Wilderness to PK and get filthy rich!$"

NPC_EDGEVILLE_HOUSE_NPC_9_Text_0:
	.string "Engineer$"

NPC_EDGEVILLE_HOUSE_NPC_9_Text_1:
	.string "Sorry, the furnace is currently broken.\p"
	.string "Too many adventurers were trying to\n"
	.string "dump ores in at the same time.\p"
	.string "A furnace needs to be significantly\n"
	.string "hotter to smelt gold than bronze!\p"
	.string "When will they learn...$"

NPC_EDGEVILLE_HOUSE_NPC_10_Text_0:
	.string "SitnSkill$"

NPC_EDGEVILLE_HOUSE_NPC_10_Text_1:
	.string "Aw man, how am I meant to smelt more\n"
	.string "ores now?\p"
	.string "I can't cast Superheat Item...$"

BATTLE_TRAINER_EDGEVILLE_RIVER_1_Text_0:
	.string "So many Quests, so little time!$"

BATTLE_TRAINER_EDGEVILLE_RIVER_1_Text_1:
	.string "Aaaahhh!$"

BATTLE_TRAINER_EDGEVILLE_RIVER_1_Text_2:
	.string "A QP Warrior$"

BATTLE_TRAINER_EDGEVILLE_RIVER_1_Text_3:
	.string "How many Quest Points do you have?\p"
	.string "How many do you think it takes to\n"
	.string "unlock the Quest Cape?$"

BATTLE_EDGEVILLE_GYM_1_Text_0:
	.string "My current slayer task is Skeletons.\p"
	.string "You're one of those right?!$"

BATTLE_EDGEVILLE_GYM_1_Text_1:
	.string "Woah, calm down it was a joke.$"

BATTLE_EDGEVILLE_GYM_1_Text_2:
	.string "OfD3mons$"

BATTLE_EDGEVILLE_GYM_1_Text_3:
	.string "I got a task from Vannaka, did you?$"

BATTLE_EDGEVILLE_GYM_2_Text_0:
	.string "Brrraaaiiinnnsss…$"

BATTLE_EDGEVILLE_GYM_2_Text_1:
	.string "Guh?$"

BATTLE_EDGEVILLE_GYM_2_Text_2:
	.string "Vauverra$"

BATTLE_EDGEVILLE_GYM_2_Text_3:
	.string "Heh, sorry I just needed some brains so\n"
	.string "I can summon more conjures.$"

BATTLE_EDGEVILLE_GYM_3_Text_0:
	.string "The skeleton stumbles to life ready to\n"
	.string "slay you!$"

BATTLE_EDGEVILLE_GYM_3_Text_1:
	.string "crumble… crumble…$"

BATTLE_EDGEVILLE_GYM_3_Text_2:
	.string "The skeleton seems disapointed to have\n"
	.string "been slayed by you.$"

BATTLE_EDGEVILLE_GYM_4_Text_0:
	.string "The skeleton shudders a loud bone\n"
	.string "rattling screech.$"

BATTLE_EDGEVILLE_GYM_4_Text_1:
	.string "Sreeeee…$"

BATTLE_EDGEVILLE_GYM_4_Text_2:
	.string "The skeleton ignores you.$"

BATTLE_EDGEVILLE_GYM_5_Text_0:
	.string "Wooosh!$"

BATTLE_EDGEVILLE_GYM_5_Text_1:
	.string "Wooo…sh…$"

BATTLE_EDGEVILLE_GYM_5_Text_2:
	.string "Moss Giant$"

BATTLE_EDGEVILLE_GYM_5_Text_3:
	.string "wooshing sounds$"

BATTLE_EDGEVILLE_GYM_6_Text_0:
	.string "You attack the skeleton!$"

BATTLE_EDGEVILLE_GYM_6_Text_1:
	.string "Rattle…rattle…$"

BATTLE_EDGEVILLE_GYM_6_Text_2:
	.string "The skeleton is upset that you\n"
	.string "attacked it out of nowhere.$"

BATTLE_EDGEVILLE_GYM_7_Text_0:
	.string "LITTLE HUMAN.\n"
	.string "WHAT ARE YOU DOING HERE?!$"

BATTLE_EDGEVILLE_GYM_7_Text_1:
	.string "OW! WHY…$"

BATTLE_EDGEVILLE_GYM_7_Text_2:
	.string "Hill Giant$"

BATTLE_EDGEVILLE_GYM_7_Text_3:
	.string "WHY IS LITTLE HUMAN HERE?$"

BATTLE_EDGEVILLE_GYM_8_Text_0:
	.string "OH! SECOND DINNER!$"

BATTLE_EDGEVILLE_GYM_8_Text_1:
	.string "ARGH REFLUX!$"

BATTLE_EDGEVILLE_GYM_8_Text_2:
	.string "ME WAS HUNGRY. HUMAN NOT GOOD DINNER.$"

BATTLE_EDGEVILLE_GYM_9_Text_0:
	.string "OI WHAT ARE YOU DOING IN ME CAVE?!$"

BATTLE_EDGEVILLE_GYM_9_Text_1:
	.string "GET OUT OF ME CAVE…$"

GOBLIN_EDGEVILLE_GYM_Text_0:
	.string "Hobgoblin$"

GOBLIN_EDGEVILLE_GYM_Text_1:
	.string "Aye human.\p"
	.string "Don't get any bright ideas.\p"
	.string "I'm just minding my own business, you\n"
	.string "should too.$"

FROGEEL_RIVAL_5_Text_0:
	.string "Angrenouille$"

FROGEEL_RIVAL_5_Text_1:
	.string "You really aren't escaping those\n"
	.string "stalker allegations {PLAYER}.\p"
	.string "...{PAUSE 15}\p"
	.string "...{PAUSE 15}\p"
	.string "Do you just want an autograph?\p"
	.string "No shame in being shy {PLAYER}.\l"
	.string "I got you, I got you.$"

FROGEEL_RIVAL_5_Text_2:
	.string "What?\p"
	.string "No?\l"
	.string "Well whatever.\p"
	.string "Got a big decision on my end.\p"
	.string "I will either go for a job at Al Kharid, or\n"
	.string "Varrock.\l"
	.string "What do you think?$"

FROGEEL_RIVAL_5_Text_3:
	.string "Yes as in?\l"
	.string "Both?\l"
	.string "Al Kharid?\p"
	.string "What?$"

FROGEEL_RIVAL_5_Text_4:
	.string "No to both?\p"
	.string "Or no to the last one?$"

BATTLE_FROGEEL_RIVAL_5_Text_0:
	.string "You are really confusing {PLAYER}.\p"
	.string "Anyway, the guards might be here soon\n"
	.string "so I'm going to bail.\l"
	.string "Better silence you first however!$"

BATTLE_FROGEEL_RIVAL_5_Text_1:
	.string "Seeya!$"

BATTLE_FROGEEL_RIVAL_5_Text_2:
	.string "A\n"
	.string "AAA\n"
	.string "AAAAAAA\p"
	.string "AAAAAAAAAAAAAAAAA\p"
	.string "AAAAAAAAAAAAAAAAA\p"
	.string "AAAAAAAAAAAAAAAAA\p"
	.string "AAAAAAAAAAAAAAAAA!$"

BATTLE_FROGEEL_RIVAL_5_Text_3:
	.string "As Angrenouille ran off, he dropped an\n"
	.string "item.$"

Mithrilman_Edgeville_Text_0:
	.string "Mithrilman$"

Mithrilman_Edgeville_Text_1:
	.string "Greetingst knave.\p"
	.string "Thine hast witnessed thousts battle in\n"
	.string "the village of the barbarianest.\p"
	.string "Thine must admit, thousts are truly\n"
	.string "lucky.\p"
	.string "Coming thist far solely on luckst with\n"
	.string "thousts lackest of skill.\l"
	.string "Thoust make thine laugh knave.\p"
	.string "Let thine show yee how a battle is to\n"
	.string "truly behest.$"

Mithrilman_Edgeville_Text_2:
	.string "…$"

Mithrilman_Edgeville_Text_3:
	.string "Incomprehensiblestststs…\p"
	.string "Knave, thoust mayhaps be the luckiest\n"
	.string "person in the Gielinorian realm.\p"
	.string "Thine is baffled.\l"
	.string "Howst is this possible?\p"
	.string "Knave, thine sees throughts yee.\p"
	.string "Thoust are nothing but a knave,\n"
	.string "insignificant comparest to thine,\l"
	.string "because thine is a mithrilman beyond\l"
	.string "comparisonst.\p"
	.string "Yee be warned.\l"
	.string "Nexts timest thine battlest yee, thine\l"
	.string "will showst no mercy.$"

Mithrilman_Edgeville_Text_4:
	.string "Oh?\p"
	.string "Mithrilman seems to have dropped\n"
	.string "something while leaving.$"
