Zemouregalsbase_BF2_MapScripts::
	.byte 0


BATTLE_ZEMOUREGALBASE_ZOMBIECHEF::
	trainerbattle_single TRAINER_ZEMOUREGAL_BASE_ZOMBIECHEF, BATTLE_ZEMOUREGALBASE_ZOMBIECHEF_Text_0, BATTLE_ZEMOUREGALBASE_ZOMBIECHEF_Text_1
	namebox BATTLE_ZEMOUREGALBASE_ZOMBIECHEF_Text_2
	faceplayer
	msgbox BATTLE_ZEMOUREGALBASE_ZOMBIECHEF_Text_3
	closemessage
	return


ITEM_ZEMOUREGALBASE_ITEM_3::
	finditem ITEM_CABBAGE
	end


zemouregal_wizard_1::
	lockall
	faceplayer
	random 3
	switch VAR_RESULT
	case 0, zemouregal_wizard_1_3
	case 1, zemouregal_wizard_1_4
	case 2, zemouregal_wizard_1_5
	case 3, zemouregal_wizard_1_6
	releaseall
	return

zemouregal_wizard_1_3:
	namebox zemouregal_wizard_1_Text_0
	msgbox zemouregal_wizard_1_Text_1
	closemessage
	end

zemouregal_wizard_1_4:
	namebox zemouregal_wizard_1_Text_0
	msgbox zemouregal_wizard_1_Text_2
	closemessage
	end

zemouregal_wizard_1_5:
	namebox zemouregal_wizard_1_Text_0
	msgbox zemouregal_wizard_1_Text_3
	closemessage
	end

zemouregal_wizard_1_6:
	namebox zemouregal_wizard_1_Text_0
	msgbox zemouregal_wizard_1_Text_4
	closemessage
	end


zemouregal_wizard_2::
	lockall
	faceplayer
	namebox zemouregal_wizard_2_Text_0
	msgbox zemouregal_wizard_2_Text_1
	closemessage
	releaseall
	return


zemouregal_wizard_3::
	lockall
	faceplayer
	namebox zemouregal_wizard_3_Text_0
	msgbox zemouregal_wizard_3_Text_1
	closemessage
	releaseall
	return


zemouregal_wizard_4::
	lockall
	faceplayer
	namebox zemouregal_wizard_4_Text_0
	msgbox zemouregal_wizard_4_Text_1
	closemessage
	releaseall
	return


zemouregal_wizard_5::
	lockall
	faceplayer
	namebox zemouregal_wizard_5_Text_0
	msgbox zemouregal_wizard_5_Text_1
	closemessage
	releaseall
	return


zemouregal_wizard_6::
	lockall
	faceplayer
	namebox zemouregal_wizard_6_Text_0
	msgbox zemouregal_wizard_6_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne zemouregal_wizard_6_2
	namebox zemouregal_wizard_6_Text_0
	msgbox zemouregal_wizard_6_Text_4
zemouregal_wizard_6_1:
	closemessage
	releaseall
	return

zemouregal_wizard_6_2:
	namebox zemouregal_wizard_6_Text_0
	msgbox zemouregal_wizard_6_Text_2
	msgbox zemouregal_wizard_6_Text_3
	goto zemouregal_wizard_6_1


Zemouregal_statue::
	lockall
	msgbox Zemouregal_statue_Text_0
	closemessage
	releaseall
	return


Zemouregal_Book_InfernalSource::
	lockall
	msgbox Zemouregal_Book_InfernalSource_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne Zemouregal_Book_InfernalSource_2
Zemouregal_Book_InfernalSource_1:
	releaseall
	return

Zemouregal_Book_InfernalSource_2:
	msgbox Zemouregal_Book_InfernalSource_Text_1
	msgbox Zemouregal_Book_InfernalSource_Text_2
	msgbox Zemouregal_Book_InfernalSource_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne Zemouregal_Book_InfernalSource_4
	goto Zemouregal_Book_InfernalSource_1

Zemouregal_Book_InfernalSource_4:
	msgbox Zemouregal_Book_InfernalSource_Text_4
	msgbox Zemouregal_Book_InfernalSource_Text_5
	msgbox Zemouregal_Book_InfernalSource_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne Zemouregal_Book_InfernalSource_6
	goto Zemouregal_Book_InfernalSource_1

Zemouregal_Book_InfernalSource_6:
	msgbox Zemouregal_Book_InfernalSource_Text_6
	msgbox Zemouregal_Book_InfernalSource_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne Zemouregal_Book_InfernalSource_8
	goto Zemouregal_Book_InfernalSource_1

Zemouregal_Book_InfernalSource_8:
	msgbox Zemouregal_Book_InfernalSource_Text_7
	msgbox Zemouregal_Book_InfernalSource_Text_8
	msgbox Zemouregal_Book_InfernalSource_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne Zemouregal_Book_InfernalSource_10
	goto Zemouregal_Book_InfernalSource_1

Zemouregal_Book_InfernalSource_10:
	msgbox Zemouregal_Book_InfernalSource_Text_9
	msgbox Zemouregal_Book_InfernalSource_Text_10
	msgbox Zemouregal_Book_InfernalSource_Text_11
	goto Zemouregal_Book_InfernalSource_1


Zemouregal_Book_IsleOfSouls::
	lockall
	msgbox Zemouregal_Book_IsleOfSouls_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne Zemouregal_Book_IsleOfSouls_2
Zemouregal_Book_IsleOfSouls_1:
	releaseall
	return

Zemouregal_Book_IsleOfSouls_2:
	msgbox Zemouregal_Book_IsleOfSouls_Text_1
	msgbox Zemouregal_Book_IsleOfSouls_Text_2
	msgbox Zemouregal_Book_InfernalSource_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne Zemouregal_Book_IsleOfSouls_4
	goto Zemouregal_Book_IsleOfSouls_1

Zemouregal_Book_IsleOfSouls_4:
	msgbox Zemouregal_Book_IsleOfSouls_Text_3
	msgbox Zemouregal_Book_IsleOfSouls_Text_4
	msgbox Zemouregal_Book_InfernalSource_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne Zemouregal_Book_IsleOfSouls_6
	goto Zemouregal_Book_IsleOfSouls_1

Zemouregal_Book_IsleOfSouls_6:
	msgbox Zemouregal_Book_IsleOfSouls_Text_5
	msgbox Zemouregal_Book_IsleOfSouls_Text_6
	msgbox Zemouregal_Book_InfernalSource_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne Zemouregal_Book_IsleOfSouls_8
	goto Zemouregal_Book_IsleOfSouls_1

Zemouregal_Book_IsleOfSouls_8:
	msgbox Zemouregal_Book_IsleOfSouls_Text_7
	msgbox Zemouregal_Book_IsleOfSouls_Text_8
	goto Zemouregal_Book_IsleOfSouls_1


Zemouregal_Book_DarkAltar::
	lockall
	msgbox Zemouregal_Book_DarkAltar_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne Zemouregal_Book_DarkAltar_2
Zemouregal_Book_DarkAltar_1:
	releaseall
	return

Zemouregal_Book_DarkAltar_2:
	msgbox Zemouregal_Book_DarkAltar_Text_1
	msgbox Zemouregal_Book_InfernalSource_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne Zemouregal_Book_DarkAltar_4
	goto Zemouregal_Book_DarkAltar_1

Zemouregal_Book_DarkAltar_4:
	msgbox Zemouregal_Book_DarkAltar_Text_2
	msgbox Zemouregal_Book_DarkAltar_Text_3
	msgbox Zemouregal_Book_DarkAltar_Text_4
	msgbox Zemouregal_Book_InfernalSource_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne Zemouregal_Book_DarkAltar_6
	goto Zemouregal_Book_DarkAltar_1

Zemouregal_Book_DarkAltar_6:
	msgbox Zemouregal_Book_DarkAltar_Text_5
	msgbox Zemouregal_Book_DarkAltar_Text_6
	goto Zemouregal_Book_DarkAltar_1


Zemouregal_Book_BlackStone::
	lockall
	msgbox Zemouregal_Book_BlackStone_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne Zemouregal_Book_BlackStone_2
Zemouregal_Book_BlackStone_1:
	releaseall
	return

Zemouregal_Book_BlackStone_2:
	msgbox Zemouregal_Book_BlackStone_Text_1
	msgbox Zemouregal_Book_BlackStone_Text_2
	msgbox Zemouregal_Book_InfernalSource_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne Zemouregal_Book_BlackStone_4
	goto Zemouregal_Book_BlackStone_1

Zemouregal_Book_BlackStone_4:
	msgbox Zemouregal_Book_BlackStone_Text_3
	msgbox Zemouregal_Book_BlackStone_Text_4
	msgbox Zemouregal_Book_BlackStone_Text_5
	msgbox Zemouregal_Book_BlackStone_Text_6
	msgbox Zemouregal_Book_InfernalSource_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne Zemouregal_Book_BlackStone_6
	goto Zemouregal_Book_BlackStone_1

Zemouregal_Book_BlackStone_6:
	msgbox Zemouregal_Book_BlackStone_Text_7
	msgbox Zemouregal_Book_BlackStone_Text_8
	msgbox Zemouregal_Book_InfernalSource_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne Zemouregal_Book_BlackStone_8
	goto Zemouregal_Book_BlackStone_1

Zemouregal_Book_BlackStone_8:
	msgbox Zemouregal_Book_BlackStone_Text_9
	msgbox Zemouregal_Book_BlackStone_Text_10
	goto Zemouregal_Book_BlackStone_1


Zemouregal_Plans::
	lockall
	msgbox Zemouregal_Plans_Text_0
	msgbox Zemouregal_Plans_Text_1
	closemessage
	releaseall
	return


Zemouregal_Books::
	lockall
	msgbox Zemouregal_Books_Text_0
	releaseall
	return


Zemouregal_ListMahjarrats::
	lockall
	message Zemouregal_ListMahjarrats_Text_0
	scrollingmultichoice 1, 1, 1, 5, TRUE
	switch VAR_RESULT
	case 0, Zemouregal_ListMahjarrats_3
	case 1, Zemouregal_ListMahjarrats_4
	case 2, Zemouregal_ListMahjarrats_5
	case 3, Zemouregal_ListMahjarrats_6
	case 4, Zemouregal_ListMahjarrats_7
	case 5, Zemouregal_ListMahjarrats_8
	case 6, Zemouregal_ListMahjarrats_9
	case 7, Zemouregal_ListMahjarrats_10
	case 8, Zemouregal_ListMahjarrats_11
	case 9, Zemouregal_ListMahjarrats_12
	case 10, Zemouregal_ListMahjarrats_13
	case 11, Zemouregal_ListMahjarrats_14
	case 12, Zemouregal_ListMahjarrats_15
	closemessage
Zemouregal_ListMahjarrats_1:
	releaseall
	return

Zemouregal_ListMahjarrats_3:
	msgbox Zemouregal_ListMahjarrats_Text_1
	msgbox Zemouregal_ListMahjarrats_Text_2
	msgbox Zemouregal_ListMahjarrats_Text_3
	msgbox Zemouregal_ListMahjarrats_Text_4
	goto Zemouregal_ListMahjarrats_1

Zemouregal_ListMahjarrats_4:
	msgbox Zemouregal_ListMahjarrats_Text_5
	msgbox Zemouregal_ListMahjarrats_Text_6
	msgbox Zemouregal_ListMahjarrats_Text_3
	msgbox Zemouregal_ListMahjarrats_Text_7
	goto Zemouregal_ListMahjarrats_1

Zemouregal_ListMahjarrats_5:
	msgbox Zemouregal_ListMahjarrats_Text_8
	msgbox Zemouregal_ListMahjarrats_Text_9
	msgbox Zemouregal_ListMahjarrats_Text_3
	msgbox Zemouregal_ListMahjarrats_Text_10
	goto Zemouregal_ListMahjarrats_1

Zemouregal_ListMahjarrats_6:
	msgbox Zemouregal_ListMahjarrats_Text_11
	msgbox Zemouregal_ListMahjarrats_Text_12
	msgbox Zemouregal_ListMahjarrats_Text_3
	msgbox Zemouregal_ListMahjarrats_Text_13
	goto Zemouregal_ListMahjarrats_1

Zemouregal_ListMahjarrats_7:
	msgbox Zemouregal_ListMahjarrats_Text_14
	msgbox Zemouregal_ListMahjarrats_Text_15
	msgbox Zemouregal_ListMahjarrats_Text_3
	msgbox Zemouregal_ListMahjarrats_Text_16
	goto Zemouregal_ListMahjarrats_1

Zemouregal_ListMahjarrats_8:
	msgbox Zemouregal_ListMahjarrats_Text_17
	msgbox Zemouregal_ListMahjarrats_Text_18
	goto Zemouregal_ListMahjarrats_1

Zemouregal_ListMahjarrats_9:
	msgbox Zemouregal_ListMahjarrats_Text_19
	msgbox Zemouregal_ListMahjarrats_Text_20
	msgbox Zemouregal_ListMahjarrats_Text_3
	msgbox Zemouregal_ListMahjarrats_Text_21
	goto Zemouregal_ListMahjarrats_1

Zemouregal_ListMahjarrats_10:
	msgbox Zemouregal_ListMahjarrats_Text_22
	msgbox Zemouregal_ListMahjarrats_Text_23
	msgbox Zemouregal_ListMahjarrats_Text_3
	msgbox Zemouregal_ListMahjarrats_Text_24
	goto Zemouregal_ListMahjarrats_1

Zemouregal_ListMahjarrats_11:
	msgbox Zemouregal_ListMahjarrats_Text_25
	msgbox Zemouregal_ListMahjarrats_Text_26
	msgbox Zemouregal_ListMahjarrats_Text_3
	msgbox Zemouregal_ListMahjarrats_Text_27
	goto Zemouregal_ListMahjarrats_1

Zemouregal_ListMahjarrats_12:
	msgbox Zemouregal_ListMahjarrats_Text_28
	msgbox Zemouregal_ListMahjarrats_Text_29
	msgbox Zemouregal_ListMahjarrats_Text_3
	msgbox Zemouregal_ListMahjarrats_Text_30
	goto Zemouregal_ListMahjarrats_1

Zemouregal_ListMahjarrats_13:
	msgbox Zemouregal_ListMahjarrats_Text_31
	msgbox Zemouregal_ListMahjarrats_Text_32
	goto Zemouregal_ListMahjarrats_1

Zemouregal_ListMahjarrats_14:
	msgbox Zemouregal_ListMahjarrats_Text_33
	msgbox Zemouregal_ListMahjarrats_Text_34
	msgbox Zemouregal_ListMahjarrats_Text_3
	msgbox Zemouregal_ListMahjarrats_Text_35
	goto Zemouregal_ListMahjarrats_1

Zemouregal_ListMahjarrats_15:
	msgbox Zemouregal_ListMahjarrats_Text_36
	msgbox Zemouregal_ListMahjarrats_Text_37
	goto Zemouregal_ListMahjarrats_1


BATTLE_ZEMOUREGALBASE_ZOMBIECHEF_Text_0:
	.string "Hey, don't enter my Bedroom$"

BATTLE_ZEMOUREGALBASE_ZOMBIECHEF_Text_1:
	.string "I cant stop you I gess.$"

BATTLE_ZEMOUREGALBASE_ZOMBIECHEF_Text_2:
	.string "Zon Beh$"

BATTLE_ZEMOUREGALBASE_ZOMBIECHEF_Text_3:
	.string "Don't mess with my bed. Who do you think\n"
	.string "you are?$"

zemouregal_wizard_1_Text_0:
	.string "Dark Wizard$"

zemouregal_wizard_1_Text_1:
	.string "So you beat master Zemouregal? You\n"
	.string "don't look so tough$"

zemouregal_wizard_1_Text_2:
	.string "I have hope that one day Our Lord\n"
	.string "Zamorak will return and liberate us from\l"
	.string "this gods forsaken world.$"

zemouregal_wizard_1_Text_3:
	.string "I for one, welcome our Zemouregal\n"
	.string "overlord.$"

zemouregal_wizard_1_Text_4:
	.string "Don't snif up grinded up miasma runes.\n"
	.string "Worst idea I ever had.$"

zemouregal_wizard_2_Text_0:
	.string "Lovand$"

zemouregal_wizard_2_Text_1:
	.string "You know the apprentice of the ancient\n"
	.string "necormancer Oreb? He has been\l"
	.string "collecting lots of monsters to move\l"
	.string "them to a strange island. He seems to\l"
	.string "hang around Ferox Enclave to try an\l"
	.string "recruit people for something he calls a\l"
	.string "soul war.$"

zemouregal_wizard_3_Text_0:
	.string "Shender$"

zemouregal_wizard_3_Text_1:
	.string "Where is Zemouregal? I need to see him\n"
	.string "immediately. The archaeologists of the\l"
	.string "Varrock digsite found The location of\l"
	.string "the Infernal Source. We need to act\l"
	.string "quickly, if we want any of the second\l"
	.string "age treasures and ancient demonic\l"
	.string "artifacts. The black knights might take\l"
	.string "everything if we're not fast enough. We\l"
	.string "were able to intercept a Kinshra spy\l"
	.string "that tried to notify Lord Daquarius but\l"
	.string "we can't hold them off for too long.$"

zemouregal_wizard_4_Text_0:
	.string "Ricex$"

zemouregal_wizard_4_Text_1:
	.string "Lord Zemouregal send Ghundar to Zeah\n"
	.string "to investigate some Dark Altar. We\l"
	.string "haven't heard of him in months since\l"
	.string "then. I hope I’m not the next one\l"
	.string "Zemouregal sends.$"

zemouregal_wizard_5_Text_0:
	.string "Skarannen$"

zemouregal_wizard_5_Text_1:
	.string "There is a dragonkin necromancer\n"
	.string "somewhere within the eastern oceans.\l"
	.string "Within the shadow reef he dwells, as his\l"
	.string "servants fight the endless hordes of\l"
	.string "bots.$"

zemouregal_wizard_6_Text_0:
	.string "Necro Tutor$"

zemouregal_wizard_6_Text_1:
	.string "I can teach your monsters powerfull\n"
	.string "necromaner spells. Do you want to learn\l"
	.string "any of these spells?$"

zemouregal_wizard_6_Text_2:
	.string "Great! What move do you wish to learn\n"
	.string "your monsters?$"

zemouregal_wizard_6_Text_3:
	.string "Move tutor and new moves are not\n"
	.string "implemented jet$"

zemouregal_wizard_6_Text_4:
	.string "Coward.$"

Zemouregal_statue_Text_0:
	.string "A small statue of Zemouregal putting\n"
	.string "both of his tumbs up.\n"
	.string "You feel like your being watched.$"

Zemouregal_Book_InfernalSource_Text_0:
	.string "A book named the history of The\n"
	.string "Infernal Source.\p"
	.string "WARNING: This is a long book, do you\n"
	.string "realy want to read it?$"

Zemouregal_Book_InfernalSource_Text_1:
	.string "When Zaros discovered Gielinor, young\n"
	.string "gods like Saradomin and Tumeken ruled\l"
	.string "vast and unrivaled empires with massive\l"
	.string "armies.$"

Zemouregal_Book_InfernalSource_Text_2:
	.string "Zaros didn't want to move his demon\n"
	.string "hordes through The Abbys, out of fear\l"
	.string "of losing to many troops. This is why he\l"
	.string "only brought the Chthonian demon Duke\l"
	.string "Nemesis and his First Legion of Avernic\l"
	.string "slaves when he arrived at Gielinor.$"

Zemouregal_Book_InfernalSource_Text_3:
	.string "continue ?$"

Zemouregal_Book_InfernalSource_Text_4:
	.string "Zaros and his demon servants captured\n"
	.string "the ancient colossus Loarnab, an\l"
	.string "ancient hydra born from Gielinors Anima\l"
	.string "Mundi. Zaros used the body of the Hydra\l"
	.string "to create a permanent portal, so his\l"
	.string "legions of demons could freely flow\l"
	.string "into Gielinor.$"

Zemouregal_Book_InfernalSource_Text_5:
	.string "The infernal source became the center\n"
	.string "of Senntisten, the capital of the\l"
	.string "Zarosian empire.$"

Zemouregal_Book_InfernalSource_Text_6:
	.string "This infernal source was destroyed by\n"
	.string "Saradomin after the death of Zaros.\l"
	.string "Saradomin banished Zamorak to\l"
	.string "Infernus for killing his ally Zaros and\l"
	.string "destroyed the infernal source to\l"
	.string "ensure he couldn't return to Gielinor.$"

Zemouregal_Book_InfernalSource_Text_7:
	.string "During the second half of the second\n"
	.string "age, Zamorak liberated the Avernic\l"
	.string "slaves from their Chthonian overlords\l"
	.string "and became the Ruler of Infernus.$"

Zemouregal_Book_InfernalSource_Text_8:
	.string "During Zamoraks conquest of the\n"
	.string "Infernus, the Saradominists started\l"
	.string "their own conquest. The Saradominists\l"
	.string "turned against their Zarosian allies\l"
	.string "the moment the Infernal Source was\l"
	.string "destroyed, as the remaining Zarosian\l"
	.string "loyalists where stranded and isolated\l"
	.string "from the great demonic Legions in\l"
	.string "Infernus.$"

Zemouregal_Book_InfernalSource_Text_9:
	.string "The southern parts of the Zarosian\n"
	.string "Empire where easily absorbed by the\l"
	.string "Saradominsts. And this powerlessness\l"
	.string "fueled Zamorakian cults within the\l"
	.string "former Zarosian empire.$"

Zemouregal_Book_InfernalSource_Text_10:
	.string "On of these secret cults was the Order\n"
	.string "of Dis. A group that gathered parts of\l"
	.string "the old infernal source to reassemble\l"
	.string "it. They would build and restore the\l"
	.string "Infernal Source with human sacrifices.$"

Zemouregal_Book_InfernalSource_Text_11:
	.string "The restoration of the Infernal Source\n"
	.string "gave Zamorak the opportunity to invade\l"
	.string "Gielinor with his legions of liberated\l"
	.string "Avernic demons. In his conquest to\l"
	.string "liberate the people of Gielinor, Zamorak\l"
	.string "started the Third Age, the great god\l"
	.string "war.$"

Zemouregal_Book_IsleOfSouls_Text_0:
	.string "A book named the island Of Souls.\p"
	.string "WARNING: This is a long book, do you\n"
	.string "realy want to read it?$"

Zemouregal_Book_IsleOfSouls_Text_1:
	.string "The island of souls is a big island\n"
	.string "located the ocean, west of the Feldip\l"
	.string "Hills. It was famously uninhabitable\l"
	.string "throughout the forth age, as too many\l"
	.string "restless Third age Revenants roamed\l"
	.string "the land.$"

Zemouregal_Book_IsleOfSouls_Text_2:
	.string "Ghosts of ogres, orcs, goblins, demons\n"
	.string "and aviansies roamed free, attacking\l"
	.string "lost sailors that dared to explore this\l"
	.string "island. These hostile revenants where\l"
	.string "the main reason why many avoided this\l"
	.string "land and why it was named the Isle of\l"
	.string "Souls.$"

Zemouregal_Book_IsleOfSouls_Text_3:
	.string "The island was once a battlefield where\n"
	.string "many Armadylean soldiers and Bandosian\l"
	.string "mercenaries died. This happened during\l"
	.string "a minor conflict during the God Wars.\l"
	.string "The buried souls of soldiers were\l"
	.string "unable to move on to their afterlife\l"
	.string "and became hostile to all living things,\l"
	.string "similar to the revenants that still roam\l"
	.string "Forinthry.$"

Zemouregal_Book_IsleOfSouls_Text_4:
	.string "The island was once home to an\n"
	.string "artifact. It is not obvious what this\l"
	.string "artifact was, but many assume this\l"
	.string "artifact was connected to the\l"
	.string "ascended Demonic Revenant known as\l"
	.string "Maledictus. The Saradominist and their\l"
	.string "allies didn't want to give this ancient\l"
	.string "and powerful artifact to Zamorak and\l"
	.string "his allies. This is why Bandos and\l"
	.string "Armadyl send their armies to the island,\l"
	.string "to defend the artifact from hordes of\l"
	.string "fire fiends.$"

Zemouregal_Book_IsleOfSouls_Text_5:
	.string "Bandos believed the war was ending. He\n"
	.string "personally pacified Karamja defeating\l"
	.string "all Zamoraks allies on the continent. He\l"
	.string "crushed 'The Champion of the Elder Kiln'\l"
	.string "and locked him back in the volcano that\l"
	.string "forged him. He butchered Zur-Gar in\l"
	.string "front of his children who scattered\l"
	.string "back into the jungles. Zamorak was\l"
	.string "quickly losing all of his divine allies.\l"
	.string "It was also obvious who the\l"
	.string "Saradominsit alliance would turn\l"
	.string "against once Zamorak was gone. This is\l"
	.string "why Bandos chose to turn against his\l"
	.string "Armadylean allies and collect the\l"
	.string "artifact as a bargaining chip.$"

Zemouregal_Book_IsleOfSouls_Text_6:
	.string "The Bandosians won a bloody conflict\n"
	.string "with the Armadyleans as Bandos\l"
	.string "collected the artifact. His armies\l"
	.string "abandoned the island as the war raged\l"
	.string "on the mainland. Goblin scavengers\l"
	.string "would periodically scavenge the\l"
	.string "battlefields for weapons. But the Isle\l"
	.string "Of Souls was picked clean at the start\l"
	.string "of the Forth age.$"

Zemouregal_Book_IsleOfSouls_Text_7:
	.string "The Isle of Souls would stay\n"
	.string "uninhabited until recently. A\l"
	.string "necromancer named Nomad started to\l"
	.string "collect the broken souls on the island\l"
	.string "to make it more inhabitable land. The\l"
	.string "necromancer has built a great MvM arena\l"
	.string "on the island and is challenging\l"
	.string "trainers all over Gielinor.$"

Zemouregal_Book_IsleOfSouls_Text_8:
	.string "It's currently unknown what Nomad is\n"
	.string "planning with all the revenant souls he\l"
	.string "collected and what he wants to do with\l"
	.string "his MvM arena. Lucien seems to keep a\l"
	.string "close eye on the strange character, as\l"
	.string "he views the man is a potential threat.$"

Zemouregal_Book_DarkAltar_Text_0:
	.string "A book named the Dark Altar of Arceuus.\p"
	.string "WARNING: This is a long book, do you\n"
	.string "realy want to read it?$"

Zemouregal_Book_DarkAltar_Text_1:
	.string "within the north of the kingdom of\n"
	.string "Kourend, north of the city of Arceuus,\l"
	.string "lays an ancient altar holding great and\l"
	.string "ancient magics, possibly predating\l"
	.string "guthix' arrival on gielinor. The\l"
	.string "blackstone altar created rifts in the\l"
	.string "surrounding areas. These strange rifts\l"
	.string "are connected to the true death, soul\l"
	.string "and blood altars of geilinor, making it\l"
	.string "possible to craft runes on them. The\l"
	.string "altar also has other properties. The\l"
	.string "Altar can both be used for summoning\l"
	.string "and necromancy. The altar is able to\l"
	.string "summon monsters seemingly out of\l"
	.string "nowhere. The altar also makes\l"
	.string "resurrecting ensouled bodies easier as\l"
	.string "the altar seems to irradiate an ominous\l"
	.string "atmosphere.$"

Zemouregal_Book_DarkAltar_Text_2:
	.string "This Dark Altar wasn't always located\n"
	.string "on the north of Kourend. It used to be\l"
	.string "located in an ancient temple in the\l"
	.string "Kharazi jungle on the Karamjan\l"
	.string "continent. It was first discovered by\l"
	.string "Pontifex Bilrach during one of his\l"
	.string "expeditions.$"

Zemouregal_Book_DarkAltar_Text_3:
	.string "The Dark Altar would be moved a by the\n"
	.string "Avernic demon Skotizo during Zamoraks\l"
	.string "rebellion in the second age. Zamorak\l"
	.string "didn't want the altar to fall into the\l"
	.string "hands of Duke Orcus and other\l"
	.string "loyalists. But Skotizo betrayed\l"
	.string "Zamorak, trying to use the power of the\l"
	.string "altar for himself.$"

Zemouregal_Book_DarkAltar_Text_4:
	.string "Fleeing from both sides of the civil war,\n"
	.string "Skotizo used the power of the dark\l"
	.string "altar to summon dangerous creatures to\l"
	.string "distract his pursuers. The demon first\l"
	.string "fled to Tirannwn and then sailed the\l"
	.string "ocean to reach the continent of Zeah.\l"
	.string "There he placed the altar on its\l"
	.string "current location.$"

Zemouregal_Book_DarkAltar_Text_5:
	.string "Refugees of the god wars during the\n"
	.string "middle of the third age started to\l"
	.string "colonize the newly discovered land and\l"
	.string "build the city of Arceuus around it. It\l"
	.string "influenced the development of the city\l"
	.string "and the rest of the Great Kourend.$"

Zemouregal_Book_DarkAltar_Text_6:
	.string "King Shayzien the Seventh would use\n"
	.string "the Dark Altar to become an immortal\l"
	.string "godking and create armies of lizardmen\l"
	.string "that worship him to this day as their\l"
	.string "god Xeric. With his new found powers and\l"
	.string "his mindless lizardmen foot soldiers,\l"
	.string "King Xeric killed the other rulers of\l"
	.string "the cities within the lands that now are\l"
	.string "the Great Kourend.$"

Zemouregal_Book_BlackStone_Text_0:
	.string "A book named The Mwanu of The Cursed\n"
	.string "Archipeligo.\p"
	.string "WARNING: This is a long book, do you\n"
	.string "realy want to read it?$"

Zemouregal_Book_BlackStone_Text_1:
	.string "There is an Island in the Cursed\n"
	.string "Archipelago in the eastern sea\l"
	.string "inhabited by strange tall apes called\l"
	.string "the Mwanu. These mysterious aggressive\l"
	.string "apes are cannibalistic and practice\l"
	.string "necromancy. These beasts have\l"
	.string "terrorized sailors that visited the\l"
	.string "Cursed Archipelago for millennials. This\l"
	.string "is why sailors gave them the name\l"
	.string "'horrors'.$"

Zemouregal_Book_BlackStone_Text_2:
	.string "The Mwanu worship a deity called\n"
	.string "Tezcasathla also known as The\l"
	.string "Hundred-Handed One. A deity with many\l"
	.string "Blackstone hands grasping and\l"
	.string "consuming all living things it can. The\l"
	.string "Mwanu associate this god with death,\l"
	.string "the ocean and the Blackstone Pillars\l"
	.string "found in the Cursed Archipelago. The\l"
	.string "Mwanu covet Blackstone viewing it as a\l"
	.string "part of their great deity. They made\l"
	.string "Blackstone ritual masks for ritualistic\l"
	.string "sacrifices to oppose their god.$"

Zemouregal_Book_BlackStone_Text_3:
	.string "These apes where first discovered in\n"
	.string "the second age by the crew of the\l"
	.string "exploration vassal with the lamest\l"
	.string "name: 'The Glory of Zaros'. The crew had\l"
	.string "to return to the mainland as the\l"
	.string "captain was driven insane by the\l"
	.string "necromantic powers of the Mwanu. The\l"
	.string "captain landed in the Senntisten\l"
	.string "Asylum. Under the care of the Mahjarrat\l"
	.string "Nabor.$"

Zemouregal_Book_BlackStone_Text_4:
	.string "The Praefectus Praetorio Sliske, head\n"
	.string "of the inquisition of the Empire,\l"
	.string "visited the Asylum and heard the\l"
	.string "ramblings of the captain and was\l"
	.string "immediately interested by it. The\l"
	.string "captain called Siliske Bob and rambled\l"
	.string "about how he couldn't save them from\l"
	.string "something he called Xau-Tak.$"

Zemouregal_Book_BlackStone_Text_5:
	.string "Sliske would search the crewmembers of\n"
	.string "The Glory of Zaros that survived their\l"
	.string "encounter with the Mwanu. The crew was\l"
	.string "never cooperating with the head of the\l"
	.string "inquisition. Every crewmember would\l"
	.string "become hysterical when Sliske\l"
	.string "mentioned Xau-Tak. Every crewmember\l"
	.string "had a different outbursts when hearing\l"
	.string "the name and would die shortly after\l"
	.string "these outbursts. This death would\l"
	.string "either be self-inflicted or done by\l"
	.string "onlookers.$"

Zemouregal_Book_BlackStone_Text_6:
	.string "The information Siliske got was not\n"
	.string "entirely useless however. He was able\l"
	.string "to roughly recreate the voyage the\l"
	.string "Glory of Zaros took to the Cursed\l"
	.string "Archipelago. He also learned of ancient\l"
	.string "cities of Blackstone hidden in the\l"
	.string "abyssal depths were The Ambassador\l"
	.string "sings in his Silent Choir.$"

Zemouregal_Book_BlackStone_Text_7:
	.string "Sliske send exploratory vessels to\n"
	.string "where he believed the Cursed\l"
	.string "Archipelago was located. One of these\l"
	.string "crews discovered the masked apes\l"
	.string "worshiping totems of Blackstone\l"
	.string "described by Siliske. The crew had\l"
	.string "orders from Siliske to bring everything\l"
	.string "they could back to the empire for his\l"
	.string "study. This is why the crew captured\l"
	.string "several Mwanu, took several of the\l"
	.string "blackstone tools and masks and lastly\l"
	.string "one of the Blackstone pillars the apes\l"
	.string "worshiped.$"

Zemouregal_Book_BlackStone_Text_8:
	.string "The ship was struck with bad luck and\n"
	.string "insanity. A grand storm struck the ship,\l"
	.string "killing most of the members of the ship.\l"
	.string "During the storm the Mwanu managed to\l"
	.string "escape and caused mayhem on the ship.\l"
	.string "The ship would shipwreck near the City\l"
	.string "of Uzer with no living Mwanu onboard\l"
	.string "and most of the crew either death or\l"
	.string "lost at sea.$"

Zemouregal_Book_BlackStone_Text_9:
	.string "Siliske would hear of the nightmarish\n"
	.string "conditions of the journey. A\l"
	.string "decapitated ape head of that would\l"
	.string "taunt the crew even in death. The crew\l"
	.string "members that where compelled to jump\l"
	.string "into the ocean to 'join Kranon'. Siliske\l"
	.string "would also discover the crews adverse\l"
	.string "reactions to the name Xau-Tak.\l"
	.string "Confirming the same madness that took\l"
	.string "the original crew also struck the crew\l"
	.string "of his own expedition.$"

Zemouregal_Book_BlackStone_Text_10:
	.string "The Mahjarrat was able to recover the\n"
	.string "Ancient Blackstone pillar, several\l"
	.string "Blackstone masks, one of the corpses\l"
	.string "of the Mwanu. He would attempt to\l"
	.string "resurrect the Mwanu and was surprised\l"
	.string "how easy it was to manipulate it as a\l"
	.string "Thrall. He later send the Ancient\l"
	.string "Blackstone pillar to Lassar to study it\l"
	.string "in an isolated dungeon.$"

Zemouregal_Plans_Text_0:
	.string "Zemouregal plans.$"

Zemouregal_Plans_Text_1:
	.string "1) Liberate the peaple of Avarrocka\n"
	.string "from their stupidity. It has to be done.\p"
	.string "2) Rebuild the city of Sentisten and\n"
	.string "became the lord of the city again. The\l"
	.string "Zarozian loyalists will no longer make\l"
	.string "fun of me for my short rule.\p"
	.string "3) Rebuild the inqusion and the church.\n"
	.string "The inquision will arrest Zarozian\l"
	.string "loyalists and the church will worship my\l"
	.string "gratness. Not sure who will be the\l"
	.string "Pontifex Maximus but Sharathteerk\l"
	.string "seems to be a decent candidate for the\l"
	.string "Praefectus Praetorio.\p"
	.string "3) Use the new inquisition to round up\n"
	.string "all the Zarozian loyalist. Their as\l"
	.string "backwards as that stupid lapdog\l"
	.string "Temekel was.\p"
	.string "4) Collect an elder artafact and acend\n"
	.string "to godhood. Mah told the Mahjarat I was\l"
	.string "destined for greatness and I shall\l"
	.string "proof it to them.$"

Zemouregal_Books_Text_0:
	.string "Filled with zamorakian lorebooks writen\n"
	.string "by a dyslexic fool.$"

Zemouregal_ListMahjarrats_Text_0:
	.string "Zemouregals list of Mahjarrats, these\n"
	.string "are ones aren't scratched out.$"

Zemouregal_ListMahjarrats_Text_1:
	.string "Name: Akthanakos\p"
	.string "Aliance: Zarosian\p"
	.string "Location: Somewhere in the Kharidian\n"
	.string "Desert$"

Zemouregal_ListMahjarrats_Text_2:
	.string "This is an individual who has not been\n"
	.string "seen since the God Wars, but his\l"
	.string "presence is still felt on Gielinor. He's\l"
	.string "presumably still loyal to Zaros.$"

Zemouregal_ListMahjarrats_Text_3:
	.string "Addition$"

Zemouregal_ListMahjarrats_Text_4:
	.string "Akthanakos has re-emerged. Apparently,\n"
	.string "he and Enakhra were engaged in a\l"
	.string "continual struggle for thousands of\l"
	.string "years. He still lives those outdated\l"
	.string "Zarosian ideals. I just don't get it. I\l"
	.string "know Zaros freed us, but he'll never\l"
	.string "understand the path of chaos. If\l"
	.string "Akthanakos can be caught, he could be a\l"
	.string "good choice for a sacrifice soon.$"

Zemouregal_ListMahjarrats_Text_5:
	.string "Name: Azzanadra\p"
	.string "Aliance: Zarosian\p"
	.string "Location: Last spotted in the Varrock\n"
	.string "Dig Site$"

Zemouregal_ListMahjarrats_Text_6:
	.string "A powerful adversary and Zaros's\n"
	.string "champion. Has been contained since the\l"
	.string "God Wars. We have not dared free him for\l"
	.string "a ritual yet. We should do so soon, while\l"
	.string "Zamorakian numbers are still high\l"
	.string "enough to handle him.$"

Zemouregal_ListMahjarrats_Text_7:
	.string "Reports indicate that Zaros's champion\n"
	.string "is free. This is bad news - he is a real\l"
	.string "danger. We should be vigilant. The next\l"
	.string "ritual could be a real test.$"

Zemouregal_ListMahjarrats_Text_8:
	.string "Name: Bilrach\p"
	.string "Aliance: Zamorakian\p"
	.string "Location: Somewhere in Forinthry?$"

Zemouregal_ListMahjarrats_Text_9:
	.string "Bilrach is of average power for our\n"
	.string "kind. He seems willing to go along with\l"
	.string "what I suggest, so he will be useful for\l"
	.string "now.$"

Zemouregal_ListMahjarrats_Text_10:
	.string "The next ritual approaches and\n"
	.string "unusually, Bilrach is yet to have\l"
	.string "appeared. I wonder what he's up to.$"

Zemouregal_ListMahjarrats_Text_11:
	.string "Name: Enakhra\p"
	.string "Aliance: Zamorakian\p"
	.string "Location: Somewhere in the Kharidian\n"
	.string "Desert$"

Zemouregal_ListMahjarrats_Text_12:
	.string "Another who has not been seen since\n"
	.string "the God Wars, but whose presence is\l"
	.string "still felt.$"

Zemouregal_ListMahjarrats_Text_13:
	.string "Well, Enakhra has re-emerged at last.\n"
	.string "She reported to us that she had been in\l"
	.string "a continual struggle with Akthanakos\l"
	.string "all this time. I'd hoped her return might\l"
	.string "have meant an opportunity to sire more\l"
	.string "of our race, but she spurned my offer.\l"
	.string "Pah!$"

Zemouregal_ListMahjarrats_Text_14:
	.string "Name: Hazeel\p"
	.string "Aliance: Zamorakian\p"
	.string "Location: The Ardougne sewers$"

Zemouregal_ListMahjarrats_Text_15:
	.string "One of the Zamorak-aligned faction. A\n"
	.string "worthy warrior. Generally, I'd consider\l"
	.string "Hazeel an ally.\p"
	.string "Hazeel seems to be gaining in power. He\n"
	.string "has gained many followers and much\l"
	.string "territory.\p"
	.string "Disaster has struck for Hazeel:\n"
	.string "Saradomin-worshipping human filth have\l"
	.string "conquered his teritory and put him into\l"
	.string "a state of torpor. The question is, will\l"
	.string "his followers be able to revive him\l"
	.string "before the next ritual?$"

Zemouregal_ListMahjarrats_Text_16:
	.string "Well, his followers may have left things\n"
	.string "rather last- minute, but they've\l"
	.string "managed it - Hazeel is back in play!$"

Zemouregal_ListMahjarrats_Text_17:
	.string "Name: Jhallan\p"
	.string "Aliance: Zarosian\p"
	.string "Location: Cowering in fear$"

Zemouregal_ListMahjarrats_Text_18:
	.string "One of the weakest of our race. He did\n"
	.string "not even dare attend the last ritual, so\l"
	.string "he will be even weaker now. I'm ashamed\l"
	.string "to even call him a Mahjarrat.$"

Zemouregal_ListMahjarrats_Text_19:
	.string "Name: Hazeel\p"
	.string "Aliance: Zamorakian\p"
	.string "Location: His areana south of Ardougne$"

Zemouregal_ListMahjarrats_Text_20:
	.string "Khazard is the youngest of our race on\n"
	.string "Gielinor. He was born towards the end of\l"
	.string "the God Wars, shortly before the death\l"
	.string "of his mother, Palkeera. Under Hazeel's\l"
	.string "tutelage, he is becoming a force to be\l"
	.string "reckoned with.$"

Zemouregal_ListMahjarrats_Text_21:
	.string "This young Mahjarrat is proving adept\n"
	.string "at manipulating weak-minded humans. As\l"
	.string "such, he has built up a sizeable\l"
	.string "territory and following. He is cunrently\l"
	.string "a trusted general of one of King Lathas\l"
	.string "of Ardougne armies.$"

Zemouregal_ListMahjarrats_Text_22:
	.string "Name: Kharshai\p"
	.string "Aliance: Both Zamorakian and Zarosian\p"
	.string "Location: No idea$"

Zemouregal_ListMahjarrats_Text_23:
	.string "A Mahjarrat of merely average power.\n"
	.string "Generally has kept himself out of\l"
	.string "trouble by going along with the\l"
	.string "majority, but with no specific close\l"
	.string "allies he could be in danger at some\l"
	.string "point.$"

Zemouregal_ListMahjarrats_Text_24:
	.string "Strangely, Kharshai has disappeared. I\n"
	.string "did not think him so weak that he would\l"
	.string "be one of the Mahjarrat who chose to\l"
	.string "miss the last ritual. Maybe I\l"
	.string "overestimated him.$"

Zemouregal_ListMahjarrats_Text_25:
	.string "Name: Lucien\p"
	.string "Aliance: Zamorakian\p"
	.string "Location: His camp on the border of the\n"
	.string "North and Forinthry$"

Zemouregal_ListMahjarrats_Text_26:
	.string "Lucien is a powerful mage and my cousin.\n"
	.string "I trust him at least as much as any of\l"
	.string "the others - which still isn't very much.$"

Zemouregal_ListMahjarrats_Text_27:
	.string "Lucien seems to have been getting very\n"
	.string "powerful of late.$"

Zemouregal_ListMahjarrats_Text_28:
	.string "Name: Sliske\p"
	.string "Aliance: Zarosian\p"
	.string "Location: Last spotted in the\n"
	.string "Kharidian Desert$"

Zemouregal_ListMahjarrats_Text_29:
	.string "One of the more powerful of our number.\n"
	.string "Sliske has particularly strong\l"
	.string "shapeshifting capabilities and powers\l"
	.string "over shadows. Lurking in those shadows\l"
	.string "seems to be his preference, as he only\l"
	.string "shows his face around the rituals. I\l"
	.string "would love to catch this guy, but he's a\l"
	.string "slippery fellow.$"

Zemouregal_ListMahjarrats_Text_30:
	.string "Word from Hazeel is that Sliske has\n"
	.string "reappeared in a dramatic fashion, even\l"
	.string "by his standards. He's managed to dig up\l"
	.string "Zaros' old horn and claims the upcoming\l"
	.string "ritual will be 'the final Ritual of the\l"
	.string "Mahjarrat'. Sounds like things are going\l"
	.string "to get interesting.$"

Zemouregal_ListMahjarrats_Text_31:
	.string "Name: Trindine\p"
	.string "Aliance: Zarosian\p"
	.string "Location: Not seen since the Second\n"
	.string "age$"

Zemouregal_ListMahjarrats_Text_32:
	.string "A elusive Mahjarrat. This Mahjarrat has\n"
	.string "not been seen since the siege of\l"
	.string "Kharid-et. She has ever showed up to\l"
	.string "any Ritual since the fall of the\l"
	.string "Zarosian Empire. This is the main reason\l"
	.string "why the others assume she is death. But\l"
	.string "we where never able to confirm this\l"
	.string "fact. Trindine is an addapt shapeshifer\l"
	.string "like her old mentor Sliske. She used this\l"
	.string "power to in the day to spy on enemies of\l"
	.string "The Empire. It's always a posibility\l"
	.string "that she could have had impersonated\l"
	.string "one of the Mahjarrat or one of their\l"
	.string "servants during one of the rituals.$"

Zemouregal_ListMahjarrats_Text_33:
	.string "Name: Wahisietel\p"
	.string "Aliance: Zarosian\p"
	.string "Location: No idea$"

Zemouregal_ListMahjarrats_Text_34:
	.string "A Mahjarrat of average power. Keeps\n"
	.string "himself to himself mostly. He doesn't\l"
	.string "seem to like me much. Rumours are that\l"
	.string "he may have Zarosian sympathies. He'd\l"
	.string "be a good candidate for sacrifice.$"

Zemouregal_ListMahjarrats_Text_35:
	.string "The coward manipulated some fool to rob\n"
	.string "me. I will not rest until I find him and\l"
	.string "reclaim what rightfully mine. I won't\l"
	.string "spare him for this rituals sacrifice.$"

Zemouregal_ListMahjarrats_Text_36:
	.string "Name: Zemouregal\p"
	.string "Aliance: myself\p"
	.string "Location: right here$"

Zemouregal_ListMahjarrats_Text_37:
	.string "This is me. I'm amazing.$"
