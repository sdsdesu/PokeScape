Black_Knights_Fortress_1_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Black_Knights_Fortress_1_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Black_Knights_Fortress_1_MapScripts_MAP_SCRIPT_ON_LOAD:
	call BKF_HEAL_ZONE
	return


ITEM_BLACKKNIGHTS_FORTRESS_1::
	finditem ITEM_CABBAGE, 1
	closemessage
	end


CAUGHT_BY_BLACK_KNIGHTS::
	namebox CAUGHT_BY_BLACK_KNIGHTS_Text_0
	msgbox CAUGHT_BY_BLACK_KNIGHTS_Text_1
	closemessage
	hidenamebox
	return


POST_CAUGHT_BLACK_KNIGHTS::
	facefollower
	namebox CAUGHT_BY_BLACK_KNIGHTS_Text_0
	msgbox POST_CAUGHT_BLACK_KNIGHTS_Text_0
	closemessage
	hidenamebox
	return


TRIGGER_BLACK_KNIGHT_QUIZ_1::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Movement_InteractFACELEFT
	waitmovement 0
	goto BLACK_KNIGHT_QUIZ_1
	return


BLACK_KNIGHT_QUIZ_1::
	lockall
	applymovement 11, Movement_InteractFACEPLAYER
	waitmovement 0
	namebox BLACK_KNIGHT_QUIZ_1_Text_0
	compare VAR_BKF_QUIZ_1, 0
	goto_if_eq BLACK_KNIGHT_QUIZ_1_2
	compare VAR_BKF_QUIZ_1, 1
	goto_if_eq BLACK_KNIGHT_QUIZ_1_3
	compare VAR_BKF_QUIZ_1, 2
	goto_if_eq BLACK_KNIGHT_QUIZ_1_4
BLACK_KNIGHT_QUIZ_1_1:
	setvar VAR_TEMP_1, 1
	releaseall
	end

BLACK_KNIGHT_QUIZ_1_2:
	msgbox BLACK_KNIGHT_QUIZ_1_Text_1
	msgbox BLACK_KNIGHT_QUIZ_1_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq BLACK_KNIGHT_QUIZ_1_8
	msgbox BLACK_KNIGHT_QUIZ_1_Text_6
	closemessage
	hidenamebox
	setvar VAR_BKF_QUIZ_1, 1
	goto BLACK_KNIGHT_QUIZ_1_1

BLACK_KNIGHT_QUIZ_1_3:
	msgbox BLACK_KNIGHT_QUIZ_1_Text_7
	closemessage
	hidenamebox
	goto BLACK_KNIGHT_QUIZ_1_1

BLACK_KNIGHT_QUIZ_1_4:
	msgbox BLACK_KNIGHT_QUIZ_1_Text_8
	closemessage
	hidenamebox
	goto BLACK_KNIGHT_QUIZ_1_1

BLACK_KNIGHT_QUIZ_1_8:
	msgbox BLACK_KNIGHT_QUIZ_1_Text_3
	closemessage
	hidenamebox
	call CAUGHT_BY_BLACK_KNIGHTS
	playbgm MUS_PS_ENCOUNTER_KNIGHTS, FALSE
	trainerbattle_no_intro TRAINER_BLACKKNIGHT_LAIMP, BLACK_KNIGHT_QUIZ_1_Text_4
	namebox BLACK_KNIGHT_QUIZ_1_Text_0
	msgbox BLACK_KNIGHT_QUIZ_1_Text_5
	closemessage
	hidenamebox
	fadescreenswapbuffers FADE_TO_BLACK
	setvar VAR_BKF_QUIZ_1, 2
	setflag FLAG_TEMP_1
	removeobject 11
	fadescreenswapbuffers FADE_FROM_BLACK
	call POST_CAUGHT_BLACK_KNIGHTS
	goto BLACK_KNIGHT_QUIZ_1_1


NPC_BLACK_KNIGHT_QUIZ_2::
	msgbox NPC_BLACK_KNIGHT_QUIZ_2_Text_0
	closemessage
	hidenamebox
	release
	end


TRIGGER_BLACK_KNIGHT_QUIZ_2::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Movement_InteractFACELEFT
	waitmovement 0
	goto BLACK_KNIGHT_QUIZ_2
	return


BLACK_KNIGHT_QUIZ_2::
	lockall
	applymovement 6, Movement_InteractFACEPLAYER
	applymovement 7, Movement_InteractFACEPLAYER
	waitmovement 0
	namebox BLACK_KNIGHT_QUIZ_1_Text_0
	compare VAR_BKF_QUIZ_2, 0
	goto_if_eq BLACK_KNIGHT_QUIZ_2_2
	compare VAR_BKF_QUIZ_2, 1
	goto_if_eq BLACK_KNIGHT_QUIZ_2_3
	compare VAR_BKF_QUIZ_2, 2
	goto_if_eq BLACK_KNIGHT_QUIZ_2_4
BLACK_KNIGHT_QUIZ_2_1:
	setvar VAR_TEMP_2, 1
	releaseall
	end

BLACK_KNIGHT_QUIZ_2_2:
	msgbox BLACK_KNIGHT_QUIZ_2_Text_0
	msgbox BLACK_KNIGHT_QUIZ_2_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq BLACK_KNIGHT_QUIZ_2_8
	msgbox BLACK_KNIGHT_QUIZ_2_Text_6
	closemessage
	hidenamebox
	facefollower
	namebox CAUGHT_BY_BLACK_KNIGHTS_Text_0
	msgbox BLACK_KNIGHT_QUIZ_2_Text_7
	closemessage
	hidenamebox
	setvar VAR_BKF_QUIZ_2, 1
	goto BLACK_KNIGHT_QUIZ_2_1

BLACK_KNIGHT_QUIZ_2_3:
	msgbox BLACK_KNIGHT_QUIZ_2_Text_8
	closemessage
	hidenamebox
	goto BLACK_KNIGHT_QUIZ_2_1

BLACK_KNIGHT_QUIZ_2_4:
	msgbox BLACK_KNIGHT_QUIZ_2_Text_9
	closemessage
	hidenamebox
	goto BLACK_KNIGHT_QUIZ_2_1

BLACK_KNIGHT_QUIZ_2_8:
	hidenamebox
	facefollower
	namebox CAUGHT_BY_BLACK_KNIGHTS_Text_0
	msgbox BLACK_KNIGHT_QUIZ_2_Text_2
	closemessage
	hidenamebox
	call CAUGHT_BY_BLACK_KNIGHTS
	applymovement OBJ_EVENT_ID_PLAYER, Movement_InteractFACELEFT
	waitmovement 0
	playbgm MUS_PS_ENCOUNTER_KNIGHTS, FALSE
	trainerbattle_two_trainers TRAINER_BLACKKNIGHT_MARE, BLACK_KNIGHT_QUIZ_2_Text_3, TRAINER_BLACKKNIGHT_TEE, BLACK_KNIGHT_QUIZ_2_Text_4
	namebox BLACK_KNIGHT_QUIZ_1_Text_0
	msgbox BLACK_KNIGHT_QUIZ_2_Text_5
	closemessage
	hidenamebox
	fadescreenswapbuffers FADE_TO_BLACK
	setvar VAR_BKF_QUIZ_2, 2
	setflag FLAG_TEMP_2
	removeobject 6
	removeobject 7
	removeobject 13
	removeobject 14
	fadescreenswapbuffers FADE_FROM_BLACK
	call POST_CAUGHT_BLACK_KNIGHTS
	goto BLACK_KNIGHT_QUIZ_2_1


BKFORT_DOG::
	lock
	faceplayer
	msgbox BKFORT_DOG_Text_0
	closemessage
	release
	end


BKFORT_1F_NPC_1::
	lock
	faceplayer
	namebox BKFORT_1F_NPC_1_Text_0
	msgbox BKFORT_1F_NPC_1_Text_1
	closemessage
	hidenamebox
	release
	end


BKFORT_1F_NPC_2::
	lock
	faceplayer
	namebox BKFORT_1F_NPC_1_Text_0
	msgbox BKFORT_1F_NPC_2_Text_0
	closemessage
	hidenamebox
	release
	end


BKFORT_1F_NPC_3::
	lock
	faceplayer
	namebox BKFORT_1F_NPC_1_Text_0
	msgbox BKFORT_1F_NPC_3_Text_0
	closemessage
	hidenamebox
	release
	end


BKFORT_1F_NPC_4::
	lock
	faceplayer
	namebox BKFORT_1F_NPC_1_Text_0
	msgbox BKFORT_1F_NPC_4_Text_0
	closemessage
	hidenamebox
	release
	end


BKFORT_1F_NPC_5::
	lock
	faceplayer
	namebox BKFORT_1F_NPC_1_Text_0
	msgbox BKFORT_1F_NPC_5_Text_0
	closemessage
	hidenamebox
	release
	end


BKFORT_1F_NPC_6::
	lock
	faceplayer
	namebox BKFORT_1F_NPC_1_Text_0
	msgbox BKFORT_1F_NPC_6_Text_0
	closemessage
	hidenamebox
	release
	end


BKFORT_1F_NPC_7::
	lock
	faceplayer
	namebox BKFORT_1F_NPC_1_Text_0
	msgbox BKFORT_1F_NPC_7_Text_0
	closemessage
	hidenamebox
	release
	end


BKFORT_1F_NPC_8::
	lock
	faceplayer
	namebox BKFORT_1F_NPC_1_Text_0
	msgbox BKFORT_1F_NPC_8_Text_0
	closemessage
	hidenamebox
	release
	end


BKFORT_1F_NPC_9::
	lock
	faceplayer
	namebox BKFORT_1F_NPC_9_Text_0
	msgbox BKFORT_1F_NPC_9_Text_1
	closemessage
	hidenamebox
	release
	end


BKFORT_1F_LENSIG::
	lock
	faceplayer
	namebox BKFORT_1F_LENSIG_Text_0
	goto_if_unset FLAG_BKFORT_TRADE_1, BKFORT_1F_LENSIG_2
	msgbox BKFORT_1F_LENSIG_Text_5
BKFORT_1F_LENSIG_1:
	hidenamebox
	release
	end

BKFORT_1F_LENSIG_2:
	setvar VAR_0x8008, INGAME_TRADE_GRIFOLAPINE
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
	copyvar VAR_0x8009, VAR_RESULT
	msgbox BKFORT_1F_LENSIG_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne BKFORT_1F_LENSIG_5
	msgbox BKFORT_1F_LENSIG_Text_4
	goto BKFORT_1F_LENSIG_1

BKFORT_1F_LENSIG_5:
	special ChoosePartyMon
	waitstate
	copyvar VAR_0x800A, VAR_0x8004
	compare VAR_0x8004, 255
	goto_if_ne BKFORT_1F_LENSIG_8
	goto BKFORT_1F_LENSIG_1

BKFORT_1F_LENSIG_8:
	copyvar VAR_0x8005, VAR_0x800A
	specialvar VAR_RESULT, GetTradeSpecies
	copyvar VAR_0x800B, VAR_RESULT
	compare VAR_RESULT, VAR_0x8009
	goto_if_eq BKFORT_1F_LENSIG_10
	msgbox BKFORT_1F_LENSIG_Text_3
	goto BKFORT_1F_LENSIG_1

BKFORT_1F_LENSIG_10:
	copyvar VAR_0x8004, VAR_0x8008
	copyvar VAR_0x8005, VAR_0x800A
	special CreateInGameTradePokemon
	special DoInGameTradeScene
	waitstate
	msgbox BKFORT_1F_LENSIG_Text_2
	setflag FLAG_BKFORT_TRADE_1
	goto BKFORT_1F_LENSIG_1


BKFORT_1F_BOOK::
	lock
	msgbox BKFORT_1F_BOOK_Text_0
	closemessage
	release
	end


ITEM_BKFORT_1F_ITEM1::
	finditem ITEM_POTION_DEF
	end


ITEM_BKFORT_1F_ITEM2::
	finditem ITEM_EARTH_RUNE
	end


ITEM_BKFORT_1F_ITEM3::
	finditem ITEM_ONION
	end


TRIGGER_BKF_SIROWEN_INTRO::
	lockall
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 187
	goto_if_eq TRIGGER_BKF_SIROWEN_INTRO_2
TRIGGER_BKF_SIROWEN_INTRO_1:
	setvar VAR_TEMP_0, 1
	releaseall
	end

TRIGGER_BKF_SIROWEN_INTRO_2:
	checkfollower
	compare VAR_RESULT, 0
	goto_if_ne TRIGGER_BKF_SIROWEN_INTRO_4
	goto TRIGGER_BKF_SIROWEN_INTRO_1

TRIGGER_BKF_SIROWEN_INTRO_4:
	facefollower
	namebox CAUGHT_BY_BLACK_KNIGHTS_Text_0
	msgbox TRIGGER_BKF_SIROWEN_INTRO_Text_0
	closemessage
	hidenamebox
	setvar VAR_POKESCAPE_STORYMODE_PROGRESS, 190
	goto TRIGGER_BKF_SIROWEN_INTRO_1


TRIGGER_BKF_SIROWEN_BEDS::
	lockall
	checkfollower
	compare VAR_RESULT, 0
	goto_if_ne TRIGGER_BKF_SIROWEN_BEDS_2
TRIGGER_BKF_SIROWEN_BEDS_1:
	setvar VAR_TEMP_3, 1
	releaseall
	end

TRIGGER_BKF_SIROWEN_BEDS_2:
	facefollower
	namebox CAUGHT_BY_BLACK_KNIGHTS_Text_0
	msgbox TRIGGER_BKF_SIROWEN_BEDS_Text_0
	closemessage
	hidenamebox
	goto TRIGGER_BKF_SIROWEN_BEDS_1


CAUGHT_BY_BLACK_KNIGHTS_Text_0:
	.string "Sir Owen$"

CAUGHT_BY_BLACK_KNIGHTS_Text_1:
	.string "Our cover is blown {PLAYER}!\n"
	.string "Quick prepare for battle!$"

POST_CAUGHT_BLACK_KNIGHTS_Text_0:
	.string "Remember {PLAYER} we need to keep a\n"
	.string "low profile.\p"
	.string "So think and act like a guard for the\n"
	.string "Black Knights.$"

BLACK_KNIGHT_QUIZ_1_Text_0:
	.string "Black Knight$"

BLACK_KNIGHT_QUIZ_1_Text_1:
	.string "Stop right there!\p"
	.string "We have important guests and due to\n"
	.string "this we have increased security.\p"
	.string "You will have to answer some questions\n"
	.string "so we know you are truly loyal to our\l"
	.string "cause!!$"

BLACK_KNIGHT_QUIZ_1_Text_2:
	.string "Are Black Knights are better than White\n"
	.string "Knights?$"

BLACK_KNIGHT_QUIZ_1_Text_3:
	.string "That is Faladorian talk.\p"
	.string "Prepare for battle scum!$"

BLACK_KNIGHT_QUIZ_1_Text_4:
	.string "…$"

BLACK_KNIGHT_QUIZ_1_Text_5:
	.string "I must inform my superiors of this at\n"
	.string "once!$"

BLACK_KNIGHT_QUIZ_1_Text_6:
	.string "Correct.\n"
	.string "We are way better than those pansies.$"

BLACK_KNIGHT_QUIZ_1_Text_7:
	.string "Stop right there!\p"
	.string "Oh, it is you two again, carry on.$"

BLACK_KNIGHT_QUIZ_1_Text_8:
	.string "Stop right there!\p"
	.string "We are on high alert, I spotted some\n"
	.string "intruders recently.\p"
	.string "Have you seen any?$"

NPC_BLACK_KNIGHT_QUIZ_2_Text_0:
	.string "The Knight doesn't want to be bothered\n"
	.string "while working.$"

BLACK_KNIGHT_QUIZ_2_Text_0:
	.string "Only true Black Knights could ever be\n"
	.string "allowed to speak to the prisoners.\p"
	.string "Prove your loyalty and you may descend!$"

BLACK_KNIGHT_QUIZ_2_Text_1:
	.string "Sir Owen Sonde and Sir Tiffy Cashien\n"
	.string "smells.$"

BLACK_KNIGHT_QUIZ_2_Text_2:
	.string "Damn right we don't smell!$"

BLACK_KNIGHT_QUIZ_2_Text_3:
	.string "Mare: This is a nightmare!$"

BLACK_KNIGHT_QUIZ_2_Text_4:
	.string "Tee: I want to go to bed…$"

BLACK_KNIGHT_QUIZ_2_Text_5:
	.string "We must inform our superiors of this!\p"
	.string "Stay here until we return!$"

BLACK_KNIGHT_QUIZ_2_Text_6:
	.string "Haha, yeah, they really do. Heh.$"

BLACK_KNIGHT_QUIZ_2_Text_7:
	.string ".....\p"
	.string "{PLAYER}, something within me felt\n"
	.string "like we should have taken a loss here....$"

BLACK_KNIGHT_QUIZ_2_Text_8:
	.string "Make sure to stab the prisoners if they\n"
	.string "get too close to the bars.$"

BLACK_KNIGHT_QUIZ_2_Text_9:
	.string "Have you spotted any intruders\n"
	.string "recently?\p"
	.string "If you have be sure to stab em!$"

BKFORT_DOG_Text_0:
	.string "The dog looks at you and starts to\n"
	.string "growl.\p"
	.string "Maybe you should leave it alone.$"

BKFORT_1F_NPC_1_Text_0:
	.string "Guard$"

BKFORT_1F_NPC_1_Text_1:
	.string "Don't even think about causing any\n"
	.string "trouble today.\p"
	.string "We're on high alert!$"

BKFORT_1F_NPC_2_Text_0:
	.string "An important guest arrived not too long\n"
	.string "ago!\p"
	.string "I think he headed upstairs to have a\n"
	.string "meeting with the boss.$"

BKFORT_1F_NPC_3_Text_0:
	.string "I can't believe I did all that training\n"
	.string "and instead of fighting in a war, I'm\l"
	.string "running around trying to find a damn\l"
	.string "cabbage for a crazy person!$"

BKFORT_1F_NPC_4_Text_0:
	.string "Out of everything in Gielinor, why did\n"
	.string "they have to choose dogs as guard\l"
	.string "animals!\p"
	.string "I'm deathly allergic!$"

BKFORT_1F_NPC_5_Text_0:
	.string "I don't know if this special guest was\n"
	.string "cosplaying or just had poor fashion\l"
	.string "sense but they were dressed entirely in\l"
	.string "pink...$"

BKFORT_1F_NPC_6_Text_0:
	.string "I just really want to finish my book,\n"
	.string "and for the two characters to get their\l"
	.string "happy ever after.\p"
	.string "It has been giving me hope that one day\n"
	.string "I might have the courage to pursue my\l"
	.string "love...$"

BKFORT_1F_NPC_7_Text_0:
	.string "Don't mind me, I am just staying out of\n"
	.string "the way.\p"
	.string "That way I can't mess anything up\n"
	.string "again...$"

BKFORT_1F_NPC_8_Text_0:
	.string "I hate being posted here!\p"
	.string "I can hear the screams of the prisoners\n"
	.string "from the basement...{PAUSE 15}\p"
	.string "Just makes me really sad I'm not the one\n"
	.string "down there torturing them...$"

BKFORT_1F_NPC_9_Text_0:
	.string "Qu3stL0ck$"

BKFORT_1F_NPC_9_Text_1:
	.string "Whoever wrote this guide is an idiot!\p"
	.string "It clearly says bring a cabbage, but\n"
	.string "this witch wants a MONSTER Cabbage and\l"
	.string "not the item!\p"
	.string "I'm going to have to trek all the way\n"
	.string "back to a Bank now...$"

BKFORT_1F_LENSIG_Text_0:
	.string "Lensig$"

BKFORT_1F_LENSIG_Text_1:
	.string "That snivelling goblin is useless.\p"
	.string "If I don't get a Cabbage soon, I'll never\n"
	.string "be able to finish…\p"
	.string "Say, do you happen to have a Cabbage?\p"
	.string "Would you like to trade one for my baby\n"
	.string "Dawn?$"

BKFORT_1F_LENSIG_Text_2:
	.string "AHAHAHAHAH!\p"
	.string "YES!\p"
	.string "Finally, I can complete the ritual!$"

BKFORT_1F_LENSIG_Text_3:
	.string "Sorry, only a Cabbage can complete the\n"
	.string "ritual.$"

BKFORT_1F_LENSIG_Text_4:
	.string "I really need that Cabbage.\p"
	.string "Come back if you change your mind.$"

BKFORT_1F_LENSIG_Text_5:
	.string "The ritual?\p"
	.string "Oh, the Kinshra needed it for some silly\n"
	.string "spell.\p"
	.string "After Lord Daquarius ordered the sybil\n"
	.string "to be cooked in her own cauldron, I try\l"
	.string "and stay on their good side so I don't\l"
	.string "suffer the same fate.$"

BKFORT_1F_BOOK_Text_0:
	.string "The book tells a story of a romance\n"
	.string "between two youths from feuding\l"
	.string "families.\p"
	.string "You're sure it will have a happy ending.$"

TRIGGER_BKF_SIROWEN_INTRO_Text_0:
	.string "So this is the Black Knights Fortress.\p"
	.string "{PLAYER} we should look around and\n"
	.string "find out what their plan is.\p"
	.string "Oh and remember, let's not blow our\n"
	.string "cover otherwise we'll be in a lot of\l"
	.string "trouble.$"

TRIGGER_BKF_SIROWEN_BEDS_Text_0:
	.string "This must be their sleeping quaters.\p"
	.string "We might as well make use of it\n"
	.string "ourselves if our monsters are feeling\l"
	.string "weak.$"
