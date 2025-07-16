Dungeoneering_Lobby_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Dungeoneering_Lobby_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_LOAD, Dungeoneering_Lobby_MapScripts_MAP_SCRIPT_ON_LOAD
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Dungeoneering_Lobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Dungeoneering_Lobby_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	call Daemonheim_Lobby_STATE
	return

Dungeoneering_Lobby_MapScripts_MAP_SCRIPT_ON_LOAD:
	setflag FLAG_TEMP_12
	call Randomise_Dungeon
	return

Dungeoneering_Lobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_POKESCAPE_DAEMONHEIM_GYM_QUEST, 10, THOK_GYM_CHALLENGE_STATE_3
	.2byte 0


DUNGEONEERING_CHECK_HOWMANYDUNGEONS::
	buffernumberstring STR_VAR_1, VAR_DUNGEONEERING_STARTER_ROOM
	msgbox DUNGEONEERING_CHECK_HOWMANYDUNGEONS_Text_0
	closemessage
	release
	end


DUNGEONEERING_CHECK_VAR::
	buffernumberstring STR_VAR_1, VAR_DUNGEONEERING_STARTER_ROOM
	msgbox DUNGEONEERING_CHECK_VAR_Text_0
	buffernumberstring STR_VAR_1, VAR_DUNGEONEERING_RANDOM_PUZZLE_1
	msgbox DUNGEONEERING_CHECK_VAR_Text_1
	buffernumberstring STR_VAR_1, VAR_DUNGEONEERING_RANDOM_PUZZLE_2
	msgbox DUNGEONEERING_CHECK_VAR_Text_2
	buffernumberstring STR_VAR_1, VAR_DUNGEONEERING_RANDOM_PUZZLE_3
	msgbox DUNGEONEERING_CHECK_VAR_Text_3
	buffernumberstring STR_VAR_1, VAR_DUNGEONEERING_RANDOM_PUZZLE_4
	msgbox DUNGEONEERING_CHECK_VAR_Text_4
	buffernumberstring STR_VAR_1, VAR_DUNGEONEERING_RANDOM_PUZZLE_5
	msgbox DUNGEONEERING_CHECK_VAR_Text_5
	buffernumberstring STR_VAR_1, VAR_DUNGEONEERING_RANDOM_PUZZLE_6
	msgbox DUNGEONEERING_CHECK_VAR_Text_6
	buffernumberstring STR_VAR_1, VAR_DUNGEONEERING_RANDOM_PUZZLE_7
	msgbox DUNGEONEERING_CHECK_VAR_Text_7
	buffernumberstring STR_VAR_1, VAR_DUNGEONEERING_RANDOM_PUZZLE_8
	msgbox DUNGEONEERING_CHECK_VAR_Text_8
	closemessage
	release
	end


Randomise_Puzzles::
	setvar VAR_DUNGEONEERING_AMOUNT_OF_PUZZLES, 6
	random VAR_DUNGEONEERING_AMOUNT_OF_PUZZLES
	copyvar VAR_DUNGEONEERING_RANDOM_PUZZLE_1, VAR_RESULT
	random VAR_DUNGEONEERING_AMOUNT_OF_PUZZLES
	copyvar VAR_DUNGEONEERING_RANDOM_PUZZLE_2, VAR_RESULT
	random VAR_DUNGEONEERING_AMOUNT_OF_PUZZLES
	copyvar VAR_DUNGEONEERING_RANDOM_PUZZLE_3, VAR_RESULT
	random VAR_DUNGEONEERING_AMOUNT_OF_PUZZLES
	copyvar VAR_DUNGEONEERING_RANDOM_PUZZLE_4, VAR_RESULT
	random VAR_DUNGEONEERING_AMOUNT_OF_PUZZLES
	copyvar VAR_DUNGEONEERING_RANDOM_PUZZLE_5, VAR_RESULT
	random VAR_DUNGEONEERING_AMOUNT_OF_PUZZLES
	copyvar VAR_DUNGEONEERING_RANDOM_PUZZLE_6, VAR_RESULT
	random VAR_DUNGEONEERING_AMOUNT_OF_PUZZLES
	copyvar VAR_DUNGEONEERING_RANDOM_PUZZLE_7, VAR_RESULT
	random VAR_DUNGEONEERING_AMOUNT_OF_PUZZLES
	copyvar VAR_DUNGEONEERING_RANDOM_PUZZLE_8, VAR_RESULT
	return


Start_Dungeoneering::
	compare VAR_POKESCAPE_DAEMONHEIM_GYM_QUEST, 15
	goto_if_eq Start_Dungeoneering_2
	call RandomiseSeed_ForDoors
	call Randomise_Dungeon
	call Randomise_Puzzles
	delay 60
	playse SE_LEDGE
	applymovement OBJ_EVENT_ID_PLAYER, Movement_JumpIntoPortal
	waitmovement 0
	compare VAR_DUNGEONEERING_STARTER_ROOM, 1
	goto_if_eq Start_Dungeoneering_4
	compare VAR_DUNGEONEERING_STARTER_ROOM, 2
	goto_if_eq Start_Dungeoneering_5
	compare VAR_DUNGEONEERING_STARTER_ROOM, 3
	goto_if_eq Start_Dungeoneering_6
	compare VAR_DUNGEONEERING_STARTER_ROOM, 4
	goto_if_eq Start_Dungeoneering_7
	compare VAR_DUNGEONEERING_STARTER_ROOM, 5
	goto_if_eq Start_Dungeoneering_8
	compare VAR_DUNGEONEERING_STARTER_ROOM, 6
	goto_if_eq Start_Dungeoneering_9
	compare VAR_DUNGEONEERING_STARTER_ROOM, 7
	goto_if_eq Start_Dungeoneering_10
	compare VAR_DUNGEONEERING_STARTER_ROOM, 8
	goto_if_eq Start_Dungeoneering_11
	compare VAR_DUNGEONEERING_STARTER_ROOM, 9
	goto_if_eq Start_Dungeoneering_12
	compare VAR_DUNGEONEERING_STARTER_ROOM, 10
	goto_if_eq Start_Dungeoneering_13
	compare VAR_DUNGEONEERING_STARTER_ROOM, 11
	goto_if_eq Start_Dungeoneering_14
	compare VAR_DUNGEONEERING_STARTER_ROOM, 12
	goto_if_eq Start_Dungeoneering_15
	compare VAR_DUNGEONEERING_STARTER_ROOM, 13
	goto_if_eq Start_Dungeoneering_16
	compare VAR_DUNGEONEERING_STARTER_ROOM, 14
	goto_if_eq Start_Dungeoneering_17
	compare VAR_DUNGEONEERING_STARTER_ROOM, 15
	goto_if_eq Start_Dungeoneering_18
	compare VAR_DUNGEONEERING_STARTER_ROOM, 16
	goto_if_eq Start_Dungeoneering_19
	return

Start_Dungeoneering_2:
	warp MAP_DUNG_GYM_1, 0, 0, 0
	waitstate
	end

Start_Dungeoneering_4:
	warp MAP_DUNGEONEERING_1, 0, 0, 0
	waitstate
	return

Start_Dungeoneering_5:
	warp MAP_DUNGEONEERING_2, 0, 0, 0
	waitstate
	return

Start_Dungeoneering_6:
	warp MAP_DUNGEONEERING_3, 0, 0, 0
	waitstate
	return

Start_Dungeoneering_7:
	warp MAP_DUNGEONEERING_4, 0, 0, 0
	waitstate
	return

Start_Dungeoneering_8:
	warp MAP_DUNGEONEERING_5, 0, 0, 0
	waitstate
	return

Start_Dungeoneering_9:
	warp MAP_DUNGEONEERING_6, 0, 0, 0
	waitstate
	return

Start_Dungeoneering_10:
	warp MAP_DUNGEONEERING_7, 0, 0, 0
	waitstate
	return

Start_Dungeoneering_11:
	warp MAP_DUNGEONEERING_8, 0, 0, 0
	waitstate
	return

Start_Dungeoneering_12:
	warp MAP_DUNGEONEERING_9, 0, 0, 0
	waitstate
	return

Start_Dungeoneering_13:
	warp MAP_DUNGEONEERING_10, 0, 0, 0
	waitstate
	return

Start_Dungeoneering_14:
	warp MAP_DUNGEONEERING_11, 0, 0, 0
	waitstate
	return

Start_Dungeoneering_15:
	warp MAP_DUNGEONEERING_12, 0, 0, 0
	waitstate
	return

Start_Dungeoneering_16:
	warp MAP_DUNGEONEERING_13, 0, 0, 0
	waitstate
	return

Start_Dungeoneering_17:
	warp MAP_DUNGEONEERING_14, 0, 0, 0
	waitstate
	return

Start_Dungeoneering_18:
	warp MAP_DUNGEONEERING_15, 0, 0, 0
	waitstate
	return

Start_Dungeoneering_19:
	warp MAP_DUNGEONEERING_16, 0, 0, 0
	waitstate
	return


Movement_JumpIntoPortal:
	jump_up
	set_invisible
	step_end

DungeonLayout_ROOM_PATH_1::
	setvar VAR_DUNGEONEERING_STARTER_ROOM, 1
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_1, DungeonLayout_StartingRoom
	call DungeonLayout_BLOCKED_RIGHT_ROOM_1
	call DungeonLayout_BLOCKED_LEFT_ROOM_1
	call DungeonLayout_BLOCKED_DOWN_ROOM_1
	call DungeonLayout_BLOCKED_RIGHT_ROOM_4
	call DungeonLayout_BLOCKED_RIGHT_ROOM_1
	call DungeonLayout_BLOCKED_UP_ROOM_8
	setvar VAR_DUNGEONEERING_BOSS_ROOM, 12
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_12, DungeonLayout_BossRoom
	return


DungeonLayout_ROOM_PATH_2::
	setvar VAR_DUNGEONEERING_STARTER_ROOM, 1
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_1, DungeonLayout_StartingRoom
	call DungeonLayout_BLOCKED_DOWN_ROOM_1
	call DungeonLayout_BLOCKED_DOWN_ROOM_2
	call DungeonLayout_BLOCKED_UP_ROOM_3
	call DungeonLayout_BLOCKED_RIGHT_ROOM_4
	setvar VAR_DUNGEONEERING_BOSS_ROOM, 12
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_12, DungeonLayout_BossRoom
	return


DungeonLayout_ROOM_PATH_3::
	setvar VAR_DUNGEONEERING_STARTER_ROOM, 8
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_8, DungeonLayout_StartingRoom
	call DungeonLayout_BLOCKED_RIGHT_ROOM_12
	call DungeonLayout_BLOCKED_LEFT_ROOM_8
	call DungeonLayout_BLOCKED_RIGHT_ROOM_5
	call DungeonLayout_BLOCKED_LEFT_ROOM_14
	call DungeonLayout_BLOCKED_DOWN_ROOM_1
	call DungeonLayout_BLOCKED_LEFT_ROOM_1
	call DungeonLayout_BLOCKED_DOWN_ROOM_2
	setvar VAR_DUNGEONEERING_BOSS_ROOM, 12
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_12, DungeonLayout_BossRoom
	return


DungeonLayout_ROOM_PATH_4::
	setvar VAR_DUNGEONEERING_STARTER_ROOM, 6
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_6, DungeonLayout_StartingRoom
	call DungeonLayout_BLOCKED_RIGHT_ROOM_2
	call DungeonLayout_BLOCKED_RIGHT_ROOM_1
	call DungeonLayout_BLOCKED_UP_ROOM_2
	setvar VAR_DUNGEONEERING_BOSS_ROOM, 2
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_2, DungeonLayout_BossRoom
	return


DungeonLayout_ROOM_PATH_5::
	setvar VAR_DUNGEONEERING_STARTER_ROOM, 4
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_4, DungeonLayout_StartingRoom
	call DungeonLayout_BLOCKED_RIGHT_ROOM_4
	call DungeonLayout_BLOCKED_DOWN_ROOM_1
	call DungeonLayout_BLOCKED_DOWN_ROOM_12
	call DungeonLayout_BLOCKED_UP_ROOM_8
	call DungeonLayout_BLOCKED_UP_ROOM_15
	call DungeonLayout_BLOCKED_UP_ROOM_14
	call DungeonLayout_BLOCKED_DOWN_ROOM_3
	call DungeonLayout_BLOCKED_UP_ROOM_3
	call DungeonLayout_BLOCKED_LEFT_ROOM_5
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_1, DungeonLayout_PuzzleRoom_1
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_2, DungeonLayout_PuzzleRoom_2
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_3, DungeonLayout_PuzzleRoom_3
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_5, DungeonLayout_PuzzleRoom_5
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_6, DungeonLayout_PuzzleRoom_6
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_7, DungeonLayout_PuzzleRoom_7
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_8, DungeonLayout_PuzzleRoom_8
	setvar VAR_DUNGEONEERING_BOSS_ROOM, 11
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_11, DungeonLayout_BossRoom
	return


Daemonheim_Lobby_STATE::
	setflag FLAG_TEMP_1F
	setflag FLAG_TEMP_1D
	setflag FLAG_TEMP_1E
	setflag FLAG_TEMP_1C
	removeobject 5
	removeobject 7
	removeobject 3
	switch VAR_POKESCAPE_DAEMONHEIM_GYM_QUEST
	case 10, Daemonheim_Lobby_STATE_3
Daemonheim_Lobby_STATE_1:
	switch VAR_FROGEEL_RIVAL
	case 35, Daemonheim_Lobby_STATE_6
	case 36, Daemonheim_Lobby_STATE_7
	case 37, Daemonheim_Lobby_STATE_8
Daemonheim_Lobby_STATE_4:
	switch VAR_MITHRILMAN_STATE
	case 30, Daemonheim_Lobby_STATE_11
	case 35, Daemonheim_Lobby_STATE_12
Daemonheim_Lobby_STATE_9:
	return

Daemonheim_Lobby_STATE_3:
	clearflag FLAG_TEMP_1F
	addobject 2
	setobjectxyperm 1, 9, 5
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_LEFT
	goto Daemonheim_Lobby_STATE_1

Daemonheim_Lobby_STATE_6:
	clearflag FLAG_TEMP_1D
	addobject 7
	return

Daemonheim_Lobby_STATE_7:
	clearflag FLAG_TEMP_1E
	addobject 5
	goto Daemonheim_Lobby_STATE_4

Daemonheim_Lobby_STATE_8:
	clearflag FLAG_TEMP_1E
	addobject 5
	goto Daemonheim_Lobby_STATE_4

Daemonheim_Lobby_STATE_11:
	addobject 3
	clearflag FLAG_TEMP_1C
	goto Daemonheim_Lobby_STATE_9

Daemonheim_Lobby_STATE_12:
	addobject 3
	clearflag FLAG_TEMP_1C
	goto Daemonheim_Lobby_STATE_9


THOK_GYM_CHALLENGE_STATE_3::
	applymovement 2, Movement_DaemonheimGym_8
	applymovement OBJ_EVENT_ID_PLAYER, Movement_DaemonheimGym_9
	waitmovement 2
	namebox THOK_GYM_CHALLENGE_STATE_3_Text_0
	msgbox THOK_GYM_CHALLENGE_STATE_3_Text_1
	closemessage
	hidenamebox
	playse SE_LEDGE
	applymovement 2, Movement_DaemonheimGym_10
	waitmovement 0
	setflag FLAG_TEMP_1F
	removeobject 2
	applymovement 1, Movement_DaemonheimGym_11
	waitmovement 0
	namebox THOK_GYM_CHALLENGE_STATE_3_Text_2
	msgbox THOK_GYM_CHALLENGE_STATE_3_Text_3
	closemessage
	hidenamebox
	applymovement 1, Movement_DaemonheimGym_12
	waitmovement 0
	setobjectmovementtype 1, MOVEMENT_TYPE_WANDER_AROUND
	setvar VAR_POKESCAPE_DAEMONHEIM_GYM_QUEST, 15
	return


Movement_DaemonheimGym_8:
	walk_up
	walk_up
	walk_up
	face_down
	step_end

Movement_DaemonheimGym_9:
	walk_slow_up
	walk_slow_up
	step_end

Movement_DaemonheimGym_10:
	jump_2_up
	step_end

Movement_DaemonheimGym_11:
	face_up
	delay_16
	delay_16
	walk_left
	walk_left
	walk_left
	face_down
	step_end

Movement_DaemonheimGym_12:
	walk_right
	walk_right
	walk_right
	face_left
	step_end

FROGEEL_RIVAL_8::
	lock
	faceplayer
	compare VAR_FROGEEL_RIVAL, 35
	goto_if_eq FROGEEL_RIVAL_8_2
	compare VAR_FROGEEL_RIVAL, 36
	goto_if_eq FROGEEL_RIVAL_8_3
	compare VAR_FROGEEL_RIVAL, 37
	goto_if_eq FROGEEL_RIVAL_8_4
FROGEEL_RIVAL_8_1:
	release
	end

FROGEEL_RIVAL_8_2:
	namebox FROGEEL_RIVAL_8_Text_0
	msgbox FROGEEL_RIVAL_8_Text_1
	hidenamebox
	closemessage
	fadescreenswapbuffers FADE_TO_BLACK
	addobject 5
	clearflag FLAG_TEMP_1E
	removeobject 7
	setflag FLAG_TEMP_1D
	fadescreenswapbuffers FADE_FROM_BLACK
	applymovement 5, Movement_InteractFACEPLAYER
	namebox FROGEEL_RIVAL_8_Text_2
	msgbox FROGEEL_RIVAL_8_Text_3
	hidenamebox
	closemessage
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	compare VAR_TEMP_1, 8
	goto_if_eq FROGEEL_RIVAL_8_9
	compare VAR_TEMP_1, 9
	goto_if_eq FROGEEL_RIVAL_8_10
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
FROGEEL_RIVAL_8_8:
	namebox FROGEEL_RIVAL_8_Text_2
	msgbox FROGEEL_RIVAL_8_Text_4, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq FROGEEL_RIVAL_8_17
	msgbox FROGEEL_RIVAL_8_Text_6
	goto BATTLE_FROGEEL_RIVAL_8
	goto FROGEEL_RIVAL_8_1

FROGEEL_RIVAL_8_3:
	namebox FROGEEL_RIVAL_8_Text_2
	msgbox FROGEEL_RIVAL_8_Text_7, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq FROGEEL_RIVAL_8_14
	msgbox FROGEEL_RIVAL_8_Text_6
	goto BATTLE_FROGEEL_RIVAL_8
	goto FROGEEL_RIVAL_8_1

FROGEEL_RIVAL_8_4:
	namebox FROGEEL_RIVAL_8_Text_2
	msgbox FROGEEL_RIVAL_8_Text_9
	goto BATTLE_FROGEEL_RIVAL_8
	goto FROGEEL_RIVAL_8_1

FROGEEL_RIVAL_8_9:
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	goto FROGEEL_RIVAL_8_8

FROGEEL_RIVAL_8_10:
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	goto FROGEEL_RIVAL_8_8

FROGEEL_RIVAL_8_14:
	msgbox FROGEEL_RIVAL_8_Text_8
	closemessage
	hidenamebox
	setvar VAR_FROGEEL_RIVAL, 37
	release
	end

FROGEEL_RIVAL_8_17:
	msgbox FROGEEL_RIVAL_8_Text_5
	closemessage
	hidenamebox
	setvar VAR_FROGEEL_RIVAL, 36
	release
	end


BATTLE_FROGEEL_RIVAL_8::
	msgbox BATTLE_FROGEEL_RIVAL_8_Text_0
	goto_if_set FLAG_STARTER1, BATTLE_FROGEEL_RIVAL_8_2
	goto_if_set FLAG_STARTER2, BATTLE_FROGEEL_RIVAL_8_3
	goto_if_set FLAG_STARTER3, BATTLE_FROGEEL_RIVAL_8_4
BATTLE_FROGEEL_RIVAL_8_1:
	namebox FROGEEL_RIVAL_8_Text_2
	msgbox BATTLE_FROGEEL_RIVAL_8_Text_2
	closemessage
	hidenamebox
	giveitem ITEM_BLOOD_RUNE, 1
	closemessage
	namebox FROGEEL_RIVAL_8_Text_2
	msgbox BATTLE_FROGEEL_RIVAL_8_Text_3
	closemessage
	hidenamebox
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject 5
	setflag FLAG_TEMP_1E
	addobject 7
	clearflag FLAG_TEMP_1D
	fadescreenswapbuffers FADE_FROM_BLACK
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	compare VAR_TEMP_1, 8
	goto_if_eq BATTLE_FROGEEL_RIVAL_8_9
	applymovement 7, MOVEMENT_FROGEEL_RIVAL_DAEMONHEIM_1
BATTLE_FROGEEL_RIVAL_8_8:
	delay 30
	applymovement OBJ_EVENT_ID_PLAYER, Movement_InteractFACEDOWN
	waitmovement 0
	playse SE_EXIT
	removeobject 5
	setflag FLAG_TEMP_1D
	waitse
	setvar VAR_FROGEEL_RIVAL, 40
	release
	end

BATTLE_FROGEEL_RIVAL_8_2:
	trainerbattle_no_intro TRAINER_FROGEEL_RIVAL_8_GRASS, BATTLE_FROGEEL_RIVAL_8_Text_1
	goto BATTLE_FROGEEL_RIVAL_8_1

BATTLE_FROGEEL_RIVAL_8_3:
	trainerbattle_no_intro TRAINER_FROGEEL_RIVAL_8_FIRE, BATTLE_FROGEEL_RIVAL_8_Text_1
	goto BATTLE_FROGEEL_RIVAL_8_1

BATTLE_FROGEEL_RIVAL_8_4:
	trainerbattle_no_intro TRAINER_FROGEEL_RIVAL_8_WATER, BATTLE_FROGEEL_RIVAL_8_Text_1
	goto BATTLE_FROGEEL_RIVAL_8_1

BATTLE_FROGEEL_RIVAL_8_9:
	applymovement 7, MOVEMENT_FROGEEL_RIVAL_DAEMONHEIM_2
	goto BATTLE_FROGEEL_RIVAL_8_8


MOVEMENT_FROGEEL_RIVAL_DAEMONHEIM_1:
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	set_invisible
	step_end

MOVEMENT_FROGEEL_RIVAL_DAEMONHEIM_2:
	walk_down
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	set_invisible
	step_end

Mithrilman_Daemonheim::
	playbgm MUS_PS_ENCOUNTER_MITHRILMAN, 1
	lock
	faceplayer
	namebox Mithrilman_Daemonheim_Text_0
	compare VAR_MITHRILMAN_STATE, 30
	goto_if_eq Mithrilman_Daemonheim_1
	msgbox Mithrilman_Daemonheim_Text_2
	closemessage
	hidenamebox
	savebgm MUS_DUMMY
	fadedefaultbgm
	release
	end

Mithrilman_Daemonheim_1:
	msgbox Mithrilman_Daemonheim_Text_1
	hidenamebox
	closemessage
	setvar VAR_MITHRILMAN_STATE, 35
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_MITHRILMAN_QUEST, 6
	savebgm MUS_DUMMY
	fadedefaultbgm
	release
	end


DUNGEONEERING_CHECK_HOWMANYDUNGEONS_Text_0:
	.string "You have explored: {STR_VAR_1}\n"
	.string "floors.$"

DUNGEONEERING_CHECK_VAR_Text_0:
	.string "The Starting room is Room:\n"
	.string "{STR_VAR_1}.$"

DUNGEONEERING_CHECK_VAR_Text_1:
	.string "The Puzzle Room 1 is: {STR_VAR_1}.$"

DUNGEONEERING_CHECK_VAR_Text_2:
	.string "The Puzzle Room 2 is: {STR_VAR_1}.$"

DUNGEONEERING_CHECK_VAR_Text_3:
	.string "The Puzzle Room 3 is: {STR_VAR_1}.$"

DUNGEONEERING_CHECK_VAR_Text_4:
	.string "The Puzzle Room 4 is: {STR_VAR_1}.$"

DUNGEONEERING_CHECK_VAR_Text_5:
	.string "The Puzzle Room 5 is: {STR_VAR_1}.$"

DUNGEONEERING_CHECK_VAR_Text_6:
	.string "The Puzzle Room 6 is: {STR_VAR_1}.$"

DUNGEONEERING_CHECK_VAR_Text_7:
	.string "The Puzzle Room 7 is: {STR_VAR_1}.$"

DUNGEONEERING_CHECK_VAR_Text_8:
	.string "The Puzzle Room 8 is: {STR_VAR_1}.$"

THOK_GYM_CHALLENGE_STATE_3_Text_0:
	.string "Thok$"

THOK_GYM_CHALLENGE_STATE_3_Text_1:
	.string "I'll be in Dungeon!\p"
	.string "You come find me.\l"
	.string "Then we battle.$"

THOK_GYM_CHALLENGE_STATE_3_Text_2:
	.string "Smuggler$"

THOK_GYM_CHALLENGE_STATE_3_Text_3:
	.string "Sorry about Thok, he can be a little\n"
	.string "forward.\p"
	.string "Your a gym challenger correct?\p"
	.string "It's like Thok said, you must find him\n"
	.string "within the Dungeon and then he will\l"
	.string "challenge you to a battle.\p"
	.string "The part he left out was that there are\n"
	.string "many puzzles and enemies that await\l"
	.string "you.\p"
	.string "When you are ready just jump in that\n"
	.string "portal.\p"
	.string "Good luck, I'll be here if you need any\n"
	.string "advice about the dungeon.$"

FROGEEL_RIVAL_8_Text_0:
	.string "???$"

FROGEEL_RIVAL_8_Text_1:
	.string "Hello there adventurer?\p"
	.string "Angrenouille?{PAUSE 15}\l"
	.string "No, I do not know who that handsome man\l"
	.string "is.{PAUSE 15}\p"
	.string "Eh, nevermind this armour is heavy.$"

FROGEEL_RIVAL_8_Text_2:
	.string "Angrenouille$"

FROGEEL_RIVAL_8_Text_3:
	.string "I needed a disguise to sneak past\n"
	.string "those barbarians up there.\p"
	.string "Is the armour tainted?{PAUSE 15}\l"
	.string "Don't be a coward {PLAYER}.\l"
	.string "What thief believes in curses.\p"
	.string "Well, I made off with the loot and that's\n"
	.string "that.$"

FROGEEL_RIVAL_8_Text_4:
	.string "HAM?\l"
	.string "Like the thing on your sandwich?\p"
	.string "No, I dont know them.{PAUSE 15}\p"
	.string "It's that serious?$"

FROGEEL_RIVAL_8_Text_5:
	.string "Then why bring it up then?$"

FROGEEL_RIVAL_8_Text_6:
	.string "Wow!\l"
	.string "You seem really passionate about that.$"

FROGEEL_RIVAL_8_Text_7:
	.string "You again {PLAYER}?\p"
	.string "You're still going on about HAM?{PAUSE 15}\p"
	.string "Is it really that serious?$"

FROGEEL_RIVAL_8_Text_8:
	.string "Why do you keep bringing it up then?\p"
	.string "Are there ladies in this organisation\n"
	.string "that have caught your eye..?$"

FROGEEL_RIVAL_8_Text_9:
	.string "You keep going on about HAM {PLAYER}.\p"
	.string "No matter how much you downplay it, I\n"
	.string "can tell that you're very passionate\l"
	.string "about it!$"

BATTLE_FROGEEL_RIVAL_8_Text_0:
	.string "Well {PLAYER}, you and I have made it\n"
	.string "this far.\p"
	.string "Just for you, if you beat me here, I will\n"
	.string "help you.{PAUSE 15}\l"
	.string "If I remember it.\p"
	.string "Angrenouille, the future monarch of the\n"
	.string "Land of Frogs promises!$"

BATTLE_FROGEEL_RIVAL_8_Text_1:
	.string "Seeya!$"

BATTLE_FROGEEL_RIVAL_8_Text_2:
	.string "A\n"
	.string "AAA\n"
	.string "AAAAAAA\p"
	.string "AAAAAAAAAAAAAAAAA\p"
	.string "AAAAAAAAAAAAAAAAA\p"
	.string "AAAAAAAAAAAAAAAAA\p"
	.string "AAAAAAAAAAAAAAAAA\p"
	.string "AAAAAAAAAAAAAAAAA\p"
	.string "AAAAAAAAAAAAAAAAA\p"
	.string "AAAAAAAAAAAAAAAAA\p"
	.string "AAAAAAAAAAAAAAAAA\p"
	.string "AAAAAAAAAAAAAAAAA\p"
	.string "AAAAAAAAAAAAAAAAA\p"
	.string "AAAAAAAAAAAAAAAAA\p"
	.string "AAAAAAAAAAAAAAAAA\p"
	.string "AAAAAAAAAAAAAAAAA\p"
	.string "AAAAAAAAAAAAAAAAA\p"
	.string "AAAAAAAAAAAAAAAAA\p"
	.string "AAAAAAAAAAAAAAAAA\p"
	.string "AAAAAAAAAAAAAAAAA\p"
	.string "AAAAAAAAAAAAAAAAA\p"
	.string "AAAAAAAAAAAAAAAAA\p"
	.string "AAAAAAAAAAAAAAAAA\p"
	.string "AAAAAAAAAAAAAAAAA\p"
	.string "AAAAAAAAAAAAAAAAA\p"
	.string "AAAAAAAAAAAAAAAAA\p"
	.string "AAAAAAAAAAAAAAAAA\p"
	.string "AAAAAAAAAAAAAAAAA\p"
	.string "AAAAAAAAAAAAAAAAA\p"
	.string "AAAAAAAAAAAAAAAAA\p"
	.string "AAAAAAAAAAAAAAAAA\p"
	.string "AAAAAAAAAAAAAAAAA\p"
	.string "AAAAAAAAAAAAAAAAA\p"
	.string "AAAAAAAAAAAAAAAAA\p"
	.string "AAAAAAAAAAAAAAAAA\p"
	.string "AAAAAAAAAAAAAAAAA\p"
	.string "AAAAAAAAAAAAAAAAA\p"
	.string "AAAAAAAAAAAAAAAAA\p"
	.string "AAAAAAAAAAAAAAAAA\p"
	.string "AAAAAAAAAAAAAAAAA\p"
	.string "AAAAAAAAAAAAAAAAA\p"
	.string "AAAAAAAAAAAAAAAAA\p"
	.string "AAAAAAAAAAAAAAAAA\p"
	.string "AAAAAAAAAAAAAAAAA\p"
	.string "AAAAAAAAAAAAAAAAA\p"
	.string "AAAAAAAAAAAAAAAAA\p"
	.string "AAAAAAAAAAAAAAAAA\p"
	.string "AAAAAAAAAAAAAAAAA\p"
	.string "AAAAAAAAAAAAAAAAA\p"
	.string "AAAAAAAAAAAAAAAAA\p"
	.string "AAAAAAAAAAAAAAAAA\p"
	.string "AAAAAAAAAAAAAAAAA\p"
	.string "AAAAAAAAAAAAAAAAA\p"
	.string "...{PAUSE 15}\p"
	.string "{PLAYER}, you have my word.\l"
	.string "We will make it through this together.\p"
	.string "What are we?\l"
	.string "We are thick as thieves!\l"
	.string "That's what we are.\p"
	.string "Here.$"

BATTLE_FROGEEL_RIVAL_8_Text_3:
	.string "Now then…$"

Mithrilman_Daemonheim_Text_0:
	.string "Mithrilman$"

Mithrilman_Daemonheim_Text_1:
	.string "…{PAUSE 15}\p"
	.string "…{PAUSE 15}\p"
	.string "…{PAUSE 15}\p"
	.string "Thousts have decided to pay thine a\n"
	.string "visit?\l"
	.string "Kid thine not.\p"
	.string "Thousts is here to gloat isn't thoust?\p"
	.string "Leave thine be.\l"
	.string "Thine ist contemplating thinests next\l"
	.string "ordeal.$"

Mithrilman_Daemonheim_Text_2:
	.string "Mithrilmen are solitary, alone.\l"
	.string "Scolded and seen second to by Ironmen.\p"
	.string "There ist none other that could match\n"
	.string "one as thine.\p"
	.string "No-one.\p"
	.string "…{PAUSE 15}$"
