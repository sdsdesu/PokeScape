DwarvenMines_PowerStation_1_MapScripts::
	.byte 0


NPC_DwarvenMines_PowerStationF1_1::
	lock
	faceplayer
	namebox NPC_DwarvenMines_PowerStationF1_1_Text_0
	msgbox NPC_DwarvenMines_PowerStationF1_1_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_DwarvenMines_PowerStationF1_Inventor::
	lock
	faceplayer
	namebox NPC_DwarvenMines_PowerStationF1_Inventor_Text_0
	msgbox NPC_DwarvenMines_PowerStationF1_Inventor_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_DwarvenMines_PowerStationF1_2::
	lock
	faceplayer
	namebox NPC_DwarvenMines_PowerStationF1_2_Text_0
	msgbox NPC_DwarvenMines_PowerStationF1_2_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_DwarvenMines_PowerStationF1_3::
	lock
	faceplayer
	namebox NPC_DwarvenMines_PowerStationF1_1_Text_0
	msgbox NPC_DwarvenMines_PowerStationF1_3_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_DwarvenMines_PowerStationF1_4::
	lock
	faceplayer
	namebox NPC_DwarvenMines_PowerStationF1_4_Text_0
	msgbox NPC_DwarvenMines_PowerStationF1_4_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_DwarvenMines_PowerStationF1_5::
	lock
	faceplayer
	namebox NPC_DwarvenMines_PowerStationF1_1_Text_0
	msgbox NPC_DwarvenMines_PowerStationF1_5_Text_0
	waitmessage
	hidenamebox
	release
	end


BATTLE_DWARVENMINES_POWERSTATION_F1_1::
	trainerbattle_single TRAINER_DWARF_POWERSTATION_F1_1, BATTLE_DWARVENMINES_POWERSTATION_F1_1_Text_0, BATTLE_DWARVENMINES_POWERSTATION_F1_1_Text_1
	namebox BATTLE_DWARVENMINES_POWERSTATION_F1_1_Text_2
	msgbox BATTLE_DWARVENMINES_POWERSTATION_F1_1_Text_3
	hidenamebox
	release
	end


BATTLE_DWARVENMINES_POWERSTATION_F1_2::
	trainerbattle_single TRAINER_DWARF_POWERSTATION_F1_2, BATTLE_DWARVENMINES_POWERSTATION_F1_2_Text_0, BATTLE_DWARVENMINES_POWERSTATION_F1_2_Text_1
	namebox BATTLE_DWARVENMINES_POWERSTATION_F1_2_Text_2
	msgbox BATTLE_DWARVENMINES_POWERSTATION_F1_2_Text_3
	hidenamebox
	release
	end


BATTLE_DWARVENMINES_POWERSTATION_F1_3::
	trainerbattle_single TRAINER_DWARF_POWERSTATION_F1_3, BATTLE_DWARVENMINES_POWERSTATION_F1_3_Text_0, BATTLE_DWARVENMINES_POWERSTATION_F1_3_Text_1
	namebox BATTLE_DWARVENMINES_POWERSTATION_F1_3_Text_2
	msgbox BATTLE_DWARVENMINES_POWERSTATION_F1_3_Text_1
	hidenamebox
	release
	end


NPC_DwarvenMines_PowerStationF1_1_Text_0:
	.string "Dwarf$"

NPC_DwarvenMines_PowerStationF1_1_Text_1:
	.string "Sorry human, beyond these doors are\n"
	.string "machinery that are for dwarven eyes\l"
	.string "only.\p"
	.string "I can't let you past.$"

NPC_DwarvenMines_PowerStationF1_Inventor_Text_0:
	.string "Inventor$"

NPC_DwarvenMines_PowerStationF1_Inventor_Text_1:
	.string "Through here leads to the Invention\n"
	.string "Guild.\p"
	.string "But it's for VIP members only, so no\n"
	.string "entry for you!$"

NPC_DwarvenMines_PowerStationF1_2_Text_0:
	.string "Smith$"

NPC_DwarvenMines_PowerStationF1_2_Text_1:
	.string "Strykewyrms adapt to their\n"
	.string "environments even during a battle!\p"
	.string "If the terrain changes they too will\n"
	.string "change!\p"
	.string "Such interesting creatures.$"

NPC_DwarvenMines_PowerStationF1_3_Text_0:
	.string "My parents would never let me have\n"
	.string "monsters and compete in the MvM\l"
	.string "Championships…\p"
	.string "So I got a job down here working with\n"
	.string "the baby dragons.\p"
	.string "That way I still get to have monsters\n"
	.string "of my own to look after!$"

NPC_DwarvenMines_PowerStationF1_4_Text_0:
	.string "PyredOfThis$"

NPC_DwarvenMines_PowerStationF1_4_Text_1:
	.string "I came down here to get some\n"
	.string "experience in lighting forges, but\l"
	.string "these dwarves are using dragon's\l"
	.string "breath instead of logs and a tinderbox!\p"
	.string "That's cheating!$"

NPC_DwarvenMines_PowerStationF1_5_Text_0:
	.string "Welcome to the Dwarven Mines Power\n"
	.string "Station.\p"
	.string "Our dragon powered forges provide\n"
	.string "power to neighbouring towns and\l"
	.string "settlements for miles around.$"

BATTLE_DWARVENMINES_POWERSTATION_F1_1_Text_0:
	.string "To smelt iron you need to increase the\n"
	.string "forge's temperature to a high degree!\p"
	.string "Watch this!$"

BATTLE_DWARVENMINES_POWERSTATION_F1_1_Text_1:
	.string "I guess I turned it too high and got\n"
	.string "burned…$"

BATTLE_DWARVENMINES_POWERSTATION_F1_1_Text_2:
	.string "Ozai$"

BATTLE_DWARVENMINES_POWERSTATION_F1_1_Text_3:
	.string "Fahrenheit? Celsius?\p"
	.string "What is that supposed to mean?$"

BATTLE_DWARVENMINES_POWERSTATION_F1_2_Text_0:
	.string "One day I will get to mine runite.\p"
	.string "I will chop through them like I will do to\n"
	.string "you now.$"

BATTLE_DWARVENMINES_POWERSTATION_F1_2_Text_1:
	.string "I barely made a dent!$"

BATTLE_DWARVENMINES_POWERSTATION_F1_2_Text_2:
	.string "Crypt Oes$"

BATTLE_DWARVENMINES_POWERSTATION_F1_2_Text_3:
	.string "Mining and smithing rework makes it\n"
	.string "easier? Well, maybe that just\l"
	.string "undermines the achievement.\p"
	.string "Ever thought of that?$"

BATTLE_DWARVENMINES_POWERSTATION_F1_3_Text_0:
	.string "We dig dig dig, and we dig dig dig and\n"
	.string "digging more we gooooo!$"

BATTLE_DWARVENMINES_POWERSTATION_F1_3_Text_1:
	.string "I sing sing sing, and dig dig dig, until\n"
	.string "the forge goes ooooooh!$"

BATTLE_DWARVENMINES_POWERSTATION_F1_3_Text_2:
	.string "Per$"
