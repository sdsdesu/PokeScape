KaramjaVolcano_B2F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, KaramjaVolcano_B2F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_LOAD, KaramjaVolcano_B2F_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

KaramjaVolcano_B2F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 15
	call RANDOM_EVENT_SPAWNS_KARAMJA_VOLCANO_B2F
	return

KaramjaVolcano_B2F_MapScripts_MAP_SCRIPT_ON_LOAD:
	goto KaramjaVolcano_STATE2
	return


RANDOM_EVENT_SPAWNS_KARAMJA_VOLCANO_B2F::
	random 10
	compare VAR_RESULT, 1
	goto_if_eq RANDOM_EVENT_SPAWNS_KARAMJA_VOLCANO_B2F_2
	setflag FLAG_TEMP_1
	removeobject 10
RANDOM_EVENT_SPAWNS_KARAMJA_VOLCANO_B2F_1:
	random 10
	compare VAR_RESULT, 1
	goto_if_eq RANDOM_EVENT_SPAWNS_KARAMJA_VOLCANO_B2F_6
	setflag FLAG_TEMP_2
	removeobject 11
RANDOM_EVENT_SPAWNS_KARAMJA_VOLCANO_B2F_5:
	return

RANDOM_EVENT_SPAWNS_KARAMJA_VOLCANO_B2F_2:
	clearflag FLAG_TEMP_1
	addobject 10
	goto RANDOM_EVENT_SPAWNS_KARAMJA_VOLCANO_B2F_1

RANDOM_EVENT_SPAWNS_KARAMJA_VOLCANO_B2F_6:
	clearflag FLAG_TEMP_2
	addobject 11
	goto RANDOM_EVENT_SPAWNS_KARAMJA_VOLCANO_B2F_5


KaramjaVolcano_STATE2::
	switch VAR_POKESCAPE_KARAMJAVOLCANO_STATE
	case 0, KaramjaVolcano_STATE2_2
	case 1, KaramjaVolcano_STATE2_2
	case 2, KaramjaVolcano_STATE2_3
	case 3, KaramjaVolcano_STATE2_4
	return

KaramjaVolcano_STATE2_2:
	release
	end

KaramjaVolcano_STATE2_3:
	release
	end

KaramjaVolcano_STATE2_4:
	setflag FLAG_TEMP_1
	removeobject 2
	removeobject 3
	removeobject 4
	release
	end


ITEM_KARAMJA_VOLCANO_1::
	finditem ITEM_PURPLE_SWEETS
	end


ITEM_KARAMJA_VOLCANO_2::
	finditem ITEM_PURPLE_SWEETS
	end


ITEM_KARAMJA_VOLCANO_3::
	finditem ITEM_PURPLE_SWEETS
	end


ITEM_KARAMJA_VOLCANO_4::
	finditem ITEM_PURPLE_SWEETS
	end

