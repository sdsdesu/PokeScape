Lumbridge_Swamp_Caves_Juna_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Lumbridge_Swamp_Caves_Juna_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_LOAD, Lumbridge_Swamp_Caves_Juna_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Lumbridge_Swamp_Caves_Juna_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 43
	return

Lumbridge_Swamp_Caves_Juna_MapScripts_MAP_SCRIPT_ON_LOAD:
	setflag FLAG_TEMP_B
	setflag FLAG_TEMP_C
	setflag FLAG_TEMP_F
	call JUNA_POOL_STATE
	return


JUNA_POOL_DIRTY::
	goto_if_unset FLAG_TEMP_10, JUNA_POOL_DIRTY_2
JUNA_POOL_DIRTY_1:
	goto_if_set FLAG_TEMP_10, JUNA_POOL_DIRTY_5
JUNA_POOL_DIRTY_4:
	return

JUNA_POOL_DIRTY_2:
	setmetatile 29, 11, 556, 0
	setmetatile 30, 11, 556, 0
	setmetatile 29, 12, 556, 0
	setmetatile 30, 12, 556, 0
	setmetatile 29, 13, 556, 0
	setmetatile 30, 13, 556, 0
	setmetatile 29, 14, 556, 0
	setmetatile 30, 14, 556, 0
	setmetatile 28, 13, 556, 0
	setmetatile 28, 14, 556, 0
	special DrawWholeMapView
	goto JUNA_POOL_DIRTY_1

JUNA_POOL_DIRTY_5:
	setmetatile 37, 11, METATILE_PokeScapeCaves_Extra_1_blue_tears_puddle_L, 0
	setmetatile 38, 11, METATILE_PokeScapeCaves_Extra_1_blue_tears_puddle_M, 0
	setmetatile 39, 11, METATILE_PokeScapeCaves_Extra_1_blue_tears_puddle_M, 0
	setmetatile 40, 11, METATILE_PokeScapeCaves_Extra_1_blue_tears_puddle_M, 0
	setmetatile 41, 11, METATILE_PokeScapeCaves_Extra_1_blue_tears_puddle_M, 0
	setmetatile 42, 11, METATILE_PokeScapeCaves_Extra_1_blue_tears_puddle_M, 0
	setmetatile 43, 11, METATILE_PokeScapeCaves_Extra_1_blue_tears_puddle_M, 0
	setmetatile 44, 11, METATILE_PokeScapeCaves_Extra_1_blue_tears_puddle_R, 0
	setmetatile 36, 12, METATILE_PokeScapeCaves_darkcave_pond_top_L, 0
	setmetatile 35, 14, METATILE_PokeScapeCaves_darkcave_pond_top_L, 0
	setmetatile 43, 12, METATILE_PokeScapeCaves_darkcave_pond_top_L, 0
	setmetatile 42, 13, METATILE_PokeScapeCaves_darkcave_pond_top_L, 0
	setmetatile 40, 17, METATILE_PokeScapeCaves_darkcave_pond_top_L, 0
	setmetatile 39, 18, METATILE_PokeScapeCaves_darkcave_pond_top_L, 0
	setmetatile 37, 19, METATILE_PokeScapeCaves_darkcave_pond_top_L, 0
	setmetatile 37, 12, METATILE_PokeScapeCaves_darkcave_pond_top_R, 0
	setmetatile 44, 12, METATILE_PokeScapeCaves_darkcave_pond_top_R, 0
	setmetatile 43, 17, METATILE_PokeScapeCaves_darkcave_pond_top_R, 0
	setmetatile 41, 17, METATILE_PokeScapeCaves_darkcave_pond_top_M, 0
	setmetatile 42, 17, METATILE_PokeScapeCaves_darkcave_pond_top_M, 0
	setmetatile 38, 19, METATILE_PokeScapeCaves_darkcave_pond_top_M, 0
	setmetatile 36, 13, METATILE_PokeScapeCaves_darkcave_pond_middle_L, 0
	setmetatile 35, 15, METATILE_PokeScapeCaves_darkcave_pond_middle_L, 0
	setmetatile 42, 14, METATILE_PokeScapeCaves_darkcave_pond_middle_L, 0
	setmetatile 38, 20, METATILE_PokeScapeCaves_darkcave_pond_middle_L, 0
	setmetatile 37, 13, METATILE_PokeScapeCaves_darkcave_pond_middle_R, 0
	setmetatile 37, 14, METATILE_PokeScapeCaves_darkcave_pond_middle_R, 0
	setmetatile 37, 15, METATILE_PokeScapeCaves_darkcave_pond_middle_R, 0
	setmetatile 44, 13, METATILE_PokeScapeCaves_darkcave_pond_middle_R, 0
	setmetatile 44, 14, METATILE_PokeScapeCaves_darkcave_pond_middle_R, 0
	setmetatile 44, 15, METATILE_PokeScapeCaves_darkcave_pond_middle_R, 0
	setmetatile 43, 15, METATILE_PokeScapeCaves_darkcave_pond_middle_L, 0
	setmetatile 43, 18, METATILE_PokeScapeCaves_darkcave_pond_middle_R, 0
	setmetatile 42, 19, METATILE_PokeScapeCaves_darkcave_pond_middle_R, 0
	setmetatile 41, 20, METATILE_PokeScapeCaves_darkcave_pond_middle_R, 0
	setmetatile 41, 18, METATILE_PokeScapeCaves_darkcave_pond_middle_M, 0
	setmetatile 41, 19, METATILE_PokeScapeCaves_darkcave_pond_middle_M, 0
	setmetatile 40, 20, METATILE_PokeScapeCaves_darkcave_pond_middle_M, 0
	setmetatile 39, 20, METATILE_PokeScapeCaves_darkcave_pond_middle_M, 0
	setmetatile 39, 19, METATILE_PokeScapeCaves_darkcave_pond_corner_L, 0
	setmetatile 40, 18, METATILE_PokeScapeCaves_darkcave_pond_corner_L, 0
	setmetatile 36, 14, METATILE_PokeScapeCaves_darkcave_pond_corner_L, 0
	setmetatile 43, 13, METATILE_PokeScapeCaves_darkcave_pond_corner_L, 0
	setmetatile 36, 15, METATILE_PokeScapeCaves_darkcave_pond_sparkle, 0
	setmetatile 43, 14, METATILE_PokeScapeCaves_darkcave_pond_sparkle, 0
	setmetatile 42, 18, METATILE_PokeScapeCaves_darkcave_pond_sparkle, 0
	setmetatile 40, 19, METATILE_PokeScapeCaves_darkcave_pond_sparkle, 0
	special DrawWholeMapView
	goto JUNA_POOL_DIRTY_4


JUNA_POOL_ALL_FLAGS::
	goto_if_set FLAG_TEMP_A, JUNA_POOL_ALL_FLAGS_2
JUNA_POOL_ALL_FLAGS_1:
	return

JUNA_POOL_ALL_FLAGS_2:
	goto_if_set FLAG_TEMP_B, JUNA_POOL_ALL_FLAGS_4
	goto JUNA_POOL_ALL_FLAGS_1

JUNA_POOL_ALL_FLAGS_4:
	goto_if_set FLAG_TEMP_C, JUNA_POOL_ALL_FLAGS_6
	goto JUNA_POOL_ALL_FLAGS_1

JUNA_POOL_ALL_FLAGS_6:
	goto_if_set FLAG_TEMP_D, JUNA_POOL_ALL_FLAGS_8
	goto JUNA_POOL_ALL_FLAGS_1

JUNA_POOL_ALL_FLAGS_8:
	goto_if_set FLAG_TEMP_E, JUNA_POOL_ALL_FLAGS_10
	goto JUNA_POOL_ALL_FLAGS_1

JUNA_POOL_ALL_FLAGS_10:
	goto_if_set FLAG_TEMP_F, JUNA_POOL_ALL_FLAGS_12
	goto JUNA_POOL_ALL_FLAGS_1

JUNA_POOL_ALL_FLAGS_12:
	msgbox JUNA_POOL_ALL_FLAGS_Text_0
	closemessage
	setflag FLAG_TEMP_10
	call JUNA_POOL_DIRTY
	return


JUNA_POOL_STATE::
	goto_if_set FLAG_TEMP_A, JUNA_POOL_STATE_2
	goto_if_unset FLAG_TEMP_A, JUNA_POOL_STATE_3
JUNA_POOL_STATE_1:
	goto_if_set FLAG_TEMP_B, JUNA_POOL_STATE_7
	goto_if_unset FLAG_TEMP_B, JUNA_POOL_STATE_8
JUNA_POOL_STATE_6:
	goto_if_set FLAG_TEMP_C, JUNA_POOL_STATE_12
	goto_if_unset FLAG_TEMP_C, JUNA_POOL_STATE_13
JUNA_POOL_STATE_11:
	goto_if_set FLAG_TEMP_D, JUNA_POOL_STATE_17
	goto_if_unset FLAG_TEMP_D, JUNA_POOL_STATE_18
JUNA_POOL_STATE_16:
	goto_if_set FLAG_TEMP_E, JUNA_POOL_STATE_22
	goto_if_unset FLAG_TEMP_E, JUNA_POOL_STATE_23
JUNA_POOL_STATE_21:
	goto_if_set FLAG_TEMP_F, JUNA_POOL_STATE_27
	goto_if_unset FLAG_TEMP_F, JUNA_POOL_STATE_28
JUNA_POOL_STATE_26:
	return

JUNA_POOL_STATE_2:
	setmetatile 38, 9, METATILE_PokeScapeCaves_Extra_1_blue_tears_top, 1
	setmetatile 38, 10, METATILE_PokeScapeCaves_Extra_1_blue_tears_mid, 1
	setmetatile 38, 11, METATILE_PokeScapeCaves_Extra_1_blue_tears_bottom, 0
	special DrawWholeMapView
	goto JUNA_POOL_STATE_1

JUNA_POOL_STATE_3:
	setmetatile 38, 9, METATILE_PokeScapeCaves_Extra_1_green_tears_top, 1
	setmetatile 38, 10, METATILE_PokeScapeCaves_Extra_1_green_tears_mid, 1
	setmetatile 38, 11, METATILE_PokeScapeCaves_Extra_1_green_tears_bottom, 0
	special DrawWholeMapView
	goto JUNA_POOL_STATE_1

JUNA_POOL_STATE_7:
	setmetatile 39, 9, METATILE_PokeScapeCaves_Extra_1_blue_tears_top, 1
	setmetatile 39, 10, METATILE_PokeScapeCaves_Extra_1_blue_tears_mid, 1
	setmetatile 39, 11, METATILE_PokeScapeCaves_Extra_1_blue_tears_bottom, 0
	special DrawWholeMapView
	goto JUNA_POOL_STATE_6

JUNA_POOL_STATE_8:
	setmetatile 39, 9, METATILE_PokeScapeCaves_Extra_1_green_tears_top, 1
	setmetatile 39, 10, METATILE_PokeScapeCaves_Extra_1_green_tears_mid, 1
	setmetatile 39, 11, METATILE_PokeScapeCaves_Extra_1_green_tears_bottom, 0
	special DrawWholeMapView
	goto JUNA_POOL_STATE_6

JUNA_POOL_STATE_12:
	setmetatile 40, 9, METATILE_PokeScapeCaves_Extra_1_blue_tears_top, 1
	setmetatile 40, 10, METATILE_PokeScapeCaves_Extra_1_blue_tears_mid, 1
	setmetatile 40, 11, METATILE_PokeScapeCaves_Extra_1_blue_tears_bottom, 0
	special DrawWholeMapView
	goto JUNA_POOL_STATE_11

JUNA_POOL_STATE_13:
	setmetatile 40, 9, METATILE_PokeScapeCaves_Extra_1_green_tears_top, 1
	setmetatile 40, 10, METATILE_PokeScapeCaves_Extra_1_green_tears_mid, 1
	setmetatile 40, 11, METATILE_PokeScapeCaves_Extra_1_green_tears_bottom, 0
	special DrawWholeMapView
	goto JUNA_POOL_STATE_11

JUNA_POOL_STATE_17:
	setmetatile 41, 9, METATILE_PokeScapeCaves_Extra_1_blue_tears_top, 1
	setmetatile 41, 10, METATILE_PokeScapeCaves_Extra_1_blue_tears_mid, 1
	setmetatile 41, 11, METATILE_PokeScapeCaves_Extra_1_blue_tears_bottom, 0
	special DrawWholeMapView
	goto JUNA_POOL_STATE_16

JUNA_POOL_STATE_18:
	setmetatile 41, 9, METATILE_PokeScapeCaves_Extra_1_green_tears_top, 1
	setmetatile 41, 10, METATILE_PokeScapeCaves_Extra_1_green_tears_mid, 1
	setmetatile 41, 11, METATILE_PokeScapeCaves_Extra_1_green_tears_bottom, 0
	special DrawWholeMapView
	goto JUNA_POOL_STATE_16

JUNA_POOL_STATE_22:
	setmetatile 42, 9, METATILE_PokeScapeCaves_Extra_1_blue_tears_top, 1
	setmetatile 42, 10, METATILE_PokeScapeCaves_Extra_1_blue_tears_mid, 1
	setmetatile 42, 11, METATILE_PokeScapeCaves_Extra_1_blue_tears_bottom, 0
	special DrawWholeMapView
	goto JUNA_POOL_STATE_21

JUNA_POOL_STATE_23:
	setmetatile 42, 9, METATILE_PokeScapeCaves_Extra_1_green_tears_top, 1
	setmetatile 42, 10, METATILE_PokeScapeCaves_Extra_1_green_tears_mid, 1
	setmetatile 42, 11, METATILE_PokeScapeCaves_Extra_1_green_tears_bottom, 0
	special DrawWholeMapView
	goto JUNA_POOL_STATE_21

JUNA_POOL_STATE_27:
	setmetatile 43, 9, METATILE_PokeScapeCaves_Extra_1_blue_tears_top, 1
	setmetatile 43, 10, METATILE_PokeScapeCaves_Extra_1_blue_tears_mid, 1
	setmetatile 43, 11, METATILE_PokeScapeCaves_Extra_1_blue_tears_bottom, 0
	special DrawWholeMapView
	goto JUNA_POOL_STATE_26

JUNA_POOL_STATE_28:
	setmetatile 43, 9, METATILE_PokeScapeCaves_Extra_1_green_tears_top, 1
	setmetatile 43, 10, METATILE_PokeScapeCaves_Extra_1_green_tears_mid, 1
	setmetatile 43, 11, METATILE_PokeScapeCaves_Extra_1_green_tears_bottom, 0
	special DrawWholeMapView
	goto JUNA_POOL_STATE_26


JUNA_TOGGLE_TEMP_FLAG_1::
	goto_if_unset FLAG_TEMP_A, JUNA_TOGGLE_TEMP_FLAG_1_2
	goto_if_set FLAG_TEMP_A, JUNA_TOGGLE_TEMP_FLAG_1_5
	return

JUNA_TOGGLE_TEMP_FLAG_1_2:
	setflag FLAG_TEMP_A
	return

JUNA_TOGGLE_TEMP_FLAG_1_5:
	clearflag FLAG_TEMP_A
	return


JUNA_TOGGLE_TEMP_FLAG_2::
	goto_if_unset FLAG_TEMP_B, JUNA_TOGGLE_TEMP_FLAG_2_2
	goto_if_set FLAG_TEMP_B, JUNA_TOGGLE_TEMP_FLAG_2_5
	return

JUNA_TOGGLE_TEMP_FLAG_2_2:
	setflag FLAG_TEMP_B
	return

JUNA_TOGGLE_TEMP_FLAG_2_5:
	clearflag FLAG_TEMP_B
	return


JUNA_TOGGLE_TEMP_FLAG_3::
	goto_if_unset FLAG_TEMP_C, JUNA_TOGGLE_TEMP_FLAG_3_2
	goto_if_set FLAG_TEMP_C, JUNA_TOGGLE_TEMP_FLAG_3_5
	return

JUNA_TOGGLE_TEMP_FLAG_3_2:
	setflag FLAG_TEMP_C
	return

JUNA_TOGGLE_TEMP_FLAG_3_5:
	clearflag FLAG_TEMP_C
	return


JUNA_TOGGLE_TEMP_FLAG_4::
	goto_if_unset FLAG_TEMP_D, JUNA_TOGGLE_TEMP_FLAG_4_2
	goto_if_set FLAG_TEMP_D, JUNA_TOGGLE_TEMP_FLAG_4_5
	return

JUNA_TOGGLE_TEMP_FLAG_4_2:
	setflag FLAG_TEMP_D
	return

JUNA_TOGGLE_TEMP_FLAG_4_5:
	clearflag FLAG_TEMP_D
	return


JUNA_TOGGLE_TEMP_FLAG_5::
	goto_if_unset FLAG_TEMP_E, JUNA_TOGGLE_TEMP_FLAG_5_2
	goto_if_set FLAG_TEMP_E, JUNA_TOGGLE_TEMP_FLAG_5_5
	return

JUNA_TOGGLE_TEMP_FLAG_5_2:
	setflag FLAG_TEMP_E
	return

JUNA_TOGGLE_TEMP_FLAG_5_5:
	clearflag FLAG_TEMP_E
	return


JUNA_TOGGLE_TEMP_FLAG_6::
	goto_if_unset FLAG_TEMP_F, JUNA_TOGGLE_TEMP_FLAG_6_2
	goto_if_set FLAG_TEMP_F, JUNA_TOGGLE_TEMP_FLAG_6_5
	return

JUNA_TOGGLE_TEMP_FLAG_6_2:
	setflag FLAG_TEMP_F
	return

JUNA_TOGGLE_TEMP_FLAG_6_5:
	clearflag FLAG_TEMP_F
	return


JUNA_TEARS_1::
	call JUNA_TOGGLE_TEMP_FLAG_1
	call JUNA_TOGGLE_TEMP_FLAG_2
	call JUNA_POOL_STATE
	call JUNA_POOL_ALL_FLAGS
	return


JUNA_TEARS_2::
	call JUNA_TOGGLE_TEMP_FLAG_1
	call JUNA_TOGGLE_TEMP_FLAG_2
	call JUNA_TOGGLE_TEMP_FLAG_3
	call JUNA_POOL_STATE
	call JUNA_POOL_ALL_FLAGS
	return


JUNA_TEARS_3::
	call JUNA_TOGGLE_TEMP_FLAG_2
	call JUNA_TOGGLE_TEMP_FLAG_3
	call JUNA_TOGGLE_TEMP_FLAG_4
	call JUNA_POOL_STATE
	call JUNA_POOL_ALL_FLAGS
	return


JUNA_TEARS_4::
	call JUNA_TOGGLE_TEMP_FLAG_3
	call JUNA_TOGGLE_TEMP_FLAG_4
	call JUNA_TOGGLE_TEMP_FLAG_5
	call JUNA_POOL_STATE
	call JUNA_POOL_ALL_FLAGS
	return


JUNA_TEARS_5::
	call JUNA_TOGGLE_TEMP_FLAG_4
	call JUNA_TOGGLE_TEMP_FLAG_5
	call JUNA_TOGGLE_TEMP_FLAG_6
	call JUNA_POOL_STATE
	call JUNA_POOL_ALL_FLAGS
	return


JUNA_TEARS_6::
	call JUNA_TOGGLE_TEMP_FLAG_5
	call JUNA_TOGGLE_TEMP_FLAG_6
	call JUNA_POOL_STATE
	call JUNA_POOL_ALL_FLAGS
	return


JUNA_TOXIC_WATER::
	msgbox JUNA_TOXIC_WATER_Text_0
	closemessage
	release
	end


ENCOUNTER_JUNA::
	lock
	namebox ENCOUNTER_JUNA_Text_0
	goto_if_unset FLAG_TEMP_10, ENCOUNTER_JUNA_2
ENCOUNTER_JUNA_1:
	goto_if_set FLAG_TEMP_10, ENCOUNTER_JUNA_5
ENCOUNTER_JUNA_4:
	release
	end

ENCOUNTER_JUNA_2:
	msgbox ENCOUNTER_JUNA_Text_1
	hidenamebox
	closemessage
	goto ENCOUNTER_JUNA_1

ENCOUNTER_JUNA_5:
	msgbox ENCOUNTER_JUNA_Text_2
	playmoncry SPECIES_JUNA, 0
	waitmoncry
	delay 32
	setwildbattle SPECIES_JUNA, 65, ITEM_NONE
	special BattleSetup_StartLegendaryBattle
	waitstate
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ENCOUNTER_JUNA_7
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq ENCOUNTER_JUNA_8
	goto ENCOUNTER_JUNA_4

ENCOUNTER_JUNA_7:
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	msgbox ENCOUNTER_JUNA_Text_3
	closemessage
	goto ENCOUNTER_JUNA_4

ENCOUNTER_JUNA_8:
	fadescreenswapbuffers FADE_TO_BLACK
	setflag FLAG_JUNA
	removeobject VAR_LAST_TALKED
	setmetatile 37, 11, 113, 0
	setmetatile 38, 9, 137, 1
	setmetatile 38, 10, 137, 1
	setmetatile 38, 11, 113, 0
	setmetatile 39, 9, 137, 1
	setmetatile 39, 10, 137, 1
	setmetatile 39, 11, 113, 0
	setmetatile 40, 9, 137, 1
	setmetatile 40, 10, 137, 1
	setmetatile 40, 11, 113, 0
	setmetatile 41, 9, 137, 1
	setmetatile 41, 10, 137, 1
	setmetatile 41, 11, 113, 0
	setmetatile 42, 9, 137, 1
	setmetatile 42, 10, 137, 1
	setmetatile 42, 11, 113, 0
	setmetatile 43, 9, 137, 1
	setmetatile 43, 10, 137, 1
	setmetatile 43, 11, 113, 0
	setmetatile 44, 11, 113, 0
	fadescreenswapbuffers FADE_FROM_BLACK
	msgbox ENCOUNTER_JUNA_Text_4
	closemessage
	goto ENCOUNTER_JUNA_4


JUNA_POOL_ALL_FLAGS_Text_0:
	.string "You successfully cleanse the\n"
	.string "corruption from the Tears of Guthix.$"

JUNA_TOXIC_WATER_Text_0:
	.string "This water is too toxic to pass.$"

ENCOUNTER_JUNA_Text_0:
	.string "Juna$"

ENCOUNTER_JUNA_Text_1:
	.string "Adventurer...\p"
	.string "I have been waiting here three\n"
	.string "thousand years, guarding the Tears of\l"
	.string "Guthix.\p"
	.string "The Tears have become polluted over\n"
	.string "the years, and some of the streams are\l"
	.string "no longer blessed with Guthix's power.\l"
	.string "Please, restore balance and return His\l"
	.string "power to these caves.$"

ENCOUNTER_JUNA_Text_2:
	.string "Adventurer, you have cleansed the\n"
	.string "impurities from the waters!\l"
	.string "The tears that flow from them are\l"
	.string "blessed by the very power of Guthix\l"
	.string "Himself.\p"
	.string "I have been waiting for a long time for\n"
	.string "a Guardian like yourself to come along.\l"
	.string "Let us see if you are worthy!$"

ENCOUNTER_JUNA_Text_3:
	.string "Juna slithers away to bathe in the\n"
	.string "Tears of Guthix.$"

ENCOUNTER_JUNA_Text_4:
	.string "After capturing Juna the cavern goes\n"
	.string "quiet. The rocks finally stop weeping…$"
