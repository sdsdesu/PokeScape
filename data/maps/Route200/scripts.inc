Route200_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route200_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route200_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 6
	call WEATHER_CHANGE_AREA_WILDERNESS
	return


BATTLE_ROUTE200_TRAINER_1::
	trainerbattle_single TRAINER_ROUTE200_TRAINER_1, BATTLE_ROUTE200_TRAINER_1_Text_0, BATTLE_ROUTE200_TRAINER_1_Text_1
	namebox BATTLE_ROUTE200_TRAINER_1_Text_2
	msgbox BATTLE_ROUTE200_TRAINER_1_Text_3
	hidenamebox
	release
	end


BATTLE_ROUTE200_TRAINER_2::
	trainerbattle_single TRAINER_ROUTE200_TRAINER_2, BATTLE_ROUTE200_TRAINER_2_Text_0, BATTLE_ROUTE200_TRAINER_2_Text_1
	namebox BATTLE_ROUTE200_TRAINER_2_Text_2
	msgbox BATTLE_ROUTE200_TRAINER_2_Text_3
	hidenamebox
	release
	end


BATTLE_ROUTE200_TRAINER_3::
	trainerbattle_single TRAINER_ROUTE200_TRAINER_3, BATTLE_ROUTE200_TRAINER_3_Text_0, BATTLE_ROUTE200_TRAINER_3_Text_1
	namebox BATTLE_ROUTE200_TRAINER_3_Text_2
	msgbox BATTLE_ROUTE200_TRAINER_3_Text_3
	hidenamebox
	release
	end


BATTLE_ROUTE200_TRAINER_1_Text_0:
	.string "What a weird place to run into someone\n"
	.string "trying to take my spawn.\p"
	.string "Punishment time!$"

BATTLE_ROUTE200_TRAINER_1_Text_1:
	.string "Rats...$"

BATTLE_ROUTE200_TRAINER_1_Text_2:
	.string "RatGrinder$"

BATTLE_ROUTE200_TRAINER_1_Text_3:
	.string "Oh, you are not here to take my spawn?\p"
	.string "Well get away from here, I'm\n"
	.string "moneymaking!$"

BATTLE_ROUTE200_TRAINER_2_Text_0:
	.string "Hey, what do you reckon the outcome of\n"
	.string "this battle between you and I will be\l"
	.string "best described as?$"

BATTLE_ROUTE200_TRAINER_2_Text_1:
	.string "An utter defeat?$"

BATTLE_ROUTE200_TRAINER_2_Text_2:
	.string "G4le$"

BATTLE_ROUTE200_TRAINER_2_Text_3:
	.string "An utter defeat? Couldn't have phrased\n"
	.string "it more repulsively myself...$"

BATTLE_ROUTE200_TRAINER_3_Text_0:
	.string "Looks like a little fly just ran into my\n"
	.string "web!$"

BATTLE_ROUTE200_TRAINER_3_Text_1:
	.string "...$"

BATTLE_ROUTE200_TRAINER_3_Text_2:
	.string "Izikills$"

BATTLE_ROUTE200_TRAINER_3_Text_3:
	.string "We won't speak of this.\n"
	.string "EVER!$"
