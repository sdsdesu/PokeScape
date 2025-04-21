Daemonheim_Gym_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Daemonheim_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Daemonheim_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	call Daemonheim_Gym_STATE
	return


Daemonheim_Gym_STATE::
	switch VAR_POKESCAPE_DAEMONHEIM_GYM_QUEST
	case 5, Daemonheim_Gym_STATE_3
	case 10, Daemonheim_Gym_STATE_3
Daemonheim_Gym_STATE_1:
	return

Daemonheim_Gym_STATE_3:
	setflag FLAG_TEMP_1F
	removeobject 1
	goto Daemonheim_Gym_STATE_1


DAEMONHEIM_GYM_THOK::
	switch VAR_POKESCAPE_DAEMONHEIM_GYM_QUEST
	case 0, DAEMONHEIM_GYM_THOK_2
	return

DAEMONHEIM_GYM_THOK_2:
	goto THOK_GYM_CHALLENGE_STATE_1
	return


THOK_GYM_CHALLENGE_STATE_1::
	lockall
	faceplayer
	namebox THOK_GYM_CHALLENGE_STATE_1_Text_0
	msgbox THOK_GYM_CHALLENGE_STATE_1_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq THOK_GYM_CHALLENGE_STATE_1_2
	msgbox THOK_GYM_CHALLENGE_STATE_1_Text_2
	hidenamebox
	closemessage
	setvar VAR_POKESCAPE_DAEMONHEIM_GYM_QUEST, 5
	applymovement 1, Movement_DaemonheimGym_1
	applymovement OBJ_EVENT_ID_PLAYER, Movement_DaemonheimGym_2
	waitmovement 0
	playse SE_WARP_OUT
	warp MAP_DAEMONHEIM, 2, 0, 0
	waitstate
	return

THOK_GYM_CHALLENGE_STATE_1_2:
	hidenamebox
	closemessage
	releaseall
	end


Movement_DaemonheimGym_1:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	set_invisible
	step_end

Movement_DaemonheimGym_2:
	lock_facing_direction
	walk_down
	unlock_facing_direction
	face_right
	lock_facing_direction
	walk_left
	delay_8
	unlock_facing_direction
	walk_right
	walk_down
	walk_down
	walk_down
	step_end

DAEMONHEIM_GYM_THOK_BATTLE_INTRO::
	lock
	faceplayer
	namebox THOK_GYM_CHALLENGE_STATE_1_Text_0
	goto_if_unset FLAG_BADGE06_GET, DAEMONHEIM_GYM_THOK_BATTLE_INTRO_2
	msgbox DAEMONHEIM_GYM_THOK_BATTLE_INTRO_Text_6
	hidenamebox
	release
	end

DAEMONHEIM_GYM_THOK_BATTLE_INTRO_2:
	msgbox DAEMONHEIM_GYM_THOK_BATTLE_INTRO_Text_0
	hidenamebox
	call GYM_BATTLE_THOK
	namebox THOK_GYM_CHALLENGE_STATE_1_Text_0
	msgbox DAEMONHEIM_GYM_THOK_BATTLE_INTRO_Text_1
	hidenamebox
	playfanfare MUS_PS_QUEST_COMPLETE
	msgbox DAEMONHEIM_GYM_THOK_BATTLE_INTRO_Text_2
	waitfanfare
	waitmessage
	namebox THOK_GYM_CHALLENGE_STATE_1_Text_0
	msgbox DAEMONHEIM_GYM_THOK_BATTLE_INTRO_Text_3
	hidenamebox
	giveitem ITEM_TM48, 1
	compare VAR_RESULT, FALSE
	goto_if_eq Common_EventScript_ShowBagIsFull
	playbgm MUS_PS_ALKHARID, 0
	savebgm MUS_PS_ALKHARID
	namebox DAEMONHEIM_GYM_THOK_BATTLE_INTRO_Text_4
	msgbox DAEMONHEIM_GYM_THOK_BATTLE_INTRO_Text_5
	setflag FLAG_BADGE06_GET
	call HIDDEN_GROTTO_RESET
	hidenamebox
	release
	end


HANS_DAEMONHEIM_GYM::
	lock
	faceplayer
	namebox HANS_DAEMONHEIM_GYM_Text_0
	goto_if_set FLAG_BADGE08_GET, HANS_DAEMONHEIM_GYM_2
	msgbox HANS_DAEMONHEIM_GYM_Text_2
HANS_DAEMONHEIM_GYM_1:
	hidenamebox
	closemessage
	release
	end

HANS_DAEMONHEIM_GYM_2:
	msgbox HANS_DAEMONHEIM_GYM_Text_1
	goto HANS_DAEMONHEIM_GYM_1


HANS_EDGEVILLE_GYM::
	lock
	faceplayer
	namebox HANS_DAEMONHEIM_GYM_Text_0
	goto_if_set FLAG_BADGE07_GET, HANS_EDGEVILLE_GYM_2
	msgbox HANS_EDGEVILLE_GYM_Text_1
HANS_EDGEVILLE_GYM_1:
	hidenamebox
	closemessage
	release
	end

HANS_EDGEVILLE_GYM_2:
	msgbox HANS_EDGEVILLE_GYM_Text_0
	goto HANS_EDGEVILLE_GYM_1


HANS_VARROCK_GYM::
	lock
	faceplayer
	namebox HANS_DAEMONHEIM_GYM_Text_0
	goto_if_set FLAG_BADGE06_GET, HANS_VARROCK_GYM_2
	msgbox HANS_VARROCK_GYM_Text_1
HANS_VARROCK_GYM_1:
	hidenamebox
	closemessage
	release
	end

HANS_VARROCK_GYM_2:
	msgbox HANS_VARROCK_GYM_Text_0
	goto HANS_VARROCK_GYM_1


HANS_ALKHARID_GYM::
	lock
	faceplayer
	namebox HANS_DAEMONHEIM_GYM_Text_0
	goto_if_set FLAG_BADGE04_GET, HANS_ALKHARID_GYM_2
	msgbox HANS_ALKHARID_GYM_Text_1
HANS_ALKHARID_GYM_1:
	hidenamebox
	closemessage
	release
	end

HANS_ALKHARID_GYM_2:
	msgbox HANS_ALKHARID_GYM_Text_0
	goto HANS_ALKHARID_GYM_1


HANS_BARBARIAN_GYM::
	lock
	faceplayer
	namebox HANS_DAEMONHEIM_GYM_Text_0
	goto_if_set FLAG_BADGE04_GET, HANS_BARBARIAN_GYM_2
	msgbox HANS_BARBARIAN_GYM_Text_1
HANS_BARBARIAN_GYM_1:
	hidenamebox
	closemessage
	release
	end

HANS_BARBARIAN_GYM_2:
	msgbox HANS_BARBARIAN_GYM_Text_0
	goto HANS_BARBARIAN_GYM_1


HANS_TZHAAR_GYM::
	lock
	faceplayer
	namebox HANS_DAEMONHEIM_GYM_Text_0
	goto_if_set FLAG_BADGE03_GET, HANS_TZHAAR_GYM_2
	msgbox HANS_TZHAAR_GYM_Text_1
HANS_TZHAAR_GYM_1:
	hidenamebox
	closemessage
	release
	end

HANS_TZHAAR_GYM_2:
	msgbox HANS_TZHAAR_GYM_Text_0
	goto HANS_TZHAAR_GYM_1


HANS_FALADOR_GYM::
	lock
	faceplayer
	namebox HANS_DAEMONHEIM_GYM_Text_0
	goto_if_set FLAG_BADGE02_GET, HANS_FALADOR_GYM_2
	msgbox HANS_FALADOR_GYM_Text_1
HANS_FALADOR_GYM_1:
	hidenamebox
	closemessage
	release
	end

HANS_FALADOR_GYM_2:
	msgbox HANS_FALADOR_GYM_Text_0
	goto HANS_FALADOR_GYM_1


THOK_GYM_CHALLENGE_STATE_1_Text_0:
	.string "Thok$"

THOK_GYM_CHALLENGE_STATE_1_Text_1:
	.string "This is the greatest Gym!\p"
	.string "This is the Daemonheim Gym!\p"
	.string "I am Thok.\p"
	.string "Are you here for a Gym challenge?$"

THOK_GYM_CHALLENGE_STATE_1_Text_2:
	.string "RAH HA HA!\p"
	.string "EXCELLENT!\p"
	.string "FOLLOW ME AND WE SHALL START!$"

DAEMONHEIM_GYM_THOK_BATTLE_INTRO_Text_0:
	.string "Welcome to the Daemonheim Gym.\p"
	.string "I am Thok.$"

DAEMONHEIM_GYM_THOK_BATTLE_INTRO_Text_1:
	.string "Have this Badge.$"

DAEMONHEIM_GYM_THOK_BATTLE_INTRO_Text_2:
	.string "{PLAYER} received the DAEMONHEIM\n"
	.string "BADGE from Thok.$"

DAEMONHEIM_GYM_THOK_BATTLE_INTRO_Text_3:
	.string "Also have this Scroll.$"

DAEMONHEIM_GYM_THOK_BATTLE_INTRO_Text_4:
	.string "Prince Ali$"

DAEMONHEIM_GYM_THOK_BATTLE_INTRO_Text_5:
	.string "That move is called CUPHOLDER.\p"
	.string "CUPHOLDER.$"

DAEMONHEIM_GYM_THOK_BATTLE_INTRO_Text_6:
	.string "You have defeated the Daemonheim Gym.$"

HANS_DAEMONHEIM_GYM_Text_0:
	.string "Hans$"

HANS_DAEMONHEIM_GYM_Text_1:
	.string "You did it again!\p"
	.string "That's all 8 badges!\p"
	.string "You are ready to take on the MvM\n"
	.string "championships now.\p"
	.string "I've been supporting you all this time,\n"
	.string "and I hope to see you there.$"

HANS_DAEMONHEIM_GYM_Text_2:
	.string "Even in these shadowy tombs you arrive\n"
	.string "completionist in the making.\p"
	.string "These are the halls of Daemonheim where\n"
	.string "Thok will be your opponent.\p"
	.string "Thok uses ROCK-TYPE monsters, just as\n"
	.string "solid as his head one would say.\p"
	.string "Bring your best GRASS, FIGHTING and\n"
	.string "STEEL types would be my best advice for\l"
	.string "you.\p"
	.string "I doubt you cannot defeat Thok\n"
	.string "however, he got to the bottom of this\l"
	.string "place, with hardly more than his fists.$"

HANS_EDGEVILLE_GYM_Text_0:
	.string "To no surprise you have prevailed yet\n"
	.string "again.\p"
	.string "I guess you are soon at journeys end.\p"
	.string "How did I get here all the way to\n"
	.string "edgeville you ask.\p"
	.string "Well I was going out to buy milk and\n"
	.string "somehow I just got here.\p"
	.string "Life is weird like that for me.$"

HANS_EDGEVILLE_GYM_Text_1:
	.string "Why hello there completionist in the\n"
	.string "making.\p"
	.string "Hope you havent forgotten me.\p"
	.string "It seems you are taking on Vanakka now.\p"
	.string "He probably has a task set for you to\n"
	.string "complete.\p"
	.string "Where is he?\p"
	.string "In the most fitting place for him, in the\n"
	.string "dungeon below us!\p"
	.string "Vanakka uses DARK-TYPE slayer\n"
	.string "monsters.\p"
	.string "DARK types are weak to FIGHTING, FAIRY\n"
	.string "and BUG type attacks.\p"
	.string "Do not bring your PSYCHIC monsters\n"
	.string "though, he will make a slayer task out\l"
	.string "of them.$"

HANS_VARROCK_GYM_Text_0:
	.string "You did it!\l"
	.string "You beat the king!\p"
	.string "I would join you for a celebration but\n"
	.string "apparently I have to find some rare\l"
	.string "seed for the queen.\p"
	.string "She has an awfully strong personality.$"

HANS_VARROCK_GYM_Text_1:
	.string "Well well, here you are again\n"
	.string "completionist in the making.\p"
	.string "Next up your facing King Roald the king\n"
	.string "of Mishtalin.\p"
	.string "He uses FAIRY-TYPE monsters to\n"
	.string "further his royal goals.\p"
	.string "Bring your best STEEL and POISON types\n"
	.string "to get an edge.\p"
	.string "But please do not poison royalty.$"

HANS_ALKHARID_GYM_Text_0:
	.string "Congratulations completionist in the\n"
	.string "making!\p"
	.string "Up next is getting out of this desert.\p"
	.string "Man that is a lot of sand to wade\n"
	.string "through…$"

HANS_ALKHARID_GYM_Text_1:
	.string "How are you handling the heat\n"
	.string "Completionist in the making!\p"
	.string "What? Its nothing compared to a\n"
	.string "volcano?\p"
	.string "Well if you say so.\p"
	.string "Here you will have to face Prince Ali.\p"
	.string "He uses GROUND-TYPE monsters to his\n"
	.string "advantage so stay on your guard.\p"
	.string "GROUND types are weak to WATER and\n"
	.string "GRASS types.\p"
	.string "Their moves also do not affect FLYING\n"
	.string "types.\p"
	.string "Hope you get a good battle out of this!\p"
	.string "$"

HANS_BARBARIAN_GYM_Text_0:
	.string "Good job beating Gunthor!\l"
	.string "Hope you feel great.\p"
	.string "Me?\p"
	.string "I don't feel so great, the barbarians\n"
	.string "are taking me out for drinks.\p"
	.string "For the third time today.\p"
	.string "If you don't hear from me, tell the Duke\n"
	.string "I will be late for work tomorow.$"

HANS_BARBARIAN_GYM_Text_1:
	.string "Hey there completionist in the making!\l"
	.string "At it again are you not?\p"
	.string "This is the Barbarian village challenge.\p"
	.string "You will have to face Gunthor himself to\n"
	.string "succeed.\p"
	.string "Gunthor prefers strong FIGHTING-TYPE\n"
	.string "monsters.\p"
	.string "Best bring out your best FLYING and\n"
	.string "PSYCHIC type monsters.\p"
	.string "Also if the crowd seems rowdy, remember\n"
	.string "its just a cultural difference.$"

HANS_TZHAAR_GYM_Text_0:
	.string "You did it completionist in the makings!\p"
	.string "I never had any doubt.\p"
	.string "By the way, how do I get out of this\n"
	.string "volcano?$"

HANS_TZHAAR_GYM_Text_1:
	.string "Maybe you think it's weird meeting me\n"
	.string "inside a volcano, but I think it's just\l"
	.string "as weird you're here too.\p"
	.string "The Karamja challenge, or perhaps the\n"
	.string "Tzhaar challenge, uses FIRE-TYPE\l"
	.string "monsters.\p"
	.string "FIRE types are weak to WATER, GROUND\n"
	.string "and ROCK type moves.\p"
	.string "Just imagine you're putting out a fire\n"
	.string "and you will do great.$"

HANS_FALADOR_GYM_Text_0:
	.string "I never had a doubt.\p"
	.string "Onwards to your next challenge then?$"

HANS_FALADOR_GYM_Text_1:
	.string "There you are again completionist in\n"
	.string "the making.\p"
	.string "Welcome to Falador castle.\p"
	.string "Your next challenge is to beat Sir Amik\n"
	.string "Varze.\p"
	.string "He uses WATER-TYPE monsters. WATER\n"
	.string "types are weak to GRASS and ELECTRIC\l"
	.string "type moves.\p"
	.string "Also Sir Amik sometimes gets drunk.\p"
	.string "Please don't indulge him too much.$"
