HAM_Hideout_B1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, HAM_Hideout_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_FRAME_TABLE, HAM_Hideout_B1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

HAM_Hideout_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	call HAMHIDEOUT_B1F_STATE
	goto HAM_HIDEOUT_GOLDENGNOME_PLACENPCS
	return

HAM_Hideout_B1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_POKESCAPE_GOLDENGNOMES, 10, HAM_HIDEOUT_GOLDENGNOME_STATE
	.2byte 0


HAMHIDEOUT_B1F_STATE::
	clearflag FLAG_TEMP_D
	setflag FLAG_TEMP_C
	setflag FLAG_TEMP_E
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 220
	goto_if_eq HAMHIDEOUT_B1F_STATE_2
HAMHIDEOUT_B1F_STATE_1:
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 225
	goto_if_eq HAMHIDEOUT_B1F_STATE_5
HAMHIDEOUT_B1F_STATE_4:
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 230
	goto_if_eq HAMHIDEOUT_B1F_STATE_8
HAMHIDEOUT_B1F_STATE_7:
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 235
	goto_if_eq HAMHIDEOUT_B1F_STATE_11
HAMHIDEOUT_B1F_STATE_10:
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 240
	goto_if_eq HAMHIDEOUT_B1F_STATE_14
HAMHIDEOUT_B1F_STATE_13:
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 245
	goto_if_eq HAMHIDEOUT_B1F_STATE_17
HAMHIDEOUT_B1F_STATE_16:
	return

HAMHIDEOUT_B1F_STATE_2:
	setvar VAR_TEMP_0, 1
	goto HAMHIDEOUT_B1F_STATE_1

HAMHIDEOUT_B1F_STATE_5:
	setvar VAR_TEMP_0, 2
	goto HAMHIDEOUT_B1F_STATE_4

HAMHIDEOUT_B1F_STATE_8:
	removeobject 18
	removeobject 19
	setflag FLAG_TEMP_6
	removeobject 45
	setflag FLAG_TEMP_4
	goto HAMHIDEOUT_B1F_STATE_7

HAMHIDEOUT_B1F_STATE_11:
	setflag FLAG_TEMP_D
	clearflag FLAG_TEMP_C
	clearflag FLAG_TEMP_E
	removeobject 18
	removeobject 19
	setflag FLAG_TEMP_6
	removeobject 45
	setflag FLAG_TEMP_4
	goto HAMHIDEOUT_B1F_STATE_10

HAMHIDEOUT_B1F_STATE_14:
	setflag FLAG_TEMP_D
	clearflag FLAG_TEMP_C
	clearflag FLAG_TEMP_E
	removeobject 18
	removeobject 19
	setflag FLAG_TEMP_6
	removeobject 45
	setflag FLAG_TEMP_4
	setmetatile 36, 42, METATILE_PokeScape_HAM_JAILDOOR_OPEN_TOP, 0
	setmetatile 36, 43, METATILE_PokeScape_HAM_JAILDOOR_OPEN_BOTTOM, 1
	setmetatile 37, 43, METATILE_PokeScape_HAM_HAM_CAVE_FLOOR, 0
	setmetatile 37, 42, METATILE_PokeScape_HAM_HAM_CAVE_FLOOR, 0
	setmetatile 38, 43, METATILE_PokeScape_HAM_JAILDOOR_OPEN_SIDE, 1
	goto HAMHIDEOUT_B1F_STATE_13

HAMHIDEOUT_B1F_STATE_17:
	setflag FLAG_TEMP_D
	clearflag FLAG_TEMP_C
	clearflag FLAG_TEMP_E
	removeobject 18
	removeobject 19
	setflag FLAG_TEMP_6
	removeobject 45
	setflag FLAG_TEMP_4
	removeobject 10
	removeobject 11
	setflag FLAG_TEMP_5
	setmetatile 36, 42, METATILE_PokeScape_HAM_JAILDOOR_OPEN_TOP, 0
	setmetatile 36, 43, METATILE_PokeScape_HAM_JAILDOOR_OPEN_BOTTOM, 1
	setmetatile 37, 43, METATILE_PokeScape_HAM_HAM_CAVE_FLOOR, 0
	setmetatile 37, 42, METATILE_PokeScape_HAM_HAM_CAVE_FLOOR, 0
	setmetatile 38, 43, METATILE_PokeScape_HAM_JAILDOOR_OPEN_SIDE, 1
	goto HAMHIDEOUT_B1F_STATE_16


HAM_HIDEOUT_GOLDENGNOME_PLACENPCS::
	compare VAR_POKESCAPE_GOLDENGNOMES, 5
	goto_if_eq HAM_HIDEOUT_GOLDENGNOME_PLACENPCS_1
	return

HAM_HIDEOUT_GOLDENGNOME_PLACENPCS_1:
	addobject 24
	addobject 25
	addobject 26
	setobjectxyperm 24, 27, 20
	setobjectxyperm 25, 27, 20
	setobjectxyperm 26, 28, 20
	addobject 29
	setobjectxyperm 29, 27, 20
	addobject 30
	setobjectxyperm 30, 11, 23
	addobject 27
	setobjectxyperm 27, 27, 20
	addobject 28
	setobjectxyperm 28, 27, 20
	addobject 22
	setobjectxyperm 22, 16, 23
	setobjectmovementtype 22, MOVEMENT_TYPE_FACE_UP
	addobject 31
	setobjectxyperm 31, 22, 23
	setobjectmovementtype 31, MOVEMENT_TYPE_FACE_UP
	addobject 32
	setobjectxyperm 32, 22, 21
	setobjectmovementtype 32, MOVEMENT_TYPE_FACE_UP
	removeobject 14
	removeobject 4
	removeobject 6
	removeobject 5
	removeobject 8
	setflag FLAG_TEMP_1
	setvar VAR_POKESCAPE_GOLDENGNOMES, 10
	return


HAM_HIDEOUT_GOLDENGNOME_STATE::
	applymovement OBJ_EVENT_ID_PLAYER, Movement_InteractFACEUP
	waitmovement 0
	call HAM_HIDEOUT_GOLDENGNOME_EVENT
	return


GOLDENGNOME_CAMERA_CALL::
	lock
	delay 60
	special SpawnCameraObject
	return


HAM_HIDEOUT_GOLDENGNOME_EVENT::
	fadescreenswapbuffers FADE_TO_BLACK
	applymovement OBJ_EVENT_ID_PLAYER, Movement_InteractFACELEFT
	applymovement 22, Movement_InteractFACERIGHT
	delay 60
	call GOLDENGNOME_CAMERA_CALL
	applymovement OBJ_EVENT_ID_CAMERA, GOLDENGNOME_CAMERA_1_START
	delay 60
	fadescreenswapbuffers FADE_FROM_BLACK
	delay 60
	applymovement OBJ_EVENT_ID_PLAYER, Movement_InteractFACEUP
	applymovement 22, Movement_InteractFACEUP
	waitmovement OBJ_EVENT_ID_CAMERA
	delay 60
	namebox HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_0
	msgbox HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_1
	waitmessage
	closemessage
	hidenamebox
	playbgm MUS_PS_ROUTE_LUMBRIDGE, 1
	applymovement 25, GOLDENGNOME_MOVEMENT_1
	waitmovement 0
	applymovement 3, Movement_InteractFACERIGHT
	waitmovement 0
	namebox HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_0
	msgbox HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_2
	waitmessage
	closemessage
	hidenamebox
	applymovement 25, Movement_InteractFACELEFT
	waitmovement 0
	applymovement 3, Movement_InteractFACEDOWN
	applymovement 25, GOLDENGNOME_MOVEMENT_5
	namebox HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_0
	msgbox HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_3
	waitmessage
	closemessage
	hidenamebox
	waitmovement 0
	delay 10
	applymovement 25, GOLDENGNOME_MOVEMENT_6
	delay 20
	applymovement 24, GOLDENGNOME_MOVEMENT_2
	delay 10
	applymovement 26, GOLDENGNOME_MOVEMENT_4
	delay 60
	applymovement 3, GOLDENGNOME_MOVEMENT_3
	waitmovement 26
	delay 10
	namebox HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_4
	msgbox HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_5
	waitmessage
	closemessage
	hidenamebox
	playbgm MUS_PS_PORT_SARIM, 1
	call FROGEEL_EXCITED
	namebox HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_4
	msgbox HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_6
	waitmessage
	msgbox HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_7
	closemessage
	hidenamebox
	applymovement 27, GOLDENGNOME_MOVEMENT_GUEST
	waitmovement 0
	namebox HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_8
	msgbox HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_9
	closemessage
	hidenamebox
	applymovement 26, GOLDENGNOME_MOVEMENT_JMOD_WALK_FORWARD
	waitmovement 0
	namebox HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_10
	msgbox HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_11
	closemessage
	hidenamebox
	applymovement 26, GOLDENGNOME_MOVEMENT_JMOD_WALK_BACKWARDS
	waitmovement 0
	applymovement 27, GOLDENGNOME_MOVEMENT_GUEST_stan
	waitmovement 0
	applymovement 28, GOLDENGNOME_MOVEMENT_GUEST
	waitmovement 0
	namebox HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_12
	msgbox HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_13
	closemessage
	hidenamebox
	applymovement 28, GOLDENGNOME_MOVEMENT_GUEST_orchy
	waitmovement 0
	applymovement 30, GOLDENGNOME_MOVEMENT_GUEST_frogeel
	waitmovement 0
	namebox HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_14
	msgbox HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_15
	closemessage
	hidenamebox
	delay 60
	namebox HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_4
	msgbox HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_16
	waitmessage
	closemessage
	hidenamebox
	applymovement 30, GOLDENGNOME_MOVEMENT_GUEST_frogeel_exit
	waitmovement 0
	namebox HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_4
	msgbox HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_17
	waitmessage
	msgbox HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_18
	closemessage
	hidenamebox
	savebgm MUS_DUMMY
	fadedefaultbgm
	setvar VAR_POKESCAPE_GOLDENGNOMES, 15
	warpwhitefade MAP_DRAYNOR, 255, 14, 28
	release
	end


GOLDENGNOME_CAMERA_1_START:
	walk_slow_right
	walk_slow_right
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	step_end

GOLDENGNOME_MOVEMENT_1:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	step_end

GOLDENGNOME_MOVEMENT_2:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	face_down
	step_end

GOLDENGNOME_MOVEMENT_3:
	walk_left
	walk_left
	walk_left
	face_right
	step_end

GOLDENGNOME_MOVEMENT_4:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	face_down
	step_end

GOLDENGNOME_MOVEMENT_5:
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

GOLDENGNOME_MOVEMENT_6:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	face_down
	step_end

GOLDENGNOME_MOVEMENT_GUEST:
	walk_left
	walk_left
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	face_down
	step_end

GOLDENGNOME_MOVEMENT_GUEST_stan:
	walk_left
	face_down
	step_end

GOLDENGNOME_MOVEMENT_GUEST_orchy:
	walk_right
	face_down
	step_end

GOLDENGNOME_MOVEMENT_GUEST_frogeel:
	jump_left
	jump_left
	jump_left
	jump_left
	jump_left
	jump_left
	jump_left
	jump_left
	jump_left
	face_down
	step_end

GOLDENGNOME_MOVEMENT_GUEST_frogeel_exit:
	jump_left
	jump_left
	jump_left
	jump_left
	jump_down
	jump_down
	jump_down
	jump_down
	jump_down
	face_down
	step_end

GOLDENGNOME_MOVEMENT_JMOD_WALK_FORWARD:
	walk_down
	step_end

GOLDENGNOME_MOVEMENT_JMOD_WALK_BACKWARDS:
	lock_facing_direction
	walk_up
	step_end

FROGEEL_EXCITED::
	applymovement 29, GOLDENGNOME_MOVEMENT_Frogeel
	applymovement 30, GOLDENGNOME_MOVEMENT_Frogeel_2
	waitmovement 0
	return


GOLDENGNOME_MOVEMENT_Frogeel:
	jump_left
	jump_left
	jump_left
	jump_left
	jump_left
	jump_left
	jump_left
	jump_left
	jump_up
	jump_left
	jump_right
	jump_right
	jump_left
	jump_2_down
	jump_2_down
	jump_2_down
	jump_2_down
	jump_down
	step_end

GOLDENGNOME_MOVEMENT_Frogeel_2:
	jump_right
	jump_right
	jump_right
	jump_2_up
	jump_up
	jump_right
	jump_right
	jump_2_right
	jump_2_right
	jump_2_right
	jump_2_right
	jump_right
	jump_right
	jump_right
	jump_right
	step_end

GOLDENGNOME_EVENT_START::
	lock
	faceplayer
	compare VAR_POKESCAPE_GOLDENGNOMES, 0
	goto_if_eq GOLDENGNOME_EVENT_START_2
GOLDENGNOME_EVENT_START_1:
	msgbox GOLDENGNOME_EVENT_START_Text_2
	release
	end

GOLDENGNOME_EVENT_START_2:
	msgbox GOLDENGNOME_EVENT_START_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq GOLDENGNOME_EVENT_START_4
	goto GOLDENGNOME_EVENT_START_1

GOLDENGNOME_EVENT_START_4:
	setvar VAR_POKESCAPE_GOLDENGNOMES, 5
	msgbox GOLDENGNOME_EVENT_START_Text_1
	waitmessage
	warpwhitefade MAP_HAM_HIDEOUT_B1F, 255, 17, 23
	end


GOLDENGNOME_EVENT_END::
	applymovement OBJ_EVENT_ID_PLAYER, Movement_InteractFACELEFT
	applymovement 1, Movement_InteractFACERIGHT
	waitmovement 0
	msgbox GOLDENGNOME_EVENT_END_Text_0
	waitmessage
	closemessage
	call GiveMon_GOLDENGNOME
	setvar VAR_POKESCAPE_GOLDENGNOMES, 20
	release
	end


GOLDENGNOME_TEST::
	goto_if_set FLAG_GOLDENGNOME, GOLDENGNOME_TEST_2
	return

GOLDENGNOME_TEST_2:
	setflag FLAG_HIDE_MAP_NAME_POPUP
	msgbox GOLDENGNOME_TEST_Text_0
	closemessage
	end


TRIGGER_HAMHIDEOUT_EVENT_1::
	lock
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	compare VAR_TEMP_1, 11
	goto_if_eq TRIGGER_HAMHIDEOUT_EVENT_1_2
	applymovement OBJ_EVENT_ID_FOLLOWER, HAM_Hideout_Zanik_1_Left
	waitmovement 0
	applymovement 33, HAM_Hideout_Intro_1_Right
	waitmovement 0
TRIGGER_HAMHIDEOUT_EVENT_1_1:
	applymovement OBJ_EVENT_ID_PLAYER, Movement_InteractFACEUP
	applymovement OBJ_EVENT_ID_FOLLOWER, Movement_InteractFACEUP
	waitmovement 0
	namebox TRIGGER_HAMHIDEOUT_EVENT_1_Text_0
	msgbox TRIGGER_HAMHIDEOUT_EVENT_1_Text_1
	hidenamebox
	closemessage
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	compare VAR_TEMP_1, 11
	goto_if_eq TRIGGER_HAMHIDEOUT_EVENT_1_6
	applymovement 33, HAM_Hideout_Intro_2_Right
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Movement_InteractFACELEFT
	applymovement OBJ_EVENT_ID_FOLLOWER, Movement_InteractFACERIGHT
	waitmovement 0
TRIGGER_HAMHIDEOUT_EVENT_1_5:
	namebox TRIGGER_HAMHIDEOUT_EVENT_1_Text_2
	msgbox TRIGGER_HAMHIDEOUT_EVENT_1_Text_3
	closemessage
	hidenamebox
	setvar VAR_TEMP_0, 2
	setvar VAR_POKESCAPE_STORYMODE_PROGRESS, 225
	release
	end

TRIGGER_HAMHIDEOUT_EVENT_1_2:
	applymovement OBJ_EVENT_ID_FOLLOWER, HAM_Hideout_Zanik_1_Right
	waitmovement 0
	applymovement 33, HAM_Hideout_Intro_1_Left
	waitmovement 0
	goto TRIGGER_HAMHIDEOUT_EVENT_1_1

TRIGGER_HAMHIDEOUT_EVENT_1_6:
	applymovement 33, HAM_Hideout_Intro_2_Left
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Movement_InteractFACERIGHT
	applymovement OBJ_EVENT_ID_FOLLOWER, Movement_InteractFACELEFT
	waitmovement 0
	goto TRIGGER_HAMHIDEOUT_EVENT_1_5


HAM_Hideout_Zanik_1_Left:
	walk_left
	walk_down
	step_end

HAM_Hideout_Zanik_1_Right:
	walk_right
	walk_down
	step_end

HAM_Hideout_Intro_1_Left:
	walk_left
	walk_left
	face_down
	emote_double_exclamation_mark
	walk_down
	step_end

HAM_Hideout_Intro_1_Right:
	walk_left
	face_down
	emote_double_exclamation_mark
	walk_down
	step_end

HAM_Hideout_Intro_2_Left:
	walk_up
	walk_right
	walk_right
	face_original_direction
	step_end

HAM_Hideout_Intro_2_Right:
	walk_up
	walk_right
	face_original_direction
	step_end

TRIGGER_HAMHIDEOUT_EVENT_2::
	lock
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	compare VAR_TEMP_2, 44
	goto_if_eq TRIGGER_HAMHIDEOUT_EVENT_2_2
	applymovement OBJ_EVENT_ID_FOLLOWER, HAM_Hideout_Jail_Zanik_Top_1
	waitmovement 0
TRIGGER_HAMHIDEOUT_EVENT_2_1:
	applymovement 18, HAM_Hideout_Jail_Guard_Top_1
	applymovement 19, HAM_Hideout_Jail_Guard_Bottom_1
	waitmovement 0
	namebox TRIGGER_HAMHIDEOUT_EVENT_2_Text_0
	msgbox TRIGGER_HAMHIDEOUT_EVENT_2_Text_1
	applymovement 19, MOVEMENT_EXCLAMATIONMARK_JUMP_LEFT
	waitmovement 0
	msgbox TRIGGER_HAMHIDEOUT_EVENT_2_Text_2
	hidenamebox
	closemessage
	applymovement 18, HAM_Hideout_Jail_Guard_Top_2
	applymovement 19, HAM_Hideout_Jail_Guard_Bottom_2
	waitmovement 0
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	compare VAR_TEMP_2, 44
	goto_if_eq TRIGGER_HAMHIDEOUT_EVENT_2_6
	applymovement OBJ_EVENT_ID_PLAYER, HAM_Hideout_Player_Jail_Bottom
	applymovement OBJ_EVENT_ID_FOLLOWER, HAM_Hideout_Jail_Zanik_Top_2
	waitmovement 0
TRIGGER_HAMHIDEOUT_EVENT_2_5:
	applymovement 18, HAM_Hideout_Jail_Guard_Top_3
	applymovement 19, HAM_Hideout_Jail_Guard_Bottom_3
	waitmovement 0
	removeobject 18
	removeobject 19
	setflag FLAG_TEMP_6
	setvar VAR_TEMP_0, 3
	facefollower
	applymovement OBJ_EVENT_ID_FOLLOWER, Movement_InteractFACEPLAYER
	waitmovement 0
	namebox TRIGGER_HAMHIDEOUT_EVENT_1_Text_2
	msgbox TRIGGER_HAMHIDEOUT_EVENT_2_Text_3
	hidenamebox
	closemessage
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	compare VAR_TEMP_1, 36
	goto_if_eq TRIGGER_HAMHIDEOUT_EVENT_2_10
	applymovement OBJ_EVENT_ID_PLAYER, HAM_Hideout_Player_Jail_Right
	applymovement OBJ_EVENT_ID_FOLLOWER, HAM_Hideout_Jail_Zanik_Left
	waitmovement 0
TRIGGER_HAMHIDEOUT_EVENT_2_9:
	msgbox TRIGGER_HAMHIDEOUT_EVENT_2_Text_4
	closemessage
	namebox TRIGGER_HAMHIDEOUT_EVENT_1_Text_2
	msgbox TRIGGER_HAMHIDEOUT_EVENT_2_Text_5
	closemessage
	hidenamebox
	applymovement OBJ_EVENT_ID_PLAYER, HAM_Hideout_Player_Jail_Walk_Right
	applymovement OBJ_EVENT_ID_FOLLOWER, HAM_Hideout_Jail_Zanik_Walk_Up
	waitmovement 0
	msgbox TRIGGER_HAMHIDEOUT_EVENT_2_Text_6
	closemessage
	applymovement OBJ_EVENT_ID_FOLLOWER, MOVEMENT_QUESTIONMARK
	waitmovement 0
	applymovement OBJ_EVENT_ID_FOLLOWER, Movement_InteractFACEPLAYER
	waitmovement 0
	namebox TRIGGER_HAMHIDEOUT_EVENT_1_Text_2
	msgbox TRIGGER_HAMHIDEOUT_EVENT_2_Text_7
	hidenamebox
	closemessage
	setvar VAR_POKESCAPE_STORYMODE_PROGRESS, 230
	release
	end

TRIGGER_HAMHIDEOUT_EVENT_2_2:
	applymovement OBJ_EVENT_ID_FOLLOWER, HAM_Hideout_Jail_Zanik_Bottom_1
	waitmovement 0
	goto TRIGGER_HAMHIDEOUT_EVENT_2_1

TRIGGER_HAMHIDEOUT_EVENT_2_6:
	applymovement OBJ_EVENT_ID_FOLLOWER, HAM_Hideout_Jail_Zanik_Bottom_2
	applymovement OBJ_EVENT_ID_PLAYER, HAM_Hideout_Player_Jail_Top
	waitmovement 0
	goto TRIGGER_HAMHIDEOUT_EVENT_2_5

TRIGGER_HAMHIDEOUT_EVENT_2_10:
	applymovement OBJ_EVENT_ID_PLAYER, HAM_Hideout_Player_Jail_Left
	applymovement OBJ_EVENT_ID_FOLLOWER, Movement_InteractFACEUP
	waitmovement 0
	goto TRIGGER_HAMHIDEOUT_EVENT_2_9


HAM_Hideout_Player_Jail_Top:
	walk_down
	walk_right
	face_left
	step_end

HAM_Hideout_Player_Jail_Bottom:
	walk_right
	walk_right
	face_left
	step_end

HAM_Hideout_Player_Jail_Left:
	walk_up
	walk_right
	face_up
	step_end

HAM_Hideout_Player_Jail_Right:
	walk_up
	step_end

HAM_Hideout_Jail_Zanik_Top_1:
	walk_slow_up
	walk_slow_right
	step_end

HAM_Hideout_Jail_Zanik_Bottom_1:
	walk_slow_down
	walk_slow_right
	step_end

HAM_Hideout_Jail_Zanik_Top_2:
	walk_down
	walk_right
	step_end

HAM_Hideout_Jail_Zanik_Left:
	walk_right
	face_up
	step_end

HAM_Hideout_Jail_Zanik_Bottom_2:
	walk_right
	walk_right
	face_left
	step_end

HAM_Hideout_Player_Jail_Walk_Right:
	walk_right
	face_left
	step_end

HAM_Hideout_Jail_Zanik_Walk_Up:
	walk_up
	step_end

HAM_Hideout_Jail_Guard_Top_1:
	face_left
	step_end

HAM_Hideout_Jail_Guard_Bottom_1:
	walk_fast_down
	walk_fast_left
	walk_fast_left
	step_end

HAM_Hideout_Jail_Guard_Top_2:
	face_down
	step_end

HAM_Hideout_Jail_Guard_Bottom_2:
	walk_down
	face_up
	step_end

HAM_Hideout_Jail_Guard_Top_3:
	delay_8
	walk_left
	walk_left
	walk_left
	walk_up
	walk_left
	walk_up
	walk_left
	walk_up
	walk_up
	walk_up
	step_end

HAM_Hideout_Jail_Guard_Bottom_3:
	walk_left
	walk_up
	walk_left
	walk_left
	walk_left
	walk_up
	walk_left
	walk_up
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

TRIGGER_HAMHIDEOUT_EVENT_3::
	lock
	applymovement 10, Movement_InteractFACEPLAYER
	applymovement 11, Movement_InteractFACEPLAYER
	applymovement OBJ_EVENT_ID_FOLLOWER, Movement_InteractFACEUP
	waitmovement 0
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 225
	goto_if_eq TRIGGER_HAMHIDEOUT_EVENT_3_2
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 230
	goto_if_eq TRIGGER_HAMHIDEOUT_EVENT_3_3
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 235
	goto_if_eq TRIGGER_HAMHIDEOUT_EVENT_3_4
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 240
	goto_if_eq TRIGGER_HAMHIDEOUT_EVENT_3_5
	namebox TRIGGER_HAMHIDEOUT_EVENT_2_Text_0
	msgbox TRIGGER_HAMHIDEOUT_EVENT_3_Text_8
	hidenamebox
	closemessage
	applymovement OBJ_EVENT_ID_FOLLOWER, MOVEMENT_LOCKFACING_WALK_DOWN
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_WALK_DOWN
	waitmovement 0
	release
	end

	release
	end

TRIGGER_HAMHIDEOUT_EVENT_3_2:
	namebox TRIGGER_HAMHIDEOUT_EVENT_2_Text_0
	msgbox TRIGGER_HAMHIDEOUT_EVENT_3_Text_0
	closemessage
	hidenamebox
	applymovement OBJ_EVENT_ID_FOLLOWER, MOVEMENT_LOCKFACING_WALK_DOWN
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_WALK_DOWN
	waitmovement 0
	applymovement 10, FACE_ORIGINAL_DIRECTION
	applymovement 11, FACE_ORIGINAL_DIRECTION
	waitmovement 0
	release
	end

TRIGGER_HAMHIDEOUT_EVENT_3_3:
	namebox TRIGGER_HAMHIDEOUT_EVENT_2_Text_0
	msgbox TRIGGER_HAMHIDEOUT_EVENT_3_Text_1
	closemessage
	hidenamebox
	applymovement OBJ_EVENT_ID_FOLLOWER, MOVEMENT_LOCKFACING_WALK_DOWN
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_WALK_DOWN
	waitmovement 0
	applymovement 10, FACE_ORIGINAL_DIRECTION
	applymovement 11, FACE_ORIGINAL_DIRECTION
	waitmovement 0
	release
	end

TRIGGER_HAMHIDEOUT_EVENT_3_4:
	namebox TRIGGER_HAMHIDEOUT_EVENT_2_Text_0
	msgbox TRIGGER_HAMHIDEOUT_EVENT_3_Text_2
	closemessage
	hidenamebox
	applymovement OBJ_EVENT_ID_FOLLOWER, MOVEMENT_LOCKFACING_WALK_DOWN
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_WALK_DOWN
	waitmovement 0
	applymovement 10, FACE_ORIGINAL_DIRECTION
	applymovement 11, FACE_ORIGINAL_DIRECTION
	waitmovement 0
	facefollower
	applymovement OBJ_EVENT_ID_FOLLOWER, Movement_InteractFACEPLAYER
	namebox TRIGGER_HAMHIDEOUT_EVENT_1_Text_2
	msgbox TRIGGER_HAMHIDEOUT_EVENT_3_Text_3
	closemessage
	hidenamebox
	release
	end

TRIGGER_HAMHIDEOUT_EVENT_3_5:
	namebox TRIGGER_HAMHIDEOUT_EVENT_2_Text_0
	msgbox TRIGGER_HAMHIDEOUT_EVENT_3_Text_4
	trainerbattle_two_trainers TRAINER_HAM_HIDEOUT_GUARD_1, TRIGGER_HAMHIDEOUT_EVENT_3_Text_5, TRAINER_HAM_HIDEOUT_GUARD_2, TRIGGER_HAMHIDEOUT_EVENT_3_Text_6
	namebox TRIGGER_HAMHIDEOUT_EVENT_2_Text_0
	msgbox TRIGGER_HAMHIDEOUT_EVENT_3_Text_7
	hidenamebox
	closemessage
	playse SE_FLEE
	applymovement 10, HAM_Hideout_Guard_2_Right
	applymovement 11, HAM_Hideout_Guard_1_Left
	waitmovement 0
	waitse
	removeobject 10
	removeobject 11
	setflag FLAG_TEMP_5
	setvar VAR_TEMP_1, 1
	setvar VAR_POKESCAPE_STORYMODE_PROGRESS, 245
	release
	end


HAM_Hideout_Guard_1_Left:
	walk_fast_down
	walk_fast_down
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	face_original_direction
	step_end

HAM_Hideout_Guard_2_Right:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

NPC_HAM_HIDEOUT_B1F_1::
	lock
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 220
	goto_if_eq NPC_HAM_HIDEOUT_B1F_1_2
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 225
	goto_if_eq NPC_HAM_HIDEOUT_B1F_1_5
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 230
	goto_if_eq NPC_HAM_HIDEOUT_B1F_1_8
	msgbox NPC_HAM_HIDEOUT_B1F_1_Text_4
	closemessage
	hidenamebox
	return

NPC_HAM_HIDEOUT_B1F_1_2:
	msgbox NPC_HAM_HIDEOUT_B1F_1_Text_0
	closemessage
	hidenamebox
	return

NPC_HAM_HIDEOUT_B1F_1_5:
	faceplayer
	namebox NPC_HAM_HIDEOUT_B1F_1_Text_1
	msgbox NPC_HAM_HIDEOUT_B1F_1_Text_2
	closemessage
	hidenamebox
	return

	release
	end

NPC_HAM_HIDEOUT_B1F_1_8:
	faceplayer
	namebox TRIGGER_HAMHIDEOUT_EVENT_2_Text_0
	msgbox NPC_HAM_HIDEOUT_B1F_1_Text_3
	closemessage
	hidenamebox
	return


NPC_HAM_HIDEOUT_B1F_2::
	lock
	faceplayer
	namebox NPC_HAM_HIDEOUT_B1F_1_Text_1
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq NPC_HAM_HIDEOUT_B1F_2_2
	msgbox NPC_HAM_HIDEOUT_B1F_2_Text_1
NPC_HAM_HIDEOUT_B1F_2_1:
	closemessage
	hidenamebox
	release
	end

NPC_HAM_HIDEOUT_B1F_2_2:
	msgbox NPC_HAM_HIDEOUT_B1F_2_Text_0
	goto NPC_HAM_HIDEOUT_B1F_2_1


NPC_HAM_HIDEOUT_B1F_3::
	lock
	faceplayer
	namebox NPC_HAM_HIDEOUT_B1F_1_Text_1
	msgbox NPC_HAM_HIDEOUT_B1F_3_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_HAM_HIDEOUT_B1F_4::
	lock
	faceplayer
	namebox NPC_HAM_HIDEOUT_B1F_1_Text_1
	msgbox NPC_HAM_HIDEOUT_B1F_4_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_HAM_HIDEOUT_B1F_5::
	lock
	faceplayer
	namebox NPC_HAM_HIDEOUT_B1F_1_Text_1
	msgbox NPC_HAM_HIDEOUT_B1F_5_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_HAM_HIDEOUT_B1F_6::
	lock
	faceplayer
	namebox NPC_HAM_HIDEOUT_B1F_1_Text_1
	msgbox NPC_HAM_HIDEOUT_B1F_6_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_HAM_HIDEOUT_B1F_7::
	lock
	faceplayer
	namebox NPC_HAM_HIDEOUT_B1F_1_Text_1
	msgbox NPC_HAM_HIDEOUT_B1F_7_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_HAM_HIDEOUT_B1F_8::
	lock
	faceplayer
	namebox NPC_HAM_HIDEOUT_B1F_1_Text_1
	msgbox NPC_HAM_HIDEOUT_B1F_8_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_HAM_HIDEOUT_B1F_9::
	lock
	faceplayer
	namebox NPC_HAM_HIDEOUT_B1F_1_Text_1
	msgbox NPC_HAM_HIDEOUT_B1F_9_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_HAM_HIDEOUT_B1F_10::
	lock
	faceplayer
	namebox NPC_HAM_HIDEOUT_B1F_1_Text_1
	msgbox NPC_HAM_HIDEOUT_B1F_10_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_HAM_HIDEOUT_B1F_11::
	lock
	faceplayer
	namebox NPC_HAM_HIDEOUT_B1F_1_Text_1
	msgbox NPC_HAM_HIDEOUT_B1F_11_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_HAM_HIDEOUT_B1F_12::
	lock
	faceplayer
	namebox NPC_HAM_HIDEOUT_B1F_1_Text_1
	msgbox NPC_HAM_HIDEOUT_B1F_12_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_HAM_HIDEOUT_B1F_13::
	lock
	faceplayer
	namebox NPC_HAM_HIDEOUT_B1F_1_Text_1
	msgbox NPC_HAM_HIDEOUT_B1F_13_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_HAM_HIDEOUT_B1F_14::
	lock
	namebox HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_0
	random 10
	switch VAR_RESULT
	case 0, NPC_HAM_HIDEOUT_B1F_14_3
	case 1, NPC_HAM_HIDEOUT_B1F_14_4
	case 2, NPC_HAM_HIDEOUT_B1F_14_5
	case 3, NPC_HAM_HIDEOUT_B1F_14_6
	case 4, NPC_HAM_HIDEOUT_B1F_14_7
	case 5, NPC_HAM_HIDEOUT_B1F_14_8
	case 6, NPC_HAM_HIDEOUT_B1F_14_9
	case 7, NPC_HAM_HIDEOUT_B1F_14_10
	case 8, NPC_HAM_HIDEOUT_B1F_14_11
	case 9, NPC_HAM_HIDEOUT_B1F_14_12
	release
	end

NPC_HAM_HIDEOUT_B1F_14_3:
	msgbox NPC_HAM_HIDEOUT_B1F_14_Text_0
	hidenamebox
	release
	end

NPC_HAM_HIDEOUT_B1F_14_4:
	msgbox NPC_HAM_HIDEOUT_B1F_14_Text_1
	hidenamebox
	release
	end

NPC_HAM_HIDEOUT_B1F_14_5:
	msgbox NPC_HAM_HIDEOUT_B1F_14_Text_2
	hidenamebox
	release
	end

NPC_HAM_HIDEOUT_B1F_14_6:
	msgbox NPC_HAM_HIDEOUT_B1F_14_Text_3
	hidenamebox
	release
	end

NPC_HAM_HIDEOUT_B1F_14_7:
	msgbox NPC_HAM_HIDEOUT_B1F_14_Text_4
	hidenamebox
	release
	end

NPC_HAM_HIDEOUT_B1F_14_8:
	msgbox NPC_HAM_HIDEOUT_B1F_14_Text_5
	hidenamebox
	release
	end

NPC_HAM_HIDEOUT_B1F_14_9:
	msgbox NPC_HAM_HIDEOUT_B1F_14_Text_6
	hidenamebox
	release
	end

NPC_HAM_HIDEOUT_B1F_14_10:
	msgbox NPC_HAM_HIDEOUT_B1F_14_Text_7
	hidenamebox
	release
	end

NPC_HAM_HIDEOUT_B1F_14_11:
	msgbox NPC_HAM_HIDEOUT_B1F_14_Text_8
	hidenamebox
	release
	end

NPC_HAM_HIDEOUT_B1F_14_12:
	msgbox NPC_HAM_HIDEOUT_B1F_14_Text_9
	hidenamebox
	release
	end


NPC_HAM_HIDEOUT_B1F_15::
	lock
	faceplayer
	namebox NPC_HAM_HIDEOUT_B1F_1_Text_1
	msgbox NPC_HAM_HIDEOUT_B1F_15_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_HAM_HIDEOUT_B1F_16::
	lock
	faceplayer
	namebox NPC_HAM_HIDEOUT_B1F_1_Text_1
	msgbox NPC_HAM_HIDEOUT_B1F_16_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_HAM_HIDEOUT_B1F_17::
	lock
	faceplayer
	namebox NPC_HAM_HIDEOUT_B1F_1_Text_1
	msgbox NPC_HAM_HIDEOUT_B1F_17_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_HAM_HIDEOUT_B1F_18::
	lock
	faceplayer
	namebox TRIGGER_HAMHIDEOUT_EVENT_2_Text_0
	msgbox NPC_HAM_HIDEOUT_B1F_18_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_HAM_HIDEOUT_B1F_19::
	lock
	faceplayer
	namebox TRIGGER_HAMHIDEOUT_EVENT_2_Text_0
	msgbox NPC_HAM_HIDEOUT_B1F_19_Text_0
	closemessage
	hidenamebox
	applymovement 10, FACE_ORIGINAL_DIRECTION
	release
	end


HAM_HIDEOUT_RANGE::
	msgbox HAM_HIDEOUT_RANGE_Text_0
	closemessage
	release
	end


HAM_HIDEOUT_CELL_DOOR::
	lock
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 235
	goto_if_eq HAM_HIDEOUT_CELL_DOOR_2
	msgbox HAM_HIDEOUT_CELL_DOOR_Text_1
	closemessage
HAM_HIDEOUT_CELL_DOOR_1:
	release
	end

HAM_HIDEOUT_CELL_DOOR_2:
	playse SE_TRUCK_DOOR
	msgbox HAM_HIDEOUT_CELL_DOOR_Text_0
	closemessage
	setmetatile 36, 42, METATILE_PokeScape_HAM_JAILDOOR_OPEN_TOP, 0
	setmetatile 36, 43, METATILE_PokeScape_HAM_JAILDOOR_OPEN_BOTTOM, 1
	setmetatile 37, 43, METATILE_PokeScape_HAM_HAM_CAVE_FLOOR, 0
	setmetatile 37, 42, METATILE_PokeScape_HAM_HAM_CAVE_FLOOR, 0
	setmetatile 38, 43, METATILE_PokeScape_HAM_JAILDOOR_OPEN_SIDE, 1
	special DrawWholeMapView
	setvar VAR_POKESCAPE_STORYMODE_PROGRESS, 240
	goto HAM_HIDEOUT_CELL_DOOR_1


NPC_HAM_HIDEOUT_B1F_STOREROOM_BLOCK::
	lock
	faceplayer
	namebox TRIGGER_HAMHIDEOUT_EVENT_2_Text_0
	msgbox NPC_HAM_HIDEOUT_B1F_STOREROOM_BLOCK_Text_0
	closemessage
	hidenamebox
	release
	end


HAM_HIDEOUT_B1F_JIMMY::
	lock
	faceplayer
	namebox HAM_HIDEOUT_B1F_JIMMY_Text_0
	msgbox HAM_HIDEOUT_B1F_JIMMY_Text_1
	hidenamebox
	closemessage
	release
	end


HAM_HIDEOUT_B1F_PRINCE_ALI::
	lock
	faceplayer
	namebox HAM_HIDEOUT_B1F_PRINCE_ALI_Text_0
	msgbox HAM_HIDEOUT_B1F_PRINCE_ALI_Text_1
	hidenamebox
	closemessage
	release
	end


HAM_HIDEOUT_B1F_GOEBIE::
	lock
	faceplayer
	namebox HAM_HIDEOUT_B1F_GOEBIE_Text_0
	msgbox HAM_HIDEOUT_B1F_GOEBIE_Text_1
	hidenamebox
	closemessage
	release
	end


HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_0:
	.string "H.A.M Deacon$"

HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_1:
	.string "And thus, we will finally execute our\n"
	.string "plan to rid this world of those fiendish\l"
	.string "Monsters and send them to the Abyss\l"
	.string "where they belong!$"

HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_2:
	.string "…{PAUSE 16}…{PAUSE 16}…\p"
	.string "What is this?$"

HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_3:
	.string "Sorry everyone, it seems like there is\n"
	.string "some sort of an announcement.$"

HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_4:
	.string "Demonheadge$"

HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_5:
	.string "Hello everyone.\p"
	.string "I am Demonheadge, the creator of\n"
	.string "PokeScape.\p"
	.string "And as of a few seconds ago I have been\n"
	.string "informed that PokeScape has been\l"
	.string "nominated for a Golden Gnome!$"

HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_6:
	.string "That's crazy right?!\p"
	.string "I've also been asked to say a few words.$"

HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_7:
	.string "I would like to thank all of the\n"
	.string "incredible people who helped and\l"
	.string "assisted in some way on this project.\p"
	.string "Without them it wouldn't be where it is\n"
	.string "today.$"

HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_8:
	.string "Hyper Stan$"

HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_9:
	.string "Hey, I am HyperStan.\p"
	.string "I drew most of the Pixel Art for this\n"
	.string "Project.\p"
	.string "…{PAUSE 16} Using this moment I would like to say\n"
	.string "that Ja-$"

HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_10:
	.string "Jagex Mod$"

HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_11:
	.string "Sorry, Hyper Stan has just been muted\n"
	.string "for inappropriate behaviour.\p"
	.string "Please continue the awards.$"

HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_12:
	.string "Orchy$"

HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_13:
	.string "Hello I am known as RuneScape\n"
	.string "ReOrchestrated.\p"
	.string "I made all of the custom music for this\n"
	.string "Project.\p"
	.string "I hope you enjoy it!$"

HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_14:
	.string "FROGEEL$"

HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_15:
	.string "AAAAAAAAAAAA!$"

HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_16:
	.string "Ah, cannot forget about Frogeel for his\n"
	.string "pursuit-less despair and endeavor\l"
	.string "which has kept us motivated to keep\l"
	.string "going.$"

HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_17:
	.string "Some other mentions are ImcandoBrett,\n"
	.string "Ryu Saint, Lopendebank, Chase,\l"
	.string "MrKalius, Sudo Bash, Jitterbug,\l"
	.string "GentleShen, PippinSmith and many, many\l"
	.string "others who have popped in along the way\l"
	.string "to contribute in one way or another.$"

HAM_HIDEOUT_GOLDENGNOME_EVENT_Text_18:
	.string "PokeScape has been a passion project\n"
	.string "on and off for a few years now just for\l"
	.string "fun and I hope to continue it!\p"
	.string "Thank you all for voting for us.\p"
	.string "We appreciate it a lot.\p"
	.string "Now enjoy the rest of the Golden Gnome\n"
	.string "Awards!$"

GOLDENGNOME_EVENT_START_Text_0:
	.string "Would you like to watch the Golden\n"
	.string "Gnomes Awards?$"

GOLDENGNOME_EVENT_START_Text_1:
	.string "Enjoy watching!$"

GOLDENGNOME_EVENT_START_Text_2:
	.string "I hope you enjoyed watching Golden\n"
	.string "Gnomes.$"

GOLDENGNOME_EVENT_END_Text_0:
	.string "I hope you enjoyed watching the Golden\n"
	.string "Gnomes.\p"
	.string "Here is a gift for you.$"

GOLDENGNOME_TEST_Text_0:
	.string "Testing…$"

TRIGGER_HAMHIDEOUT_EVENT_1_Text_0:
	.string "HAM Grunt$"

TRIGGER_HAMHIDEOUT_EVENT_1_Text_1:
	.string "You're late!\l"
	.string "You should have come in to cover the\l"
	.string "next shift hours ago.\p"
	.string "...{PAUSE 15}\p"
	.string "I don't want to hear any excuses, now\n"
	.string "go to the jail!\l"
	.string "Someone needs to keep watch over our\l"
	.string "guests!\p"
	.string "...{PAUSE 15}\p"
	.string "What's with the blank expressions?\l"
	.string "Surely you both know it's in the\l"
	.string "south-east of the cave by now, right!?$"

TRIGGER_HAMHIDEOUT_EVENT_1_Text_2:
	.string "Zanik$"

TRIGGER_HAMHIDEOUT_EVENT_1_Text_3:
	.string "Did you hear that {PLAYER}?! This\n"
	.string "gives us the perfect cover to check\l"
	.string "whether H.A.M have the Prince in their\l"
	.string "jail cells.\l"
	.string "Let's go!$"

TRIGGER_HAMHIDEOUT_EVENT_2_Text_0:
	.string "H.A.M Guard$"

TRIGGER_HAMHIDEOUT_EVENT_2_Text_1:
	.string "You two should have been here ages ago!\l"
	.string "What kept you?$"

TRIGGER_HAMHIDEOUT_EVENT_2_Text_2:
	.string "It doesn't matter, you're here now.\l"
	.string "Make sure you guard the prisoners!\l"
	.string "Don't let them out of your sight!$"

TRIGGER_HAMHIDEOUT_EVENT_2_Text_3:
	.string "This is our chance {PLAYER}!\l"
	.string "Let's unlock that cell door and break\l"
	.string "the Prince out!$"

TRIGGER_HAMHIDEOUT_EVENT_2_Text_4:
	.string "You attempt to pick the lock{PAUSE 15}…{PAUSE 15}…{PAUSE 15}…$"

TRIGGER_HAMHIDEOUT_EVENT_2_Text_5:
	.string "Step aside {PLAYER} allow me.$"

TRIGGER_HAMHIDEOUT_EVENT_2_Text_6:
	.string "Zanik attempts to pick the lock{PAUSE 15}…{PAUSE 15}…{PAUSE 15}…$"

TRIGGER_HAMHIDEOUT_EVENT_2_Text_7:
	.string "Hmmm…\l"
	.string "This is unusual, but I can't seem to pick\l"
	.string "this lock.\l"
	.string "We're going to have to try and do this\l"
	.string "the old fashioned way… with a key!\p"
	.string "{PAUSE 15}…\p"
	.string "{PAUSE 15}…\p"
	.string "Now, where would they keep a spare key?$"

TRIGGER_HAMHIDEOUT_EVENT_3_Text_0:
	.string "Shouldn't you two be guarding the\n"
	.string "prisoners?\l"
	.string "The jail cell is over to the east,\l"
	.string "remember?$"

TRIGGER_HAMHIDEOUT_EVENT_3_Text_1:
	.string "Get back to guarding the prisoners!\l"
	.string "Johanhus won't be happy if he hears\l"
	.string "you've abandoned your posts.$"

TRIGGER_HAMHIDEOUT_EVENT_3_Text_2:
	.string "Hey, you two aren't H.A.M members!\l"
	.string "Get out of here, this place is\l"
	.string "off-limits!$"

TRIGGER_HAMHIDEOUT_EVENT_3_Text_3:
	.string "Maybe we should go and free the Prince\n"
	.string "while they're distracted guarding\l"
	.string "whatever's in there?$"

TRIGGER_HAMHIDEOUT_EVENT_3_Text_4:
	.string "Hey, you two are the ones who helped\n"
	.string "the Prince escape!$"

TRIGGER_HAMHIDEOUT_EVENT_3_Text_5:
	.string "H.A.M Guard: Johanhus and Sigmund won't\n"
	.string "be happy about this…$"

TRIGGER_HAMHIDEOUT_EVENT_3_Text_6:
	.string "H.A.M Guard: Especially since one of you\n"
	.string "is a blasted goblin!$"

TRIGGER_HAMHIDEOUT_EVENT_3_Text_7:
	.string "Quick, let's try and find some back-up!\p"
	.string "Don't you dare go in and disturb\n"
	.string "Johanhus and Sigmund while we're gone!$"

TRIGGER_HAMHIDEOUT_EVENT_3_Text_8:
	.string "Sorry, this area is off-limits.$"

NPC_HAM_HIDEOUT_B1F_1_Text_0:
	.string "The guard is too busy to pay attention\n"
	.string "to you.$"

NPC_HAM_HIDEOUT_B1F_1_Text_1:
	.string "H.A.M Member$"

NPC_HAM_HIDEOUT_B1F_1_Text_2:
	.string "What did I tell you two?\p"
	.string "Go and guard the jail!\l"
	.string "Otherwise you won't be getting any\l"
	.string "rations tonight.$"

NPC_HAM_HIDEOUT_B1F_1_Text_3:
	.string "I saw the other guard you relieved walk\n"
	.string "past not too long ago.\l"
	.string "Have you idiots left the jail\l"
	.string "unguarded?\p"
	.string "What if someone tries to sneak in and\n"
	.string "break the prisoners out!\l"
	.string "Get back to your post before I have to\l"
	.string "involved Sigmund!$"

NPC_HAM_HIDEOUT_B1F_1_Text_4:
	.string "The guard is either too busy to pay\n"
	.string "attention to you, or trying desperately\l"
	.string "to pretend you're not there and hoping\l"
	.string "you'll go away.$"

NPC_HAM_HIDEOUT_B1F_2_Text_0:
	.string "Be vigilant brother, we cannot let the\n"
	.string "monster scourge pollute our haven.$"

NPC_HAM_HIDEOUT_B1F_2_Text_1:
	.string "Be vigilant sister, we cannot let the\n"
	.string "monster scourge pollute our haven.$"

NPC_HAM_HIDEOUT_B1F_3_Text_0:
	.string "Have you had the chance to hear the\n"
	.string "Deacon speak yet?\l"
	.string "His words are so wise and inspiring, it's\l"
	.string "almost as if Saradomin is speaking\l"
	.string "through him!$"

NPC_HAM_HIDEOUT_B1F_4_Text_0:
	.string "Before I joined H.A.M my family was\n"
	.string "killed by goblins.\p"
	.string "Now I feel like I have found my life's\n"
	.string "calling right here.$"

NPC_HAM_HIDEOUT_B1F_5_Text_0:
	.string "I quite like it here honestly.\p"
	.string "One thing bugs me however.\p"
	.string "Why did the leaders decide on the robes\n"
	.string "being pink?\p"
	.string "Is there some symbolism I am not\n"
	.string "getting?$"

NPC_HAM_HIDEOUT_B1F_6_Text_0:
	.string "Don't tell any of the other grunts, but\n"
	.string "I got a thing for Babe.\p"
	.string "Do you know anything that might help me\n"
	.string "get closer to her?\l"
	.string "There is a limit to how much hatred\l"
	.string "against monsters can bring people\l"
	.string "together…$"

NPC_HAM_HIDEOUT_B1F_7_Text_0:
	.string "We are going to make Lumbridge great\n"
	.string "again.\l"
	.string "Then the world will follow.$"

NPC_HAM_HIDEOUT_B1F_8_Text_0:
	.string "If you do not agree with my opinion you\n"
	.string "are my enemy, that is how the world\l"
	.string "works.$"

NPC_HAM_HIDEOUT_B1F_9_Text_0:
	.string "We might use monsters to fight\n"
	.string "monsters, but we have standards.\p"
	.string "Dogs, spiders, cows, pigs, sheep, and\n"
	.string "cats have been friends and allies to\l"
	.string "humans for centuries.\l"
	.string "Now they stand with us against the\l"
	.string "scourge that are monsters!$"

NPC_HAM_HIDEOUT_B1F_10_Text_0:
	.string "Johanhus is an idealist, he wants to\n"
	.string "solve conflict with words alone.\p"
	.string "So far it hasn't really worked, though.$"

NPC_HAM_HIDEOUT_B1F_11_Text_0:
	.string "Sigmund is an extremist among us.\p"
	.string "He doesn't mind flooding a cavern of\n"
	.string "goblins if it means they will all die.\l"
	.string "Personally I get that.$"

NPC_HAM_HIDEOUT_B1F_12_Text_0:
	.string "Sigmund believes power and might makes\n"
	.string "right, so we in H.A.M will become the most\l"
	.string "powerful organisation in Gielinor.$"

NPC_HAM_HIDEOUT_B1F_13_Text_0:
	.string "We will not tolerate anyone with an\n"
	.string "opinion differing from our own.\p"
	.string "That is the path of disaster.$"

NPC_HAM_HIDEOUT_B1F_14_Text_0:
	.string "We are the righteous ones in his eyes\n"
	.string "alone.$"

NPC_HAM_HIDEOUT_B1F_14_Text_1:
	.string "Let them not infest our cities and\n"
	.string "towns...$"

NPC_HAM_HIDEOUT_B1F_14_Text_2:
	.string "And lo, we become the power, indeed the\n"
	.string "force to stop these monsters in their\l"
	.string "tracks.$"

NPC_HAM_HIDEOUT_B1F_14_Text_3:
	.string "Verily I urge you, my friends to take up\n"
	.string "your spades and farm your farms to\l"
	.string "feed our people in this blessed\l"
	.string "sanctuary.$"

NPC_HAM_HIDEOUT_B1F_14_Text_4:
	.string "If thine monsters visage does frighten\n"
	.string "thee, then tear it off I say... tear it\l"
	.string "off!$"

NPC_HAM_HIDEOUT_B1F_14_Text_5:
	.string "For Saradomin will guide our sword arms\n"
	.string "and smash the enemies of humans till\l"
	.string "their bones become dust.$"

NPC_HAM_HIDEOUT_B1F_14_Text_6:
	.string "And let us smite these monsters unto\n"
	.string "their deaths.$"

NPC_HAM_HIDEOUT_B1F_14_Text_7:
	.string "For they are not the chosen ones in\n"
	.string "Saradomin's eyes.$"

NPC_HAM_HIDEOUT_B1F_14_Text_8:
	.string "Where do we go for safety from these\n"
	.string "monsters... here, with our brethren!$"

NPC_HAM_HIDEOUT_B1F_14_Text_9:
	.string "And let there be no cave or shelter for\n"
	.string "their spawn until the end of days.$"

NPC_HAM_HIDEOUT_B1F_15_Text_0:
	.string "Don't forget, through here are the\n"
	.string "sleeping quarters if you need to take a\l"
	.string "rest.\l"
	.string "Just make sure not to get caught\l"
	.string "sleeping if you're on duty, or Sigmund\l"
	.string "will have your head!$"

NPC_HAM_HIDEOUT_B1F_16_Text_0:
	.string "It's really inspiring seeing such strong\n"
	.string "female figures like Babe and Patty\l"
	.string "having positions of authority here.\l"
	.string "That's how I know this group truly are\l"
	.string "guided by Saradomin himself.\p"
	.string "The churches may preach about him, but\n"
	.string "you never seen any female priests or\l"
	.string "monks..!$"

NPC_HAM_HIDEOUT_B1F_17_Text_0:
	.string "It's my turn to prepare tonight's meal.\p"
	.string "Thankfully we have plenty of 'taters.\l"
	.string "You know, po-tay-toes!\p"
	.string "Boil 'em, mash 'em, stick 'em in a stew.\l"
	.string "Yum!$"

NPC_HAM_HIDEOUT_B1F_18_Text_0:
	.string "Sorry, this area is off-limits to regular\n"
	.string "members.$"

NPC_HAM_HIDEOUT_B1F_19_Text_0:
	.string "Sorry, this area is off-limits.\l"
	.string "Sigmund and Johanhus are having an\l"
	.string "important meeting.$"

HAM_HIDEOUT_RANGE_Text_0:
	.string "It's a range for cooking on.\l"
	.string "Though you are not really sure how H.A.M\l"
	.string "managed to get one working this far\l"
	.string "underground.$"

HAM_HIDEOUT_CELL_DOOR_Text_0:
	.string "You unlock the jail door with the CELL\n"
	.string "KEY.$"

HAM_HIDEOUT_CELL_DOOR_Text_1:
	.string "The jail door is securely locked.\l"
	.string "The only way to open it appears to be\l"
	.string "with a key.$"

NPC_HAM_HIDEOUT_B1F_STOREROOM_BLOCK_Text_0:
	.string "You best get to your posts.\l"
	.string "Patty and Babe came through here\l"
	.string "earlier, and they will not be happy\l"
	.string "seeing you two wandering aimlessly.$"

HAM_HIDEOUT_B1F_JIMMY_Text_0:
	.string "Jimmy$"

HAM_HIDEOUT_B1F_JIMMY_Text_1:
	.string "Hello mate.\l"
	.string "Did Aggie send you?\p"
	.string "I've been training as her apprentice,\n"
	.string "but these lunatics kidnapped me and\l"
	.string "tried to force me to join their cult!$"

HAM_HIDEOUT_B1F_PRINCE_ALI_Text_0:
	.string "Prince Ali$"

HAM_HIDEOUT_B1F_PRINCE_ALI_Text_1:
	.string "Ah, it is good to see a friendly face.$"

HAM_HIDEOUT_B1F_GOEBIE_Text_0:
	.string "Goebiewan$"

HAM_HIDEOUT_B1F_GOEBIE_Text_1:
	.string "Hello there.$"
