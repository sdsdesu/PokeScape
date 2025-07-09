HAM_Hideout_B3F_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, HAM_Hideout_B3F_MapScripts_MAP_SCRIPT_ON_LOAD
	map_script MAP_SCRIPT_ON_TRANSITION, HAM_Hideout_B3F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_FRAME_TABLE, HAM_Hideout_B3F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

HAM_Hideout_B3F_MapScripts_MAP_SCRIPT_ON_LOAD:
	call HAMHIDEOUT_HEAL_ZONE
	return

HAM_Hideout_B3F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	call CHECK_JAILED_HAM
	return

HAM_Hideout_B3F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_TEMP_B, 1, HAM_WHITEOUT
	.2byte 0


HAMHIDEOUT_HEAL_ZONE::
	setrespawn HEAL_LOCATION_HAM_JAIL
	end


CHECK_JAILED_HAM::
	goto_if_set FLAG_HAM_JAILED, CHECK_JAILED_HAM_2
CHECK_JAILED_HAM_1:
	end

CHECK_JAILED_HAM_2:
	setobjectxy 2, 5, 6
	setobjectxyperm 2, 5, 6
	setvar VAR_TEMP_B, 1
	goto CHECK_JAILED_HAM_1


HAM_WHITEOUT::
	lock
	delay 60
	namebox HAM_WHITEOUT_Text_0
	applymovement 2, MOVEMENT_INTERACT_UP
	msgbox HAM_WHITEOUT_Text_1
	waitmovement 0
	closemessage
	hidenamebox
	applymovement 2, movement_HAM_lockup_leave
	waitmovement 0
	playse SE_M_SNORE
	namebox HAM_WHITEOUT_Text_0
	msgbox HAM_WHITEOUT_Text_2
	checkfollower
	compare VAR_RESULT, 0
	goto_if_ne HAM_WHITEOUT_2
HAM_WHITEOUT_1:
	setvar VAR_TEMP_B, 2
	clearflag FLAG_HAM_JAILED
	release
	end

HAM_WHITEOUT_2:
	facefollower
	namebox HAM_WHITEOUT_Text_3
	msgbox HAM_WHITEOUT_Text_4
	closemessage
	hidenamebox
	goto HAM_WHITEOUT_1


movement_HAM_lockup_leave:
	walk_left
	walk_left
	walk_down
	face_left
	step_end

HAM_HIDEOUT_GATE::
	compare VAR_TEMP_C, 0
	goto_if_eq HAM_HIDEOUT_GATE_2
HAM_HIDEOUT_GATE_1:
	end

HAM_HIDEOUT_GATE_2:
	lock
	msgbox HAM_HIDEOUT_GATE_Text_0
	closemessage
	checkfollower
	compare VAR_RESULT, 0
	goto_if_ne HAM_HIDEOUT_GATE_5
	playse SE_TRUCK_DOOR
	msgbox HAM_HIDEOUT_GATE_Text_3
	closemessage
HAM_HIDEOUT_GATE_4:
	setmetatile 4, 4, METATILE_PokeScape_HAM_JAILDOOR_OPEN_TOP, 0
	setmetatile 4, 5, METATILE_PokeScape_HAM_JAILDOOR_OPEN_BOTTOM, 1
	setmetatile 5, 5, METATILE_PokeScape_HAM_HAM_CAVE_FLOOR, 0
	setmetatile 5, 4, METATILE_PokeScape_HAM_HAM_CAVE_FLOOR, 0
	setmetatile 6, 5, METATILE_PokeScape_HAM_JAILDOOR_OPEN_SIDE, 1
	special DrawWholeMapView
	checkfollower
	compare VAR_RESULT, 0
	goto_if_ne HAM_HIDEOUT_GATE_9
HAM_HIDEOUT_GATE_8:
	setvar VAR_TEMP_C, 1
	release
	goto HAM_HIDEOUT_GATE_1

HAM_HIDEOUT_GATE_5:
	facefollower
	namebox HAM_WHITEOUT_Text_3
	msgbox HAM_HIDEOUT_GATE_Text_1
	closemessage
	hidenamebox
	msgbox HAM_HIDEOUT_GATE_Text_2
	closemessage
	playse SE_TRUCK_DOOR
	msgbox HAM_HIDEOUT_GATE_Text_3
	closemessage
	goto HAM_HIDEOUT_GATE_4

HAM_HIDEOUT_GATE_9:
	facefollower
	namebox HAM_WHITEOUT_Text_3
	msgbox HAM_HIDEOUT_GATE_Text_4
	closemessage
	hidenamebox
	goto HAM_HIDEOUT_GATE_8


HAMHIDEOUT_Banker::
	lock
	faceplayer
	namebox HAMHIDEOUT_Banker_Text_0
	msgbox HAMHIDEOUT_Banker_Text_1
	waitmessage
	call BANK_OPTIONS_JAIL
	namebox HAMHIDEOUT_Banker_Text_0
	msgbox HAMHIDEOUT_Banker_Text_2
	closemessage
	hidenamebox
	release
	end


HAMHIDEOUT_Guard::
	lock
	namebox HAM_WHITEOUT_Text_0
	playse SE_M_SNORE
	msgbox HAM_WHITEOUT_Text_2
	closemessage
	hidenamebox
	release
	end


HAM_WHITEOUT_Text_0:
	.string "H.A.M Guard$"

HAM_WHITEOUT_Text_1:
	.string "Stay here until we know what to do with\n"
	.string "you!$"

HAM_WHITEOUT_Text_2:
	.string "Zzz…$"

HAM_WHITEOUT_Text_3:
	.string "Zanik$"

HAM_WHITEOUT_Text_4:
	.string "This isn't good…\n"
	.string "We must find a way out.$"

HAM_HIDEOUT_GATE_Text_0:
	.string "You attempt to pick the lock{PAUSE 15}…{PAUSE 15}…{PAUSE 15}…$"

HAM_HIDEOUT_GATE_Text_1:
	.string "Step aside {PLAYER} allow me.$"

HAM_HIDEOUT_GATE_Text_2:
	.string "Zanik attempts to pick the lock{PAUSE 15}…{PAUSE 15}…{PAUSE 15}…$"

HAM_HIDEOUT_GATE_Text_3:
	.string "The door opens.$"

HAM_HIDEOUT_GATE_Text_4:
	.string "A high Thieving level comes in handy for\n"
	.string "situations like this, wouldn't you\l"
	.string "agree?\p"
	.string "Let's go!$"

HAMHIDEOUT_Banker_Text_0:
	.string "Banker$"

HAMHIDEOUT_Banker_Text_1:
	.string "First the Black Knights, now H.A.M…\p"
	.string "It seems I am destined for one thing\n"
	.string "only in life and that is to be a prisoner.\p"
	.string "They didn't say you couldn't use the\n"
	.string "bank though, so how many I help you?$"

HAMHIDEOUT_Banker_Text_2:
	.string "If you get out please tell my wife and\n"
	.string "children that I miss them…$"
