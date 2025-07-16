DwarvenMines_PowerStation_2_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, DwarvenMines_PowerStation_2_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

DwarvenMines_PowerStation_2_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	call DwarvenMines_PowerStation_2_STATE
	return


DwarvenMines_PowerStation_2_STATE::
	compare VAR_DWARVEN_MINES_STATE, 10
	goto_if_eq DwarvenMines_PowerStation_2_STATE_2
	removeobject 24
	removeobject 25
	removeobject 14
	removeobject 15
	removeobject 13
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	setflag FLAG_TEMP_3
	setflag FLAG_TEMP_5
DwarvenMines_PowerStation_2_STATE_1:
	return

DwarvenMines_PowerStation_2_STATE_2:
	setvar VAR_TEMP_0, 1
	goto DwarvenMines_PowerStation_2_STATE_1


NPC_DwarvenMines_PowerStationF2_1::
	lock
	faceplayer
	namebox NPC_DwarvenMines_PowerStationF2_1_Text_0
	msgbox NPC_DwarvenMines_PowerStationF2_1_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_DwarvenMines_PowerStationF2_2::
	lock
	faceplayer
	namebox NPC_DwarvenMines_PowerStationF2_2_Text_0
	msgbox NPC_DwarvenMines_PowerStationF2_2_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_DwarvenMines_PowerStationF2_3::
	lock
	faceplayer
	namebox NPC_DwarvenMines_PowerStationF2_1_Text_0
	msgbox NPC_DwarvenMines_PowerStationF2_3_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_DwarvenMines_PowerStationF2_4::
	lock
	faceplayer
	namebox NPC_DwarvenMines_PowerStationF2_4_Text_0
	trainerbattle_single TRAINER_DWARF_POWERSTATION_F2_4, NPC_DwarvenMines_PowerStationF2_4_Text_1, NPC_DwarvenMines_PowerStationF2_4_Text_2
	msgbox NPC_DwarvenMines_PowerStationF2_4_Text_3
	waitmessage
	hidenamebox
	release
	end


BATTLE_DWARVENMINES_POWERSTATION_F2_1::
	trainerbattle_single TRAINER_DWARF_POWERSTATION_F2_1, BATTLE_DWARVENMINES_POWERSTATION_F2_1_Text_0, BATTLE_DWARVENMINES_POWERSTATION_F2_1_Text_1
	namebox BATTLE_DWARVENMINES_POWERSTATION_F2_1_Text_2
	msgbox BATTLE_DWARVENMINES_POWERSTATION_F2_1_Text_3
	hidenamebox
	release
	end


BATTLE_DWARVENMINES_POWERSTATION_F2_2::
	trainerbattle_single TRAINER_DWARF_POWERSTATION_F2_2, BATTLE_DWARVENMINES_POWERSTATION_F2_2_Text_0, BATTLE_DWARVENMINES_POWERSTATION_F2_2_Text_1
	namebox BATTLE_DWARVENMINES_POWERSTATION_F2_2_Text_2
	msgbox BATTLE_DWARVENMINES_POWERSTATION_F2_2_Text_3
	hidenamebox
	release
	end


BATTLE_DWARVENMINES_POWERSTATION_F2_3::
	trainerbattle_single TRAINER_DWARF_POWERSTATION_F2_3, BATTLE_DWARVENMINES_POWERSTATION_F2_3_Text_0, BATTLE_DWARVENMINES_POWERSTATION_F2_3_Text_1
	namebox BATTLE_DWARVENMINES_POWERSTATION_F2_3_Text_2
	msgbox BATTLE_DWARVENMINES_POWERSTATION_F2_3_Text_3
	hidenamebox
	release
	end


TRIGGER_SCORPIONS_DWARVEN_POWERSTATION::
	lock
	applymovement 24, movement_scropion_1
	applymovement 25, movement_scropion_2
	waitmovement 0
	msgbox TRIGGER_SCORPIONS_DWARVEN_POWERSTATION_Text_0
	closemessage
	setwildbattle SPECIES_SCORPION_KING_FORM, 45, ITEM_NONE, SPECIES_SCORPION_GRAVE_FORM, 45, ITEM_NONE
	dowildbattle
	playse SE_FLEE
	removeobject 24
	removeobject 25
	setflag FLAG_TEMP_5
	delay 60
	playmoncry SPECIES_SCORPION_SPIRIT_FORM, 1
	waitmoncry
	applymovement 14, movement_scropion_3
	waitmovement 0
	msgbox TRIGGER_SCORPIONS_DWARVEN_POWERSTATION_Text_1
	closemessage
	setwildbattle SPECIES_SCORPION_SPIRIT_FORM, 50, ITEM_NONE
	dowildbattle
	removeobject 14
	setflag FLAG_TEMP_1
	setvar VAR_DWARVEN_MINES_STATE, 15
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POWERPLANT_SCORPIONS, 2
	setvar VAR_TEMP_0, 0
	removeobject 24
	removeobject 25
	removeobject 14
	removeobject 15
	removeobject 13
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	setflag FLAG_TEMP_3
	setflag FLAG_TEMP_5
	msgbox TRIGGER_SCORPIONS_DWARVEN_POWERSTATION_Text_2
	closemessage
	release
	end


movement_scropion_1:
	walk_down
	walk_right
	step_end

movement_scropion_2:
	walk_down
	walk_left
	step_end

movement_scropion_3:
	walk_slow_down
	step_end

NPC_DwarvenMines_PowerStationF2_1_Text_0:
	.string "Dwarf$"

NPC_DwarvenMines_PowerStationF2_1_Text_1:
	.string "We don't get many humans this far down.\p"
	.string "The only ones who do visit just steal\n"
	.string "our ores and then vanish into thin air!$"

NPC_DwarvenMines_PowerStationF2_2_Text_0:
	.string "ALL M1N3$"

NPC_DwarvenMines_PowerStationF2_2_Text_1:
	.string "Do you see this runite rock?\p"
	.string "It is mine.\p"
	.string "Do not even think about trying to take\n"
	.string "this ore for yourself, you cannot\l"
	.string "possibly compete with my dragon\l"
	.string "pickaxe!$"

NPC_DwarvenMines_PowerStationF2_3_Text_0:
	.string "The fire giants over there aren't very\n"
	.string "friendly.\p"
	.string "I am too scared to try and squeeze past\n"
	.string "them and leave.\p"
	.string "I've been stuck here for hours now...$"

NPC_DwarvenMines_PowerStationF2_4_Text_0:
	.string "Paracelsus$"

NPC_DwarvenMines_PowerStationF2_4_Text_1:
	.string "The energy flowing through this place\n"
	.string "is red hot!$"

NPC_DwarvenMines_PowerStationF2_4_Text_2:
	.string "You drained some of my charges…$"

NPC_DwarvenMines_PowerStationF2_4_Text_3:
	.string "I assist the inventors upstairs by\n"
	.string "providing them with divine energy that\l"
	.string "I harvest from the anima.$"

BATTLE_DWARVENMINES_POWERSTATION_F2_1_Text_0:
	.string "SHHIIIZZZLLE…$"

BATTLE_DWARVENMINES_POWERSTATION_F2_1_Text_1:
	.string "FIIIZZLE…$"

BATTLE_DWARVENMINES_POWERSTATION_F2_1_Text_2:
	.string "Jetag$"

BATTLE_DWARVENMINES_POWERSTATION_F2_1_Text_3:
	.string "SHIIZZLE… FIZZZLE…$"

BATTLE_DWARVENMINES_POWERSTATION_F2_2_Text_0:
	.string "KEH… HEH… BURN…$"

BATTLE_DWARVENMINES_POWERSTATION_F2_2_Text_1:
	.string "KHEEEHHH…$"

BATTLE_DWARVENMINES_POWERSTATION_F2_2_Text_2:
	.string "Magrym$"

BATTLE_DWARVENMINES_POWERSTATION_F2_2_Text_3:
	.string "KHEEEHHH… FLAMES…$"

BATTLE_DWARVENMINES_POWERSTATION_F2_3_Text_0:
	.string "Think you are ready to take on an\n"
	.string "ironman of my calibre?$"

BATTLE_DWARVENMINES_POWERSTATION_F2_3_Text_1:
	.string "Oh, perhaps you were...$"

BATTLE_DWARVENMINES_POWERSTATION_F2_3_Text_2:
	.string "ToniStank$"

BATTLE_DWARVENMINES_POWERSTATION_F2_3_Text_3:
	.string "By restricting myself from feeling sad\n"
	.string "I can never be hurt and I get more\l"
	.string "enjoyment out of this game!\p"
	.string "Restrictions are the bread and butter\n"
	.string "of ironmen after all.$"

TRIGGER_SCORPIONS_DWARVEN_POWERSTATION_Text_0:
	.string "As you approach the scorpions attack!$"

TRIGGER_SCORPIONS_DWARVEN_POWERSTATION_Text_1:
	.string "The Scorpion appears to be angered and\n"
	.string "attacks!$"

TRIGGER_SCORPIONS_DWARVEN_POWERSTATION_Text_2:
	.string "The Scorpions seem to have calmed down\n"
	.string "and returned to the mines.\p"
	.string "Maybe you sure return to Nulodion.$"
