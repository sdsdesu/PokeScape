Lumbridge_Castle_Basement_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Lumbridge_Castle_Basement_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Lumbridge_Castle_Basement_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 1
	return


NPC_FROGEEL::
	lock
	faceplayer
	namebox NPC_FROGEEL_Text_0
	msgbox NPC_FROGEEL_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_LumbridgeBasement_Demonheadge::
	lock
	faceplayer
	namebox NPC_LumbridgeBasement_Demonheadge_Text_0
	msgbox NPC_LumbridgeBasement_Demonheadge_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_LumbridgeBasement_Item::
	lock
	faceplayer
	msgbox NPC_LumbridgeBasement_Item_Text_0
	waitmessage
	release
	end


DEMONHEADGE_BLOCK::
	lock
	applymovement 5, Movement_InteractFACEDOWN
	waitmovement 0
	namebox NPC_LumbridgeBasement_Demonheadge_Text_0
	msgbox DEMONHEADGE_BLOCK_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne DEMONHEADGE_BLOCK_2
	msgbox DEMONHEADGE_BLOCK_Text_10
	closemessage
	hidenamebox
	applymovement 5, Movement_InteractFACERIGHT
	applymovement OBJ_EVENT_ID_PLAYER, movement_DEMON_BLOCK
	waitmovement 0
	release
	end

	release
	end

DEMONHEADGE_BLOCK_2:
	msgbox DEMONHEADGE_BLOCK_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne DEMONHEADGE_BLOCK_5
	msgbox DEMONHEADGE_BLOCK_Text_9
	closemessage
	hidenamebox
	applymovement 5, Movement_InteractFACERIGHT
	applymovement OBJ_EVENT_ID_PLAYER, movement_DEMON_BLOCK
	waitmovement 0
	release
	end

DEMONHEADGE_BLOCK_5:
	msgbox DEMONHEADGE_BLOCK_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne DEMONHEADGE_BLOCK_8
	msgbox DEMONHEADGE_BLOCK_Text_8
	closemessage
	applymovement 5, Movement_InteractFACERIGHT
	applymovement OBJ_EVENT_ID_PLAYER, movement_DEMON_BLOCK
	waitmovement 0
	hidenamebox
	release
	end

DEMONHEADGE_BLOCK_8:
	msgbox DEMONHEADGE_BLOCK_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne DEMONHEADGE_BLOCK_11
	msgbox DEMONHEADGE_BLOCK_Text_7
	closemessage
	hidenamebox
	applymovement 5, Movement_InteractFACERIGHT
	applymovement OBJ_EVENT_ID_PLAYER, movement_DEMON_BLOCK
	waitmovement 0
	release
	end

DEMONHEADGE_BLOCK_11:
	msgbox DEMONHEADGE_BLOCK_Text_4, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne DEMONHEADGE_BLOCK_14
	msgbox DEMONHEADGE_BLOCK_Text_6
	closemessage
	hidenamebox
	applymovement 5, Movement_InteractFACERIGHT
	applymovement OBJ_EVENT_ID_PLAYER, movement_DEMON_BLOCK
	waitmovement 0
	release
	end

DEMONHEADGE_BLOCK_14:
	msgbox DEMONHEADGE_BLOCK_Text_5
	closemessage
	hidenamebox
	applymovement 5, Movement_InteractFACERIGHT
	applymovement OBJ_EVENT_ID_PLAYER, movement_DEMON_BLOCK
	waitmovement 0
	release
	end


movement_DEMON_BLOCK:
	walk_left
	step_end

NPC_FROGEEL_Text_0:
	.string "FROGEEL$"

NPC_FROGEEL_Text_1:
	.string "AAAAAAAAAAAA!$"

NPC_LumbridgeBasement_Demonheadge_Text_0:
	.string "Demonheadge$"

NPC_LumbridgeBasement_Demonheadge_Text_1:
	.string "Hi there, I hope you enjoy playing\n"
	.string "PokeScape.\p"
	.string "Just so you know this portal leads to\n"
	.string "my beta testing area.\p"
	.string "Please do not attempt to enter it!\p"
	.string "I do highly recommend playing through\n"
	.string "the beta normally before even thinking\l"
	.string "about going in there.$"

NPC_LumbridgeBasement_Item_Text_0:
	.string "Demonheadge seems to be using this\n"
	.string "pouch to store future content.$"

DEMONHEADGE_BLOCK_Text_0:
	.string "Are you trying to go through my portal?$"

DEMONHEADGE_BLOCK_Text_1:
	.string "Are you sure you want to do that?$"

DEMONHEADGE_BLOCK_Text_2:
	.string "Are you REALLY sure going in there is a\n"
	.string "good idea?$"

DEMONHEADGE_BLOCK_Text_3:
	.string "Are you actually reading these or are\n"
	.string "you just mashing the same button to\l"
	.string "get through my dialogue?$"

DEMONHEADGE_BLOCK_Text_4:
	.string "Okay, so just to confirm, you don't want\n"
	.string "to go through this ominous portal?$"

DEMONHEADGE_BLOCK_Text_5:
	.string "Good, I'm glad you agree that you don't\n"
	.string "want to go in.\p"
	.string "Now, please leave me as I have to think\n"
	.string "of more new stuff to add to\l"
	.string "procrastinate finishing the story.$"

DEMONHEADGE_BLOCK_Text_6:
	.string "I'm sorry! Despite your persistence,\n"
	.string "that portal is still off-limits to\l"
	.string "everybody.\p"
	.string "Now, please leave me as I have to think\n"
	.string "of more new stuff to add to\l"
	.string "procrastinate finishing the story.$"

DEMONHEADGE_BLOCK_Text_7:
	.string "Maybe if you paid attention to what you\n"
	.string "were reading, you'd realise that the\l"
	.string "portal is off-limits to everybody.\p"
	.string "No exceptions!\p"
	.string "Now, please leave me as I have to think\n"
	.string "of more new stuff to add to\l"
	.string "procrastinate finishing the story.$"

DEMONHEADGE_BLOCK_Text_8:
	.string "You're right, it really isn't!\p"
	.string "Now, please leave me as I have to think\n"
	.string "of more new stuff to add to\l"
	.string "procrastinate finishing the story.$"

DEMONHEADGE_BLOCK_Text_9:
	.string "That's sensible. You're much safer this\n"
	.string "side of it.\p"
	.string "Now, please leave me as I have to think\n"
	.string "of more new stuff to add to\l"
	.string "procrastinate finishing the story.$"

DEMONHEADGE_BLOCK_Text_10:
	.string "That's good, because that portal is\n"
	.string "off-limits to everybody.\p"
	.string "Now, please leave me as I have to think\n"
	.string "of more new stuff to add to\l"
	.string "procrastinate finishing the story.$"
