Dwarven_Mines_House_1_MapScripts::
	.byte 0


NPC_Dwarven_Mines_House_1::
	lock
	faceplayer
	namebox NPC_Dwarven_Mines_House_1_Text_0
	msgbox NPC_Dwarven_Mines_House_1_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_Dwarven_Mines_House_3::
	lock
	faceplayer
	namebox NPC_Dwarven_Mines_House_3_Text_0
	msgbox NPC_Dwarven_Mines_House_3_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_Dwarven_Mines_House_4::
	lock
	faceplayer
	namebox NPC_Dwarven_Mines_House_3_Text_0
	msgbox NPC_Dwarven_Mines_House_4_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_Dwarven_Mines_House_5::
	lock
	faceplayer
	namebox NPC_Dwarven_Mines_House_3_Text_0
	msgbox NPC_Dwarven_Mines_House_5_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_Dwarven_Mines_House_6::
	lock
	faceplayer
	namebox NPC_Dwarven_Mines_House_6_Text_0
	msgbox NPC_Dwarven_Mines_House_6_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_Dwarven_Mines_House_7::
	lock
	faceplayer
	namebox NPC_Dwarven_Mines_House_3_Text_0
	msgbox NPC_Dwarven_Mines_House_7_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_Dwarven_Mines_House_8::
	lock
	faceplayer
	namebox NPC_Dwarven_Mines_House_1_Text_0
	msgbox NPC_Dwarven_Mines_House_8_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_Dwarven_Mines_House_9::
	lock
	faceplayer
	namebox NPC_Dwarven_Mines_House_3_Text_0
	msgbox NPC_Dwarven_Mines_House_9_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_Dwarven_Mines_House_10::
	lock
	faceplayer
	namebox NPC_Dwarven_Mines_House_3_Text_0
	msgbox NPC_Dwarven_Mines_House_10_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_Dwarven_Mines_House_11::
	lock
	faceplayer
	namebox NPC_Dwarven_Mines_House_3_Text_0
	msgbox NPC_Dwarven_Mines_House_11_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_Dwarven_Mines_House_12::
	lock
	faceplayer
	namebox NPC_Dwarven_Mines_House_12_Text_0
	compare VAR_DWARVEN_MINES_STATE, 0
	goto_if_eq NPC_Dwarven_Mines_House_12_2
	compare VAR_DWARVEN_MINES_STATE, 5
	goto_if_eq NPC_Dwarven_Mines_House_12_3
	compare VAR_DWARVEN_MINES_STATE, 10
	goto_if_eq NPC_Dwarven_Mines_House_12_4
NPC_Dwarven_Mines_House_12_1:
	closemessage
	hidenamebox
	release
	end

NPC_Dwarven_Mines_House_12_2:
	msgbox NPC_Dwarven_Mines_House_12_Text_1
	msgbox NPC_Dwarven_Mines_House_12_Text_2
	msgbox NPC_Dwarven_Mines_House_12_Text_3
	msgbox NPC_Dwarven_Mines_House_12_Text_4
	setvar VAR_DWARVEN_MINES_STATE, 5
	goto NPC_Dwarven_Mines_House_12_1

NPC_Dwarven_Mines_House_12_3:
	msgbox NPC_Dwarven_Mines_House_12_Text_5
	goto NPC_Dwarven_Mines_House_12_1

NPC_Dwarven_Mines_House_12_4:
	msgbox NPC_Dwarven_Mines_House_12_Text_6
	goto NPC_Dwarven_Mines_House_12_1


NPC_BABY_DRAGON::
	random 6
	switch VAR_RESULT
	case 0, NPC_BABY_DRAGON_3
	case 1, NPC_BABY_DRAGON_4
	case 2, NPC_BABY_DRAGON_5
	case 3, NPC_BABY_DRAGON_6
	case 4, NPC_BABY_DRAGON_7
	case 5, NPC_BABY_DRAGON_8
	release
	end

NPC_BABY_DRAGON_3:
	lock
	faceplayer
	namebox NPC_BABY_DRAGON_Text_0
	msgbox NPC_BABY_DRAGON_Text_1
	hidenamebox
	release
	end

NPC_BABY_DRAGON_4:
	lock
	faceplayer
	namebox NPC_BABY_DRAGON_Text_0
	msgbox NPC_BABY_DRAGON_Text_2
	hidenamebox
	release
	end

NPC_BABY_DRAGON_5:
	lock
	faceplayer
	namebox NPC_BABY_DRAGON_Text_0
	msgbox NPC_BABY_DRAGON_Text_3
	hidenamebox
	release
	end

NPC_BABY_DRAGON_6:
	lock
	faceplayer
	msgbox NPC_BABY_DRAGON_Text_4
	release
	end

NPC_BABY_DRAGON_7:
	lock
	faceplayer
	msgbox NPC_BABY_DRAGON_Text_5
	release
	end

NPC_BABY_DRAGON_8:
	lock
	faceplayer
	msgbox NPC_BABY_DRAGON_Text_6
	release
	end


NPC_CLOCKWORK_CAT::
	random 4
	switch VAR_RESULT
	case 0, NPC_CLOCKWORK_CAT_3
	case 1, NPC_CLOCKWORK_CAT_4
	case 2, NPC_CLOCKWORK_CAT_5
	case 3, NPC_CLOCKWORK_CAT_6
	release
	end

NPC_CLOCKWORK_CAT_3:
	lock
	faceplayer
	namebox NPC_CLOCKWORK_CAT_Text_0
	msgbox NPC_CLOCKWORK_CAT_Text_1
	hidenamebox
	release
	end

NPC_CLOCKWORK_CAT_4:
	lock
	faceplayer
	namebox NPC_CLOCKWORK_CAT_Text_0
	msgbox NPC_CLOCKWORK_CAT_Text_2
	hidenamebox
	release
	end

NPC_CLOCKWORK_CAT_5:
	lock
	faceplayer
	namebox NPC_CLOCKWORK_CAT_Text_0
	msgbox NPC_CLOCKWORK_CAT_Text_3
	hidenamebox
	release
	end

NPC_CLOCKWORK_CAT_6:
	lock
	faceplayer
	msgbox NPC_CLOCKWORK_CAT_Text_4
	release
	end


BATTLE_DWARVEN_MINES_HOUSE_1::
	trainerbattle_single TRAINER_DWARVENMINES_HOUSE_1, BATTLE_DWARVEN_MINES_HOUSE_1_Text_0, BATTLE_DWARVEN_MINES_HOUSE_1_Text_1
	namebox BATTLE_DWARVEN_MINES_HOUSE_1_Text_2
	msgbox BATTLE_DWARVEN_MINES_HOUSE_1_Text_3
	hidenamebox
	release
	end


BATTLE_DWARVEN_MINES_HOUSE_2::
	namebox BATTLE_DWARVEN_MINES_HOUSE_2_Text_0
	msgbox BATTLE_DWARVEN_MINES_HOUSE_2_Text_1
	hidenamebox
	release
	end


BATTLE_DWARVEN_MINES_HOUSE_3::
	trainerbattle_single TRAINER_DWARVENMINES_HOUSE_3, BATTLE_DWARVEN_MINES_HOUSE_3_Text_0, BATTLE_DWARVEN_MINES_HOUSE_3_Text_1
	namebox BATTLE_DWARVEN_MINES_HOUSE_3_Text_2
	msgbox BATTLE_DWARVEN_MINES_HOUSE_3_Text_3
	hidenamebox
	release
	end


BATTLE_DWARVEN_MINES_HOUSE_4::
	trainerbattle_single TRAINER_DWARVENMINES_HOUSE_4, BATTLE_DWARVEN_MINES_HOUSE_4_Text_0, BATTLE_DWARVEN_MINES_HOUSE_4_Text_1
	namebox BATTLE_DWARVEN_MINES_HOUSE_4_Text_2
	msgbox BATTLE_DWARVEN_MINES_HOUSE_4_Text_3
	hidenamebox
	release
	end


NPC_Dwarven_Mines_House_2::
	trainerbattle_single TRAINER_DWARVENMINES_HOUSE_2, NPC_Dwarven_Mines_House_2_Text_0, NPC_Dwarven_Mines_House_2_Text_1
	namebox NPC_Dwarven_Mines_House_2_Text_2
	msgbox NPC_Dwarven_Mines_House_2_Text_3
	closemessage
	hidenamebox
	release
	end


NPC_Dwarven_Mines_House_1_Text_0:
	.string "Miner$"

NPC_Dwarven_Mines_House_1_Text_1:
	.string "Nulodion's office is through here.$"

NPC_Dwarven_Mines_House_3_Text_0:
	.string "Dwarf$"

NPC_Dwarven_Mines_House_3_Text_1:
	.string "We harness the fire from baby dragons\n"
	.string "to fuel our forges.\p"
	.string "{PAUSE 15}Do you know how difficult it is to try\n"
	.string "and tame an adult dragon?!$"

NPC_Dwarven_Mines_House_4_Text_0:
	.string "Sorry this elevator is currently under\n"
	.string "repair.\p"
	.string "Those blasted scorpions have damaged\n"
	.string "the wiring!$"

NPC_Dwarven_Mines_House_5_Text_0:
	.string "Unfortunately, these forges don't get\n"
	.string "quite as hot as the Blast Furnace in\l"
	.string "Keldagrim.\p"
	.string "They involve a lot less manual labour\n"
	.string "though!$"

NPC_Dwarven_Mines_House_6_Text_0:
	.string "Smith$"

NPC_Dwarven_Mines_House_6_Text_1:
	.string "It is a bit scary working side by side\n"
	.string "with dragons…\p"
	.string "But these babies can't fly, so I am safe\n"
	.string "as long as I work up here!$"

NPC_Dwarven_Mines_House_7_Text_0:
	.string "We work hard repairing broken\n"
	.string "multicannons here.\p"
	.string "Considering how good dwarven\n"
	.string "engineering is, they break surprisingly\l"
	.string "often.\p"
	.string "I guess that's the drawback of such\n"
	.string "intricate machinery.$"

NPC_Dwarven_Mines_House_8_Text_0:
	.string "I used to spend all day in the\n"
	.string "Motherlode Mine, but Nulodion recruited\l"
	.string "me to help provide the ores for his\l"
	.string "workshop.$"

NPC_Dwarven_Mines_House_9_Text_0:
	.string "There are rumours of an ancient\n"
	.string "civilization of dwarves that used to\l"
	.string "live in these mountains, but I've lived\l"
	.string "here my whole life and never seen\l"
	.string "anyone but us!$"

NPC_Dwarven_Mines_House_10_Text_0:
	.string "Why are dwarves only ever smiths or\n"
	.string "miners?\p"
	.string "I've always wanted to be a famous chef…$"

NPC_Dwarven_Mines_House_11_Text_0:
	.string "Training to be a dwarf engineer sure\n"
	.string "beats spending every day down in the\l"
	.string "mines.$"

NPC_Dwarven_Mines_House_12_Text_0:
	.string "Nulodion$"

NPC_Dwarven_Mines_House_12_Text_1:
	.string "Urgh, just what I needed another\n"
	.string "inconvenience.\p"
	.string "If only I had someone capable of\n"
	.string "getting rid of those scorpions…$"

NPC_Dwarven_Mines_House_12_Text_2:
	.string "What's this mate?\p"
	.string "You reckon you could handle some little\n"
	.string "scorpions?\p"
	.string "Bahaha be my guest, if you can get rid\n"
	.string "of them, then I will reward you.\p"
	.string "You can find them on the lowest floor\n"
	.string "of our power station.$"

NPC_Dwarven_Mines_House_12_Text_3:
	.string "Here take this.$"

NPC_Dwarven_Mines_House_12_Text_4:
	.string "That key will grant you access to the\n"
	.string "backdoor in the Dwarven Mines below us.\p"
	.string "I would usually send workers down our\n"
	.string "elevator but that is out of order, so\l"
	.string "you'll have to take the long way around.$"

NPC_Dwarven_Mines_House_12_Text_5:
	.string "You'll have to go through the\n"
	.string "underground mines to get to the\l"
	.string "backdoor for the powerstation.\p"
	.string "There is a ladder outside that will take\n"
	.string "you down.$"

NPC_Dwarven_Mines_House_12_Text_6:
	.string "So you found the backdoor, fantastic!\n"
	.string "ow all you need to do is go get rid of\l"
	.string "those scorpions.$"

NPC_BABY_DRAGON_Text_0:
	.string "Baby Dragon$"

NPC_BABY_DRAGON_Text_1:
	.string "Hiss!$"

NPC_BABY_DRAGON_Text_2:
	.string "GrrrRRRR!$"

NPC_BABY_DRAGON_Text_3:
	.string "Raaaah!$"

NPC_BABY_DRAGON_Text_4:
	.string "The baby dragon tries to breath fire on\n"
	.string "you, but can't quite manage it.$"

NPC_BABY_DRAGON_Text_5:
	.string "The baby dragon lets out a high pitched\n"
	.string "screech that you can feel in your\l"
	.string "bones.$"

NPC_BABY_DRAGON_Text_6:
	.string "The baby dragon growls aggressively at\n"
	.string "you and bares its teeth.$"

NPC_CLOCKWORK_CAT_Text_0:
	.string "Clockwork Cat$"

NPC_CLOCKWORK_CAT_Text_1:
	.string "Click!$"

NPC_CLOCKWORK_CAT_Text_2:
	.string "Click click!$"

NPC_CLOCKWORK_CAT_Text_3:
	.string "Whirrr!$"

NPC_CLOCKWORK_CAT_Text_4:
	.string "You can hear the ticking of the\n"
	.string "clockwork mechanism inside the cat.$"

BATTLE_DWARVEN_MINES_HOUSE_1_Text_0:
	.string "You here to entertain me in my break?$"

BATTLE_DWARVEN_MINES_HOUSE_1_Text_1:
	.string "It's over already?$"

BATTLE_DWARVEN_MINES_HOUSE_1_Text_2:
	.string "Gunnar$"

BATTLE_DWARVEN_MINES_HOUSE_1_Text_3:
	.string "My break is up, leave the premises.$"

BATTLE_DWARVEN_MINES_HOUSE_2_Text_0:
	.string "Nikolai$"

BATTLE_DWARVEN_MINES_HOUSE_2_Text_1:
	.string "Outta 'ere! Ima workin' 'ere!$"

BATTLE_DWARVEN_MINES_HOUSE_3_Text_0:
	.string "Hey! You're not even wearing a helmet!$"

BATTLE_DWARVEN_MINES_HOUSE_3_Text_1:
	.string "Even a helmet couldn't save me…$"

BATTLE_DWARVEN_MINES_HOUSE_3_Text_2:
	.string "Fredrik$"

BATTLE_DWARVEN_MINES_HOUSE_3_Text_3:
	.string "You have to wear a helmet when you are\n"
	.string "in the factory.\p"
	.string "Otherwise people will see you are bald.$"

BATTLE_DWARVEN_MINES_HOUSE_4_Text_0:
	.string "Watch out mate, this is a work place!$"

BATTLE_DWARVEN_MINES_HOUSE_4_Text_1:
	.string "This is why we need more safety\n"
	.string "regulations!$"

BATTLE_DWARVEN_MINES_HOUSE_4_Text_2:
	.string "Erifun$"

BATTLE_DWARVEN_MINES_HOUSE_4_Text_3:
	.string "I swear there are like a million safety\n"
	.string "regulations being broken here.$"

NPC_Dwarven_Mines_House_2_Text_0:
	.string "Stop!\p"
	.string "It's hammer time!$"

NPC_Dwarven_Mines_House_2_Text_1:
	.string "Guess I better get back to work.$"

NPC_Dwarven_Mines_House_2_Text_2:
	.string "McSmelter17$"

NPC_Dwarven_Mines_House_2_Text_3:
	.string "For a long time, people used to think\n"
	.string "that runite was the best metal\l"
	.string "available in Gielinor.\p"
	.string "However, with more recent discoveries\n"
	.string "there are even more types of ore to\l"
	.string "smelt bars from.$"
