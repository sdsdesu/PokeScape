Lumbridge_Forest_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Lumbridge_Forest_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Lumbridge_Forest_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 6
	call WEATHER_CHANGE_AREA_DRAYNOR
	compare VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto_if_eq Lumbridge_Forest_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Lumbridge_Forest_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	call LumForest_STATE
	return


LumForest_STATE::
	return


LUMBRIDGEFOREST_NPC_BOT1::
	namebox LUMBRIDGEFOREST_NPC_BOT1_Text_0
	msgbox LUMBRIDGEFOREST_NPC_BOT1_Text_1
	closemessage
	release
	end


LUMBRIDGEFOREST_NPC_BOT2::
	namebox LUMBRIDGEFOREST_NPC_BOT1_Text_0
	msgbox LUMBRIDGEFOREST_NPC_BOT2_Text_0
	closemessage
	release
	end


LUMBRIDGEFOREST_NPC_WOODCUTTER::
	faceplayer
	namebox LUMBRIDGEFOREST_NPC_WOODCUTTER_Text_0
	msgbox LUMBRIDGEFOREST_NPC_WOODCUTTER_Text_1
	closemessage
	release
	end


NPC_LUMBRIDGE_FOREST_1::
	lock
	faceplayer
	namebox NPC_LUMBRIDGE_FOREST_1_Text_0
	msgbox NPC_LUMBRIDGE_FOREST_1_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_LUMBRIDGE_FOREST_2::
	lock
	faceplayer
	namebox NPC_LUMBRIDGE_FOREST_2_Text_0
	msgbox NPC_LUMBRIDGE_FOREST_2_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_LUMBRIDGE_FOREST_3::
	lock
	faceplayer
	namebox NPC_LUMBRIDGE_FOREST_3_Text_0
	msgbox NPC_LUMBRIDGE_FOREST_3_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_LUMBRIDGE_FOREST_4::
	lock
	namebox NPC_LUMBRIDGE_FOREST_4_Text_0
	msgbox NPC_LUMBRIDGE_FOREST_4_Text_1
	closemessage
	hidenamebox
	playse SE_LEDGE
	applymovement 13, MOVEMENT_SHOCKED_FACEPLAYER
	waitmovement 0
	namebox NPC_LUMBRIDGE_FOREST_4_Text_0
	msgbox NPC_LUMBRIDGE_FOREST_4_Text_2
	closemessage
	hidenamebox
	release
	end


MOVEMENT_SHOCKED_FACEPLAYER:
	emote_exclamation_mark
	face_player
	lock_facing_direction
	jump_in_place_down
	unlock_facing_direction
	step_end

NPC_LUMBRIDGE_FOREST_5::
	lock
	faceplayer
	namebox LUMBRIDGEFOREST_NPC_WOODCUTTER_Text_0
	msgbox NPC_LUMBRIDGE_FOREST_5_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_LUMBRIDGE_FOREST_6::
	lock
	faceplayer
	namebox NPC_LUMBRIDGE_FOREST_6_Text_0
	msgbox NPC_LUMBRIDGE_FOREST_6_Text_1
	closemessage
	hidenamebox
	release
	end


BATTLE_LUMBRIDGEFOREST_BOT1::
	trainerbattle_single TRAINER_LUMBRIDGEFOREST_BOT1, BATTLE_LUMBRIDGEFOREST_BOT1_Text_0, BATTLE_LUMBRIDGEFOREST_BOT1_Text_1
	namebox BATTLE_LUMBRIDGEFOREST_BOT1_Text_2
	msgbox BATTLE_LUMBRIDGEFOREST_BOT1_Text_1
	hidenamebox
	release
	end


BATTLE_LUMBRIDGEFOREST_WOODCUTTER1::
	trainerbattle_single TRAINER_LUMBRIDGEFOREST_WOODCUTTER1, BATTLE_LUMBRIDGEFOREST_WOODCUTTER1_Text_0, BATTLE_LUMBRIDGEFOREST_WOODCUTTER1_Text_1
	msgbox BATTLE_LUMBRIDGEFOREST_WOODCUTTER1_Text_2
	hidenamebox
	release
	end


BATTLE_LUMBRIDGEFOREST_TRAINER_1::
	trainerbattle_single TRAINER_LUMBRIDGEFOREST_TRAINER_1, BATTLE_LUMBRIDGEFOREST_TRAINER_1_Text_0, BATTLE_LUMBRIDGEFOREST_TRAINER_1_Text_1
	namebox BATTLE_LUMBRIDGEFOREST_TRAINER_1_Text_2
	msgbox BATTLE_LUMBRIDGEFOREST_TRAINER_1_Text_1
	hidenamebox
	release
	end


BATTLE_LUMBRIDGEFOREST_TRAINER_2::
	trainerbattle_single TRAINER_LUMBRIDGEFOREST_TRAINER_2, BATTLE_LUMBRIDGEFOREST_TRAINER_2_Text_0, BATTLE_LUMBRIDGEFOREST_TRAINER_2_Text_1
	msgbox BATTLE_LUMBRIDGEFOREST_TRAINER_2_Text_2
	hidenamebox
	release
	end


BATTLE_LUMBRIDGEFOREST_TRAINER_3::
	trainerbattle_single TRAINER_LUMBRIDGEFOREST_TRAINER_3, BATTLE_LUMBRIDGEFOREST_TRAINER_3_Text_0, BATTLE_LUMBRIDGEFOREST_TRAINER_3_Text_1
	msgbox BATTLE_LUMBRIDGEFOREST_TRAINER_3_Text_2
	hidenamebox
	release
	end


NPC_LUMBRIDGE_FOREST_HAM_1::
	lock
	faceplayer
	namebox NPC_LUMBRIDGE_FOREST_HAM_1_Text_0
	msgbox NPC_LUMBRIDGE_FOREST_HAM_1_Text_1
	closemessage
	hidenamebox
	release
	end


TRIGGER_ALKHARID_HAM_EVENT_4::
	switch VAR_POKESCAPE_STORYMODE_PROGRESS
	case 215, TRIGGER_ALKHARID_HAM_EVENT_4_3
	case 220, TRIGGER_ALKHARID_HAM_EVENT_4_4
TRIGGER_ALKHARID_HAM_EVENT_4_1:
	setvar VAR_TEMP_1, 1
	release
	end

TRIGGER_ALKHARID_HAM_EVENT_4_3:
	goto TRIGGER_ALKHARID_HAM_EVENT_4_Zanik_first_interaction
	goto TRIGGER_ALKHARID_HAM_EVENT_4_1

TRIGGER_ALKHARID_HAM_EVENT_4_4:
	goto CHECK_FOLLOWER_ZANIK
	goto TRIGGER_ALKHARID_HAM_EVENT_4_1


TRIGGER_ALKHARID_HAM_EVENT_4_Zanik_first_interaction::
	lockall
	playse SE_PIN
	applymovement 29, movement_ZANIK_WALK_TOWARDS_PLAYER_FOR_TEAMUP
	waitmovement 0
	namebox TRIGGER_ALKHARID_HAM_EVENT_4_Zanik_first_interaction_Text_0
	msgbox TRIGGER_ALKHARID_HAM_EVENT_4_Zanik_first_interaction_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne TRIGGER_ALKHARID_HAM_EVENT_4_Zanik_first_interaction_2
	msgbox TRIGGER_ALKHARID_HAM_EVENT_4_Zanik_first_interaction_Text_3
TRIGGER_ALKHARID_HAM_EVENT_4_Zanik_first_interaction_1:
	namebox TRIGGER_ALKHARID_HAM_EVENT_4_Zanik_first_interaction_Text_4
	msgbox TRIGGER_ALKHARID_HAM_EVENT_4_Zanik_first_interaction_Text_5
	closemessage
	hidenamebox
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_INTERACT_UP
	waitmovement 0
	namebox TRIGGER_ALKHARID_HAM_EVENT_4_Zanik_first_interaction_Text_4
	msgbox TRIGGER_ALKHARID_HAM_EVENT_4_Zanik_first_interaction_Text_6
	msgbox TRIGGER_ALKHARID_HAM_EVENT_4_Zanik_first_interaction_Text_7, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq TRIGGER_ALKHARID_HAM_EVENT_4_Zanik_first_interaction_6
	msgbox TRIGGER_ALKHARID_HAM_EVENT_4_Zanik_first_interaction_Text_9
	hidenamebox
	playfanfare MUS_OBTAIN_SYMBOL
	msgbox TRIGGER_ALKHARID_HAM_EVENT_4_Zanik_first_interaction_Text_10
	waitfanfare
	closemessage
	hidenamebox
	setflag FLAG_TOGGLE_FORCED_WILD_DOUBLE_BATTLES
	setflag FLAG_PARTNER_BATTLE
	setvar VAR_PARTNER_TRAINER, TRAINER_ZANIK_HAM
	setvar VAR_PARTNER_SPRITE, TRAINER_BACK_PIC_ZANIK
	namebox TRIGGER_ALKHARID_HAM_EVENT_4_Zanik_first_interaction_Text_4
	msgbox TRIGGER_ALKHARID_HAM_EVENT_4_Zanik_first_interaction_Text_11
	closemessage
	hidenamebox
	fadescreenswapbuffers FADE_TO_BLACK
	destroyfollower
	loadword 0, Following_Zanik
	setfollower 29, 0x80
	setvar VAR_0x8004, OUTFIT_HAM
	special WearOutfit
	delay 20
	namebox TRIGGER_ALKHARID_HAM_EVENT_4_Zanik_first_interaction_Text_4
	msgbox TRIGGER_ALKHARID_HAM_EVENT_4_Zanik_first_interaction_Text_12
	closemessage
	hidenamebox
	applymovement OBJ_EVENT_ID_FOLLOWER, MOVEMENT_WALK_UP
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_WALK_UP
	waitmovement 0
	setvar VAR_POKESCAPE_STORYMODE_PROGRESS, 220
TRIGGER_ALKHARID_HAM_EVENT_4_Zanik_first_interaction_5:
	closemessage
	hidenamebox
	release
	end

TRIGGER_ALKHARID_HAM_EVENT_4_Zanik_first_interaction_2:
	msgbox TRIGGER_ALKHARID_HAM_EVENT_4_Zanik_first_interaction_Text_2
	goto TRIGGER_ALKHARID_HAM_EVENT_4_Zanik_first_interaction_1

TRIGGER_ALKHARID_HAM_EVENT_4_Zanik_first_interaction_6:
	msgbox TRIGGER_ALKHARID_HAM_EVENT_4_Zanik_first_interaction_Text_8
	applymovement 29, movement_ZANIK_WALKS_AWAY
	waitmovement 0
	goto TRIGGER_ALKHARID_HAM_EVENT_4_Zanik_first_interaction_5


movement_ZANIK_WALK_TOWARDS_PLAYER_FOR_TEAMUP:
	emote_exclamation_mark
	delay_16
	delay_16
	walk_right
	walk_right
	walk_down
	walk_down
	step_end

movement_ZANIK_WALKS_AWAY:
	walk_up
	walk_up
	walk_left
	walk_left
	face_down
	step_end

CHECK_FOLLOWER_ZANIK::
	checkfollower
	compare VAR_RESULT, 0
	goto_if_ne CHECK_FOLLOWER_ZANIK_2
	playse SE_PIN
	applymovement 29, movement_ZANIK_WALK_TOWARDS_PLAYER_FOR_TEAMUP
	waitmovement 0
	goto SetFollower_Zanik
CHECK_FOLLOWER_ZANIK_1:
	return

CHECK_FOLLOWER_ZANIK_2:
	lockall
	facefollower
	namebox TRIGGER_ALKHARID_HAM_EVENT_4_Zanik_first_interaction_Text_4
	msgbox CHECK_FOLLOWER_ZANIK_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne CHECK_FOLLOWER_ZANIK_6
	closemessage
	hidenamebox
	applymovement OBJ_EVENT_ID_FOLLOWER, MOVEMENT_WALK_UP
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_WALK_UP
	waitmovement 0
CHECK_FOLLOWER_ZANIK_5:
	releaseall
	goto CHECK_FOLLOWER_ZANIK_1

CHECK_FOLLOWER_ZANIK_6:
	msgbox CHECK_FOLLOWER_ZANIK_Text_1
	iswearingoutfit OUTFIT_HAM
	compare VAR_RESULT, TRUE
	goto_if_eq CHECK_FOLLOWER_ZANIK_10
CHECK_FOLLOWER_ZANIK_9:
	closemessage
	hidenamebox
	iswearingoutfit OUTFIT_HAM
	compare VAR_RESULT, TRUE
	goto_if_eq CHECK_FOLLOWER_ZANIK_13
	call FOLLOWER_REMOVE
CHECK_FOLLOWER_ZANIK_12:
	clearflag FLAG_TEMP_1E
	addobject 29
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_WALK_DOWN
	waitmovement 0
	goto CHECK_FOLLOWER_ZANIK_5

CHECK_FOLLOWER_ZANIK_10:
	namebox TRIGGER_ALKHARID_HAM_EVENT_4_Zanik_first_interaction_Text_4
	msgbox CHECK_FOLLOWER_ZANIK_Text_2
	goto CHECK_FOLLOWER_ZANIK_9

CHECK_FOLLOWER_ZANIK_13:
	fadescreenswapbuffers FADE_TO_BLACK
	call FOLLOWER_REMOVE
	setvar VAR_0x8004, OUTFIT_DEFAULT
	special WearOutfit
	fadescreenswapbuffers FADE_FROM_BLACK
	goto CHECK_FOLLOWER_ZANIK_12


SetFollower_Zanik::
	lockall
	faceplayer
	namebox TRIGGER_ALKHARID_HAM_EVENT_4_Zanik_first_interaction_Text_4
	msgbox SetFollower_Zanik_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne SetFollower_Zanik_2
	msgbox TRIGGER_ALKHARID_HAM_EVENT_4_Zanik_first_interaction_Text_8
	hidenamebox
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_WALK_DOWN
	waitmovement 0
	releaseall
	end

SetFollower_Zanik_2:
	msgbox TRIGGER_ALKHARID_HAM_EVENT_4_Zanik_first_interaction_Text_9
	hidenamebox
	playfanfare MUS_OBTAIN_SYMBOL
	msgbox TRIGGER_ALKHARID_HAM_EVENT_4_Zanik_first_interaction_Text_10
	waitfanfare
	closemessage
	hidenamebox
	setflag FLAG_TOGGLE_FORCED_WILD_DOUBLE_BATTLES
	setflag FLAG_PARTNER_BATTLE
	setvar VAR_PARTNER_TRAINER, TRAINER_ZANIK_HAM
	setvar VAR_PARTNER_SPRITE, TRAINER_BACK_PIC_ZANIK
	namebox TRIGGER_ALKHARID_HAM_EVENT_4_Zanik_first_interaction_Text_4
	msgbox TRIGGER_ALKHARID_HAM_EVENT_4_Zanik_first_interaction_Text_11
	closemessage
	hidenamebox
	fadescreenswapbuffers FADE_TO_BLACK
	destroyfollower
	loadword 0, Following_Zanik
	setfollower 29, 0x80
	setvar VAR_0x8004, OUTFIT_HAM
	special WearOutfit
	delay 20
	namebox TRIGGER_ALKHARID_HAM_EVENT_4_Zanik_first_interaction_Text_4
	msgbox TRIGGER_ALKHARID_HAM_EVENT_4_Zanik_first_interaction_Text_12
	closemessage
	hidenamebox
	applymovement OBJ_EVENT_ID_FOLLOWER, MOVEMENT_WALK_UP
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_WALK_UP
	waitmovement 0
	releaseall
	end


Following_Zanik::
	namebox TRIGGER_ALKHARID_HAM_EVENT_4_Zanik_first_interaction_Text_4
	facefollower
	switch VAR_POKESCAPE_STORYMODE_PROGRESS
	case 181, Following_Zanik_3
	case 186, Following_Zanik_4
	case 187, Following_Zanik_5
	random 5
	switch VAR_RESULT
	case 0, Following_Zanik_7
	case 1, Following_Zanik_7
	case 2, Following_Zanik_7
	case 3, Following_Zanik_7
	goto ZANIK_DIALOGUE_COMMON
	return

Following_Zanik_3:
	msgbox Following_Zanik_Text_0
	hidenamebox
	closemessage
	release
	end

Following_Zanik_4:
	msgbox Following_Zanik_Text_1
	hidenamebox
	closemessage
	release
	end

Following_Zanik_5:
	msgbox Following_Zanik_Text_2
	hidenamebox
	closemessage
	release
	end

Following_Zanik_7:
	specialvar VAR_RESULT, GetCurrentMap
	compare VAR_RESULT, MAP_LUMBRIDGE_FOREST
	goto_if_eq Following_Zanik_9
	compare VAR_RESULT, MAP_HAM_HIDEOUT_B1F
	goto_if_eq Following_Zanik_10
	compare VAR_RESULT, MAP_HAM_HIDEOUT_B2F
	goto_if_eq Following_Zanik_11
	goto ZANIK_DIALOGUE_COMMON
	return

Following_Zanik_9:
	goto ZANIK_DIALOGUE_LUMBRIDGE_FOREST
	return

Following_Zanik_10:
	goto ZANIK_DIALOGUE_HAM_HIDEOUT_B1F
	return

Following_Zanik_11:
	goto ZANIK_DIALOGUE_HAM_HIDEOUT_B2F
	return


ZANIK_DIALOGUE_COMMON::
	random 12
	switch VAR_RESULT
	case 0, ZANIK_DIALOGUE_COMMON_3
	case 1, ZANIK_DIALOGUE_COMMON_4
	case 2, ZANIK_DIALOGUE_COMMON_5
	case 3, ZANIK_DIALOGUE_COMMON_6
	case 4, ZANIK_DIALOGUE_COMMON_7
	case 5, ZANIK_DIALOGUE_COMMON_8
	case 6, ZANIK_DIALOGUE_COMMON_9
	case 7, ZANIK_DIALOGUE_COMMON_10
	case 8, ZANIK_DIALOGUE_COMMON_11
	case 9, ZANIK_DIALOGUE_COMMON_12
	case 10, ZANIK_DIALOGUE_COMMON_13
	case 11, ZANIK_DIALOGUE_COMMON_14
ZANIK_DIALOGUE_COMMON_1:
	hidenamebox
	closemessage
	release
	end

ZANIK_DIALOGUE_COMMON_3:
	msgbox ZANIK_DIALOGUE_COMMON_Text_0
	goto ZANIK_DIALOGUE_COMMON_1

ZANIK_DIALOGUE_COMMON_4:
	msgbox ZANIK_DIALOGUE_COMMON_Text_1
	goto ZANIK_DIALOGUE_COMMON_1

ZANIK_DIALOGUE_COMMON_5:
	msgbox ZANIK_DIALOGUE_COMMON_Text_2
	goto ZANIK_DIALOGUE_COMMON_1

ZANIK_DIALOGUE_COMMON_6:
	msgbox ZANIK_DIALOGUE_COMMON_Text_3
	goto ZANIK_DIALOGUE_COMMON_1

ZANIK_DIALOGUE_COMMON_7:
	msgbox ZANIK_DIALOGUE_COMMON_Text_4
	goto ZANIK_DIALOGUE_COMMON_1

ZANIK_DIALOGUE_COMMON_8:
	msgbox ZANIK_DIALOGUE_COMMON_Text_5
	goto ZANIK_DIALOGUE_COMMON_1

ZANIK_DIALOGUE_COMMON_9:
	msgbox ZANIK_DIALOGUE_COMMON_Text_6
	goto ZANIK_DIALOGUE_COMMON_1

ZANIK_DIALOGUE_COMMON_10:
	msgbox ZANIK_DIALOGUE_COMMON_Text_7
	goto ZANIK_DIALOGUE_COMMON_1

ZANIK_DIALOGUE_COMMON_11:
	msgbox ZANIK_DIALOGUE_COMMON_Text_8
	goto ZANIK_DIALOGUE_COMMON_1

ZANIK_DIALOGUE_COMMON_12:
	msgbox ZANIK_DIALOGUE_COMMON_Text_9
	goto ZANIK_DIALOGUE_COMMON_1

ZANIK_DIALOGUE_COMMON_13:
	msgbox ZANIK_DIALOGUE_COMMON_Text_10
	goto ZANIK_DIALOGUE_COMMON_1

ZANIK_DIALOGUE_COMMON_14:
	msgbox ZANIK_DIALOGUE_COMMON_Text_11
	goto ZANIK_DIALOGUE_COMMON_1


ZANIK_DIALOGUE_LUMBRIDGE_FOREST::
	random 5
	switch VAR_RESULT
	case 0, ZANIK_DIALOGUE_LUMBRIDGE_FOREST_3
	case 1, ZANIK_DIALOGUE_LUMBRIDGE_FOREST_4
	case 2, ZANIK_DIALOGUE_LUMBRIDGE_FOREST_5
	case 3, ZANIK_DIALOGUE_LUMBRIDGE_FOREST_6
	case 4, ZANIK_DIALOGUE_LUMBRIDGE_FOREST_7
ZANIK_DIALOGUE_LUMBRIDGE_FOREST_1:
	hidenamebox
	closemessage
	release
	end

ZANIK_DIALOGUE_LUMBRIDGE_FOREST_3:
	msgbox ZANIK_DIALOGUE_LUMBRIDGE_FOREST_Text_0
	goto ZANIK_DIALOGUE_LUMBRIDGE_FOREST_1

ZANIK_DIALOGUE_LUMBRIDGE_FOREST_4:
	msgbox ZANIK_DIALOGUE_LUMBRIDGE_FOREST_Text_1
	goto ZANIK_DIALOGUE_LUMBRIDGE_FOREST_1

ZANIK_DIALOGUE_LUMBRIDGE_FOREST_5:
	msgbox ZANIK_DIALOGUE_LUMBRIDGE_FOREST_Text_2
	goto ZANIK_DIALOGUE_LUMBRIDGE_FOREST_1

ZANIK_DIALOGUE_LUMBRIDGE_FOREST_6:
	msgbox ZANIK_DIALOGUE_LUMBRIDGE_FOREST_Text_3
	goto ZANIK_DIALOGUE_LUMBRIDGE_FOREST_1

ZANIK_DIALOGUE_LUMBRIDGE_FOREST_7:
	msgbox ZANIK_DIALOGUE_LUMBRIDGE_FOREST_Text_4
	goto ZANIK_DIALOGUE_LUMBRIDGE_FOREST_1


ZANIK_DIALOGUE_HAM_HIDEOUT_B1F::
	random 8
	switch VAR_RESULT
	case 0, ZANIK_DIALOGUE_HAM_HIDEOUT_B1F_3
	case 1, ZANIK_DIALOGUE_HAM_HIDEOUT_B1F_4
	case 2, ZANIK_DIALOGUE_HAM_HIDEOUT_B1F_5
	case 3, ZANIK_DIALOGUE_HAM_HIDEOUT_B1F_6
	case 4, ZANIK_DIALOGUE_HAM_HIDEOUT_B1F_7
	case 5, ZANIK_DIALOGUE_HAM_HIDEOUT_B1F_8
	case 6, ZANIK_DIALOGUE_HAM_HIDEOUT_B1F_9
	case 7, ZANIK_DIALOGUE_HAM_HIDEOUT_B1F_10
ZANIK_DIALOGUE_HAM_HIDEOUT_B1F_1:
	hidenamebox
	closemessage
	release
	end

ZANIK_DIALOGUE_HAM_HIDEOUT_B1F_3:
	msgbox ZANIK_DIALOGUE_HAM_HIDEOUT_B1F_Text_0
	goto ZANIK_DIALOGUE_HAM_HIDEOUT_B1F_1

ZANIK_DIALOGUE_HAM_HIDEOUT_B1F_4:
	msgbox ZANIK_DIALOGUE_HAM_HIDEOUT_B1F_Text_1
	goto ZANIK_DIALOGUE_HAM_HIDEOUT_B1F_1

ZANIK_DIALOGUE_HAM_HIDEOUT_B1F_5:
	msgbox ZANIK_DIALOGUE_HAM_HIDEOUT_B1F_Text_2
	goto ZANIK_DIALOGUE_HAM_HIDEOUT_B1F_1

ZANIK_DIALOGUE_HAM_HIDEOUT_B1F_6:
	msgbox ZANIK_DIALOGUE_HAM_HIDEOUT_B1F_Text_3
	goto ZANIK_DIALOGUE_HAM_HIDEOUT_B1F_1

ZANIK_DIALOGUE_HAM_HIDEOUT_B1F_7:
	msgbox ZANIK_DIALOGUE_HAM_HIDEOUT_B1F_Text_4
	goto ZANIK_DIALOGUE_HAM_HIDEOUT_B1F_1

ZANIK_DIALOGUE_HAM_HIDEOUT_B1F_8:
	msgbox ZANIK_DIALOGUE_HAM_HIDEOUT_B1F_Text_5
	goto ZANIK_DIALOGUE_HAM_HIDEOUT_B1F_1

ZANIK_DIALOGUE_HAM_HIDEOUT_B1F_9:
	msgbox ZANIK_DIALOGUE_HAM_HIDEOUT_B1F_Text_6
	goto ZANIK_DIALOGUE_HAM_HIDEOUT_B1F_1

ZANIK_DIALOGUE_HAM_HIDEOUT_B1F_10:
	msgbox ZANIK_DIALOGUE_HAM_HIDEOUT_B1F_Text_7
	goto ZANIK_DIALOGUE_HAM_HIDEOUT_B1F_1


ZANIK_DIALOGUE_HAM_HIDEOUT_B2F::
	random 7
	switch VAR_RESULT
	case 0, ZANIK_DIALOGUE_HAM_HIDEOUT_B2F_3
	case 1, ZANIK_DIALOGUE_HAM_HIDEOUT_B2F_4
	case 2, ZANIK_DIALOGUE_HAM_HIDEOUT_B2F_5
	case 3, ZANIK_DIALOGUE_HAM_HIDEOUT_B2F_6
	case 4, ZANIK_DIALOGUE_HAM_HIDEOUT_B2F_7
	case 5, ZANIK_DIALOGUE_HAM_HIDEOUT_B2F_8
	case 6, ZANIK_DIALOGUE_HAM_HIDEOUT_B2F_9
ZANIK_DIALOGUE_HAM_HIDEOUT_B2F_1:
	hidenamebox
	closemessage
	release
	end

ZANIK_DIALOGUE_HAM_HIDEOUT_B2F_3:
	msgbox ZANIK_DIALOGUE_HAM_HIDEOUT_B2F_Text_0
	goto ZANIK_DIALOGUE_HAM_HIDEOUT_B2F_1

ZANIK_DIALOGUE_HAM_HIDEOUT_B2F_4:
	msgbox ZANIK_DIALOGUE_HAM_HIDEOUT_B2F_Text_1
	goto ZANIK_DIALOGUE_HAM_HIDEOUT_B2F_1

ZANIK_DIALOGUE_HAM_HIDEOUT_B2F_5:
	msgbox ZANIK_DIALOGUE_HAM_HIDEOUT_B2F_Text_2
	goto ZANIK_DIALOGUE_HAM_HIDEOUT_B2F_1

ZANIK_DIALOGUE_HAM_HIDEOUT_B2F_6:
	msgbox ZANIK_DIALOGUE_HAM_HIDEOUT_B2F_Text_3
	goto ZANIK_DIALOGUE_HAM_HIDEOUT_B2F_1

ZANIK_DIALOGUE_HAM_HIDEOUT_B2F_7:
	msgbox ZANIK_DIALOGUE_HAM_HIDEOUT_B2F_Text_4
	goto ZANIK_DIALOGUE_HAM_HIDEOUT_B2F_1

ZANIK_DIALOGUE_HAM_HIDEOUT_B2F_8:
	msgbox ZANIK_DIALOGUE_HAM_HIDEOUT_B2F_Text_5
	goto ZANIK_DIALOGUE_HAM_HIDEOUT_B2F_1

ZANIK_DIALOGUE_HAM_HIDEOUT_B2F_9:
	msgbox ZANIK_DIALOGUE_HAM_HIDEOUT_B2F_Text_6
	goto ZANIK_DIALOGUE_HAM_HIDEOUT_B2F_1


NPC_LUMBRIDGEFOREST_HAM_1::
	lock
	faceplayer
	namebox NPC_LUMBRIDGEFOREST_HAM_1_Text_0
	msgbox NPC_LUMBRIDGEFOREST_HAM_1_Text_1
	closemessage
	hidenamebox
	release
	end


BATTLE_LUMBRIDGEFOREST_HAM_1::
	trainerbattle_single TRAINER_LUMBRIDGEFOREST_HAM_1, BATTLE_LUMBRIDGEFOREST_HAM_1_Text_0, BATTLE_LUMBRIDGEFOREST_HAM_1_Text_1
	namebox NPC_LUMBRIDGEFOREST_HAM_1_Text_0
	msgbox BATTLE_LUMBRIDGEFOREST_HAM_1_Text_2
	hidenamebox
	release
	end


BATTLE_LUMBRIDGEFOREST_HAM_2::
	trainerbattle_single TRAINER_LUMBRIDGEFOREST_HAM_2, BATTLE_LUMBRIDGEFOREST_HAM_2_Text_0, BATTLE_LUMBRIDGEFOREST_HAM_2_Text_1
	namebox NPC_LUMBRIDGEFOREST_HAM_1_Text_0
	msgbox BATTLE_LUMBRIDGEFOREST_HAM_2_Text_2
	hidenamebox
	release
	end


BATTLE_LUMBRIDGEFOREST_HAM_3::
	trainerbattle_single TRAINER_LUMBRIDGEFOREST_HAM_3, BATTLE_LUMBRIDGEFOREST_HAM_3_Text_0, BATTLE_LUMBRIDGEFOREST_HAM_3_Text_1
	namebox NPC_LUMBRIDGEFOREST_HAM_1_Text_0
	msgbox BATTLE_LUMBRIDGEFOREST_HAM_3_Text_2
	hidenamebox
	release
	end


BATTLE_LUMBRIDGEFOREST_HAM_4::
	trainerbattle_single TRAINER_LUMBRIDGEFOREST_HAM_4, BATTLE_LUMBRIDGEFOREST_HAM_4_Text_0, BATTLE_LUMBRIDGEFOREST_HAM_4_Text_1
	namebox NPC_LUMBRIDGEFOREST_HAM_1_Text_0
	msgbox BATTLE_LUMBRIDGEFOREST_HAM_4_Text_2
	hidenamebox
	release
	end


ITEM_RECEIVED_TM05::
	finditem ITEM_TM05_TAILWIND
	end


ITEM_RECEIVED_TM06::
	finditem ITEM_TM06_FLAME_CHARGE
	end


ITEM_RECEIVED_TM21::
	finditem ITEM_TM21_TOXIC
	end


ITEM_RECEIVED_TM22::
	finditem ITEM_TM22_SHADOW_BONE
	end


ITEM_RECEIVED_TM26::
	finditem ITEM_TM26_KINGS_SHIELD
	end


ITEM_RECEIVED_TM33::
	finditem ITEM_TM33_DRAGON_BREATH
	end


ITEM_RECEIVED_TM38::
	finditem ITEM_TM38_ROCK_TOMB
	end


ITEM_RECEIVED_TM40::
	finditem ITEM_TM40_VOLT_SWITCH
	end


ITEM_RECEIVED_TM49::
	finditem ITEM_TM49_SNARL
	end


ITEM_RECEIVED_TM50::
	finditem ITEM_TM50_POISON_JAB
	end


ITEM_RECEIVED_TM54::
	finditem ITEM_TM54_MUD_BOMB
	end


ITEM_RECEIVED_TM55::
	finditem ITEM_TM55_HEX
	end


ITEM_RECEIVED_TM62::
	finditem ITEM_TM62_DEFOG
	end


ITEM_RECEIVED_TM64::
	finditem ITEM_TM64_REVENGE
	end


LUMBRIDGEFOREST_NPC_BOT1_Text_0:
	.string "Bot$"

LUMBRIDGEFOREST_NPC_BOT1_Text_1:
	.string "BEEP BOOP.$"

LUMBRIDGEFOREST_NPC_BOT2_Text_0:
	.string "CHOP, CHOP, CHOP.$"

LUMBRIDGEFOREST_NPC_WOODCUTTER_Text_0:
	.string "Woodcutter$"

LUMBRIDGEFOREST_NPC_WOODCUTTER_Text_1:
	.string "These bots are so annoying.$"

NPC_LUMBRIDGE_FOREST_1_Text_0:
	.string "Monk$"

NPC_LUMBRIDGE_FOREST_1_Text_1:
	.string "Why are all of us standing around here?\p"
	.string "None of your business.\p"
	.string "Get lost.$"

NPC_LUMBRIDGE_FOREST_2_Text_0:
	.string "Warrior$"

NPC_LUMBRIDGE_FOREST_2_Text_1:
	.string "We're looking for Zanaris...GAH!\p"
	.string "I mean we're not here for any particular\n"
	.string "reason at all.\p"
	.string "...\p"
	.string "Of course we know where it is! We just\n"
	.string "haven't found which tree the stupid\l"
	.string "leprechaun's hiding in yet!$"

NPC_LUMBRIDGE_FOREST_3_Text_0:
	.string "Wizard$"

NPC_LUMBRIDGE_FOREST_3_Text_1:
	.string "Hahaha you dare talk to a mighty wizard\n"
	.string "such as myself?\p"
	.string "I bet you can't even cast windstrike\n"
	.string "yet noob!$"

NPC_LUMBRIDGE_FOREST_4_Text_0:
	.string "Archer$"

NPC_LUMBRIDGE_FOREST_4_Text_1:
	.string "Rats!\p"
	.string "I dropped my last sweet looking for\n"
	.string "that stupid lepre-$"

NPC_LUMBRIDGE_FOREST_4_Text_2:
	.string "Forget anything you might have heard!\p"
	.string "Now go away this is our quest!$"

NPC_LUMBRIDGE_FOREST_5_Text_0:
	.string "I can see Lumbridge on the other side.\p"
	.string "If only I had the Woodcutting level to\n"
	.string "get past these trees…$"

NPC_LUMBRIDGE_FOREST_6_Text_0:
	.string "Cupholder$"

NPC_LUMBRIDGE_FOREST_6_Text_1:
	.string "Hello, I am a Cupholder.$"

BATTLE_LUMBRIDGEFOREST_BOT1_Text_0:
	.string "ALERT!\p"
	.string "INTERACTION DETECTED.\p"
	.string "RESPONSE ACTIVATED.\p"
	.string "HELLO, I AM NOT A BOT.$"

BATTLE_LUMBRIDGEFOREST_BOT1_Text_1:
	.string "HELLO, I AM NOT A BOT.$"

BATTLE_LUMBRIDGEFOREST_BOT1_Text_2:
	.string "alhgkj73$"

BATTLE_LUMBRIDGEFOREST_WOODCUTTER1_Text_0:
	.string "OMG LUL, guess what?\p"
	.string "These woods belong to me!$"

BATTLE_LUMBRIDGEFOREST_WOODCUTTER1_Text_1:
	.string "JK, I'll share.$"

BATTLE_LUMBRIDGEFOREST_WOODCUTTER1_Text_2:
	.string "Like ROFLMAO you are stronk.\p"
	.string "You sure cut me down to size, OMEGALUL!$"

BATTLE_LUMBRIDGEFOREST_TRAINER_1_Text_0:
	.string "I am going to jump out and attack you\n"
	.string "now.$"

BATTLE_LUMBRIDGEFOREST_TRAINER_1_Text_1:
	.string "I would jump for joy, except I seem to\n"
	.string "have lost this battle.$"

BATTLE_LUMBRIDGEFOREST_TRAINER_1_Text_2:
	.string "Mugger$"

BATTLE_LUMBRIDGEFOREST_TRAINER_2_Text_0:
	.string "Me and me friend destroyed the path\n"
	.string "through the forest to lure pink\l"
	.string "hoomens into trap.\p"
	.string "Now you have wandered into it.$"

BATTLE_LUMBRIDGEFOREST_TRAINER_2_Text_1:
	.string "Oh no, you has escaped the trap!$"

BATTLE_LUMBRIDGEFOREST_TRAINER_2_Text_2:
	.string "Me and me friend destroyed the path\n"
	.string "through the forest to lure pink\l"
	.string "hoomens into trap.\p"
	.string "You escaped trap.\p"
	.string "Makes me rethink new trap.$"

BATTLE_LUMBRIDGEFOREST_TRAINER_3_Text_0:
	.string "Me liek this forest.\p"
	.string "Me hope no harm comes to it.$"

BATTLE_LUMBRIDGEFOREST_TRAINER_3_Text_1:
	.string "Clearly big high war god favours you.$"

BATTLE_LUMBRIDGEFOREST_TRAINER_3_Text_2:
	.string "Me liek this forest.\p"
	.string "Me hope no harm comes to it.\p"
	.string "Me would be sad if big high war god were\n"
	.string "to damage it and make a big dirt hole.$"

NPC_LUMBRIDGE_FOREST_HAM_1_Text_0:
	.string "H.A.M Member$"

NPC_LUMBRIDGE_FOREST_HAM_1_Text_1:
	.string "Go away.$"

TRIGGER_ALKHARID_HAM_EVENT_4_Zanik_first_interaction_Text_0:
	.string "???$"

TRIGGER_ALKHARID_HAM_EVENT_4_Zanik_first_interaction_Text_1:
	.string "Hey you!\p"
	.string "You aren't a H.A.M member am I right?$"

TRIGGER_ALKHARID_HAM_EVENT_4_Zanik_first_interaction_Text_2:
	.string "With that lack of pink, you can't fool me\n"
	.string "human.$"

TRIGGER_ALKHARID_HAM_EVENT_4_Zanik_first_interaction_Text_3:
	.string "Oh that's good.\p"
	.string "I know some humans are more sensible\n"
	.string "than others.$"

TRIGGER_ALKHARID_HAM_EVENT_4_Zanik_first_interaction_Text_4:
	.string "Zanik$"

TRIGGER_ALKHARID_HAM_EVENT_4_Zanik_first_interaction_Text_5:
	.string "I am Zanik. A hunter and scout for the\n"
	.string "Dorgeshuun goblins beneath Lumbridge.\p"
	.string "And you are?$"

TRIGGER_ALKHARID_HAM_EVENT_4_Zanik_first_interaction_Text_6:
	.string "{PLAYER}.\p"
	.string "What a weird name…\n"
	.string "according to goblin sensibilities at\l"
	.string "least.\p"
	.string "H.A.M has tried to exterminate us for a\n"
	.string "while, looking upon us as well…\p"
	.string "Pests to be rid off I guess?\p"
	.string "Leading to me collaborating with the\n"
	.string "Duke who is less than pleased with his\l"
	.string "previous aid Sigmund being at the\l"
	.string "center of this.\p"
	.string "Now, I need to figure out what is down\n"
	.string "there and what they are planning and\l"
	.string "you probably have your own reasons\l"
	.string "right?$"

TRIGGER_ALKHARID_HAM_EVENT_4_Zanik_first_interaction_Text_7:
	.string "So how about I lend you a disguise and\n"
	.string "we team up down there?$"

TRIGGER_ALKHARID_HAM_EVENT_4_Zanik_first_interaction_Text_8:
	.string "Well drat.\n"
	.string "I guess I'm not as persuasive as I\l"
	.string "thought…$"

TRIGGER_ALKHARID_HAM_EVENT_4_Zanik_first_interaction_Text_9:
	.string "I bet we will make a great team!$"

TRIGGER_ALKHARID_HAM_EVENT_4_Zanik_first_interaction_Text_10:
	.string "Together nothing can beat us!\n"
	.string "Zanik teams up!$"

TRIGGER_ALKHARID_HAM_EVENT_4_Zanik_first_interaction_Text_11:
	.string "Here put this disguise on.$"

TRIGGER_ALKHARID_HAM_EVENT_4_Zanik_first_interaction_Text_12:
	.string "Perfect let us venture below!$"

CHECK_FOLLOWER_ZANIK_Text_0:
	.string "{PLAYER} do you wish to part ways?$"

CHECK_FOLLOWER_ZANIK_Text_1:
	.string "Don't take too long, I don't think I can\n"
	.string "do this without you.$"

CHECK_FOLLOWER_ZANIK_Text_2:
	.string "Oh pass me that disguise real quick, we\n"
	.string "need to make sure it stays pink.$"

SetFollower_Zanik_Text_0:
	.string "You've returned!\p"
	.string "So how about I lend you a disguise and\n"
	.string "we team up to take H.A.M down!?$"

Following_Zanik_Text_0:
	.string "Is that a Black Knight Fortress?!$"

Following_Zanik_Text_1:
	.string "We should go say hello to those guards\n"
	.string "up on the mountain.$"

Following_Zanik_Text_2:
	.string "I cannot believe we just did that…\p"
	.string "I guess we should try to enter the\n"
	.string "fortress, now that we look the part.$"

ZANIK_DIALOGUE_COMMON_Text_0:
	.string "I hail from a city named Dorgesh-Kaan.\p"
	.string "It's beneath Lumbridge.\p"
	.string "Humans do not visit there much.$"

ZANIK_DIALOGUE_COMMON_Text_1:
	.string "We found out about Lumbridge when we\n"
	.string "accidentally mined into the castle\l"
	.string "cellars.\p"
	.string "It was a whole ordeal honestly.$"

ZANIK_DIALOGUE_COMMON_Text_2:
	.string "Have you seen a weird guy with a party\n"
	.string "hat and goggles?\p"
	.string "I can't quite figure the guy out.$"

ZANIK_DIALOGUE_COMMON_Text_3:
	.string "My equipment is made of bones.\p"
	.string "Not a lot of material underground.$"

ZANIK_DIALOGUE_COMMON_Text_4:
	.string "Aah, I use electric type monsters\n"
	.string "mainly.\p"
	.string "They help me see in the dark caverns\n"
	.string "while I hunt$"

ZANIK_DIALOGUE_COMMON_Text_5:
	.string "After you have beaten the MvM\n"
	.string "championship I hear you need to face\l"
	.string "the Elite 4.\p"
	.string "Do you ever wonder who they are?$"

ZANIK_DIALOGUE_COMMON_Text_6:
	.string "Hey, have you met Millie Miller?\p"
	.string "Do you agree she is really pretty?$"

ZANIK_DIALOGUE_COMMON_Text_7:
	.string "I would kill for a frogburger right now,\n"
	.string "agree?$"

ZANIK_DIALOGUE_COMMON_Text_8:
	.string "At home, I like to help Oldak with his\n"
	.string "experiments!\p"
	.string "I can take his magic ball anywhere in\n"
	.string "the caves, and even to Lumbridge, but\l"
	.string "whenever I break it I always end up\l"
	.string "right back in his workshop.$"

ZANIK_DIALOGUE_COMMON_Text_9:
	.string "The Dorgeshuun tribe fled underground\n"
	.string "to avoid taking part in any fight for an\l"
	.string "evil god.\p"
	.string "We refused to be their pawns.$"

ZANIK_DIALOGUE_COMMON_Text_10:
	.string "The mark on my forehead?\p"
	.string "I'm not really sure what it is either.$"

ZANIK_DIALOGUE_COMMON_Text_11:
	.string "In the ancient goblin language, the\n"
	.string "Dorgeshuun means 'Goblins of the\l"
	.string "Strong Spears'.$"

ZANIK_DIALOGUE_LUMBRIDGE_FOREST_Text_0:
	.string "I see people around here using axes for\n"
	.string "cutting down trees.\p"
	.string "They're tools for good, so why do people\n"
	.string "also use them as weapons?$"

ZANIK_DIALOGUE_LUMBRIDGE_FOREST_Text_1:
	.string "Is... Is that another goblin over there?\p"
	.string "I wonder if they're a distant relative.$"

ZANIK_DIALOGUE_LUMBRIDGE_FOREST_Text_2:
	.string "This place is so different to\n"
	.string "Dorgesh-Kaan.$"

ZANIK_DIALOGUE_LUMBRIDGE_FOREST_Text_3:
	.string "Aaaaah! My eyes!{PAUSE 15}\n"
	.string "Sorry {PLAYER}, I'm still not\l"
	.string "accustomed to being above ground yet.$"

ZANIK_DIALOGUE_LUMBRIDGE_FOREST_Text_4:
	.string "Deep beneath Lumbridge is a place\n"
	.string "called the Tears of Guthix.\p"
	.string "You should see it for yourself\n"
	.string "sometime.$"

ZANIK_DIALOGUE_HAM_HIDEOUT_B1F_Text_0:
	.string "Careful {PLAYER} we don't want them\n"
	.string "to realise we're not like them.$"

ZANIK_DIALOGUE_HAM_HIDEOUT_B1F_Text_1:
	.string "These HAM guys really tick me off.$"

ZANIK_DIALOGUE_HAM_HIDEOUT_B1F_Text_2:
	.string "How do people like these even find one\n"
	.string "another to form an organisation like\l"
	.string "this?$"

ZANIK_DIALOGUE_HAM_HIDEOUT_B1F_Text_3:
	.string "These people are so driven by their\n"
	.string "beliefs, but at the same time they say\l"
	.string "it's because Saradomin would want the\l"
	.string "same.\p"
	.string "Do they truly need a god to justify\n"
	.string "their actions?$"

ZANIK_DIALOGUE_HAM_HIDEOUT_B1F_Text_4:
	.string "It's sad to think about how many\n"
	.string "amazing things were probably dug up to\l"
	.string "build this place.\p"
	.string "All that history gone, and for what...$"

ZANIK_DIALOGUE_HAM_HIDEOUT_B1F_Text_5:
	.string "Come on {PLAYER} if we keep looking\n"
	.string "around we are bound to find something\l"
	.string "eventually.$"

ZANIK_DIALOGUE_HAM_HIDEOUT_B1F_Text_6:
	.string "These people claim to hate monsters,\n"
	.string "but just look around.\p"
	.string "They're the real monsters...$"

ZANIK_DIALOGUE_HAM_HIDEOUT_B1F_Text_7:
	.string "I can hear something going on deeper\n"
	.string "into these caves...\p"
	.string "We should investigate!$"

ZANIK_DIALOGUE_HAM_HIDEOUT_B2F_Text_0:
	.string "It's funny that they claim to hate\n"
	.string "creatures like me, yet here they are\l"
	.string "living in a cave... just like me.$"

ZANIK_DIALOGUE_HAM_HIDEOUT_B2F_Text_1:
	.string "I can't believe that they live like this.\p"
	.string "Even we have running water in\n"
	.string "Dorgesh-Kaan!$"

ZANIK_DIALOGUE_HAM_HIDEOUT_B2F_Text_2:
	.string "How did the Duke not realise that all of\n"
	.string "this was going on, right under his nose?$"

ZANIK_DIALOGUE_HAM_HIDEOUT_B2F_Text_3:
	.string "I can hear someone that sounds very\n"
	.string "important nearby.\p"
	.string "I think we're getting close {PLAYER}!$"

ZANIK_DIALOGUE_HAM_HIDEOUT_B2F_Text_4:
	.string "Humans Against Monsters?\p"
	.string "More like Humans Are Monsters.\n"
	.string "Sorry {PLAYER}, I don't mean you.$"

ZANIK_DIALOGUE_HAM_HIDEOUT_B2F_Text_5:
	.string "Where do they make and eat food down\n"
	.string "here?$"

ZANIK_DIALOGUE_HAM_HIDEOUT_B2F_Text_6:
	.string "Torches?\p"
	.string "Really?\p"
	.string "We have lamp posts with metal wires and\n"
	.string "light orbs!\p"
	.string "No wonder they can't see through our\n"
	.string "disguises, their eyesight must be\l"
	.string "awful!$"

NPC_LUMBRIDGEFOREST_HAM_1_Text_0:
	.string "H.A.M Grunt$"

NPC_LUMBRIDGEFOREST_HAM_1_Text_1:
	.string "Our hideout isn't here, but if it was we\n"
	.string "would totally not hold anybody\l"
	.string "important like a prince here.\p"
	.string "And we totally would not need that\n"
	.string "theoretical prince because he has what\l"
	.string "is needed to summon a power that will\l"
	.string "rip the world as we know it in two...\p"
	.string "And H.A.M definitely would not want to\n"
	.string "use that power so we can return the\l"
	.string "world to the peaceful state it needs to\l"
	.string "be.{PAUSE 15}\n"
	.string "That's right, there is nothing here.\p"
	.string "Move on.$"

BATTLE_LUMBRIDGEFOREST_HAM_1_Text_0:
	.string "Why would you look at that, a little\n"
	.string "monster sympathiser lost in the woods.$"

BATTLE_LUMBRIDGEFOREST_HAM_1_Text_1:
	.string "You may have beaten us, but we will\n"
	.string "never tell you where our secret hideout\l"
	.string "is.$"

BATTLE_LUMBRIDGEFOREST_HAM_1_Text_2:
	.string "That grunt needs to stop talking\n"
	.string "before she gets us both into some\l"
	.string "serious trouble...$"

BATTLE_LUMBRIDGEFOREST_HAM_2_Text_0:
	.string "Maybe you and I should show them the\n"
	.string "way straight back to the bank.$"

BATTLE_LUMBRIDGEFOREST_HAM_2_Text_1:
	.string "Yeah, we will never tell you it's right up\n"
	.string "that path!$"

BATTLE_LUMBRIDGEFOREST_HAM_2_Text_2:
	.string "You didn't hear anything about our\n"
	.string "secret hideout being right up that\l"
	.string "path, did you?$"

BATTLE_LUMBRIDGEFOREST_HAM_3_Text_0:
	.string "We fight for what's right... The future\n"
	.string "will show you were in the wrong!$"

BATTLE_LUMBRIDGEFOREST_HAM_3_Text_1:
	.string "You may have won, but you're still on\n"
	.string "the wrong side of this!$"

BATTLE_LUMBRIDGEFOREST_HAM_3_Text_2:
	.string "The future is written by the victors...\n"
	.string "Remember that when we smite you down\l"
	.string "like the bug you are$"

BATTLE_LUMBRIDGEFOREST_HAM_4_Text_0:
	.string "I may have let that one goblin pass, but\n"
	.string "I refuse to let you just waltz into our\l"
	.string "hideout!$"

BATTLE_LUMBRIDGEFOREST_HAM_4_Text_1:
	.string "This really isn't my day...$"

BATTLE_LUMBRIDGEFOREST_HAM_4_Text_2:
	.string "This really isn't my day.\p"
	.string "I hope my superiors arent watching.\p"
	.string "It would really kill my performance\n"
	.string "review.$"
