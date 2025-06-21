Route20_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	goto ROUTE20_STATE
	return


ROUTE20_STATE::
	setflag FLAG_TEMP_1F
	setflag FLAG_TEMP_1E
	removeobject 9
	removeobject 10
	removeobject 11
	removeobject 12
	removeobject 13
	removeobject 18
	removeobject 14
	setflag FLAG_TEMP_10
	setflag FLAG_TEMP_9
	removeobject 20
	removeobject 21
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 160
	goto_if_eq ROUTE20_STATE_2
ROUTE20_STATE_1:
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 165
	goto_if_eq ROUTE20_STATE_5
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 175
	goto_if_eq ROUTE20_STATE_5
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 180
	goto_if_eq ROUTE20_STATE_5
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 181
	goto_if_eq ROUTE20_STATE_5
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 185
	goto_if_eq ROUTE20_STATE_5
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 186
	goto_if_eq ROUTE20_STATE_5
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 187
	goto_if_eq ROUTE20_STATE_5
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 190
	goto_if_eq ROUTE20_STATE_5
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 195
	goto_if_eq ROUTE20_STATE_5
ROUTE20_STATE_4:
	switch VAR_FROGEEL_RIVAL
	case 15, ROUTE20_STATE_25
	case 16, ROUTE20_STATE_26
	case 17, ROUTE20_STATE_27
ROUTE20_STATE_23:
	return

ROUTE20_STATE_2:
	clearflag FLAG_TEMP_1F
	clearflag FLAG_TEMP_1E
	addobject 9
	addobject 10
	addobject 11
	addobject 12
	addobject 13
	addobject 18
	addobject 14
	setvar VAR_TEMP_0, 1
	goto ROUTE20_STATE_1

ROUTE20_STATE_5:
	clearflag FLAG_TEMP_1E
	addobject 11
	addobject 12
	addobject 18
	addobject 14
	setvar VAR_TEMP_0, 1
	goto ROUTE20_STATE_4

ROUTE20_STATE_25:
	addobject 20
	addobject 21
	clearflag FLAG_TEMP_10
	clearflag FLAG_TEMP_9
	goto ROUTE20_STATE_23

ROUTE20_STATE_26:
	addobject 20
	clearflag FLAG_TEMP_10
	goto ROUTE20_STATE_23

ROUTE20_STATE_27:
	addobject 20
	clearflag FLAG_TEMP_10
	goto ROUTE20_STATE_23


BATTLE_ROUTE20_TRAINER_1::
	trainerbattle_single TRAINER_ROUTE20_TRAINER_6, BATTLE_ROUTE20_TRAINER_1_Text_0, BATTLE_ROUTE20_TRAINER_1_Text_1
	namebox BATTLE_ROUTE20_TRAINER_1_Text_2
	msgbox BATTLE_ROUTE20_TRAINER_1_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE20_TRAINER_2::
	trainerbattle_single TRAINER_ROUTE20_TRAINER_5, BATTLE_ROUTE20_TRAINER_2_Text_0, BATTLE_ROUTE20_TRAINER_2_Text_1
	namebox BATTLE_ROUTE20_TRAINER_2_Text_2
	msgbox BATTLE_ROUTE20_TRAINER_2_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE20_TRAINER_3::
	trainerbattle_single TRAINER_ROUTE20_TRAINER_7, BATTLE_ROUTE20_TRAINER_3_Text_0, BATTLE_ROUTE20_TRAINER_3_Text_1
	namebox BATTLE_ROUTE20_TRAINER_3_Text_2
	msgbox BATTLE_ROUTE20_TRAINER_3_Text_3
	hidenamebox
	release
	end


BATTLE_ROUTE20_TRAINER_4::
	trainerbattle_single TRAINER_ROUTE20_TRAINER_8, BATTLE_ROUTE20_TRAINER_4_Text_0, BATTLE_ROUTE20_TRAINER_4_Text_1
	namebox BATTLE_ROUTE20_TRAINER_4_Text_2
	msgbox BATTLE_ROUTE20_TRAINER_4_Text_3
	hidenamebox
	release
	end


ROUTE20_BLOCKADE_NORTH::
	faceplayer
	namebox ROUTE20_BLOCKADE_NORTH_Text_0
	msgbox ROUTE20_BLOCKADE_NORTH_Text_1
	closemessage
	hidenamebox
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_WALK_DOWN
	waitmovement 0
	release
	end


ROUTE20_BLOCKADE_SOUTH::
	faceplayer
	namebox ROUTE20_BLOCKADE_NORTH_Text_0
	msgbox ROUTE20_BLOCKADE_SOUTH_Text_0
	closemessage
	hidenamebox
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_WALK_UP
	waitmovement 0
	release
	end


ROUTE20_VARROCK_GUARD_1::
	faceplayer
	namebox ROUTE20_VARROCK_GUARD_1_Text_0
	msgbox ROUTE20_VARROCK_GUARD_1_Text_1
	closemessage
	hidenamebox
	release
	end


ROUTE20_VARROCK_GUARD_2::
	faceplayer
	namebox ROUTE20_VARROCK_GUARD_1_Text_0
	msgbox ROUTE20_VARROCK_GUARD_2_Text_0
	closemessage
	hidenamebox
	release
	end


FROGEEL_RIVAL_4::
	compare VAR_FROGEEL_RIVAL, 15
	goto_if_eq FROGEEL_RIVAL_4_2
	compare VAR_FROGEEL_RIVAL, 16
	goto_if_eq FROGEEL_RIVAL_4_3
	compare VAR_FROGEEL_RIVAL, 17
	goto_if_eq FROGEEL_RIVAL_4_4
FROGEEL_RIVAL_4_1:
	release
	end

FROGEEL_RIVAL_4_2:
	lock
	namebox FROGEEL_RIVAL_4_Text_0
	msgbox FROGEEL_RIVAL_4_Text_1
	hidenamebox
	closemessage
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	compare VAR_TEMP_1, 11
	goto_if_eq FROGEEL_RIVAL_4_9
	compare VAR_TEMP_1, 12
	goto_if_eq FROGEEL_RIVAL_4_10
FROGEEL_RIVAL_4_8:
	removeobject 21
	setflag FLAG_TEMP_9
	namebox FROGEEL_RIVAL_4_Text_0
	msgbox FROGEEL_RIVAL_4_Text_2
	waitmovement 0
	faceplayer
	msgbox FROGEEL_RIVAL_4_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne FROGEEL_RIVAL_4_16
	namebox FROGEEL_RIVAL_4_Text_0
	msgbox FROGEEL_RIVAL_4_Text_5
	closemessage
	hidenamebox
	goto BATTLE_FROGEEL_RIVAL_4
	goto FROGEEL_RIVAL_4_1

FROGEEL_RIVAL_4_3:
	namebox FROGEEL_RIVAL_4_Text_0
	msgbox FROGEEL_RIVAL_4_Text_6, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne FROGEEL_RIVAL_4_13
	namebox FROGEEL_RIVAL_4_Text_0
	msgbox FROGEEL_RIVAL_4_Text_7
	closemessage
	hidenamebox
	goto BATTLE_FROGEEL_RIVAL_4
	goto FROGEEL_RIVAL_4_1

FROGEEL_RIVAL_4_4:
	namebox FROGEEL_RIVAL_4_Text_0
	msgbox FROGEEL_RIVAL_4_Text_8
	goto BATTLE_FROGEEL_RIVAL_4
	goto FROGEEL_RIVAL_4_1

FROGEEL_RIVAL_4_9:
	applymovement 20, MOVEMENT_FROGEEL_RIVAL_BARB_JUMP_IN_PLACE
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_EXCLAMATIONMARK
	playse SE_WALL_HIT
	applymovement 21, MOVEMENT_FROGEEL_BARB_WOMAN_EXIT_3
	goto FROGEEL_RIVAL_4_8

FROGEEL_RIVAL_4_10:
	applymovement 20, MOVEMENT_FROGEEL_RIVAL_BARB_VILLAGE_SLIDE
	playse SE_WALL_HIT
	applymovement 21, MOVEMENT_FROGEEL_BARB_WOMAN_EXIT_1
	applymovement 20, MOVEMENT_FROGEEL_RIVAL_BARB_VILLAGE_KNOCKBACK
	applymovement 21, MOVEMENT_FROGEEL_BARB_WOMAN_EXIT_2
	applymovement 20, MOVEMENT_FROGEEL_RIVAL_BARB_VILLAGE_RESET
	goto FROGEEL_RIVAL_4_8

FROGEEL_RIVAL_4_13:
	msgbox FROGEEL_RIVAL_4_Text_4
	closemessage
	hidenamebox
	setvar VAR_FROGEEL_RIVAL, 17
	release
	end

FROGEEL_RIVAL_4_16:
	msgbox FROGEEL_RIVAL_4_Text_4
	closemessage
	hidenamebox
	setvar VAR_FROGEEL_RIVAL, 16
	release
	end


BATTLE_FROGEEL_RIVAL_4::
	goto_if_set FLAG_STARTER1, BATTLE_FROGEEL_RIVAL_4_2
	goto_if_set FLAG_STARTER2, BATTLE_FROGEEL_RIVAL_4_3
	goto_if_set FLAG_STARTER3, BATTLE_FROGEEL_RIVAL_4_4
BATTLE_FROGEEL_RIVAL_4_1:
	namebox FROGEEL_RIVAL_4_Text_0
	msgbox BATTLE_FROGEEL_RIVAL_4_Text_1
	closemessage
	hidenamebox
	playse SE_FLEE
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	compare VAR_TEMP_1, 11
	goto_if_eq BATTLE_FROGEEL_RIVAL_4_9
	compare VAR_TEMP_1, 12
	goto_if_eq BATTLE_FROGEEL_RIVAL_4_10
BATTLE_FROGEEL_RIVAL_4_8:
	applymovement 20, MOVEMENT_FROGEEL_RIVAL_BARB_VILLAGE
	waitmovement 0
	delay 60
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_QUESTIONMARK
	msgbox BATTLE_FROGEEL_RIVAL_4_Text_2
	closemessage
	giveitem ITEM_SOUL_RUNE, 1
	closemessage
	removeobject 20
	setflag FLAG_TEMP_10
	setvar VAR_FROGEEL_RIVAL, 20
	release
	end

BATTLE_FROGEEL_RIVAL_4_2:
	trainerbattle_no_intro TRAINER_FROGEEL_RIVAL_4_GRASS, BATTLE_FROGEEL_RIVAL_4_Text_0
	goto BATTLE_FROGEEL_RIVAL_4_1

BATTLE_FROGEEL_RIVAL_4_3:
	trainerbattle_no_intro TRAINER_FROGEEL_RIVAL_4_FIRE, BATTLE_FROGEEL_RIVAL_4_Text_0
	goto BATTLE_FROGEEL_RIVAL_4_1

BATTLE_FROGEEL_RIVAL_4_4:
	trainerbattle_no_intro TRAINER_FROGEEL_RIVAL_4_WATER, BATTLE_FROGEEL_RIVAL_4_Text_0
	goto BATTLE_FROGEEL_RIVAL_4_1

BATTLE_FROGEEL_RIVAL_4_9:
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_FROGEEL_RIVAL_BARB_REACTION
	goto BATTLE_FROGEEL_RIVAL_4_8

BATTLE_FROGEEL_RIVAL_4_10:
	applymovement OBJ_EVENT_ID_PLAYER, Movement_InteractFACELEFT
	goto BATTLE_FROGEEL_RIVAL_4_8


MOVEMENT_FROGEEL_BARB_WOMAN_EXIT_1:
	walk_left
	step_end

MOVEMENT_FROGEEL_BARB_WOMAN_EXIT_2:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

MOVEMENT_FROGEEL_BARB_WOMAN_EXIT_3:
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

MOVEMENT_FROGEEL_RIVAL_BARB_VILLAGE_SLIDE:
	emote_exclamation_mark
	slide_left
	jump_special_left
	face_right
	step_end

MOVEMENT_FROGEEL_RIVAL_BARB_JUMP_IN_PLACE:
	emote_double_exclamation_mark
	jump_in_place_right
	face_down
	step_end

MOVEMENT_FROGEEL_RIVAL_BARB_VILLAGE_KNOCKBACK:
	walk_fast_down
	face_up
	step_end

MOVEMENT_FROGEEL_RIVAL_BARB_VILLAGE_RESET:
	walk_up
	walk_right
	step_end

MOVEMENT_FROGEEL_RIVAL_BARB_VILLAGE:
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

MOVEMENT_FROGEEL_RIVAL_BARB_REACTION:
	walk_fast_down
	face_left
	step_end

ROUTE20_BARBARIAN_WOMAN::
	lock
	msgbox ROUTE20_BARBARIAN_WOMAN_Text_0
	closemessage
	release
	end


BATTLE_ROUTE20_TRAINER_1_Text_0:
	.string "Hey, does this canoe lead to a\n"
	.string "runecrafting altar?$"

BATTLE_ROUTE20_TRAINER_1_Text_1:
	.string "It leads to Al Kharid?\p"
	.string "Fire runes it is then.$"

BATTLE_ROUTE20_TRAINER_1_Text_2:
	.string "NatsW40$"

BATTLE_ROUTE20_TRAINER_2_Text_0:
	.string "Fishing in a canoe is awesome!$"

BATTLE_ROUTE20_TRAINER_2_Text_1:
	.string "Sailing will revolutionise fishing\n"
	.string "forever dude.$"

BATTLE_ROUTE20_TRAINER_2_Text_2:
	.string "BaitNSwitch$"

BATTLE_ROUTE20_TRAINER_3_Text_0:
	.string "I summoned this canoe.$"

BATTLE_ROUTE20_TRAINER_3_Text_1:
	.string "You don't seem to be that impressed...$"

BATTLE_ROUTE20_TRAINER_3_Text_2:
	.string "Srift$"

BATTLE_ROUTE20_TRAINER_3_Text_3:
	.string "I don't know where this canoe is going.\p"
	.string "I don't know how to steer.\p"
	.string "I'm running out of food.\p"
	.string "How do I summon this canoe to shore?\p"
	.string "Please dont leave me, I am dying!$"

BATTLE_ROUTE20_TRAINER_4_Text_0:
	.string "I tried sailing up the river to see\n"
	.string "whether I'd have better odds of\l"
	.string "catching rare fish...\p"
	.string "You better not have scared them off!$"

BATTLE_ROUTE20_TRAINER_4_Text_1:
	.string "My fish!!$"

BATTLE_ROUTE20_TRAINER_4_Text_2:
	.string "D Bait Err$"

BATTLE_ROUTE20_TRAINER_4_Text_3:
	.string "Honestly, I don't think fishing here is\n"
	.string "any different to fishing on land!$"

ROUTE20_BLOCKADE_NORTH_Text_0:
	.string "Sailor$"

ROUTE20_BLOCKADE_NORTH_Text_1:
	.string "Woah sorry, I lost my contact lens in\n"
	.string "the water.\p"
	.string "Move along and I will let you pass once\n"
	.string "I find it.$"

ROUTE20_BLOCKADE_SOUTH_Text_0:
	.string "Blasted fish leapt out the water and\n"
	.string "stole me leg!\p"
	.string "I can't let you past until I've caught\n"
	.string "it...\p"
	.string "{PAUSE 15}I'm comin' for ye Peggy!$"

ROUTE20_VARROCK_GUARD_1_Text_0:
	.string "Guard$"

ROUTE20_VARROCK_GUARD_1_Text_1:
	.string "Varrock is closed off to all visitors at\n"
	.string "the moment, by decree of King Roald\l"
	.string "himself.\p"
	.string "We will re-open access once things are\n"
	.string "safe again.$"

ROUTE20_VARROCK_GUARD_2_Text_0:
	.string "We've been asked by the White Knights\n"
	.string "not to let anybody through while they\l"
	.string "investigate what's going on over in the\l"
	.string "west.$"

FROGEEL_RIVAL_4_Text_0:
	.string "Angrennouille$"

FROGEEL_RIVAL_4_Text_1:
	.string "So listen, I like loose clothes, you wear\n"
	.string "loose clothes.\n"
	.string "I think we are a good match.$"

FROGEEL_RIVAL_4_Text_2:
	.string "Ouch! It's not easy being a frog\n"
	.string "monarch in the making.$"

FROGEEL_RIVAL_4_Text_3:
	.string "Oh hi {PLAYER}.\p"
	.string "{PAUSE 15}Hey, are you following me?\p"
	.string "{PAUSE 15}Pure chance?\n"
	.string "Yeah right.\p"
	.string "Listen, I am not up to anything shady\n"
	.string "this time.\p"
	.string "I haven't stolen anything.\p"
	.string "{PAUSE 32}Yet.\p"
	.string "Listen, when I am King of The Land of\n"
	.string "the Frogs, you might regret your tone\l"
	.string "here.\n"
	.string "Don't you think?$"

FROGEEL_RIVAL_4_Text_4:
	.string "That's right.\p"
	.string "Now, make sure not to tell my future\n"
	.string "Frog Princess to be about our\l"
	.string "encounter with the barbarian lady...$"

FROGEEL_RIVAL_4_Text_5:
	.string "Well I am offended. And in need of a\n"
	.string "battle it seems.$"

FROGEEL_RIVAL_4_Text_6:
	.string "Oh, you again?\p"
	.string "I thought we had an agreement that you\n"
	.string "weren't going to do anything you might\l"
	.string "regret when I am King of the Land of\l"
	.string "Frogs.\n"
	.string "Have you changed your mind?$"

FROGEEL_RIVAL_4_Text_7:
	.string "And there I was thinking you might have\n"
	.string "a future place in my Court.\p"
	.string "Oh well, it seems like a battle is in\n"
	.string "order.$"

FROGEEL_RIVAL_4_Text_8:
	.string "I've given you more than enough\n"
	.string "chances to leave me be.\p"
	.string "Just remember, you brought this upon\n"
	.string "yourself {PLAYER}!$"

BATTLE_FROGEEL_RIVAL_4_Text_0:
	.string "Seeya!$"

BATTLE_FROGEEL_RIVAL_4_Text_1:
	.string "A\n"
	.string "AAA\n"
	.string "AAAAAAA\p"
	.string "AAAAAAAAAAAAAAAAA\p"
	.string "AAAAAAAAAAAAAAAAA\p"
	.string "AAAAAAAAAAAAAAAAA\p"
	.string "AAAAAAAAAAAAAAAAA!\p"
	.string "{PAUSE 15}Oh, you did not hear the last part?\p"
	.string "Sorry.\p"
	.string "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA!$"

BATTLE_FROGEEL_RIVAL_4_Text_2:
	.string "It seems like Angrenouille dropped\n"
	.string "something along with a bouquet of\l"
	.string "flowers.$"

ROUTE20_BARBARIAN_WOMAN_Text_0:
	.string "The woman is too distracted, and\n"
	.string "confused, by Angrenouille to notice\l"
	.string "you.$"
