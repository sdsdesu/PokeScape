Zemouregalsbase_BF1_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Zemouregalsbase_BF1_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_LOAD, Zemouregalsbase_BF1_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Zemouregalsbase_BF1_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	call ZEMOUREGAL_STATE
	return

Zemouregalsbase_BF1_MapScripts_MAP_SCRIPT_ON_LOAD:
	call checkGatesZemouregal
	return


ZEMOUREGAL_STATE::
	setflag 1
	setflag 2
	setflag 3
	removeobject 1
	removeobject 2
	removeobject 3
	call moveZemouregalBaseNPCs
	return


moveZemouregalBaseNPCs::
	switch VAR_POKESCAPE_EVENT_ZEMOUREGAL
	case 0, moveZemouregalBaseNPCs_3
	case 1, moveZemouregalBaseNPCs_3
	case 2, moveZemouregalBaseNPCs_3
	case 3, moveZemouregalBaseNPCs_3
	case 4, moveZemouregalBaseNPCs_3
	case 5, moveZemouregalBaseNPCs_3
	case 6, moveZemouregalBaseNPCs_3
	case 7, moveZemouregalBaseNPCs_3
	case 8, moveZemouregalBaseNPCs_4
	case 9, moveZemouregalBaseNPCs_4
	case 10, moveZemouregalBaseNPCs_4
	return

moveZemouregalBaseNPCs_1:
	releaseall
	return

moveZemouregalBaseNPCs_3:
	clearflag 1
	addobject 1
	setobjectxy 1, 31, 36
	setobjectxyperm 1, 31, 36
	clearflag 2
	addobject 2
	setobjectxy 2, 33, 36
	setobjectxyperm 2, 33, 36
	goto moveZemouregalBaseNPCs_1

moveZemouregalBaseNPCs_4:
	clearflag 1
	addobject 1
	setobjectxy 1, 43, 27
	setobjectxyperm 1, 43, 27
	applymovement 1, movement_lookup
	clearflag 2
	addobject 2
	setobjectxy 2, 44, 27
	setobjectxyperm 2, 44, 27
	applymovement 2, movement_lookup
	clearflag 3
	addobject 3
	setobjectxy 3, 42, 26
	setobjectxyperm 3, 42, 26
	goto moveZemouregalBaseNPCs_1


checkGatesZemouregal::
	switch VAR_POKESCAPE_EVENT_ZEMOUREGAL
	case 0, checkGatesZemouregal_3
	case 1, checkGatesZemouregal_3
	case 2, checkGatesZemouregal_4
	case 3, checkGatesZemouregal_5
	case 4, checkGatesZemouregal_6
	case 5, checkGatesZemouregal_7
	case 6, checkGatesZemouregal_8
	return

checkGatesZemouregal_1:
	special DrawWholeMapView
	releaseall
	return

checkGatesZemouregal_3:
	setmetatile 26, 33, 1014, 0
	setmetatile 3, 19, 1014, 0
	setmetatile 27, 9, 1014, 0
	setmetatile 9, 36, 1019, 1
	setmetatile 8, 20, 1018, 1
	setmetatile 33, 6, 1018, 1
	goto checkGatesZemouregal_1

checkGatesZemouregal_4:
	setmetatile 3, 19, 1014, 0
	setmetatile 27, 9, 1014, 0
	setmetatile 9, 36, 1019, 1
	setmetatile 8, 20, 1018, 1
	setmetatile 33, 6, 1018, 1
	goto checkGatesZemouregal_1

checkGatesZemouregal_5:
	setmetatile 3, 19, 1014, 0
	setmetatile 27, 9, 1014, 0
	setmetatile 8, 20, 1018, 1
	setmetatile 33, 6, 1018, 1
	goto checkGatesZemouregal_1

checkGatesZemouregal_6:
	setmetatile 27, 9, 1014, 0
	setmetatile 8, 20, 1018, 1
	setmetatile 33, 6, 1018, 1
	goto checkGatesZemouregal_1

checkGatesZemouregal_7:
	setmetatile 27, 9, 1014, 0
	setmetatile 33, 6, 1018, 1
	goto checkGatesZemouregal_1

checkGatesZemouregal_8:
	setmetatile 33, 6, 1018, 1
	goto checkGatesZemouregal_1


checkMist_1::
	compare VAR_POKESCAPE_EVENT_ZEMOUREGAL, 2
	goto_if_ge checkMist_1_1
	setmetatile 26, 33, 1014, 0
	return

checkMist_1_1:
	setmetatile 26, 33, 513, 0
	return


checkMist_2::
	compare VAR_POKESCAPE_EVENT_ZEMOUREGAL, 4
	goto_if_ge checkMist_2_1
	setmetatile 3, 19, 1014, 0
	return

checkMist_2_1:
	setmetatile 3, 19, 513, 0
	return


checkMist_3::
	compare VAR_POKESCAPE_EVENT_ZEMOUREGAL, 6
	goto_if_ge checkMist_3_1
	setmetatile 27, 9, 1014, 0
	return

checkMist_3_1:
	setmetatile 27, 9, 513, 0
	return


checkGate_1::
	compare VAR_POKESCAPE_EVENT_ZEMOUREGAL, 3
	goto_if_lt checkGate_1_1
	setmetatile 9, 36, 1011, 0
	return

checkGate_1_1:
	setmetatile 9, 36, 1018, 1
	return


checkGate_2::
	compare VAR_POKESCAPE_EVENT_ZEMOUREGAL, 5
	goto_if_lt checkGate_2_1
	setmetatile 8, 20, 1010, 0
	return

checkGate_2_1:
	setmetatile 9, 36, 1019, 1
	return


checkGate_3::
	compare VAR_POKESCAPE_EVENT_ZEMOUREGAL, 7
	goto_if_lt checkGate_3_1
	setmetatile 33, 6, 1010, 0
	return

checkGate_3_1:
	setmetatile 33, 6, 1019, 1
	return


entranceBase::
	lock
	compare VAR_POKESCAPE_EVENT_ZEMOUREGAL, 0
	goto_if_eq entranceBase_1
	call ZEMOUREGAL_STATE
	call checkGatesZemouregal
	releaseall
	return

entranceBase_1:
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, movement_toIntroductionMove
	waitmovement 0
	namebox entranceBase_Text_0
	msgbox entranceBase_Text_1
	namebox entranceBase_Text_2
	msgbox entranceBase_Text_3
	namebox entranceBase_Text_0
	msgbox entranceBase_Text_4
	namebox entranceBase_Text_2
	msgbox entranceBase_Text_5
	namebox entranceBase_Text_0
	msgbox entranceBase_Text_6
	namebox entranceBase_Text_7
	msgbox entranceBase_Text_8
	namebox entranceBase_Text_0
	msgbox entranceBase_Text_9
	namebox entranceBase_Text_0
	msgbox entranceBase_Text_10
	closemessage
	applymovement OBJ_EVENT_ID_CAMERA, movement_fromIntroductionMove
	waitmovement 0
	special RemoveCameraObject
	setvar VAR_POKESCAPE_EVENT_ZEMOUREGAL, 1
	releaseall
	return


detectLife::
	lockall
	msgbox detectLife_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, movement_avoidWard
	waitmovement 0
	closemessage
	lockall
	return


detectLifeDoor::
	lockall
	msgbox detectLifeDoor_Text_0
	waitmovement 0
	closemessage
	lockall
	return


exitsewerZemouregal::
	compare VAR_POKESCAPE_EVENT_ZEMOUREGAL, 7
	goto_if_eq exitsewerZemouregal_2
exitsewerZemouregal_1:
	call ZEMOUREGAL_STATE
	call checkGatesZemouregal
	compare VAR_POKESCAPE_EVENT_ZEMOUREGAL, 11
	goto_if_lt exitsewerZemouregal_5
exitsewerZemouregal_4:
	releaseall
	return

exitsewerZemouregal_2:
	setvar VAR_POKESCAPE_EVENT_ZEMOUREGAL, 8
	goto exitsewerZemouregal_1

exitsewerZemouregal_5:
	call zemouregalBossRush
	goto exitsewerZemouregal_4


zemouregalBossRush::
	lock
	switch VAR_POKESCAPE_EVENT_ZEMOUREGAL
	case 8, zemouregalBossRush_3
	case 9, zemouregalBossRush_4
	case 10, zemouregalBossRush_5
	releaseall
zemouregalBossRush_1:
	releaseall
	return

zemouregalBossRush_3:
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, movement_moveStartZemouregalEncounter
	waitmovement 0
	applymovement 1, movement_lookup
	applymovement 2, movement_lookup
	namebox entranceBase_Text_0
	msgbox zemouregalBossRush_Text_0
	namebox entranceBase_Text_0
	msgbox zemouregalBossRush_Text_1
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, movement_movePlayerToZemouregalEncounter
	applymovement 2, movement_lookleft
	waitmovement 0
	namebox entranceBase_Text_7
	msgbox zemouregalBossRush_Text_2
	applymovement 1, movement_lookright
	namebox entranceBase_Text_0
	msgbox zemouregalBossRush_Text_3
	applymovement 1, movement_lookup
	waitmovement 0
	namebox entranceBase_Text_0
	msgbox zemouregalBossRush_Text_4
	applymovement OBJ_EVENT_ID_CAMERA, movement_returnCameraforZemouregalEncounter
	waitmovement 0
	namebox entranceBase_Text_0
	msgbox zemouregalBossRush_Text_5
	applymovement 2, movement_MoveSharathteerkTo
	applymovement 3, movement_MoveArravTo
	special RemoveCameraObject
	waitmovement 0
	closemessage
	setvar VAR_POKESCAPE_EVENT_ZEMOUREGAL, 9
	trainerbattle_two_trainers TRAINER_ZEMOUREGAL_BASE_SHARATH, zemouregalBossRush_Text_6, TRAINER_ZEMOUREGAL_BASE_ARRAV, zemouregalBossRush_Text_7
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq zemouregalBossRush_8
	msgbox zemouregalBossRush_Text_8
zemouregalBossRush_7:
	releaseall
	goto zemouregalBossRush_1

zemouregalBossRush_4:
	applymovement OBJ_EVENT_ID_PLAYER, movement_movePlayerToZemouregalEncounter
	namebox entranceBase_Text_0
	msgbox zemouregalBossRush_Text_9
	namebox entranceBase_Text_0
	msgbox zemouregalBossRush_Text_5
	closemessage
	applymovement TRAINER_ZEMOUREGAL_BASE_SHARATH, movement_MoveSharathteerkTo
	applymovement TRAINER_ZEMOUREGAL_BASE_ARRAV, movement_MoveArravTo
	trainerbattle_two_trainers TRAINER_ZEMOUREGAL_BASE_SHARATH, zemouregalBossRush_Text_6, TRAINER_ZEMOUREGAL_BASE_ARRAV, zemouregalBossRush_Text_7
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq zemouregalBossRush_12
	msgbox zemouregalBossRush_Text_8
zemouregalBossRush_11:
	releaseall
	goto zemouregalBossRush_1

zemouregalBossRush_5:
	setweather WEATHER_SHADE
	doweather
	applymovement OBJ_EVENT_ID_PLAYER, movement_movePlayerToZemouregalEncounter
	namebox zemouregalBossRush_Text_10
	msgbox zemouregalBossRush_Text_9
	applymovement 1, movement_MoveSharathteerkTo
	msgbox zemouregalBossRush_Text_11
	trainerbattle_no_intro TRAINER_ZEMOUREGAL_BASE_ZEMOUREGAL, zemouregalBossRush_Text_12
	call bossrushFininshed
	releaseall
	goto zemouregalBossRush_1

zemouregalBossRush_8:
	call battleZemouregal
	goto zemouregalBossRush_7

zemouregalBossRush_12:
	releaseall
	call battleZemouregal
	goto zemouregalBossRush_11


battleZemouregal::
	lock
	setvar VAR_POKESCAPE_EVENT_ZEMOUREGAL, 10
	namebox entranceBase_Text_7
	msgbox battleZemouregal_Text_0
	namebox entranceBase_Text_0
	msgbox battleZemouregal_Text_1
	call castLivingDeath
	closemessage
	applymovement 2, movement_MoveSharathteerkBack
	applymovement 3, movement_MoveArravBack
	waitmovement 0
	applymovement 1, movement_MoveSharathteerkTo
	waitmovement 0
	namebox zemouregalBossRush_Text_10
	msgbox battleZemouregal_Text_2
	trainerbattle_no_intro TRAINER_ZEMOUREGAL_BASE_ZEMOUREGAL, zemouregalBossRush_Text_12
	call bossrushFininshed
	release
	return


castLivingDeath::
	delay 30
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 6
	setvar VAR_0x8006, 4
	setvar VAR_0x8007, 4
	special ShakeCamera
	delay 30
	setweather WEATHER_SHADE
	doweather
	return


NPC_Arrav_Battle_Fail::
	lockall
	namebox NPC_Arrav_Battle_Fail_Text_0
	msgbox NPC_Arrav_Battle_Fail_Text_1
	waitmessage
	hidenamebox
	releaseall
	return


NPC_SHARATH_Battle_Fail::
	lockall
	namebox entranceBase_Text_7
	msgbox NPC_SHARATH_Battle_Fail_Text_0
	waitmessage
	hidenamebox
	releaseall
	return


bossrushFininshed::
	lockall
	resetweather
	doweather
	special SpawnCameraObject
	applymovement 1, movement_MoveSharathteerkBack
	applymovement OBJ_EVENT_ID_CAMERA, movement_Zemouregal_to_outro
	namebox zemouregalBossRush_Text_10
	msgbox bossrushFininshed_Text_0
	applymovement 2, movement_lookleft
	namebox entranceBase_Text_7
	msgbox bossrushFininshed_Text_1
	applymovement 1, movement_lookright
	namebox zemouregalBossRush_Text_10
	msgbox bossrushFininshed_Text_2
	namebox entranceBase_Text_7
	msgbox bossrushFininshed_Text_3
	namebox zemouregalBossRush_Text_10
	msgbox bossrushFininshed_Text_4
	closemessage
	fadescreen FADE_TO_BLACK
	setvar VAR_POKESCAPE_EVENT_ZEMOUREGAL, 11
	applymovement OBJ_EVENT_ID_CAMERA, movement_Zemouregal_from_outro
	waitmovement 0
	special RemoveCameraObject
	call ZEMOUREGAL_STATE
	fadescreen FADE_FROM_BLACK
	releaseall
	return


movement_lookup:
	face_up
	step_end

movement_lookdown:
	face_down
	step_end

movement_lookleft:
	face_left
	step_end

movement_lookright:
	face_right
	step_end

movement_toIntroductionMove:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

movement_fromIntroductionMove:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

movement_avoidWard:
	walk_up
	step_end

movement_moveStartZemouregalEncounter:
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

movement_movePlayerToZemouregalEncounter:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	face_down
	step_end

movement_MoveArravTo:
	walk_right
	walk_up
	step_end

movement_MoveSharathteerkTo:
	walk_up
	walk_up
	step_end

movement_returnCameraforZemouregalEncounter:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

movement_MoveArravBack:
	walk_down
	walk_left
	face_up
	step_end

movement_MoveSharathteerkBack:
	walk_down
	walk_down
	face_up
	step_end

movement_Zemouregal_to_outro:
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

movement_Zemouregal_from_outro:
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

ITEM_ZEMOUREGALBASE_ITEM_1::
	finditem ITEM_SPIRIT_SHARD
	end


ITEM_ZEMOUREGALBASE_ITEM_2::
	finditem ITEM_CHAOS_RUNE
	end


ITEM_ZEMOUREGALBASE_ITEM_4::
	finditem ITEM_SPIRIT_SHARD
	end


ITEM_ZEMOUREGALBASE_ITEM_5::
	finditem ITEM_SPIRIT_SHARD
	end


ITEM_ZEMOUREGALBASE_ITEM_6::
	finditem ITEM_SPIRIT_SHARD
	end


pickupMist1::
	lockall
	compare VAR_POKESCAPE_EVENT_ZEMOUREGAL, 2
	goto_if_lt pickupMist1_2
	msgbox pickupMist1_Text_2
	call checkGatesZemouregal
pickupMist1_1:
	closemessage
	releaseall
	return

pickupMist1_2:
	msgbox pickupMist1_Text_0
	msgbox pickupMist1_Text_1
	setvar VAR_POKESCAPE_EVENT_ZEMOUREGAL, 2
	setmetatile 26, 33, 513, 0
	special DrawWholeMapView
	goto pickupMist1_1


zemouregalGate1::
	call checkGatesZemouregal
	compare VAR_POKESCAPE_EVENT_ZEMOUREGAL, 2
	goto_if_lt zemouregalGate1_1
	compare VAR_POKESCAPE_EVENT_ZEMOUREGAL, 2
	goto_if_eq zemouregalGate1_2
	lock
	msgbox zemouregalGate1_Text_2
	call checkGatesZemouregal
	closemessage
	release
	return

zemouregalGate1_1:
	lock
	msgbox zemouregalGate1_Text_0
	closemessage
	release
	return

zemouregalGate1_2:
	lock
	msgbox zemouregalGate1_Text_1
	setmetatile 9, 36, 1011, 0
	setvar VAR_POKESCAPE_EVENT_ZEMOUREGAL, 3
	special DrawWholeMapView
	closemessage
	release
	return


pickupMist2::
	lockall
	compare VAR_POKESCAPE_EVENT_ZEMOUREGAL, 4
	goto_if_lt pickupMist2_2
	msgbox pickupMist1_Text_2
	call checkGatesZemouregal
pickupMist2_1:
	closemessage
	releaseall
	return

pickupMist2_2:
	msgbox pickupMist1_Text_0
	msgbox pickupMist1_Text_1
	setvar VAR_POKESCAPE_EVENT_ZEMOUREGAL, 4
	setmetatile 3, 19, 513, 0
	special DrawWholeMapView
	goto pickupMist2_1


zemouregalGate2::
	compare VAR_POKESCAPE_EVENT_ZEMOUREGAL, 4
	goto_if_lt zemouregalGate2_1
	compare VAR_POKESCAPE_EVENT_ZEMOUREGAL, 4
	goto_if_eq zemouregalGate2_2
	lock
	msgbox zemouregalGate1_Text_2
	call checkGatesZemouregal
	closemessage
	release
	return

zemouregalGate2_1:
	lock
	msgbox zemouregalGate1_Text_0
	closemessage
	release
	return

zemouregalGate2_2:
	lock
	msgbox zemouregalGate1_Text_1
	setmetatile 8, 20, 1010, 0
	setvar VAR_POKESCAPE_EVENT_ZEMOUREGAL, 5
	special DrawWholeMapView
	closemessage
	release
	return


pickupMist3::
	lockall
	compare VAR_POKESCAPE_EVENT_ZEMOUREGAL, 6
	goto_if_lt pickupMist3_2
	msgbox pickupMist1_Text_2
	call checkGatesZemouregal
pickupMist3_1:
	closemessage
	releaseall
	return

pickupMist3_2:
	msgbox pickupMist1_Text_0
	msgbox pickupMist1_Text_1
	setvar VAR_POKESCAPE_EVENT_ZEMOUREGAL, 6
	setmetatile 27, 9, 513, 0
	special DrawWholeMapView
	goto pickupMist3_1


zemouregalGate3::
	lock
	compare VAR_POKESCAPE_EVENT_ZEMOUREGAL, 6
	goto_if_lt zemouregalGate3_2
	compare VAR_POKESCAPE_EVENT_ZEMOUREGAL, 6
	goto_if_eq zemouregalGate3_3
	lock
	msgbox zemouregalGate1_Text_2
	call checkGatesZemouregal
	closemessage
	release
zemouregalGate3_1:
	call checkGatesZemouregal
	return

zemouregalGate3_2:
	lock
	msgbox zemouregalGate1_Text_0
	closemessage
	release
	goto zemouregalGate3_1

zemouregalGate3_3:
	lock
	msgbox zemouregalGate1_Text_1
	setmetatile 33, 6, 1010, 0
	setvar VAR_POKESCAPE_EVENT_ZEMOUREGAL, 7
	special DrawWholeMapView
	closemessage
	release
	goto zemouregalGate3_1


BATTLE_ZEMOUREGALBASE_GUARD_1::
	trainerbattle_single TRAINER_ZEMOUREGAL_BASE_SKULLY_1, BATTLE_ZEMOUREGALBASE_GUARD_1_Text_0, BATTLE_ZEMOUREGALBASE_GUARD_1_Text_1
	msgbox BATTLE_ZEMOUREGALBASE_GUARD_1_Text_2
	releaseall
	return


BATTLE_ZEMOUREGALBASE_GUARD_2::
	trainerbattle_single TRAINER_ZEMOUREGAL_BASE_SKULLY_2, BATTLE_ZEMOUREGALBASE_GUARD_2_Text_0, BATTLE_ZEMOUREGALBASE_GUARD_2_Text_1
	msgbox BATTLE_ZEMOUREGALBASE_GUARD_2_Text_2
	releaseall
	return


BATTLE_ZEMOUREGALBASE_GUARD_3::
	trainerbattle_single TRAINER_ZEMOUREGAL_BASE_SKULLY_3, BATTLE_ZEMOUREGALBASE_GUARD_3_Text_0, BATTLE_ZEMOUREGALBASE_GUARD_3_Text_1
	msgbox BATTLE_ZEMOUREGALBASE_GUARD_3_Text_2
	releaseall
	return


BATTLE_ZEMOUREGALBASE_GUARD_4::
	trainerbattle_single TRAINER_ZEMOUREGAL_BASE_SKULLY_4, BATTLE_ZEMOUREGALBASE_GUARD_4_Text_0, BATTLE_ZEMOUREGALBASE_GUARD_4_Text_1
	msgbox BATTLE_ZEMOUREGALBASE_GUARD_4_Text_2
	releaseall
	return


BATTLE_ZEMOUREGALBASE_GUARD_5::
	trainerbattle_single TRAINER_ZEMOUREGAL_BASE_SKULLY_5, BATTLE_ZEMOUREGALBASE_GUARD_5_Text_0, BATTLE_ZEMOUREGALBASE_GUARD_5_Text_1
	msgbox BATTLE_ZEMOUREGALBASE_GUARD_5_Text_2
	releaseall
	return


BATTLE_ZEMOUREGALBASE_GUARD_6::
	trainerbattle_single TRAINER_ZEMOUREGAL_BASE_SKULLY_6, BATTLE_ZEMOUREGALBASE_GUARD_6_Text_0, BATTLE_ZEMOUREGALBASE_GUARD_1_Text_1
	msgbox BATTLE_ZEMOUREGALBASE_GUARD_6_Text_1
	releaseall
	return


BATTLE_ZEMOUREGALBASE_GUARD_7::
	trainerbattle_single TRAINER_ZEMOUREGAL_BASE_SKULLY_7, BATTLE_ZEMOUREGALBASE_GUARD_7_Text_0, BATTLE_ZEMOUREGALBASE_GUARD_7_Text_1
	msgbox BATTLE_ZEMOUREGALBASE_GUARD_7_Text_2
	releaseall
	return


BATTLE_ZEMOUREGALBASE_GUARD_8::
	trainerbattle_single TRAINER_ZEMOUREGAL_BASE_SKULLY_8, BATTLE_ZEMOUREGALBASE_GUARD_8_Text_0, BATTLE_ZEMOUREGALBASE_GUARD_8_Text_1
	msgbox BATTLE_ZEMOUREGALBASE_GUARD_8_Text_2
	releaseall
	return


NPC_Zemouregal_Base_ironMan::
	lock
	namebox NPC_Zemouregal_Base_ironMan_Text_0
	msgbox NPC_Zemouregal_Base_ironMan_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_Zemouregal_Base_hearthGuardian::
	lock
	faceplayer
	namebox NPC_Zemouregal_Base_hearthGuardian_Text_0
	msgbox NPC_Zemouregal_Base_hearthGuardian_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_Undeath_Giant::
	lock
	msgbox NPC_Undeath_Giant_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_Undeath_Soldier::
	lock
	msgbox BATTLE_ZEMOUREGALBASE_GUARD_5_Text_1
	waitmessage
	closemessage
	release
	end


entranceBase_Text_0:
	.string "???$"

entranceBase_Text_1:
	.string "How could this have happend?\p"
	.string "How did Wahisietel get his hands on the\n"
	.string "hearth of arrav?$"

entranceBase_Text_2:
	.string "Gargoyle$"

entranceBase_Text_3:
	.string "No idea, maybe the red mist wan't a good\n"
	.string "idea after all.$"

entranceBase_Text_4:
	.string "The red mist was fine.\p"
	.string "Someone needs to be imbued with it to\n"
	.string "go through the doors$"

entranceBase_Text_5:
	.string "It didn't stop the thief my lord.$"

entranceBase_Text_6:
	.string "You know that also didn't stop the\n"
	.string "thief, Sharathteerk?\p"
	.string "The life detection wards and the sewer\n"
	.string "trap.$"

entranceBase_Text_7:
	.string "Sharathteerk$"

entranceBase_Text_8:
	.string "Why did we give this base a sewer\n"
	.string "anyway?\p"
	.string "Almost everyone in this base is\n"
	.string "undeath.$"

entranceBase_Text_9:
	.string "The wizards would complain and not do\n"
	.string "their jobs if we didn't.$"

entranceBase_Text_10:
	.string "And dicides the killerwatt makes the\n"
	.string "sewer imposible to travirse.$"

detectLife_Text_0:
	.string "These seem to be the life detection\n"
	.string "wards.\p"
	.string "That necromancer was talking about.\p"
	.string "There might be a safer way trough.$"

detectLifeDoor_Text_0:
	.string "The giant seems to be fixing machinery\n"
	.string "on the cieling of the cave.\p"
	.string "Better not distirb it.$"

zemouregalBossRush_Text_0:
	.string "Who are you and why are you in my base?$"

zemouregalBossRush_Text_1:
	.string "How did you avoid my hole security\n"
	.string "system?$"

zemouregalBossRush_Text_2:
	.string "They seem to be wearing isolated boots.$"

zemouregalBossRush_Text_3:
	.string "It doesn't matter.$"

zemouregalBossRush_Text_4:
	.string "you gone far mortal. But this is as far\n"
	.string "as you go.$"

zemouregalBossRush_Text_5:
	.string "Arrav! Sharathteerk! Obliterate this\n"
	.string "trasspasser!$"

zemouregalBossRush_Text_6:
	.string "Sharathteerk: Just crush the\n"
	.string "traspasser Arrav!$"

zemouregalBossRush_Text_7:
	.string "Arrav: ...$"

zemouregalBossRush_Text_8:
	.string "You don't have enough pokemon for this\n"
	.string "battle.$"

zemouregalBossRush_Text_9:
	.string "Back for more? Didn't you learn your\n"
	.string "lesson?$"

zemouregalBossRush_Text_10:
	.string "Zemouregal$"

zemouregalBossRush_Text_11:
	.string "Fine. Withness my greatness!$"

zemouregalBossRush_Text_12:
	.string "Zemouregal: Now could i have lost?$"

battleZemouregal_Text_0:
	.string "My lord, the intrudor is to strong.$"

battleZemouregal_Text_1:
	.string "Enough! Out of my way!$"

battleZemouregal_Text_2:
	.string "Now you'll face the power of a\n"
	.string "Mahjarrat!$"

NPC_Arrav_Battle_Fail_Text_0:
	.string "Arrav$"

NPC_Arrav_Battle_Fail_Text_1:
	.string "You must leave. It's too...urgh...arrgh...\n"
	.string "...dangerous for the likes of you here.$"

NPC_SHARATH_Battle_Fail_Text_0:
	.string "Get out om my sight!$"

bossrushFininshed_Text_0:
	.string "Looks like you're stronger than I\n"
	.string "tought.$"

bossrushFininshed_Text_1:
	.string "What should we do, My Lord?$"

bossrushFininshed_Text_2:
	.string "Let it be. We have what we need here.\p"
	.string "We'll return to my fortress immediately.$"

bossrushFininshed_Text_3:
	.string "What about the reports of your\n"
	.string "servants,\p"
	.string "my Lord?\p"
	.string "Didn't they find the location of\p"
	.string "The Infernal Source?$"

bossrushFininshed_Text_4:
	.string "That was probaly a false positive.\p"
	.string "There is no way that portal to Infernus\n"
	.string "survived the end of the Third Age.$"

pickupMist1_Text_0:
	.string "You picked up the red mist$"

pickupMist1_Text_1:
	.string "You can now oppen one of the gates$"

pickupMist1_Text_2:
	.string "The red mist is gone$"

zemouregalGate1_Text_0:
	.string "You need to find red mist to open this\n"
	.string "gate$"

zemouregalGate1_Text_1:
	.string "The red mist oppens the gate$"

zemouregalGate1_Text_2:
	.string "The gate is already oppen$"

BATTLE_ZEMOUREGALBASE_GUARD_1_Text_0:
	.string "Who goes there?$"

BATTLE_ZEMOUREGALBASE_GUARD_1_Text_1:
	.string "Who?$"

BATTLE_ZEMOUREGALBASE_GUARD_1_Text_2:
	.string "The skeleton is guarding something.$"

BATTLE_ZEMOUREGALBASE_GUARD_2_Text_0:
	.string "I have to ask you to leave.$"

BATTLE_ZEMOUREGALBASE_GUARD_2_Text_1:
	.string "This will anger the master.$"

BATTLE_ZEMOUREGALBASE_GUARD_2_Text_2:
	.string "Why are you still here?.$"

BATTLE_ZEMOUREGALBASE_GUARD_3_Text_0:
	.string "LIFEFORM DETECTED!$"

BATTLE_ZEMOUREGALBASE_GUARD_3_Text_1:
	.string "BATTLE LOST.$"

BATTLE_ZEMOUREGALBASE_GUARD_3_Text_2:
	.string "RECOVERY PROGRESS.$"

BATTLE_ZEMOUREGALBASE_GUARD_4_Text_0:
	.string "Halt! This is a private area. Please exit\n"
	.string "the cave$"

BATTLE_ZEMOUREGALBASE_GUARD_4_Text_1:
	.string "I couldn't stop you.$"

BATTLE_ZEMOUREGALBASE_GUARD_4_Text_2:
	.string "Why did we move this base here? Wasn't\n"
	.string "it safer in the wilderness?$"

BATTLE_ZEMOUREGALBASE_GUARD_5_Text_0:
	.string "Do you really think you can save them,\n"
	.string "Bob?$"

BATTLE_ZEMOUREGALBASE_GUARD_5_Text_1:
	.string "...$"

BATTLE_ZEMOUREGALBASE_GUARD_5_Text_2:
	.string "Who is Bob?$"

BATTLE_ZEMOUREGALBASE_GUARD_6_Text_0:
	.string "Who invided you?$"

BATTLE_ZEMOUREGALBASE_GUARD_6_Text_1:
	.string "Why won't you awnser the question?$"

BATTLE_ZEMOUREGALBASE_GUARD_7_Text_0:
	.string "You have any Miasma runes?$"

BATTLE_ZEMOUREGALBASE_GUARD_7_Text_1:
	.string "How sad.$"

BATTLE_ZEMOUREGALBASE_GUARD_7_Text_2:
	.string "I just want some Miasma rune dust. I'm\n"
	.string "not addicted, I can totaly quit.$"

BATTLE_ZEMOUREGALBASE_GUARD_8_Text_0:
	.string "Halt thief! you won't rob the master's\n"
	.string "vaults!$"

BATTLE_ZEMOUREGALBASE_GUARD_8_Text_1:
	.string "How?$"

BATTLE_ZEMOUREGALBASE_GUARD_8_Text_2:
	.string "Oh wait the masters saves are in his\n"
	.string "castle.$"

NPC_Zemouregal_Base_ironMan_Text_0:
	.string "Iron man$"

NPC_Zemouregal_Base_ironMan_Text_1:
	.string "Don't crash on me!\p"
	.string "I need that broken zombie axe drop.$"

NPC_Zemouregal_Base_hearthGuardian_Text_0:
	.string "Guardian$"

NPC_Zemouregal_Base_hearthGuardian_Text_1:
	.string "The hearth of Arrav is curently stolen.\p"
	.string "Please wait until we retrived it before\n"
	.string "trying to\n"
	.string "steal it again.$"

NPC_Undeath_Giant_Text_0:
	.string "The giant seems to be fixing machinery\n"
	.string "on the cieling of the cave.$"
