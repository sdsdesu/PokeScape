Shantay_Pass_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Shantay_Pass_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_LOAD, Shantay_Pass_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Shantay_Pass_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 11
	call WEATHER_CHANGE_AREA_DESERT_ROUGH
	return

Shantay_Pass_MapScripts_MAP_SCRIPT_ON_LOAD:
	call SHANTAY_PASS_STATE
	return


SHANTAY_PASS_STATE::
	goto_if_unset FLAG_ABYSS_PORTALS_ENABLED, SHANTAY_PASS_STATE_1
	return

SHANTAY_PASS_STATE_1:
	setflag FLAG_TEMP_1F
	removeobject 4
	return


SHANTYPASS_NPC_1::
	faceplayer
	namebox SHANTYPASS_NPC_1_Text_0
	msgbox SHANTYPASS_NPC_1_Text_1
	closemessage
	hidenamebox
	release
	end


SHANTYPASS_NPC_2::
	faceplayer
	namebox SHANTYPASS_NPC_2_Text_0
	msgbox SHANTYPASS_NPC_2_Text_1
	closemessage
	hidenamebox
	release
	end


SHANTYPASS_NPC_3::
	faceplayer
	namebox SHANTYPASS_NPC_2_Text_0
	msgbox SHANTYPASS_NPC_3_Text_0
	closemessage
	hidenamebox
	release
	end


SHANTYPASS_NPC_1_Text_0:
	.string "Shantay$"

SHANTYPASS_NPC_1_Text_1:
	.string "This is the pass of Shantay.\p"
	.string "I guard this area with my men.\p"
	.string "I am responsible for keeping this pass\n"
	.string "open.\p"
	.string "Unfortunately it is currently\n"
	.string "undergoing some repairs.\n"
	.string "Please come back again later.$"

SHANTYPASS_NPC_2_Text_0:
	.string "Shantay Guard$"

SHANTYPASS_NPC_2_Text_1:
	.string "I help Shantay prevent outlaws from\n"
	.string "getting out of the desert.\p"
	.string "And we stop the inexperienced from a\n"
	.string "dry death in the sands.$"

SHANTYPASS_NPC_3_Text_0:
	.string "Go talk to Shantay.\n"
	.string "I'm on duty and I don't have time to\l"
	.string "talk to the likes of you!$"
