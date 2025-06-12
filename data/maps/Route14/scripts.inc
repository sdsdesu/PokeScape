Route14_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route14_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route14_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 16
	return


NPC_CHICKEN_2::
	lock
	faceplayer
	namebox NPC_CHICKEN_2_Text_0
	playmoncry SPECIES_CHICKEN_NORMAL_FORM, 0
	msgbox NPC_CHICKEN_2_Text_1
	waitmoncry
	hidenamebox
	release
	end


BATTLE_ROUTE14_TRAINER_3::
	trainerbattle_single TRAINER_ROUTE14_TRAINER_3, BATTLE_ROUTE14_TRAINER_3_Text_0, BATTLE_ROUTE14_TRAINER_3_Text_1
	namebox BATTLE_ROUTE14_TRAINER_3_Text_2
	msgbox BATTLE_ROUTE14_TRAINER_3_Text_3
	hidenamebox
	release
	end


NPC_ROUTE14::
	lock
	faceplayer
	namebox NPC_ROUTE14_Text_0
	msgbox NPC_ROUTE14_Text_1
	hidenamebox
	release
	end


NPC_CHICKEN_2_Text_0:
	.string "Chicken$"

NPC_CHICKEN_2_Text_1:
	.string "Bwwaak!$"

BATTLE_ROUTE14_TRAINER_3_Text_0:
	.string "You best be careful, these fish bite!$"

BATTLE_ROUTE14_TRAINER_3_Text_1:
	.string "Clearly they don't bite hard enough...$"

BATTLE_ROUTE14_TRAINER_3_Text_2:
	.string "Efisherate$"

BATTLE_ROUTE14_TRAINER_3_Text_3:
	.string "Fish just aren't quite the aggressive\n"
	.string "powerhouses my team needs.\p"
	.string "Maybe I should consider a career\n"
	.string "change.$"

NPC_ROUTE14_Text_0:
	.string "IonChamp$"

NPC_ROUTE14_Text_1:
	.string "Look, I know nobody will ever believe me\n"
	.string "but I SWEAR the chicken up there used\l"
	.string "to be evil!!$"
