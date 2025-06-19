AlKharid_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, AlKharid_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_LOAD, AlKharid_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

AlKharid_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflag FLAG_VISITED_AL_KHARID
	setvar VAR_EVOLUTION_MAP_STATE, 11
	return

AlKharid_MapScripts_MAP_SCRIPT_ON_LOAD:
	compare VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto_if_eq AlKharid_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

AlKharid_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	call ALKHARID_STATE
	return


ALKHARID_STATE::
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 220
	goto_if_le ALKHARID_STATE_2
ALKHARID_STATE_1:
	setflag FLAG_TEMP_9
	removeobject 12
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 210
	goto_if_eq ALKHARID_STATE_4
	return

ALKHARID_STATE_2:
	setvar VAR_TEMP_2, 1
	goto ALKHARID_STATE_1

ALKHARID_STATE_4:
	clearflag FLAG_TEMP_9
	addobject 12
	setvar VAR_TEMP_1, 1
	return


ALKHARID_GNOMEGLIDER::
	msgbox ALKHARID_GNOMEGLIDER_Text_0
	closemessage
	release
	end


ALKHARID_SIGN::
	lock
	msgbox ALKHARID_SIGN_Text_0
	release
	end


ALKHARID_WATERWELL::
	msgbox ALKHARID_WATERWELL_Text_0
	release
	end


ALKHARID_NPC_1::
	faceplayer
	namebox ALKHARID_NPC_1_Text_0
	msgbox ALKHARID_NPC_1_Text_1
	closemessage
	hidenamebox
	release
	end


ALKHARID_NPC_2::
	faceplayer
	namebox ALKHARID_NPC_2_Text_0
	msgbox ALKHARID_NPC_2_Text_1
	waitmessage
	pokemart STORE_Ali
	namebox ALKHARID_NPC_2_Text_0
	msgbox ALKHARID_NPC_2_Text_2
	release
	end



    .align 2
STORE_Ali:
    .2byte ITEM_AIR_RUNE
    .2byte ITEM_WATER_RUNE
    .2byte ITEM_FIRE_RUNE
    .2byte ITEM_EARTH_RUNE
    .2byte ITEM_PRAYER_POTION
    .2byte ITEM_WATERSKIN
    .2byte ITEM_TINDERBOX    
    .2byte ITEM_LUCKYRABBITFOOT
	.2byte ITEM_GODRABBITFOOT
    .2byte ITEM_CABBAGE
	.2byte ITEM_EMPTY_BUCKET
    .2byte ITEM_NONE
    release
    end

ALKHARID_NPC_3::
	faceplayer
	namebox ALKHARID_NPC_3_Text_0
	msgbox ALKHARID_NPC_3_Text_1
	closemessage
	hidenamebox
	release
	end


ALKHARID_NPC_4::
	faceplayer
	namebox ALKHARID_NPC_4_Text_0
	msgbox ALKHARID_NPC_4_Text_1
	closemessage
	hidenamebox
	release
	end


ALKHARID_NPC_5::
	faceplayer
	namebox ALKHARID_NPC_5_Text_0
	msgbox ALKHARID_NPC_5_Text_1
	closemessage
	hidenamebox
	release
	end


ALKHARID_NPC_6::
	faceplayer
	namebox ALKHARID_NPC_5_Text_0
	msgbox ALKHARID_NPC_6_Text_0
	closemessage
	hidenamebox
	release
	end


ALKHARID_NPC_7::
	faceplayer
	namebox ALKHARID_NPC_4_Text_0
	msgbox ALKHARID_NPC_7_Text_0
	closemessage
	hidenamebox
	release
	end


ALKHARID_NPC_8::
	faceplayer
	namebox ALKHARID_NPC_4_Text_0
	msgbox ALKHARID_NPC_8_Text_0
	closemessage
	hidenamebox
	release
	end


ALKHARID_NPC_9::
	faceplayer
	namebox ALKHARID_NPC_9_Text_0
	msgbox ALKHARID_NPC_9_Text_1
	closemessage
	hidenamebox
	release
	end


ALKHARID_NPC_10::
	faceplayer
	namebox ALKHARID_NPC_4_Text_0
	msgbox ALKHARID_NPC_10_Text_0
	closemessage
	hidenamebox
	release
	end


ALKHARID_NPC_11::
	faceplayer
	namebox ALKHARID_NPC_5_Text_0
	msgbox ALKHARID_NPC_11_Text_0
	closemessage
	hidenamebox
	release
	end


ALKHARID_NPC_12::
	faceplayer
	namebox ALKHARID_NPC_12_Text_0
	msgbox ALKHARID_NPC_12_Text_1
	closemessage
	hidenamebox
	release
	end


ALKHARID_NPC_13::
	faceplayer
	namebox ALKHARID_NPC_13_Text_0
	msgbox ALKHARID_NPC_13_Text_1
	closemessage
	hidenamebox
	release
	end


ALKHARID_NPC_14::
	faceplayer
	namebox ALKHARID_NPC_14_Text_0
	msgbox ALKHARID_NPC_14_Text_1
	closemessage
	hidenamebox
	release
	end


ALKHARID_NPC_15::
	faceplayer
	namebox ALKHARID_NPC_14_Text_0
	msgbox ALKHARID_NPC_14_Text_1
	closemessage
	hidenamebox
	release
	end


ALKHARID_NPC_16::
	faceplayer
	namebox ALKHARID_NPC_14_Text_0
	msgbox ALKHARID_NPC_14_Text_1
	closemessage
	hidenamebox
	release
	end


ALKHARID_INDOOR_NPC_1::
	faceplayer
	namebox ALKHARID_NPC_14_Text_0
	msgbox ALKHARID_INDOOR_NPC_1_Text_0
	closemessage
	hidenamebox
	release
	end


ALKHARID_INDOOR_NPC_2::
	faceplayer
	namebox ALKHARID_INDOOR_NPC_2_Text_0
	msgbox ALKHARID_INDOOR_NPC_2_Text_1
	closemessage
	hidenamebox
	release
	end


ALKHARID_INDOOR_NPC_3::
	faceplayer
	namebox ALKHARID_INDOOR_NPC_3_Text_0
	msgbox ALKHARID_INDOOR_NPC_3_Text_1
	waitmessage
	pokemart STORE_Zeke
	namebox ALKHARID_INDOOR_NPC_3_Text_0
	msgbox ALKHARID_INDOOR_NPC_3_Text_2
	release
	end



    .align 2
STORE_Zeke:
    .2byte ITEM_MITHRIL_SCIMITAR
    .2byte ITEM_DRAGON_SCIMITAR
    .2byte ITEM_NONE
    release
    end

ALKHARID_INDOOR_NPC_4::
	faceplayer
	namebox ALKHARID_INDOOR_NPC_4_Text_0
	msgbox ALKHARID_INDOOR_NPC_4_Text_1
	waitmessage
	pokemart STORE_Dommik
	namebox ALKHARID_INDOOR_NPC_4_Text_0
	msgbox ALKHARID_INDOOR_NPC_4_Text_2
	release
	end



    .align 2
STORE_Dommik:
    .2byte ITEM_RING_OF_WEALTH
    .2byte ITEM_RING_OF_LIFE
    .2byte ITEM_PHOENIX_NECKLACE    
    .2byte ITEM_SICKLE
    .2byte ITEM_NONE
    release
    end

Friendship_Checker_Ellis::
	lock
	faceplayer
	namebox Friendship_Checker_Ellis_Text_0
	msgbox Friendship_Checker_Ellis_Text_1
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
	switch VAR_RESULT
	case 0, Friendship_Checker_Ellis_3
	case 1, Friendship_Checker_Ellis_4
	case 2, Friendship_Checker_Ellis_5
	case 3, Friendship_Checker_Ellis_6
	case 4, Friendship_Checker_Ellis_7
	case 5, Friendship_Checker_Ellis_8
	case 6, Friendship_Checker_Ellis_9
Friendship_Checker_Ellis_1:
	closemessage
	release
	end

Friendship_Checker_Ellis_3:
	msgbox Friendship_Checker_Ellis_Text_2
	msgbox Friendship_Checker_Ellis_Text_3
	goto Friendship_Checker_Ellis_1

Friendship_Checker_Ellis_4:
	msgbox Friendship_Checker_Ellis_Text_4
	msgbox Friendship_Checker_Ellis_Text_5
	goto Friendship_Checker_Ellis_1

Friendship_Checker_Ellis_5:
	msgbox Friendship_Checker_Ellis_Text_6
	msgbox Friendship_Checker_Ellis_Text_7
	goto Friendship_Checker_Ellis_1

Friendship_Checker_Ellis_6:
	msgbox Friendship_Checker_Ellis_Text_8
	msgbox Friendship_Checker_Ellis_Text_9
	goto Friendship_Checker_Ellis_1

Friendship_Checker_Ellis_7:
	msgbox Friendship_Checker_Ellis_Text_10
	msgbox Friendship_Checker_Ellis_Text_11
	goto Friendship_Checker_Ellis_1

Friendship_Checker_Ellis_8:
	msgbox Friendship_Checker_Ellis_Text_12
	msgbox Friendship_Checker_Ellis_Text_13
	goto Friendship_Checker_Ellis_1

Friendship_Checker_Ellis_9:
	msgbox Friendship_Checker_Ellis_Text_14
	msgbox Friendship_Checker_Ellis_Text_15
	goto Friendship_Checker_Ellis_1


NPC_ALKHARID_GENERALSTORE_1::
	faceplayer
	namebox NPC_ALKHARID_GENERALSTORE_1_Text_0
	msgbox NPC_ALKHARID_GENERALSTORE_1_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_ALKHARID_GENERALSTORE_2::
	faceplayer
	namebox ALKHARID_NPC_4_Text_0
	msgbox NPC_ALKHARID_GENERALSTORE_2_Text_0
	closemessage
	hidenamebox
	release
	end


BATTLE_TEST_CUPHOLDER::
	lock
	faceplayer
	msgbox BATTLE_TEST_CUPHOLDER_Text_0
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
	msgbox BATTLE_TEST_CUPHOLDER_Text_1
	trainerbattle_no_intro TRAINER_LEADER_DUKE_1, BATTLE_TEST_CUPHOLDER_Text_2
	msgbox BATTLE_TEST_CUPHOLDER_Text_3
	end


GYM_BATTLE_DUKE_HORACIO::
	trainerbattle_no_intro TRAINER_LEADER_DUKE_1, GYM_BATTLE_DUKE_HORACIO_Text_0
	return


GYM_BATTLE_SIR_AMIK_VARZE::
	trainerbattle_no_intro TRAINER_FALADOR_GYM_AMIKVARZE, GYM_BATTLE_SIR_AMIK_VARZE_Text_0
	return


GYM_BATTLE_PRINCE_ALI::
	trainerbattle_no_intro TRAINER_ALKHARID_GYM_PRINCE_ALI, BATTLE_TEST_CUPHOLDER_Text_2
	return


GYM_BATTLE_KING_ROALD::
	trainerbattle_no_intro TRAINER_VARROCK_GYM_KINGROALD, GYM_BATTLE_KING_ROALD_Text_0
	return


GYM_BATTLE_THOK::
	trainerbattle_no_intro TRAINER_DAEMONHEIM_GYM_THOK, BATTLE_TEST_CUPHOLDER_Text_2
	return


GYM_BATTLE_GUNTHOR::
	trainerbattle_no_intro TRAINER_BARBARIAN_GYM_GUNTHOR, GYM_BATTLE_GUNTHOR_Text_0
	return


GYM_BATTLE_VANNAKA::
	trainerbattle_no_intro TRAINER_GYM_LEADER_VANNAKA_1, GYM_BATTLE_VANNAKA_Text_0
	return


GYM_BATTLE_TZHAAR_CHAMPION::
	trainerbattle_no_intro TRAINER_GYM_LEADER_TZHAAR_CHAMPION_1, BATTLE_TEST_CUPHOLDER_Text_2
	return


ELITE4_BATTLE_ZANIK::
	trainerbattle_no_intro TRAINER_ELITE4_ZANIK_1, BATTLE_TEST_CUPHOLDER_Text_2
	return


ELITE4_BATTLE_HANS::
	trainerbattle_no_intro TRAINER_ELITE4_HANS_1, BATTLE_TEST_CUPHOLDER_Text_2
	return


ELITE4_BATTLE_HAZELMERE::
	trainerbattle_no_intro TRAINER_ELITE4_HAZELMERE_1, BATTLE_TEST_CUPHOLDER_Text_2
	return


ELITE4_BATTLE_SIR_TIFFY_CASHIEN::
	trainerbattle_no_intro TRAINER_ELITE4_SIR_TIFFY_1, BATTLE_TEST_CUPHOLDER_Text_2
	return


CHAMPION_BATTLE_WISE_OLD_MAN::
	trainerbattle_no_intro TRAINER_CHAMPION_WISE_OLD_MAN_1, BATTLE_TEST_CUPHOLDER_Text_2
	return


testbattle_tzhaar::
	setflag FLAG_TZHAAR_RANDOM
	trainerbattle_no_intro TRAINER_FIGHT_CAVES_POOL_1_TRAINER_1, BATTLE_TEST_CUPHOLDER_Text_2
	clearflag FLAG_TZHAAR_RANDOM
	return


reset_tzhaar::
	setvar VAR_POKESCAPE_TZHAAR_GYM_QUEST, 0
	clearflag FLAG_BADGE03_GET
	return


RANDOM_PARTY_SIZE::
	random 128
	copyvar VAR_SEED, VAR_RESULT
	setvar VAR_TEMP_9, 6
	specialvar VAR_STORE_SEED_RESULT, GetSeededResultLessRandom
	switch VAR_STORE_SEED_RESULT
	case 0, RANDOM_PARTY_SIZE_3
	case 1, RANDOM_PARTY_SIZE_4
	case 2, RANDOM_PARTY_SIZE_5
	case 3, RANDOM_PARTY_SIZE_6
	case 4, RANDOM_PARTY_SIZE_7
	case 5, RANDOM_PARTY_SIZE_8
RANDOM_PARTY_SIZE_1:
	buffernumberstring STR_VAR_3, VAR_STORE_SEED_RESULT
	msgbox RANDOM_PARTY_SIZE_Text_0
	closemessage
	return

RANDOM_PARTY_SIZE_3:
	setvar VAR_POKESCAPE_TZHAAR_PARTY_SIZE, 1
	goto RANDOM_PARTY_SIZE_1

RANDOM_PARTY_SIZE_4:
	setvar VAR_POKESCAPE_TZHAAR_PARTY_SIZE, 2
	goto RANDOM_PARTY_SIZE_1

RANDOM_PARTY_SIZE_5:
	setvar VAR_POKESCAPE_TZHAAR_PARTY_SIZE, 3
	goto RANDOM_PARTY_SIZE_1

RANDOM_PARTY_SIZE_6:
	setvar VAR_POKESCAPE_TZHAAR_PARTY_SIZE, 4
	goto RANDOM_PARTY_SIZE_1

RANDOM_PARTY_SIZE_7:
	setvar VAR_POKESCAPE_TZHAAR_PARTY_SIZE, 5
	goto RANDOM_PARTY_SIZE_1

RANDOM_PARTY_SIZE_8:
	setvar VAR_POKESCAPE_TZHAAR_PARTY_SIZE, 6
	goto RANDOM_PARTY_SIZE_1


TRIGGER_ALKHARID_HAM_EVENT_2::
	lockall
	namebox TRIGGER_ALKHARID_HAM_EVENT_2_Text_0
	msgbox TRIGGER_ALKHARID_HAM_EVENT_2_Text_1
	closemessage
	hidenamebox
	namebox ALKHARID_NPC_4_Text_0
	msgbox TRIGGER_ALKHARID_HAM_EVENT_2_Text_2
	closemessage
	hidenamebox
	namebox ALKHARID_NPC_13_Text_0
	msgbox TRIGGER_ALKHARID_HAM_EVENT_2_Text_3
	closemessage
	hidenamebox
	namebox ALKHARID_NPC_4_Text_0
	msgbox TRIGGER_ALKHARID_HAM_EVENT_2_Text_4
	closemessage
	hidenamebox
	namebox ALKHARID_NPC_13_Text_0
	msgbox TRIGGER_ALKHARID_HAM_EVENT_2_Text_5
	closemessage
	hidenamebox
	namebox ALKHARID_NPC_13_Text_0
	msgbox TRIGGER_ALKHARID_HAM_EVENT_2_Text_6
	closemessage
	hidenamebox
	namebox ALKHARID_NPC_13_Text_0
	msgbox TRIGGER_ALKHARID_HAM_EVENT_2_Text_7
	closemessage
	hidenamebox
	removeobject 12
	setflag FLAG_TEMP_9
	setvar VAR_POKESCAPE_STORYMODE_PROGRESS, 215
	setvar VAR_TEMP_1, 2
	release
	end


TRIGGER_ALKHARID_HAM_EVENT_3::
	lockall
	namebox ALKHARID_NPC_4_Text_0
	msgbox TRIGGER_ALKHARID_HAM_EVENT_3_Text_0
	closemessage
	hidenamebox
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	release
	end


HAM_EVENT_ALKHAIRD_WISE_OLD_MAN::
	lock
	faceplayer
	namebox HAM_EVENT_ALKHAIRD_WISE_OLD_MAN_Text_0
	checkitem ITEM_CUT_TOOL, 1
	compare VAR_RESULT, 0
	goto_if_eq HAM_EVENT_ALKHAIRD_WISE_OLD_MAN_2
	msgbox HAM_EVENT_ALKHAIRD_WISE_OLD_MAN_Text_3
	closemessage
	hidenamebox
HAM_EVENT_ALKHAIRD_WISE_OLD_MAN_1:
	release
	end

HAM_EVENT_ALKHAIRD_WISE_OLD_MAN_2:
	msgbox HAM_EVENT_ALKHAIRD_WISE_OLD_MAN_Text_1
	closemessage
	hidenamebox
	giveitem ITEM_CUT_TOOL, 1
	msgbox HAM_EVENT_ALKHAIRD_WISE_OLD_MAN_Text_2
	closemessage
	hidenamebox
	goto HAM_EVENT_ALKHAIRD_WISE_OLD_MAN_1


ALKHARID_GNOMEGLIDER_Text_0:
	.string "It is a Gnome Glider.$"

ALKHARID_SIGN_Text_0:
	.string "Welcome to Al Kharid.\p"
	.string "The jewel of the Kharidian Desert.$"

ALKHARID_WATERWELL_Text_0:
	.string "No matter how hard you look, you can't\n"
	.string "see any polar bears down there.$"

ALKHARID_NPC_1_Text_0:
	.string "Dalbur$"

ALKHARID_NPC_1_Text_1:
	.string "I'm afraid the Gnome Glider is currently\n"
	.string "undergoing maintenance.\p"
	.string "Please come back later.$"

ALKHARID_NPC_2_Text_0:
	.string "Ali$"

ALKHARID_NPC_2_Text_1:
	.string "Please, browse my Wares.$"

ALKHARID_NPC_2_Text_2:
	.string "Please come back any time.$"

ALKHARID_NPC_3_Text_0:
	.string "BigPencil55$"

ALKHARID_NPC_3_Text_1:
	.string "Welcome to Al Kharid, NOOB!\n"
	.string "Yeah, so what if I snuck in while the\l"
	.string "guards were distracted...$"

ALKHARID_NPC_4_Text_0:
	.string "Guard$"

ALKHARID_NPC_4_Text_1:
	.string "Don't cause trouble here in the city,\n"
	.string "law enforcement has a tendency to call\l"
	.string "upon several more guards unnecessarily\l"
	.string "for the smallest of cases.$"

ALKHARID_NPC_5_Text_0:
	.string "Man$"

ALKHARID_NPC_5_Text_1:
	.string "Up North is the desert, you can find\n"
	.string "both sunny weather and sandstorms\l"
	.string "there.\p"
	.string "Some monsters seems to evolve only\n"
	.string "under those conditions.$"

ALKHARID_NPC_6_Text_0:
	.string "Did you know there's a ban on magic\n"
	.string "carpets in Al Kharid?\p"
	.string "Apparently their leader died using one\n"
	.string "at one point.$"

ALKHARID_NPC_7_Text_0:
	.string "This is Al Kharid castle, would you like\n"
	.string "to lose to the prince?$"

ALKHARID_NPC_8_Text_0:
	.string "This is Al Kharid castle, would you like\n"
	.string "to challenge the prince?$"

ALKHARID_NPC_9_Text_0:
	.string "Adaranth$"

ALKHARID_NPC_9_Text_1:
	.string "I heard rumours of archaeologists\n"
	.string "carrying out an excavation on some\l"
	.string "ruins nearby.\p"
	.string "I wonder what magical artifacts might\n"
	.string "be sealed inside.$"

ALKHARID_NPC_10_Text_0:
	.string "I'm glad I managed to get assigned as a\n"
	.string "guard outside the palace.\p"
	.string "Therer were too many adventurers\n"
	.string "coming into the palace and trapping my\l"
	.string "brothers behind furniture to kill them.$"

ALKHARID_NPC_11_Text_0:
	.string "We deal with a lot of thieves and\n"
	.string "cutthroats here.\p"
	.string "Al Kharid does not welcome them, yet\n"
	.string "they keep coming back...$"

ALKHARID_NPC_12_Text_0:
	.string "Spirit Angler$"

ALKHARID_NPC_12_Text_1:
	.string "The Spirit of the Sea has awoken and is\n"
	.string "creating intense storms for sailors.\p"
	.string "I wonder if there are any adventurers\n"
	.string "brave enough to defeat it.$"

ALKHARID_NPC_13_Text_0:
	.string "Ozan$"

ALKHARID_NPC_13_Text_1:
	.string "Who am I?\p"
	.string "Only the most famous hero ever born in\n"
	.string "Al Kharid!\p"
	.string "I helped aid in the defence of\n"
	.string "Burthorpe from the troll invasion.\p"
	.string "I helped rescue the druid master\n"
	.string "Pikkupstix from the depths of\l"
	.string "Daemonheim!\p"
	.string "…{PAUSE 32}\p"
	.string "What do you mean you've never heard of\n"
	.string "me?$"

ALKHARID_NPC_14_Text_0:
	.string "Cupholder$"

ALKHARID_NPC_14_Text_1:
	.string "I am a Cupholder$"

ALKHARID_INDOOR_NPC_1_Text_0:
	.string "Hello, I am a Cupholder.$"

ALKHARID_INDOOR_NPC_2_Text_0:
	.string "Karim$"

ALKHARID_INDOOR_NPC_2_Text_1:
	.string "Would you like to buy a nice kebab? Only\n"
	.string "one gold.{PAUSE 32}\n"
	.string "Are you sure you wouldn't like a kebab?$"

ALKHARID_INDOOR_NPC_3_Text_0:
	.string "Zeke$"

ALKHARID_INDOOR_NPC_3_Text_1:
	.string "Welcome to Zeke's Superior Scimitars,\n"
	.string "now with upgraded stock!$"

ALKHARID_INDOOR_NPC_3_Text_2:
	.string "Some crazy adventurer managed to\n"
	.string "convince the banana-brained nitwits\l"
	.string "who make the dragon scimitars to sell\l"
	.string "some to me.\p"
	.string "I'll never understand how they managed\n"
	.string "it.$"

ALKHARID_INDOOR_NPC_4_Text_0:
	.string "Dommik$"

ALKHARID_INDOOR_NPC_4_Text_1:
	.string "Would you like to buy some handcrafted\n"
	.string "items?$"

ALKHARID_INDOOR_NPC_4_Text_2:
	.string "Excuse the mess, people stopped buying\n"
	.string "crafting supplies so I had to change\l"
	.string "business model very, very quickly to\l"
	.string "keep up!$"

Friendship_Checker_Ellis_Text_0:
	.string "Ellis$"

Friendship_Checker_Ellis_Text_1:
	.string "I've spent so many years working with\n"
	.string "monster hide, that I can tell a lot\l"
	.string "about a monster just by looking at it.\p"
	.string "Hmm, let me see here...$"

Friendship_Checker_Ellis_Text_2:
	.string "Its hide looks incredibly rough and\n"
	.string "calloused.\p"
	.string "You either haven't adventurered with it\n"
	.string "long, or you abuse the poor creature...$"

Friendship_Checker_Ellis_Text_3:
	.string "FRIENDSHIP is: FRIENDSHIP NONE.$"

Friendship_Checker_Ellis_Text_4:
	.string "This monster has such a bleak\n"
	.string "complexion.\p"
	.string "It looks like the two of you have a very\n"
	.string "poor relationship.\p"
	.string "You really need to work on that.$"

Friendship_Checker_Ellis_Text_5:
	.string "FRIENDSHIP is: FRIENDSHIP 1 TO 49.$"

Friendship_Checker_Ellis_Text_6:
	.string "Its hide seems to be softening\n"
	.string "slightly.\p"
	.string "It appears that this monster is warming\n"
	.string "up to you, but you've not done enough\l"
	.string "for it to trust you yet.\p"
	.string "Keep trying and you'll get there.$"

Friendship_Checker_Ellis_Text_7:
	.string "FRIENDSHIP is: FRIENDSHIP 50 TO 99.$"

Friendship_Checker_Ellis_Text_8:
	.string "The monster's hide has softened, but\n"
	.string "its colour is still quite muted and dull.\p"
	.string "You two appear to have a fairly neutral\n"
	.string "relationship.\p"
	.string "Work at it together though, and you'll\n"
	.string "start to see it improving.$"

Friendship_Checker_Ellis_Text_9:
	.string "FRIENDSHIP is: FRIENDSHIP 100 TO 149.$"

Friendship_Checker_Ellis_Text_10:
	.string "Yes, I can see a nice glow starting to\n"
	.string "form under the skin.\p"
	.string "This monster is definitely fond of you,\n"
	.string "and you've obviously put in some work\l"
	.string "with it.\p"
	.string "I think you could get to know each\n"
	.string "other even better still, though.$"

Friendship_Checker_Ellis_Text_11:
	.string "FRIENDSHIP is: FRIENDSHIP 150 TO 199.$"

Friendship_Checker_Ellis_Text_12:
	.string "The colour on your monster is just\n"
	.string "amazing!\p"
	.string "You're clearly very close and it knows\n"
	.string "you very well.\p"
	.string "There's a small room to keep improving,\n"
	.string "though!$"

Friendship_Checker_Ellis_Text_13:
	.string "FRIENDSHIP is: FRIENDSHIP 200 TO 254.$"

Friendship_Checker_Ellis_Text_14:
	.string "This monster's hide has the most\n"
	.string "amazing sheen to it.\p"
	.string "You clearly treat it extremely well and\n"
	.string "take the best of care of it.\p"
	.string "It absolutely adores you.$"

Friendship_Checker_Ellis_Text_15:
	.string "FRIENDSHIP is: FRIENDSHIP MAX.$"

NPC_ALKHARID_GENERALSTORE_1_Text_0:
	.string "Kathaar$"

NPC_ALKHARID_GENERALSTORE_1_Text_1:
	.string "Greetings effendi.\p"
	.string "Remember, if you venture into the\n"
	.string "desert often you will need waterskins\l"
	.string "to prevent dehydration for both you\l"
	.string "and your monsters.$"

NPC_ALKHARID_GENERALSTORE_2_Text_0:
	.string "During sandstorms you may find\n"
	.string "stronger monsters in the desert.\p"
	.string "I'd suggest you be careful and run away\n"
	.string "if you see a Strykewyrm.$"

BATTLE_TEST_CUPHOLDER_Text_0:
	.string "Hello I am Cupholder.$"

BATTLE_TEST_CUPHOLDER_Text_1:
	.string "Let's battle!$"

BATTLE_TEST_CUPHOLDER_Text_2:
	.string "I lost.$"

BATTLE_TEST_CUPHOLDER_Text_3:
	.string "You win…$"

GYM_BATTLE_DUKE_HORACIO_Text_0:
	.string "You beat me…\p"
	.string "…Congratulations!$"

GYM_BATTLE_SIR_AMIK_VARZE_Text_0:
	.string "Count me impressed, have you\n"
	.string "considered joining the White Knights?$"

GYM_BATTLE_KING_ROALD_Text_0:
	.string "That was a very enjoyable battle!$"

GYM_BATTLE_GUNTHOR_Text_0:
	.string "ARAGGHHHARH!\p"
	.string "Battles like this is what I live for and\n"
	.string "why I decided to become a Gym Leader!$"

GYM_BATTLE_VANNAKA_Text_0:
	.string "Haha, congratulations! You have\n"
	.string "completed your slayer task.$"

RANDOM_PARTY_SIZE_Text_0:
	.string "VAR SEEDEDRESULT is {STR_VAR_3} .$"

TRIGGER_ALKHARID_HAM_EVENT_2_Text_0:
	.string "???$"

TRIGGER_ALKHARID_HAM_EVENT_2_Text_1:
	.string "You've got to believe me!\p"
	.string "The prince was kidnapped I must meet\n"
	.string "with Spymaster Osman!$"

TRIGGER_ALKHARID_HAM_EVENT_2_Text_2:
	.string "Nice try Ozan, Prince Ali is currently on\n"
	.string "the outskirts of town with our finest\l"
	.string "warriors.$"

TRIGGER_ALKHARID_HAM_EVENT_2_Text_3:
	.string "Please listen to me…$"

TRIGGER_ALKHARID_HAM_EVENT_2_Text_4:
	.string "Not with your track record, get out of\n"
	.string "here Ozan!$"

TRIGGER_ALKHARID_HAM_EVENT_2_Text_5:
	.string "It's just no use…$"

TRIGGER_ALKHARID_HAM_EVENT_2_Text_6:
	.string "Hey! It's you!\p"
	.string "You saw the kidnapping too right?\p"
	.string "These guards are useless.\p"
	.string "Say you don't have any extra\n"
	.string "information do you?$"

TRIGGER_ALKHARID_HAM_EVENT_2_Text_7:
	.string "You mean to say there is a whole\n"
	.string "organisation that wear those\l"
	.string "ridiculous pink robes and they're called\l"
	.string "H.A.M?\p"
	.string "Okay that should be enough information\n"
	.string "to convince Osman!\p"
	.string "While I try to inform Osman could I\n"
	.string "trouble you to search for some clues\l"
	.string "around Lumbridge for where they could\l"
	.string "have kidnapped the prince?$"

TRIGGER_ALKHARID_HAM_EVENT_3_Text_0:
	.string "Are you here for a MvM Battle?\p"
	.string "Sorry but the prince is out at the\n"
	.string "moment, so there will be no MvM\l"
	.string "challenges until he returns.$"

HAM_EVENT_ALKHAIRD_WISE_OLD_MAN_Text_0:
	.string "Wise Old Man$"

HAM_EVENT_ALKHAIRD_WISE_OLD_MAN_Text_1:
	.string "Why hello there {PLAYER}.\p"
	.string "Odd place to run into one another isnt\n"
	.string "it?\p"
	.string "What might you be up to?\p"
	.string "H.A.M kidnapped the prince and thus you\n"
	.string "can not battle them for your next\l"
	.string "badge?\p"
	.string "Well that really does stop you from\n"
	.string "progressing doesn't it?\p"
	.string "Why back in my days I used to do quests\n"
	.string "like these as if they were second\l"
	.string "nature.\p"
	.string "But alas this will not be my Swan Song\n"
	.string "but instead yours…\p"
	.string "Speaking of such, I believe I heard\n"
	.string "reports about suspicious activity in\l"
	.string "Lumbridge forest.\p"
	.string "How about you give that place a try?\p"
	.string "And take this I would imagine it would\n"
	.string "be quite useful on your quest.$"

HAM_EVENT_ALKHAIRD_WISE_OLD_MAN_Text_2:
	.string "It's only fitting to have such a fine\n"
	.string "axe to cut trees considering you are\l"
	.string "about to enter a forest. Haha good luck\l"
	.string "on your quest {PLAYER}!$"

HAM_EVENT_ALKHAIRD_WISE_OLD_MAN_Text_3:
	.string "Why hello again {PLAYER}.\p"
	.string "Are you still on your quest to find the\n"
	.string "kidnapped prince?\p"
	.string "Did you find any suspicious activity in\n"
	.string "Lumbridge Forest?$"
