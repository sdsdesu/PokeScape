Route36_MapScripts::
	.byte 0


DUCK_NPC::
	lock
	faceplayer
	namebox DUCK_NPC_Text_0
	random 6
	switch VAR_RESULT
	case 0, DUCK_NPC_3
	case 1, DUCK_NPC_4
	case 2, DUCK_NPC_5
	case 3, DUCK_NPC_6
	case 4, DUCK_NPC_7
	case 5, DUCK_NPC_8
DUCK_NPC_1:
	hidenamebox
	closemessage
	release
	end

DUCK_NPC_3:
	msgbox DUCK_NPC_Text_1
	goto DUCK_NPC_1

DUCK_NPC_4:
	msgbox DUCK_NPC_Text_2
	goto DUCK_NPC_1

DUCK_NPC_5:
	msgbox DUCK_NPC_Text_3
	goto DUCK_NPC_1

DUCK_NPC_6:
	msgbox DUCK_NPC_Text_4
	goto DUCK_NPC_1

DUCK_NPC_7:
	msgbox DUCK_NPC_Text_5
	goto DUCK_NPC_1

DUCK_NPC_8:
	msgbox DUCK_NPC_Text_6
	goto DUCK_NPC_1


BATTLE_ROUTE36_RIVER_TRAINER_1::
	trainerbattle_single TRAINER_ROUTE36_RIVER_TRAINER_1, BATTLE_ROUTE36_RIVER_TRAINER_1_Text_0, BATTLE_ROUTE36_RIVER_TRAINER_1_Text_1
	namebox BATTLE_ROUTE36_RIVER_TRAINER_1_Text_2
	msgbox BATTLE_ROUTE36_RIVER_TRAINER_1_Text_1
	hidenamebox
	closemessage
	release
	end


DUCK_NPC_Text_0:
	.string "CygnetRing$"

DUCK_NPC_Text_1:
	.string "Did you come here because you like\n"
	.string "ducks too?\p"
	.string "If you teach one GROWTH it'll evolve\n"
	.string "into something SUPER cool.$"

DUCK_NPC_Text_2:
	.string "Did you come here because you like\n"
	.string "ducks too?\p"
	.string "If you use a BODY RUNE on one it'll\n"
	.string "evolve into something SUPER cool.$"

DUCK_NPC_Text_3:
	.string "Did you come here because you like\n"
	.string "ducks too?\p"
	.string "If you level one up underground, it'll\n"
	.string "start riding a cart.\p"
	.string "{PAUSE 15}Don't ask me where it gets one from\n"
	.string "though.\p"
	.string "Does it steal it?$"

DUCK_NPC_Text_4:
	.string "Did you come here because you like\n"
	.string "ducks too?\p"
	.string "If you level one up while also having an\n"
	.string "EXORAXE in your party, it'll start riding\l"
	.string "a cart.\p"
	.string "{PAUSE 15}Don't ask me where it gets one from\n"
	.string "though.\p"
	.string "Is it possessed like the EXORAXE?$"

DUCK_NPC_Text_5:
	.string "Did you come here because you like\n"
	.string "ducks too?\p"
	.string "If you use a LAW RUNE on one, it'll start\n"
	.string "riding a cart.\p"
	.string "{PAUSE 15}Don't ask me where it gets one from\n"
	.string "though.\p"
	.string "Must be the magic from the rune!$"

DUCK_NPC_Text_6:
	.string "Did you come here because you like\n"
	.string "ducks too?\p"
	.string "Be careful not to wait to evolve your\n"
	.string "DUCKLING until it really loves you, else\l"
	.string "it'll turn into a blasted SWAN!\p"
	.string "Vicious things!\p"
	.string "They're not birds, they're demons in\n"
	.string "disguise!\p"
	.string "{PAUSE 15}Don't believe me?\p"
	.string "Try having a SWAN and an IMP in your\n"
	.string "party and see what happens...\p"
	.string "Don't say I didn't warn you!!$"

BATTLE_ROUTE36_RIVER_TRAINER_1_Text_0:
	.string "You've got to be careful, there are a\n"
	.string "lot of rocks and people on boats willing\l"
	.string "to fight you here!$"

BATTLE_ROUTE36_RIVER_TRAINER_1_Text_1:
	.string "Stay safe friend.$"

BATTLE_ROUTE36_RIVER_TRAINER_1_Text_2:
	.string "ManFr3nds$"
