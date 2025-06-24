VarrockNorth_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, VarrockNorth_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

VarrockNorth_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 16
	call VARROCK_NORTH_STATE
	return


VARROCK_NORTH_STATE::
	removeobject 28
	setflag FLAG_TEMP_10
	compare VAR_FROGEEL_RIVAL, 30
	goto_if_eq VARROCK_NORTH_STATE_2
VARROCK_NORTH_STATE_1:
	return

VARROCK_NORTH_STATE_2:
	addobject 28
	clearflag FLAG_TEMP_10
	goto VARROCK_NORTH_STATE_1


FROGEEL_RIVAL_7::
	lock
	faceplayer
	namebox FROGEEL_RIVAL_7_Text_0
	msgbox FROGEEL_RIVAL_7_Text_1
	goto_if_set FLAG_STARTER1, FROGEEL_RIVAL_7_2
	goto_if_set FLAG_STARTER2, FROGEEL_RIVAL_7_3
	goto_if_set FLAG_STARTER3, FROGEEL_RIVAL_7_4
FROGEEL_RIVAL_7_1:
	namebox FROGEEL_RIVAL_7_Text_0
	msgbox FROGEEL_RIVAL_7_Text_3
	closemessage
	hidenamebox
	playse SE_FLEE
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	compare VAR_TEMP_1, 12
	goto_if_eq FROGEEL_RIVAL_7_9
	compare VAR_TEMP_1, 13
	goto_if_eq FROGEEL_RIVAL_7_10
FROGEEL_RIVAL_7_8:
	applymovement 28, MOVEMENT_FROGEEL_RIVAL_VARROCK_1
	waitmovement 0
	delay 30
	applymovement 28, MOVEMENT_FROGEEL_RIVAL_VARROCK_2
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_QUESTIONMARK
	msgbox FROGEEL_RIVAL_7_Text_4
	waitmovement 0
	closemessage
	giveitem ITEM_ASTRAL_RUNE, 1
	closemessage
	removeobject 28
	setflag FLAG_TEMP_10
	setvar VAR_FROGEEL_RIVAL, 35
	release
	end

FROGEEL_RIVAL_7_2:
	trainerbattle_no_intro TRAINER_FROGEEL_RIVAL_7_GRASS, FROGEEL_RIVAL_7_Text_2
	goto FROGEEL_RIVAL_7_1

FROGEEL_RIVAL_7_3:
	trainerbattle_no_intro TRAINER_FROGEEL_RIVAL_7_FIRE, FROGEEL_RIVAL_7_Text_2
	goto FROGEEL_RIVAL_7_1

FROGEEL_RIVAL_7_4:
	trainerbattle_no_intro TRAINER_FROGEEL_RIVAL_7_WATER, FROGEEL_RIVAL_7_Text_2
	goto FROGEEL_RIVAL_7_1

FROGEEL_RIVAL_7_9:
	applymovement OBJ_EVENT_ID_PLAYER, Movement_InteractFACEDOWN
	waitmovement 21
	goto FROGEEL_RIVAL_7_8

FROGEEL_RIVAL_7_10:
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_FROGEEL_RIVAL_VARROCK_PLAYER_PUSHED_BACK
	goto FROGEEL_RIVAL_7_8


MOVEMENT_FROGEEL_RIVAL_VARROCK_1:
	walk_fast_down
	walk_fast_left
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

MOVEMENT_FROGEEL_RIVAL_VARROCK_2:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

MOVEMENT_FROGEEL_RIVAL_VARROCK_PLAYER_PUSHED_BACK:
	walk_fast_down
	face_left
	step_end

FROGEEL_RIVAL_7_Text_0:
	.string "Angrenouille$"

FROGEEL_RIVAL_7_Text_1:
	.string "Oh, you are sneaking in the gardens\n"
	.string "aswell {PLAYER}?\p"
	.string "Well, dont worry.\l"
	.string "I went here looking for treasure.\l"
	.string "Then I found a garden full of flowers.\p"
	.string "But the most beautiful flower was not a\n"
	.string "flower at all.\l"
	.string "It was the Queen.\p"
	.string "Aaah{PAUSE 15}\p"
	.string "…{PAUSE 15}But I guess there is a Frog Princess\n"
	.string "waiting for a handsome fellow like me in\l"
	.string "The Land of Frogs.\l"
	.string "So I can not commit to the Queen.\l"
	.string "Right now.{PAUSE 15}\p"
	.string "…{PAUSE 15}\p"
	.string "No.\l"
	.string "You do not have to call the guards on\l"
	.string "me.\l"
	.string "No, I am not trespassing.\p"
	.string "Anyway, let's battle and forget your\n"
	.string "accusations.$"

FROGEEL_RIVAL_7_Text_2:
	.string "Seeya!$"

FROGEEL_RIVAL_7_Text_3:
	.string "A\n"
	.string "AAA\n"
	.string "AAAAAAA\p"
	.string "AAAAAAAAAAAAAAAAA\p"
	.string "AAAAAAAAAAAAAAAAA\p"
	.string "AAAAAAAAAAAAAAAAA\p"
	.string "AAAAAAAAAAAAAAAAA!$"

FROGEEL_RIVAL_7_Text_4:
	.string "Among some flowers you find something.\l"
	.string "Angrenouille must have dropped it.$"
