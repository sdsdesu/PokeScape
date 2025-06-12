Minigame_1_MapScripts::
	.byte 0


VOID_KNIGHT_NPC_1::
	lock
	faceplayer
	namebox VOID_KNIGHT_NPC_1_Text_0
	random 5
	switch VAR_RESULT
	case 0, VOID_KNIGHT_NPC_1_3
	case 1, VOID_KNIGHT_NPC_1_4
	case 2, VOID_KNIGHT_NPC_1_5
	case 3, VOID_KNIGHT_NPC_1_6
	case 4, VOID_KNIGHT_NPC_1_7
VOID_KNIGHT_NPC_1_1:
	closemessage
	hidenamebox
	release
	end

VOID_KNIGHT_NPC_1_3:
	msgbox VOID_KNIGHT_NPC_1_Text_1
	goto VOID_KNIGHT_NPC_1_1

VOID_KNIGHT_NPC_1_4:
	msgbox VOID_KNIGHT_NPC_1_Text_2
	goto VOID_KNIGHT_NPC_1_1

VOID_KNIGHT_NPC_1_5:
	msgbox VOID_KNIGHT_NPC_1_Text_3
	goto VOID_KNIGHT_NPC_1_1

VOID_KNIGHT_NPC_1_6:
	msgbox VOID_KNIGHT_NPC_1_Text_4
	goto VOID_KNIGHT_NPC_1_1

VOID_KNIGHT_NPC_1_7:
	msgbox VOID_KNIGHT_NPC_1_Text_5
	goto VOID_KNIGHT_NPC_1_1


VOID_KNIGHT_NPC_2::
	lock
	faceplayer
	namebox VOID_KNIGHT_NPC_1_Text_0
	msgbox VOID_KNIGHT_NPC_2_Text_0
	hidenamebox
	closemessage
	release
	end


VOID_KNIGHT_NPC_3::
	lock
	faceplayer
	namebox VOID_KNIGHT_NPC_1_Text_0
	msgbox VOID_KNIGHT_NPC_2_Text_0
	hidenamebox
	closemessage
	release
	end


VOID_KNIGHT_NPC_4::
	lock
	faceplayer
	namebox VOID_KNIGHT_NPC_1_Text_0
	msgbox VOID_KNIGHT_NPC_2_Text_0
	hidenamebox
	closemessage
	release
	end


VOID_KNIGHT_NPC_5::
	lock
	faceplayer
	namebox VOID_KNIGHT_NPC_1_Text_0
	msgbox VOID_KNIGHT_NPC_2_Text_0
	hidenamebox
	closemessage
	release
	end


VOID_KNIGHT_NPC_6::
	lock
	faceplayer
	namebox VOID_KNIGHT_NPC_1_Text_0
	msgbox VOID_KNIGHT_NPC_2_Text_0
	hidenamebox
	closemessage
	release
	end


VOID_KNIGHT_NPC_1_Text_0:
	.string "Void Knight$"

VOID_KNIGHT_NPC_1_Text_1:
	.string "The purple, western portal shield is\n"
	.string "down!$"

VOID_KNIGHT_NPC_1_Text_2:
	.string "The blue, eastern portal shield is down!$"

VOID_KNIGHT_NPC_1_Text_3:
	.string "The yellow, south-eastern portal shield\n"
	.string "is down!$"

VOID_KNIGHT_NPC_1_Text_4:
	.string "The red, south-western portal shield is\n"
	.string "down!$"

VOID_KNIGHT_NPC_1_Text_5:
	.string "So many monsters...!\p"
	.string "We cannot let them escape this island!$"

VOID_KNIGHT_NPC_2_Text_0:
	.string "I am a Cupholder.$"
