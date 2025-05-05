Draynor_Bank_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Draynor_Bank_MapScripts_MAP_SCRIPT_ON_LOAD
	map_script MAP_SCRIPT_ON_TRANSITION, Draynor_Bank_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Draynor_Bank_MapScripts_MAP_SCRIPT_ON_LOAD:
	call Draynor_Bank_OnTransition
	return

Draynor_Bank_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 1
	return


Draynor_Bank_OnTransition::
	setrespawn HEAL_LOCATION_DRAYNOR
	return


NPC_DraynorBank_Qutiedoll::
	lock
	namebox NPC_DraynorBank_Qutiedoll_Text_0
	msgbox NPC_DraynorBank_Qutiedoll_Text_1
	hidenamebox
	release
	end


NPC_DraynorBank_Purepker895::
	lock
	faceplayer
	namebox NPC_DraynorBank_Purepker895_Text_0
	msgbox NPC_DraynorBank_Purepker895_Text_1
	hidenamebox
	release
	end


NPC_DraynorBank_1337sp34kr::
	lock
	faceplayer
	namebox NPC_DraynorBank_1337sp34kr_Text_0
	msgbox NPC_DraynorBank_1337sp34kr_Text_1
	hidenamebox
	release
	end


NPC_DraynorBank_Elfinlocks::
	lock
	faceplayer
	namebox NPC_DraynorBank_Elfinlocks_Text_0
	msgbox NPC_DraynorBank_Elfinlocks_Text_1
	hidenamebox
	release
	end


NPC_DraynorBank_PilloryGuard::
	lock
	faceplayer
	namebox NPC_DraynorBank_PilloryGuard_Text_0
	msgbox NPC_DraynorBank_PilloryGuard_Text_1
	hidenamebox
	release
	end


NPC_LumbridgeBank_NPC1::
	lock
	faceplayer
	namebox NPC_LumbridgeBank_NPC1_Text_0
	msgbox NPC_LumbridgeBank_NPC1_Text_1
	hidenamebox
	release
	end


NPC_LumbridgeBank_NPC2::
	lock
	faceplayer
	namebox NPC_LumbridgeBank_NPC2_Text_0
	msgbox NPC_LumbridgeBank_NPC2_Text_1
	hidenamebox
	release
	end


NPC_LumbridgeBank_NPC3::
	lock
	faceplayer
	namebox NPC_LumbridgeBank_NPC3_Text_0
	msgbox NPC_LumbridgeBank_NPC3_Text_1
	hidenamebox
	release
	end


ProfNormalTree_Assistant::
	msgbox ProfNormalTree_Assistant_Text_0
	msgbox ProfNormalTree_Assistant_Text_1
	setvar VAR_0x8004, 1
	specialvar VAR_RESULT, ScriptGetPokedexInfo
	copyvar VAR_0x8008, VAR_0x8005
	copyvar VAR_0x8009, VAR_0x8006
	buffernumberstring STR_VAR_2, VAR_0x8008
	buffernumberstring STR_VAR_3, VAR_0x8009
	msgbox ProfNormalTree_Assistant_Text_2
	compare VAR_0x8009, VAR_TEMP_1
	call_if_ge ProfNormalTree_Assistant_GiveReward
	call_if_lt ProfNormalTree_Assistant_YouOnlyHaveXmons
	return


ProfNormalTree_Assistant_GiveReward::
	specialvar VAR_RESULT, GetCurrentMap
	switch VAR_RESULT
	case MAP_FALADOR_BANK_EAST, ProfNormalTree_Assistant_GiveReward_3
	case MAP_VARROCK_BANK_EAST, ProfNormalTree_Assistant_GiveReward_4
	case MAP_LUMBRIDGE_BANK, ProfNormalTree_Assistant_GiveReward_5
	case MAP_RIMMINGTON_BANK, ProfNormalTree_Assistant_GiveReward_6
	case MAP_EDGEVILLE_BANK, ProfNormalTree_Assistant_GiveReward_7
ProfNormalTree_Assistant_GiveReward_1:
	namebox ProfNormalTree_Assistant_GiveReward_Text_0
	msgbox ProfNormalTree_Assistant_GiveReward_Text_1
	closemessage
	hidenamebox
	return

ProfNormalTree_Assistant_GiveReward_3:
	call ProfNormalTree_Assistant_GiveReward_FALADOR
	goto ProfNormalTree_Assistant_GiveReward_1

ProfNormalTree_Assistant_GiveReward_4:
	call ProfNormalTree_Assistant_GiveReward_VARROCK
	goto ProfNormalTree_Assistant_GiveReward_1

ProfNormalTree_Assistant_GiveReward_5:
	call ProfNormalTree_Assistant_GiveReward_Lumbridge
	goto ProfNormalTree_Assistant_GiveReward_1

ProfNormalTree_Assistant_GiveReward_6:
	call ProfNormalTree_Assistant_GiveReward_RIMMINGTON
	goto ProfNormalTree_Assistant_GiveReward_1

ProfNormalTree_Assistant_GiveReward_7:
	call ProfNormalTree_Assistant_GiveReward_EDGEVILLE
	goto ProfNormalTree_Assistant_GiveReward_1


ProfNormalTree_Assistant_YouOnlyHaveXmons::
	msgbox ProfNormalTree_Assistant_YouOnlyHaveXmons_Text_0
	call ProfNormalTree_Assistant_Info
	return


ProfNormalTree_Assistant_Info::
	random 8
	switch VAR_RESULT
	case 0, ProfNormalTree_Assistant_Info_3
	case 1, ProfNormalTree_Assistant_Info_4
	case 2, ProfNormalTree_Assistant_Info_5
	case 3, ProfNormalTree_Assistant_Info_6
	case 4, ProfNormalTree_Assistant_Info_7
	case 5, ProfNormalTree_Assistant_Info_8
	case 6, ProfNormalTree_Assistant_Info_9
	case 7, ProfNormalTree_Assistant_Info_10
ProfNormalTree_Assistant_Info_1:
	hidenamebox
	closemessage
	return

ProfNormalTree_Assistant_Info_3:
	msgbox ProfNormalTree_Assistant_Info_Text_0
	goto ProfNormalTree_Assistant_Info_1

ProfNormalTree_Assistant_Info_4:
	msgbox ProfNormalTree_Assistant_Info_Text_1
	goto ProfNormalTree_Assistant_Info_1

ProfNormalTree_Assistant_Info_5:
	msgbox ProfNormalTree_Assistant_Info_Text_2
	goto ProfNormalTree_Assistant_Info_1

ProfNormalTree_Assistant_Info_6:
	msgbox ProfNormalTree_Assistant_Info_Text_3
	goto ProfNormalTree_Assistant_Info_1

ProfNormalTree_Assistant_Info_7:
	msgbox ProfNormalTree_Assistant_Info_Text_4
	goto ProfNormalTree_Assistant_Info_1

ProfNormalTree_Assistant_Info_8:
	msgbox ProfNormalTree_Assistant_Info_Text_5
	goto ProfNormalTree_Assistant_Info_1

ProfNormalTree_Assistant_Info_9:
	msgbox ProfNormalTree_Assistant_Info_Text_6
	goto ProfNormalTree_Assistant_Info_1

ProfNormalTree_Assistant_Info_10:
	msgbox ProfNormalTree_Assistant_Info_Text_7
	giveitem ITEM_POUCH, 10
	msgbox ProfNormalTree_Assistant_Info_Text_8
	goto ProfNormalTree_Assistant_Info_1


ProfNormalTree_LUMBRIDGE::
	setvar VAR_TEMP_1, 10
	buffernumberstring STR_VAR_1, VAR_TEMP_1
	lock
	faceplayer
	namebox ProfNormalTree_Assistant_GiveReward_Text_0
	goto_if_set FLAG_NORMALTREE_ASSISTANT_1, ProfNormalTree_LUMBRIDGE_2
	msgbox ProfNormalTree_LUMBRIDGE_Text_1
	call ProfNormalTree_Assistant
ProfNormalTree_LUMBRIDGE_1:
	closemessage
	hidenamebox
	release
	end

ProfNormalTree_LUMBRIDGE_2:
	msgbox ProfNormalTree_LUMBRIDGE_Text_0
	call ProfNormalTree_Assistant_Info
	goto ProfNormalTree_LUMBRIDGE_1


ProfNormalTree_Assistant_GiveReward_Lumbridge::
	msgbox ProfNormalTree_Assistant_GiveReward_Lumbridge_Text_0
	giveitem ITEM_EXP_CANDY_M, 5
	setflag FLAG_NORMALTREE_ASSISTANT_1
	return


ProfNormalTree_RIMMINGTON::
	setvar VAR_TEMP_1, 20
	buffernumberstring STR_VAR_1, VAR_TEMP_1
	lock
	faceplayer
	namebox ProfNormalTree_Assistant_GiveReward_Text_0
	goto_if_set FLAG_NORMALTREE_ASSISTANT_2, ProfNormalTree_RIMMINGTON_2
	msgbox ProfNormalTree_LUMBRIDGE_Text_1
	call ProfNormalTree_Assistant
ProfNormalTree_RIMMINGTON_1:
	closemessage
	hidenamebox
	release
	end

ProfNormalTree_RIMMINGTON_2:
	msgbox ProfNormalTree_LUMBRIDGE_Text_0
	call ProfNormalTree_Assistant_Info
	goto ProfNormalTree_RIMMINGTON_1


ProfNormalTree_Assistant_GiveReward_RIMMINGTON::
	msgbox ProfNormalTree_Assistant_GiveReward_Lumbridge_Text_0
	giveitem ITEM_EXP_CANDY_M, 5
	setflag FLAG_NORMALTREE_ASSISTANT_2
	return


ProfNormalTree_FALADOR::
	setvar VAR_TEMP_1, 30
	buffernumberstring STR_VAR_1, VAR_TEMP_1
	lock
	faceplayer
	namebox ProfNormalTree_Assistant_GiveReward_Text_0
	goto_if_set FLAG_NORMALTREE_ASSISTANT_3, ProfNormalTree_FALADOR_2
	msgbox ProfNormalTree_LUMBRIDGE_Text_1
	call ProfNormalTree_Assistant
ProfNormalTree_FALADOR_1:
	closemessage
	hidenamebox
	release
	end

ProfNormalTree_FALADOR_2:
	msgbox ProfNormalTree_LUMBRIDGE_Text_0
	call ProfNormalTree_Assistant_Info
	goto ProfNormalTree_FALADOR_1


ProfNormalTree_Assistant_GiveReward_FALADOR::
	msgbox ProfNormalTree_Assistant_GiveReward_Lumbridge_Text_0
	giveitem ITEM_EXP_CANDY_M, 5
	setflag FLAG_NORMALTREE_ASSISTANT_3
	return


ProfNormalTree_VARROCK::
	setvar VAR_TEMP_1, 40
	buffernumberstring STR_VAR_1, VAR_TEMP_1
	lock
	faceplayer
	namebox ProfNormalTree_Assistant_GiveReward_Text_0
	goto_if_set FLAG_NORMALTREE_ASSISTANT_4, ProfNormalTree_VARROCK_2
	msgbox ProfNormalTree_LUMBRIDGE_Text_1
	call ProfNormalTree_Assistant
ProfNormalTree_VARROCK_1:
	closemessage
	hidenamebox
	release
	end

ProfNormalTree_VARROCK_2:
	msgbox ProfNormalTree_LUMBRIDGE_Text_0
	call ProfNormalTree_Assistant_Info
	goto ProfNormalTree_VARROCK_1


ProfNormalTree_Assistant_GiveReward_VARROCK::
	msgbox ProfNormalTree_Assistant_GiveReward_Lumbridge_Text_0
	giveitem ITEM_EXP_CANDY_M, 5
	setflag FLAG_NORMALTREE_ASSISTANT_4
	return


ProfNormalTree_EDGEVILLE::
	setvar VAR_TEMP_1, 50
	buffernumberstring STR_VAR_1, VAR_TEMP_1
	lock
	faceplayer
	namebox ProfNormalTree_Assistant_GiveReward_Text_0
	goto_if_set FLAG_NORMALTREE_ASSISTANT_5, ProfNormalTree_EDGEVILLE_2
	msgbox ProfNormalTree_LUMBRIDGE_Text_1
	call ProfNormalTree_Assistant
ProfNormalTree_EDGEVILLE_1:
	closemessage
	hidenamebox
	release
	end

ProfNormalTree_EDGEVILLE_2:
	msgbox ProfNormalTree_LUMBRIDGE_Text_0
	call ProfNormalTree_Assistant_Info
	goto ProfNormalTree_EDGEVILLE_1


ProfNormalTree_Assistant_GiveReward_EDGEVILLE::
	msgbox ProfNormalTree_Assistant_GiveReward_Lumbridge_Text_0
	giveitem ITEM_EXP_CANDY_M, 5
	setflag FLAG_NORMALTREE_ASSISTANT_5
	return


NPC_DraynorBank_Qutiedoll_Text_0:
	.string "Qutiedoll$"

NPC_DraynorBank_Qutiedoll_Text_1:
	.string "How do you get behind the bank booth?$"

NPC_DraynorBank_Purepker895_Text_0:
	.string "Purepker895$"

NPC_DraynorBank_Purepker895_Text_1:
	.string "…$"

NPC_DraynorBank_1337sp34kr_Text_0:
	.string "1337sp34kr$"

NPC_DraynorBank_1337sp34kr_Text_1:
	.string "S331ing N4ts!$"

NPC_DraynorBank_Elfinlocks_Text_0:
	.string "Elfinlocks$"

NPC_DraynorBank_Elfinlocks_Text_1:
	.string "Buying 2k nats, no noob offers!$"

NPC_DraynorBank_PilloryGuard_Text_0:
	.string "Pillory Guard$"

NPC_DraynorBank_PilloryGuard_Text_1:
	.string "You would be best to watch yourself.\p"
	.string "Otherwise you're in for da cage!$"

NPC_LumbridgeBank_NPC1_Text_0:
	.string "Ranger$"

NPC_LumbridgeBank_NPC1_Text_1:
	.string "The Lumbridge Bank used to be on top of\n"
	.string "the Castle, but it was difficult to get\l"
	.string "there.\p"
	.string "Duke Horacio however started a Gym\n"
	.string "there and moved the Bank to a more\l"
	.string "convenient location.$"

NPC_LumbridgeBank_NPC2_Text_0:
	.string "Noob$"

NPC_LumbridgeBank_NPC2_Text_1:
	.string "Remember if your Monsters ever get\n"
	.string "poisoned you can feed them a Chocolate\l"
	.string "Sunday to make them feel better!\p"
	.string "What?\l"
	.string "Do not worry.\p"
	.string "Chocolate is not poisonous to\n"
	.string "Monsters.$"

NPC_LumbridgeBank_NPC3_Text_0:
	.string "Farmer$"

NPC_LumbridgeBank_NPC3_Text_1:
	.string "These banks are great, you can heal\n"
	.string "your Monsters and store your items!$"

ProfNormalTree_Assistant_Text_0:
	.string "If you have registered at least\n"
	.string "{STR_VAR_1} monsters in your\l"
	.string "Bestiary, I can give you a reward.$"

ProfNormalTree_Assistant_Text_1:
	.string "Let's have a look{PAUSE 15}…{PAUSE 15}…{PAUSE 15}…$"

ProfNormalTree_Assistant_Text_2:
	.string "You have IDENTIFIED {STR_VAR_2} monsters\nand REGISTERED {STR_VAR_3} monsters.$"

ProfNormalTree_Assistant_GiveReward_Text_0:
	.string "Assistant$"

ProfNormalTree_Assistant_GiveReward_Text_1:
	.string "I look forward to seeing how many you'll\n"
	.string "find!$"

ProfNormalTree_Assistant_YouOnlyHaveXmons_Text_0:
	.string "Hmm… It appears you have only\n"
	.string "registered {STR_VAR_3} monsters.$"

ProfNormalTree_Assistant_Info_Text_0:
	.string "Did you know the difference between\n"
	.string "Identifing and Registering a monster\l"
	.string "depends on if you have caught it.$"

ProfNormalTree_Assistant_Info_Text_1:
	.string "Have you tried using a fishing net?$"

ProfNormalTree_Assistant_Info_Text_2:
	.string "Some unique monsters can only be found\n"
	.string "in dungeon sinkholes, you should try\l"
	.string "exploring some.$"

ProfNormalTree_Assistant_Info_Text_3:
	.string "Did you know that different monsters\n"
	.string "appear in wheat fields compared to the\l"
	.string "grass?$"

ProfNormalTree_Assistant_Info_Text_4:
	.string "You should try evolving some of your\n"
	.string "monsters.\p"
	.string "There are many branching evolution\n"
	.string "methods, no two monsters are the same.$"

ProfNormalTree_Assistant_Info_Text_5:
	.string "Have you found any of those hidden\n"
	.string "grottos?\p"
	.string "A hint is to look for differences in the\n"
	.string "trees.$"

ProfNormalTree_Assistant_Info_Text_6:
	.string "Maybe you should do some more quests,\n"
	.string "as you may be rewarded with a monster.$"

ProfNormalTree_Assistant_Info_Text_7:
	.string "Do you need some pouches?\n"
	.string "Here have some.$"

ProfNormalTree_Assistant_Info_Text_8:
	.string "Now you have no excuse not to capture\n"
	.string "some monsters!$"

ProfNormalTree_LUMBRIDGE_Text_0:
	.string "Good to see you again, I hope you've\n"
	.string "been finding new monsters!$"

ProfNormalTree_LUMBRIDGE_Text_1:
	.string "I'm one of Professor Normal Tree's\n"
	.string "Assistants.\p"
	.string "I've been instructed to review the\n"
	.string "Bestiary's of MvM participants.$"

ProfNormalTree_Assistant_GiveReward_Lumbridge_Text_0:
	.string "Fantastic!\p"
	.string "You've registered {STR_VAR_3}\n"
	.string "monsters!\p"
	.string "Please take these as a reward.$"
