Zemouregalsbase_BF3_MapScripts::
	.byte 0


ENCOUNTER_KILLERWATT::
	lockall
	faceplayer
	namebox ENCOUNTER_KILLERWATT_Text_0
	playmoncry SPECIES_KILLERWATT, 0
	msgbox ENCOUNTER_KILLERWATT_Text_1
	waitmoncry
	hidenamebox
	closemessage
	delay 1
	setwildbattle SPECIES_KILLERWATT, 45, ITEM_NONE
	dowildbattle
	setflag FLAG_TEMP_A
	removeobject 1
	fadescreenswapbuffers FADE_FROM_BLACK
	releaseall
	return


ENCOUNTER_KILLERWATT_Text_0:
	.string "Killerwatt$"

ENCOUNTER_KILLERWATT_Text_1:
	.string "Tzzz!$"
