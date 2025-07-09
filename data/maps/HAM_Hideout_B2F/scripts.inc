HAM_Hideout_B2F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, HAM_Hideout_B2F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

HAM_Hideout_B2F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	call HAMHIDEOUT_B2F_STATE
	return


HAMHIDEOUT_B2F_STATE::
	clearflag FLAG_TEMP_D
	setflag FLAG_TEMP_C
	setflag FLAG_TEMP_1F
	setflag FLAG_TEMP_1E
	setflag FLAG_TEMP_1D
	removeobject 27
	removeobject 22
	removeobject 24
	removeobject 4
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 230
	goto_if_eq HAMHIDEOUT_B2F_STATE_2
HAMHIDEOUT_B2F_STATE_1:
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 235
	goto_if_eq HAMHIDEOUT_B2F_STATE_5
HAMHIDEOUT_B2F_STATE_4:
	return

HAMHIDEOUT_B2F_STATE_2:
	setvar VAR_TEMP_0, 1
	clearflag FLAG_TEMP_1E
	clearflag FLAG_TEMP_1D
	addobject 22
	addobject 24
	addobject 4
	goto HAMHIDEOUT_B2F_STATE_1

HAMHIDEOUT_B2F_STATE_5:
	setflag FLAG_TEMP_D
	clearflag FLAG_TEMP_C
	goto HAMHIDEOUT_B2F_STATE_4


NPC_HAM_HIDEOUT_7::
	lock
	faceplayer
	namebox NPC_HAM_HIDEOUT_7_Text_0
	msgbox NPC_HAM_HIDEOUT_7_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_HAM_HIDEOUT_9::
	lock
	faceplayer
	namebox NPC_HAM_HIDEOUT_7_Text_0
	msgbox NPC_HAM_HIDEOUT_9_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_HAM_HIDEOUT_11::
	lock
	faceplayer
	namebox NPC_HAM_HIDEOUT_7_Text_0
	msgbox NPC_HAM_HIDEOUT_11_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_HAM_HIDEOUT_12::
	lock
	faceplayer
	namebox NPC_HAM_HIDEOUT_7_Text_0
	msgbox NPC_HAM_HIDEOUT_12_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_HAM_HIDEOUT_13::
	lock
	faceplayer
	namebox NPC_HAM_HIDEOUT_7_Text_0
	msgbox NPC_HAM_HIDEOUT_13_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_HAM_HIDEOUT_16::
	lock
	faceplayer
	namebox NPC_HAM_HIDEOUT_7_Text_0
	msgbox NPC_HAM_HIDEOUT_16_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_HAM_HIDEOUT_17::
	lock
	faceplayer
	namebox NPC_HAM_HIDEOUT_7_Text_0
	msgbox NPC_HAM_HIDEOUT_17_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_HAM_HIDEOUT_18::
	lock
	faceplayer
	namebox NPC_HAM_HIDEOUT_7_Text_0
	msgbox NPC_HAM_HIDEOUT_18_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_HAM_HIDEOUT_19::
	lock
	namebox NPC_HAM_HIDEOUT_7_Text_0
	msgbox NPC_HAM_HIDEOUT_19_Text_0
	closemessage
	hidenamebox
	playse SE_PIN
	applymovement 41, MOVEMENT_EXCLAMATIONMARK_FACEPLAYER
	msgbox NPC_HAM_HIDEOUT_19_Text_1
	closemessage
	hidenamebox
	trainerbattle_two_trainers TRAINER_HAM_HIDEOUT_GUARD_3, NPC_HAM_HIDEOUT_19_Text_2, TRAINER_HAM_HIDEOUT_GUARD_4, NPC_HAM_HIDEOUT_19_Text_3
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject 41
	removeobject 42
	setflag FLAG_TEMP_E
	fadescreenswapbuffers FADE_FROM_BLACK
	closemessage
	hidenamebox
	release
	end


BATTLE_HAM_HIDEOUT_GRUNT_1::
	trainerbattle_single TRAINER_HAM_HIDEOUT_GRUNT_1, BATTLE_HAM_HIDEOUT_GRUNT_1_Text_0, BATTLE_HAM_HIDEOUT_GRUNT_1_Text_1
	namebox BATTLE_HAM_HIDEOUT_GRUNT_1_Text_2
	msgbox BATTLE_HAM_HIDEOUT_GRUNT_1_Text_3
	hidenamebox
	release
	end


BATTLE_HAM_HIDEOUT_GRUNT_2::
	trainerbattle_single TRAINER_HAM_HIDEOUT_GRUNT_2, BATTLE_HAM_HIDEOUT_GRUNT_2_Text_0, BATTLE_HAM_HIDEOUT_GRUNT_2_Text_1
	namebox BATTLE_HAM_HIDEOUT_GRUNT_1_Text_2
	msgbox BATTLE_HAM_HIDEOUT_GRUNT_2_Text_2
	hidenamebox
	release
	end


BATTLE_HAM_HIDEOUT_GRUNT_3::
	trainerbattle_single TRAINER_HAM_HIDEOUT_GRUNT_3, BATTLE_HAM_HIDEOUT_GRUNT_3_Text_0, BATTLE_HAM_HIDEOUT_GRUNT_3_Text_1
	namebox BATTLE_HAM_HIDEOUT_GRUNT_1_Text_2
	msgbox BATTLE_HAM_HIDEOUT_GRUNT_3_Text_2
	hidenamebox
	release
	end


BATTLE_HAM_HIDEOUT_GRUNT_4::
	trainerbattle_single TRAINER_HAM_HIDEOUT_GRUNT_4, BATTLE_HAM_HIDEOUT_GRUNT_4_Text_0, BATTLE_HAM_HIDEOUT_GRUNT_4_Text_1
	namebox BATTLE_HAM_HIDEOUT_GRUNT_1_Text_2
	msgbox BATTLE_HAM_HIDEOUT_GRUNT_4_Text_2
	hidenamebox
	release
	end


BATTLE_HAM_HIDEOUT_GRUNT_5::
	trainerbattle_single TRAINER_HAM_HIDEOUT_GRUNT_5, BATTLE_HAM_HIDEOUT_GRUNT_5_Text_0, BATTLE_HAM_HIDEOUT_GRUNT_5_Text_1
	namebox BATTLE_HAM_HIDEOUT_GRUNT_1_Text_2
	msgbox BATTLE_HAM_HIDEOUT_GRUNT_5_Text_2
	hidenamebox
	release
	end


BATTLE_HAM_HIDEOUT_GRUNT_6::
	trainerbattle_single TRAINER_HAM_HIDEOUT_GRUNT_6, BATTLE_HAM_HIDEOUT_GRUNT_6_Text_0, BATTLE_HAM_HIDEOUT_GRUNT_6_Text_1
	namebox BATTLE_HAM_HIDEOUT_GRUNT_1_Text_2
	msgbox BATTLE_HAM_HIDEOUT_GRUNT_6_Text_2
	hidenamebox
	release
	end


BATTLE_HAM_HIDEOUT_GRUNT_7::
	trainerbattle_single TRAINER_HAM_HIDEOUT_GRUNT_7, BATTLE_HAM_HIDEOUT_GRUNT_7_Text_0, BATTLE_HAM_HIDEOUT_GRUNT_7_Text_1
	namebox BATTLE_HAM_HIDEOUT_GRUNT_1_Text_2
	msgbox BATTLE_HAM_HIDEOUT_GRUNT_7_Text_2
	hidenamebox
	release
	end


BATTLE_HAM_HIDEOUT_GRUNT_8::
	trainerbattle_single TRAINER_HAM_HIDEOUT_GRUNT_8, BATTLE_HAM_HIDEOUT_GRUNT_8_Text_0, BATTLE_HAM_HIDEOUT_GRUNT_8_Text_1
	namebox BATTLE_HAM_HIDEOUT_GRUNT_1_Text_2
	msgbox BATTLE_HAM_HIDEOUT_GRUNT_8_Text_1
	hidenamebox
	release
	end


BATTLE_HAM_HIDEOUT_GRUNT_9::
	trainerbattle_single TRAINER_HAM_HIDEOUT_GRUNT_9, BATTLE_HAM_HIDEOUT_GRUNT_9_Text_0, BATTLE_HAM_HIDEOUT_GRUNT_9_Text_1
	namebox BATTLE_HAM_HIDEOUT_GRUNT_1_Text_2
	msgbox BATTLE_HAM_HIDEOUT_GRUNT_9_Text_2
	hidenamebox
	release
	end


BATTLE_HAM_HIDEOUT_GRUNT_10::
	trainerbattle_single TRAINER_HAM_HIDEOUT_GRUNT_10, BATTLE_HAM_HIDEOUT_GRUNT_10_Text_0, BATTLE_HAM_HIDEOUT_GRUNT_10_Text_1
	namebox BATTLE_HAM_HIDEOUT_GRUNT_1_Text_2
	msgbox BATTLE_HAM_HIDEOUT_GRUNT_10_Text_2
	hidenamebox
	release
	end


TRIGGER_HAMHIDEOUT_BABE_PATTY::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, movement_HAMHIDEOUT_PLAYER_1
	applymovement OBJ_EVENT_ID_FOLLOWER, movement_HAMHIDEOUT_ZANIK_1
	applymovement 22, movement_HAMHIDEOUT_PATTY_1
	applymovement 24, movement_HAMHIDEOUT_BABE_1
	waitmovement 22
	removeobject 22
	playse SE_EXIT
	waitmovement 24
	namebox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_0
	msgbox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_1
	hidenamebox
	closemessage
	delay 30
	namebox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_2
	msgbox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_3
	hidenamebox
	closemessage
	playse SE_PIN
	applymovement 24, movement_HAMHIDEOUT_BABE_2
	waitmovement 0
	namebox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_0
	msgbox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_4
	hidenamebox
	closemessage
	applymovement 24, movement_HAMHIDEOUT_BABE_3
	waitmovement 0
	removeobject 24
	playse SE_EXIT
	setflag FLAG_TEMP_1E
	delay 30
	applymovement OBJ_EVENT_ID_FOLLOWER, MOVEMENT_WALKLEFT
	waitmovement 0
	namebox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_5
	msgbox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_6
	hidenamebox
	closemessage
	applymovement 4, movement_HAMHIDEOUT_GUARD_1
	waitmovement 0
	namebox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_7
	msgbox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_8
	hidenamebox
	closemessage
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_EXCLAMATIONMARK_FACE_UP
	applymovement OBJ_EVENT_ID_FOLLOWER, MOVEMENT_EXCLAMATIONMARK_FACE_UP
	waitmovement 0
	delay 90
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_INTERACT_UP
	waitmovement 0
	namebox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_7
	msgbox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_9
	hidenamebox
	closemessage
	playfanfare MUS_OBTAIN_ITEM
	msgbox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_10
	waitfanfare
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Movement_InteractFACERIGHT
	applymovement OBJ_EVENT_ID_FOLLOWER, Movement_InteractFACELEFT
	waitmovement 0
	namebox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_5
	msgbox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_11
	hidenamebox
	closemessage
	namebox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_7
	msgbox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_12
	hidenamebox
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Movement_InteractFACEUP
	applymovement OBJ_EVENT_ID_FOLLOWER, Movement_InteractFACEUP
	waitmovement 0
	namebox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_5
	msgbox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_13
	hidenamebox
	closemessage
	namebox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_7
	msgbox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_14
	hidenamebox
	closemessage
	namebox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_5
	msgbox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_15
	hidenamebox
	closemessage
	namebox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_7
	msgbox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_16
	hidenamebox
	closemessage
	facefollower
	namebox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_5
	msgbox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_17, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq TRIGGER_HAMHIDEOUT_BABE_PATTY_2
	namebox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_5
	msgbox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_21
	hidenamebox
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Movement_InteractFACEUP
	applymovement OBJ_EVENT_ID_FOLLOWER, Movement_InteractFACEUP
	waitmovement 0
	fadescreenswapbuffers FADE_TO_BLACK
	msgbox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_22
	hidenamebox
	closemessage
	setvar VAR_0x8004, OUTFIT_DEFAULT
	special WearOutfit
	destroyfollower
	addobject 27
	clearflag FLAG_TEMP_1F
	loadword 0, Following_Zanik
	setfollower 27, 0x80
	fadescreenswapbuffers FADE_FROM_BLACK
TRIGGER_HAMHIDEOUT_BABE_PATTY_1:
	playse SE_LEDGE
	applymovement 4, movement_HAMHIDEOUT_GUARD_3
	waitmovement 0
	namebox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_7
	msgbox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_23
	hidenamebox
	closemessage
	namebox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_7
	msgbox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_24
	hidenamebox
	closemessage
	trainerbattle_no_intro TRAINER_HAM_HIDEOUT_JAILER, TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_25
	namebox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_7
	msgbox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_26
	hidenamebox
	closemessage
	applymovement 4, movement_HAMHIDEOUT_GUARD_2
	waitmovement 0
	removeobject 4
	setflag FLAG_TEMP_1D
	namebox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_5
	msgbox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_27
	hidenamebox
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_INTERACT_RIGHT
	applymovement OBJ_EVENT_ID_FOLLOWER, Movement_InteractFACELEFT
	waitmovement 0
	namebox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_5
	msgbox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_28
	hidenamebox
	closemessage
	setvar VAR_TEMP_0, 2
	setvar VAR_POKESCAPE_STORYMODE_PROGRESS, 235
	release
	end

TRIGGER_HAMHIDEOUT_BABE_PATTY_2:
	hidenamebox
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Movement_InteractFACEUP
	applymovement OBJ_EVENT_ID_FOLLOWER, Movement_InteractFACEUP
	waitmovement 0
	namebox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_5
	msgbox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_18
	hidenamebox
	closemessage
	namebox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_7
	msgbox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_19
	hidenamebox
	closemessage
	fadescreenswapbuffers FADE_TO_BLACK
	msgbox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_20
	hidenamebox
	closemessage
	setvar VAR_0x8004, OUTFIT_DEFAULT
	special WearOutfit
	destroyfollower
	addobject 27
	clearflag FLAG_TEMP_1F
	loadword 0, Following_Zanik
	setfollower 27, 0x80
	fadescreenswapbuffers FADE_FROM_BLACK
	goto TRIGGER_HAMHIDEOUT_BABE_PATTY_1


MOVEMENT_EXCLAMATIONMARK_FACE_UP:
	emote_exclamation_mark
	face_up
	step_end

movement_HAMHIDEOUT_GUARD_1:
	walk_down
	walk_down
	walk_down
	step_end

movement_HAMHIDEOUT_GUARD_2:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

movement_HAMHIDEOUT_GUARD_3:
	jump_in_place_down
	step_end

movement_HAMHIDEOUT_PLAYER_1:
	lock_facing_direction
	walk_left
	unlock_facing_direction
	face_right
	step_end

movement_HAMHIDEOUT_ZANIK_1:
	walk_up
	lock_facing_direction
	walk_right
	unlock_facing_direction
	face_left
	step_end

movement_HAMHIDEOUT_PATTY_1:
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

movement_HAMHIDEOUT_BABE_1:
	walk_right
	walk_down
	walk_down
	walk_down
	delay_16
	face_left
	step_end

movement_HAMHIDEOUT_BABE_2:
	emote_double_exclamation_mark
	jump_in_place_down
	step_end

movement_HAMHIDEOUT_BABE_3:
	walk_fast_down
	step_end

TRIGGER_HAMHIDEOUT_JOHANHUS::
	lock
	applymovement OBJ_EVENT_ID_FOLLOWER, movement_HAM_Hideout_finale_ZANIK_1
	waitmovement 0
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, movement_HAM_Hideout_camera_1
	waitmovement 0
	namebox TRIGGER_HAMHIDEOUT_JOHANHUS_Text_0
	msgbox TRIGGER_HAMHIDEOUT_JOHANHUS_Text_1
	namebox TRIGGER_HAMHIDEOUT_JOHANHUS_Text_2
	msgbox TRIGGER_HAMHIDEOUT_JOHANHUS_Text_3
	applymovement 21, MOVEMENT_QUESTIONMARK
	namebox TRIGGER_HAMHIDEOUT_JOHANHUS_Text_0
	msgbox TRIGGER_HAMHIDEOUT_JOHANHUS_Text_4
	namebox TRIGGER_HAMHIDEOUT_JOHANHUS_Text_2
	msgbox TRIGGER_HAMHIDEOUT_JOHANHUS_Text_5
	setobjectxy 35, 41, 34
	setobjectxyperm 35, 41, 34
	applymovement 35, movement_HAM_Hideout_finale_walk_up
	waitmovement 0
	applymovement 35, movement_HAM_Hideout_finale_walk_up
	applymovement OBJ_EVENT_ID_PLAYER, movement_HAM_Hideout_finale_walk_up
	applymovement OBJ_EVENT_ID_FOLLOWER, movement_HAM_Hideout_finale_walk_up
	namebox TRIGGER_HAMHIDEOUT_JOHANHUS_Text_6
	msgbox TRIGGER_HAMHIDEOUT_JOHANHUS_Text_7
	applymovement 36, movement_HAM_Hideout_finale_reaction_1
	applymovement 37, movement_HAM_Hideout_finale_reaction_2
	applymovement 38, movement_HAM_Hideout_finale_reaction_1
	applymovement 39, movement_HAM_Hideout_finale_reaction_3
	applymovement 40, movement_HAM_Hideout_finale_reaction_2
	applymovement 41, movement_HAM_Hideout_finale_reaction_1
	applymovement 42, movement_HAM_Hideout_finale_reaction_3
	applymovement 21, MOVEMENT_EXCLAMATIONMARK
	waitmovement 0
	namebox TRIGGER_HAMHIDEOUT_JOHANHUS_Text_0
	msgbox TRIGGER_HAMHIDEOUT_JOHANHUS_Text_8
	applymovement 23, movement_HAM_Hideout_finale_reaction_1
	namebox TRIGGER_HAMHIDEOUT_JOHANHUS_Text_2
	msgbox TRIGGER_HAMHIDEOUT_JOHANHUS_Text_9
	namebox TRIGGER_HAMHIDEOUT_JOHANHUS_Text_0
	msgbox TRIGGER_HAMHIDEOUT_JOHANHUS_Text_10
	namebox TRIGGER_HAMHIDEOUT_JOHANHUS_Text_2
	msgbox TRIGGER_HAMHIDEOUT_JOHANHUS_Text_11
	setobjectxy 43, 40, 34
	setobjectxyperm 43, 40, 34
	applymovement 43, movement_HAM_Hideout_finale_walk_up
	applymovement 39, movement_HAM_Hideout_finale_swarm_left_2
	applymovement 42, movement_HAM_Hideout_finale_swarm_left_1
	applymovement 37, movement_HAM_Hideout_finale_swarm_right_2
	applymovement 41, movement_HAM_Hideout_finale_swarm_right_1
	waitmovement 0
	applymovement 23, movement_HAM_Hideout_finale_Sigmund_exit
	waitmovement 0
	namebox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_5
	msgbox TRIGGER_HAMHIDEOUT_JOHANHUS_Text_12
	applymovement 40, movement_HAM_Hideout_finale_misc_1
	applymovement 21, movement_HAM_Hideout_finale_Johanhus_1
	applymovement OBJ_EVENT_ID_CAMERA, movement_HAM_Hideout_camera_2
	waitmovement 0
	special RemoveCameraObject
	namebox TRIGGER_HAMHIDEOUT_JOHANHUS_Text_0
	msgbox TRIGGER_HAMHIDEOUT_JOHANHUS_Text_13
	trainerbattle_no_intro TRAINER_HAM_HIDEOUT_JOHANHUS, TRIGGER_HAMHIDEOUT_JOHANHUS_Text_14
	namebox TRIGGER_HAMHIDEOUT_JOHANHUS_Text_0
	msgbox TRIGGER_HAMHIDEOUT_JOHANHUS_Text_15
	applymovement 21, Movement_InteractFACERIGHT
	namebox TRIGGER_HAMHIDEOUT_JOHANHUS_Text_0
	msgbox TRIGGER_HAMHIDEOUT_JOHANHUS_Text_16
	applymovement 21, Movement_InteractFACELEFT
	namebox TRIGGER_HAMHIDEOUT_JOHANHUS_Text_0
	msgbox TRIGGER_HAMHIDEOUT_JOHANHUS_Text_17
	applymovement OBJ_EVENT_ID_FOLLOWER, Movement_InteractFACEPLAYER
	namebox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_5
	msgbox TRIGGER_HAMHIDEOUT_JOHANHUS_Text_18
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_MAIN_STORY, 11
	addvar VAR_GAMEMODE_LEVEL_CAP, 5
	setvar VAR_POKESCAPE_STORYMODE_PROGRESS, 245
	call FOLLOWER_REMOVE
	warp MAP_LUMBRIDGE_FOREST, 28, 5
	waitstate
	releaseall
	end


movement_HAM_Hideout_finale_ZANIK_1:
	walk_left
	walk_up
	step_end

movement_HAM_Hideout_finale_ZANIK_2:
	walk_left
	walk_up
	step_end

movement_HAM_Hideout_finale_walk_up:
	walk_up
	step_end

movement_HAM_Hideout_finale_PRINCE_ALI_1:
	walk_left
	walk_up
	step_end

movement_HAM_Hideout_camera_1:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

movement_HAM_Hideout_camera_2:
	delay_16
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

movement_HAM_Hideout_finale_reaction_1:
	face_down
	step_end

movement_HAM_Hideout_finale_reaction_2:
	face_down
	emote_exclamation_mark
	step_end

movement_HAM_Hideout_finale_reaction_3:
	face_down
	emote_double_exclamation_mark
	step_end

movement_HAM_Hideout_finale_swarm_left_1:
	walk_fast_down
	walk_fast_down
	walk_fast_left
	face_up
	step_end

movement_HAM_Hideout_finale_swarm_left_2:
	walk_fast_down
	walk_fast_down
	face_left
	step_end

movement_HAM_Hideout_finale_swarm_right_1:
	walk_fast_down
	walk_fast_down
	walk_fast_right
	face_up
	step_end

movement_HAM_Hideout_finale_swarm_right_2:
	walk_fast_down
	walk_fast_down
	face_right
	step_end

movement_HAM_Hideout_finale_Sigmund_exit:
	walk_slow_left
	walk_slow_left
	walk_slow_down
	walk_slow_left
	walk_slow_down
	walk_slow_down
	walk_slow_right
	walk_slow_down
	walk_slow_right
	walk_slow_right
	step_end

movement_HAM_Hideout_finale_Johanhus_1:
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_down
	step_end

movement_HAM_Hideout_finale_misc_1:
	walk_slow_up
	walk_slow_up
	walk_slow_left
	face_down
	step_end

NPC_HAM_HIDEOUT_7_Text_0:
	.string "H.A.M Member$"

NPC_HAM_HIDEOUT_7_Text_1:
	.string "The dog I grew up with evolved into a\n"
	.string "green monstrosity.\p"
	.string "I still like it, but now it's the thing we\n"
	.string "are trying to vanquish from the world.\p"
	.string "Am I in the wrong for not wanting to\n"
	.string "abandon my friend?$"

NPC_HAM_HIDEOUT_9_Text_0:
	.string "I miss not living in a cave.$"

NPC_HAM_HIDEOUT_11_Text_0:
	.string "Babe and Patty are recent admins\n"
	.string "recruited by Sigmund for their hard\l"
	.string "work.\l"
	.string "Patty's hard work that is, I don't know\l"
	.string "what Babe did…$"

NPC_HAM_HIDEOUT_12_Text_0:
	.string "Babe is really aloof.\p"
	.string "It's really hard to tell what's going on\n"
	.string "in her head.$"

NPC_HAM_HIDEOUT_13_Text_0:
	.string "I hear Patty used to be a wizard in the\n"
	.string "Wizards' Tower before she joined us.\p"
	.string "She was thrown out due to rash and\n"
	.string "feisty decisions apparently.$"

NPC_HAM_HIDEOUT_16_Text_0:
	.string "These are our storage rooms.\p"
	.string "We've also got another jail in the back.\p"
	.string "But you know this already…$"

NPC_HAM_HIDEOUT_17_Text_0:
	.string "There's so much work to do, clearing\n"
	.string "these caverns for more storage is a\l"
	.string "pain…\p"
	.string "Why couldn't we have an above ground\n"
	.string "base…$"

NPC_HAM_HIDEOUT_18_Text_0:
	.string "Yuck, why am I on cleaning duty.\p"
	.string "Wanna swap jobs?$"

NPC_HAM_HIDEOUT_19_Text_0:
	.string "Be on high alert!\p"
	.string "There are intruders in the building!$"

NPC_HAM_HIDEOUT_19_Text_1:
	.string "What how did they get past us!$"

NPC_HAM_HIDEOUT_19_Text_2:
	.string "H.A.M Guard: No wonder you managed to\n"
	.string "sneak through!$"

NPC_HAM_HIDEOUT_19_Text_3:
	.string "H.A.M Guard: Too strong!$"

BATTLE_HAM_HIDEOUT_GRUNT_1_Text_0:
	.string "I bet you're wondering how I ended up\n"
	.string "here.$"

BATTLE_HAM_HIDEOUT_GRUNT_1_Text_1:
	.string "Urgh…$"

BATTLE_HAM_HIDEOUT_GRUNT_1_Text_2:
	.string "H.A.M Grunt$"

BATTLE_HAM_HIDEOUT_GRUNT_1_Text_3:
	.string "When I signed up to become a member, I\n"
	.string "was never told that our headquarters\l"
	.string "was in a cave.\p"
	.string "The Black Knights have a whole\n"
	.string "fortress…$"

BATTLE_HAM_HIDEOUT_GRUNT_2_Text_0:
	.string "I've only been a member for a few days...\p"
	.string "Do you know where the toilets are?$"

BATTLE_HAM_HIDEOUT_GRUNT_2_Text_1:
	.string "Aaaaaahhhh!$"

BATTLE_HAM_HIDEOUT_GRUNT_2_Text_2:
	.string "Please tell me it's not just a hole in\n"
	.string "the floor…$"

BATTLE_HAM_HIDEOUT_GRUNT_3_Text_0:
	.string "I've not had a good night's sleep in\n"
	.string "weeks!\p"
	.string "I'm going to take my frustrations on\n"
	.string "you!$"

BATTLE_HAM_HIDEOUT_GRUNT_3_Text_1:
	.string "My back!$"

BATTLE_HAM_HIDEOUT_GRUNT_3_Text_2:
	.string "Have you seen how many of us there are\n"
	.string "compared to how many beds we have?\p"
	.string "There's a rota, but most nights it's\n"
	.string "whatever space we can find on the\l"
	.string "floor.$"

BATTLE_HAM_HIDEOUT_GRUNT_4_Text_0:
	.string "Where have you guys been the prisoners\n"
	.string "are left have been not been guarded\l"
	.string "and there are intruders in the base!\p"
	.string "Wait… You guys are the intruders!\n"
	.string "Prepare for battle!$"

BATTLE_HAM_HIDEOUT_GRUNT_4_Text_1:
	.string "I cannot believe this!$"

BATTLE_HAM_HIDEOUT_GRUNT_4_Text_2:
	.string "You guys are monster sympathisers?!\p"
	.string "Disgusting!$"

BATTLE_HAM_HIDEOUT_GRUNT_5_Text_0:
	.string "Johanhus and Sigmund were able to build\n"
	.string "all this in a cave!\p"
	.string "With a box of scraps!$"

BATTLE_HAM_HIDEOUT_GRUNT_5_Text_1:
	.string "Gah!$"

BATTLE_HAM_HIDEOUT_GRUNT_5_Text_2:
	.string "Praise be to Johanhus and Sigmund.\p"
	.string "Where would we be without them?$"

BATTLE_HAM_HIDEOUT_GRUNT_6_Text_0:
	.string "I have been chosen by Johanhus for a\n"
	.string "special purpose.$"

BATTLE_HAM_HIDEOUT_GRUNT_6_Text_1:
	.string "I may have lost, but I won't fail him.$"

BATTLE_HAM_HIDEOUT_GRUNT_6_Text_2:
	.string "Johanhus has tasked me with searching\n"
	.string "for caches of First Age armour.\p"
	.string "I wonder why he wants it, we already\n"
	.string "have plenty of sets of much newer\l"
	.string "armour...$"

BATTLE_HAM_HIDEOUT_GRUNT_7_Text_0:
	.string "Do you think Sigmund's plans are\n"
	.string "extremist?$"

BATTLE_HAM_HIDEOUT_GRUNT_7_Text_1:
	.string "I only asked a question!$"

BATTLE_HAM_HIDEOUT_GRUNT_7_Text_2:
	.string "There are lots of mutterings around\n"
	.string "here that Sigmund's actions are\l"
	.string "dangerous and destructive.\p"
	.string "Personally, I don't think he's done\n"
	.string "enough yet.\p"
	.string "It will take a substantial amount of\n"
	.string "power to wipe out the scourge of\l"
	.string "monsters.$"

BATTLE_HAM_HIDEOUT_GRUNT_8_Text_0:
	.string "I'm about to beat you up until you are\n"
	.string "unconscious!$"

BATTLE_HAM_HIDEOUT_GRUNT_8_Text_1:
	.string "Awe man, I'm feeling slightly\n"
	.string "concussed…$"

BATTLE_HAM_HIDEOUT_GRUNT_9_Text_0:
	.string "How dare you side with those THINGS\n"
	.string "instead of your fellow humans!$"

BATTLE_HAM_HIDEOUT_GRUNT_9_Text_1:
	.string "Traitor!$"

BATTLE_HAM_HIDEOUT_GRUNT_9_Text_2:
	.string "I used to be a farmer, you know.\p"
	.string "Until a group of hobgoblins destroyed\n"
	.string "my crops.\p"
	.string "Ruined my livelihood!\p"
	.string "Honest farmers shouldn't have to deal\n"
	.string "with that, it's why monsters should be\l"
	.string "eradicated.$"

BATTLE_HAM_HIDEOUT_GRUNT_10_Text_0:
	.string "Who sounded the alarm!?\p"
	.string "Was it you?!$"

BATTLE_HAM_HIDEOUT_GRUNT_10_Text_1:
	.string "Oh no now the only alarm I hear is the\n"
	.string "low health of my animals!$"

BATTLE_HAM_HIDEOUT_GRUNT_10_Text_2:
	.string "I may have failed to stop you but the\n"
	.string "others won't stop until we bundle you\l"
	.string "up into jail!$"

TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_0:
	.string "Babe$"

TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_1:
	.string "Hey… You look familiar…$"

TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_2:
	.string "Patty$"

TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_3:
	.string "Hurry up Babe, we need to go to Varrock!\p"
	.string "I swear if you make us late again…$"

TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_4:
	.string "C-coming!$"

TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_5:
	.string "Zanik$"

TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_6:
	.string "What was that about?$"

TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_7:
	.string "H.A.M Guard$"

TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_8:
	.string "What are you two doing straying from\n"
	.string "your posts?!$"

TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_9:
	.string "The spare jail key?\p"
	.string "Man you guys are useless!\p"
	.string "Here take it and don't lose this one\n"
	.string "otherwise Sigmund will have your heads.$"

TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_10:
	.string "{PLAYER} obtained the CELL KEY.$"

TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_11:
	.string "Alright {PLAYER} let's go free the\n"
	.string "prisoners!$"

TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_12:
	.string "Wait what did you say?!$"

TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_13:
	.string "Uh, let's go beat up the prisoners!$"

TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_14:
	.string "Nice try…\n"
	.string "Take your hood off.$"

TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_15:
	.string "Uh, I cannot do that…$"

TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_16:
	.string "Take it off or else!$"

TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_17:
	.string "{PLAYER} what should we do, should we\n"
	.string "take our disguises off?$"

TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_18:
	.string "No we will not!$"

TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_19:
	.string "Sorry but I didn't give you a choice!$"

TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_20:
	.string "The guard removes your outfits.$"

TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_21:
	.string "Okay…$"

TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_22:
	.string "You remove your outfits.$"

TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_23:
	.string "AARRRGH!\p"
	.string "A GOBLIN!\p"
	.string "A DISGUSTING VILE GOBLIN!$"

TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_24:
	.string "Stand still while I eliminate you!$"

TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_25:
	.string "I lost??\p"
	.string "To a goblin and a monster sympathiser!$"

TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_26:
	.string "Urgh…\p"
	.string "Stupid goblin…\p"
	.string "You wouldn't have stood a chance if it\n"
	.string "wasn't for this human!\p"
	.string "There's no way I'm letting either of you\n"
	.string "escape alive!$"

TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_27:
	.string "I'm sorry {PLAYER}…\p"
	.string "I should have just kept my mouth shut…$"

TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_28:
	.string "You're right, no time to feel sorry.\p"
	.string "We've got some people to rescue!$"

TRIGGER_HAMHIDEOUT_JOHANHUS_Text_0:
	.string "Johanhus$"

TRIGGER_HAMHIDEOUT_JOHANHUS_Text_1:
	.string "It seems the search has come to an end\n"
	.string "then.$"

TRIGGER_HAMHIDEOUT_JOHANHUS_Text_2:
	.string "Sigmund$"

TRIGGER_HAMHIDEOUT_JOHANHUS_Text_3:
	.string "Yes.\l"
	.string "This man held what we needed to summon\l"
	.string "it and bend it to our will.\p"
	.string "With the power contained inside the\n"
	.string "Kharid-ib we can proceed to the\l"
	.string "Wilderness and finish the plan.$"

TRIGGER_HAMHIDEOUT_JOHANHUS_Text_4:
	.string "And you are sure this will save the\n"
	.string "world of the scourge that are monsters\l"
	.string "Sigmund?$"

TRIGGER_HAMHIDEOUT_JOHANHUS_Text_5:
	.string "Johanhus my friend.\p"
	.string "Everyday monsters cause problems\n"
	.string "around the world.\p"
	.string "And now adventurers, cooks, kings,\n"
	.string "queens, pawns and even goblins have\l"
	.string "decided to use them as their own to\l"
	.string "attain power.\p"
	.string "What we want is to prove to them that\n"
	.string "we hold absolute power.\l"
	.string "And then they will see that the only way\l"
	.string "for this world to be free is to kill and\l"
	.string "abandon every single monster in the\l"
	.string "world.\p"
	.string "And when that happens...\l"
	.string "The world will be at peace.\l"
	.string "Just like we have always wanted...$"

TRIGGER_HAMHIDEOUT_JOHANHUS_Text_6:
	.string "Prince Ali$"

TRIGGER_HAMHIDEOUT_JOHANHUS_Text_7:
	.string "Stop this.\l"
	.string "You won't get away with this.$"

TRIGGER_HAMHIDEOUT_JOHANHUS_Text_8:
	.string "Cease your yelps prince.\l"
	.string "You hold no authority here.\p"
	.string "We will make a just world without\n"
	.string "monsters just like Saradomin always\l"
	.string "intended.$"

TRIGGER_HAMHIDEOUT_JOHANHUS_Text_9:
	.string "Looks like some monsters just entered\n"
	.string "a den they should not be Johanhus.$"

TRIGGER_HAMHIDEOUT_JOHANHUS_Text_10:
	.string "Indeed. What shall we do?$"

TRIGGER_HAMHIDEOUT_JOHANHUS_Text_11:
	.string "I will head to the wilderness as\n"
	.string "planned.\p"
	.string "I will station Patty and Babe in Varrock\n"
	.string "for the thing we discussed.\l"
	.string "As for these guys and the prince.\l"
	.string "Let us show them what happens to\l"
	.string "monster sympathisers taking a wrong\l"
	.string "turn.$"

TRIGGER_HAMHIDEOUT_JOHANHUS_Text_12:
	.string "Shoot.\p"
	.string "{PLAYER}!\l"
	.string "I will handle this.\l"
	.string "You go and get them!$"

TRIGGER_HAMHIDEOUT_JOHANHUS_Text_13:
	.string "I get it.\l"
	.string "You believe you are righteous.\l"
	.string "You believe you are correct.\l"
	.string "You believe in yourself and that what\l"
	.string "you are doing is the good thing to do.\p"
	.string "And as do I.\p"
	.string "As leader of Humans Against Monsters,\n"
	.string "on behalf of the world.\l"
	.string "I will smite you..$"

TRIGGER_HAMHIDEOUT_JOHANHUS_Text_14:
	.string "NO!\l"
	.string "This cannot be!$"

TRIGGER_HAMHIDEOUT_JOHANHUS_Text_15:
	.string "So it seems my power is insignificant to\n"
	.string "yours.\p"
	.string "I guess it seems weird to use the power\n"
	.string "of monsters to fight when we ourselves\l"
	.string "use monsters?\l"
	.string "But what choice do we have?\p"
	.string "You and everyone else changed the\n"
	.string "rules.\l"
	.string "What is a dagger to a dragon?\p"
	.string "The world is changing.\l"
	.string "And we adapted.\l"
	.string "But this is not the world we wish to live\l"
	.string "in.$"

TRIGGER_HAMHIDEOUT_JOHANHUS_Text_16:
	.string "I will submit just this once.\l"
	.string "Take this prince and leave.$"

TRIGGER_HAMHIDEOUT_JOHANHUS_Text_17:
	.string "Out of goodness of my heart, you can\n"
	.string "even let the little gremlin over there\l"
	.string "live as well.\p"
	.string "It doesn't matter.\l"
	.string "None of this matters.\p"
	.string "If Sigmund is right, you can not stop\n"
	.string "him.\l"
	.string "And he will make a world free of the\l"
	.string "monsters that once caused us so much\l"
	.string "pain..$"

TRIGGER_HAMHIDEOUT_JOHANHUS_Text_18:
	.string "Quick while he is monologuing\n"
	.string "{PLAYER}.\l"
	.string "Grab the Prince and run!$"
