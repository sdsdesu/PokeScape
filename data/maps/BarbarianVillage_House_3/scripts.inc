BarbarianVillage_House_3_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, BarbarianVillage_House_3_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

BarbarianVillage_House_3_MapScripts_MAP_SCRIPT_ON_LOAD:
	call Barbarian_Village_VistorHall_OnTransition
	return


Barbarian_Village_VistorHall_OnTransition::
	setrespawn HEAL_LOCATION_BARBARIAN_VILLAGE
	return


NPC_BARBARIANVILLAGE_NPC7::
	lock
	faceplayer
	namebox NPC_BARBARIANVILLAGE_NPC7_Text_0
	msgbox NPC_BARBARIANVILLAGE_NPC7_Text_1
	closemessage
	hidenamebox
	fadescreenswapbuffers FADE_TO_BLACK
	msgbox NPC_BARBARIANVILLAGE_NPC7_Text_2
	closemessage
	playfanfare MUS_HEAL
	waitfanfare
	special HealPlayerParty
	fadescreenswapbuffers FADE_FROM_BLACK
	namebox NPC_BARBARIANVILLAGE_NPC7_Text_0
	msgbox NPC_BARBARIANVILLAGE_NPC7_Text_3
	closemessage
	hidenamebox
	release
	end


BARBARIAN_VILLAGE_Banker::
	faceplayer
	namebox BARBARIAN_VILLAGE_Banker_Text_0
	msgbox BARBARIAN_VILLAGE_Banker_Text_1
	waitmessage
	goto BANK_OPTIONS
	return


DWARVENMINES_Banker::
	lock
	faceplayer
	namebox BARBARIAN_VILLAGE_Banker_Text_0
	msgbox DWARVENMINES_Banker_Text_0
	waitmessage
	goto BANK_OPTIONS
	return


DWARVENMINES_Plans::
	msgbox DWARVENMINES_Plans_Text_0
	closemessage
	end


DWARVENMINES_Sign::
	msgbox DWARVENMINES_Sign_Text_0
	closemessage
	end


DWARVENMINES_OreShop::
	lock
	faceplayer
	namebox DWARVENMINES_OreShop_Text_0
	msgbox DWARVENMINES_OreShop_Text_1
	closemessage
	release
	end


NPC_BARBARIANVILLAGE_NPC7_Text_0:
	.string "Barbarian$"

NPC_BARBARIANVILLAGE_NPC7_Text_1:
	.string "You look tired, you should take a rest.$"

NPC_BARBARIANVILLAGE_NPC7_Text_2:
	.string "The barbarian throws you into a bed and\n"
	.string "you take a rest.$"

NPC_BARBARIANVILLAGE_NPC7_Text_3:
	.string "That's better, you and your MONSTERS\n"
	.string "are looking much more refreshed!$"

BARBARIAN_VILLAGE_Banker_Text_0:
	.string "Banker$"

BARBARIAN_VILLAGE_Banker_Text_1:
	.string "The barbarians refused to let the Bank\n"
	.string "of Gielinor build an official branch in\l"
	.string "their village.\p"
	.string "I'm still here to look after your items\n"
	.string "and monsters for you though.\p"
	.string "How may I help you today?$"

DWARVENMINES_Banker_Text_0:
	.string "Hmm… I wonder if we should turn this\n"
	.string "building into a bank…\p"
	.string "Oh hello there, how may I help you\n"
	.string "today?$"

DWARVENMINES_Plans_Text_0:
	.string "There are a bunch of scribbles on the\n"
	.string "board.\p"
	.string "You think you can make out the words\n"
	.string "'expansion' and 'out of scope' but\l"
	.string "everything else looks crossed out.$"

DWARVENMINES_Sign_Text_0:
	.string "Dwarven Mines.$"

DWARVENMINES_OreShop_Text_0:
	.string "Dwarf$"

DWARVENMINES_OreShop_Text_1:
	.string "Greetings!\p"
	.string "We usually sell Ores here, but we have\n"
	.string "recently run into some supply issues.\p"
	.string "Come back later.$"
