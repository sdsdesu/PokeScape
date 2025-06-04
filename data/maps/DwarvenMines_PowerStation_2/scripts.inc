DwarvenMines_PowerStation_2_MapScripts::
	.byte 0


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
	msgbox TRIGGER_SCORPIONS_DWARVEN_POWERSTATION_Text_0
	playse SE_FLEE
	msgbox TRIGGER_SCORPIONS_DWARVEN_POWERSTATION_Text_1
	return


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
