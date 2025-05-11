PortSarim_Pub_1F_MapScripts::
	.byte 0


BattlePub_INFO::
	msgbox BattlePub_INFO_Text_0
	multichoicedefault 1, 0, MULTI_PUB, 0, 0
	switch VAR_RESULT
	case 0, BattlePub_INFO_3
	case 1, BattlePub_INFO_4
	case 2, BattlePub_INFO_5
BattlePub_INFO_1:
	return

BattlePub_INFO_3:
	call BattlePub_REST
	goto BattlePub_INFO_1

BattlePub_INFO_4:
	checkitem ITEM_BAR_CRAWL_BATTLE_CARD, 1
	compare VAR_RESULT, 0
	goto_if_eq BattlePub_INFO_6
	call BattlePub_RULES
	goto BattlePub_INFO_1

BattlePub_INFO_5:
	return

BattlePub_INFO_6:
	call BattlePub_SIGNUP
	goto BattlePub_INFO_1


BattlePub_REST::
	msgbox BattlePub_REST_Text_0
	special HealPlayerParty
	return


BattlePub_RULES::
	msgbox BattlePub_RULES_Text_0
	msgbox BattlePub_RULES_Text_1
	return


BattlePub_SIGNUP::
	msgbox BattlePub_SIGNUP_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne BattlePub_SIGNUP_2
	msgbox BattlePub_SIGNUP_Text_5
BattlePub_SIGNUP_1:
	closemessage
	hidenamebox
	release
	end

BattlePub_SIGNUP_2:
	msgbox BattlePub_SIGNUP_Text_1
	msgbox BattlePub_SIGNUP_Text_2
	giveitem ITEM_BAR_CRAWL_BATTLE_CARD, 1
	msgbox BattlePub_SIGNUP_Text_3
	call BattlePub_RULES
	msgbox BattlePub_SIGNUP_Text_4
	goto BattlePub_SIGNUP_1


BattlePub_CHECKCARD::
	checkitem ITEM_BAR_CRAWL_BATTLE_CARD, 1
	compare VAR_RESULT, 0
	goto_if_eq BattlePub_CHECKCARD_2
	return

BattlePub_CHECKCARD_2:
	msgbox BattlePub_CHECKCARD_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_PortSarimPub_BARTENDER::
	lock
	faceplayer
	namebox NPC_PortSarimPub_BARTENDER_Text_0
	msgbox NPC_PortSarimPub_BARTENDER_Text_1
	call BattlePub_INFO
	msgbox NPC_PortSarimPub_BARTENDER_Text_2
	release
	end


NPC_PortSarimPub_BARMAID::
	lock
	faceplayer
	namebox NPC_PortSarimPub_BARMAID_Text_0
	msgbox NPC_PortSarimPub_BARMAID_Text_1
	closemessage
	release
	end


NPC_PortSarimPub_NPC_2::
	lock
	faceplayer
	namebox NPC_PortSarimPub_NPC_2_Text_0
	msgbox NPC_PortSarimPub_NPC_2_Text_1
	hidenamebox
	release
	end


NPC_PortSarimPub_NPC_1::
	lock
	faceplayer
	namebox NPC_PortSarimPub_NPC_1_Text_0
	msgbox NPC_PortSarimPub_NPC_1_Text_1
	call BattlePub_CHECKCARD
	hidenamebox
	goto_if_unset FLAG_PUB_TRAINER_3, NPC_PortSarimPub_NPC_1_2
NPC_PortSarimPub_NPC_1_1:
	closemessage
	release
	end

NPC_PortSarimPub_NPC_1_2:
	msgbox NPC_PortSarimPub_NPC_1_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne NPC_PortSarimPub_NPC_1_4
	goto NPC_PortSarimPub_NPC_1_1

NPC_PortSarimPub_NPC_1_4:
	hidenamebox
	setflag FLAG_PUB_TRAINER_3
	trainerbattle_no_intro TRAINER_PUB_SARIM_3, NPC_PortSarimPub_NPC_1_Text_3
	namebox NPC_PortSarimPub_NPC_1_Text_0
	msgbox NPC_PortSarimPub_NPC_1_Text_4
	hidenamebox
	call GIVE_RANDOM_ITEM
	goto NPC_PortSarimPub_NPC_1_1


NPC_PortSarimPub_Pirate_1::
	lock
	faceplayer
	namebox NPC_PortSarimPub_Pirate_1_Text_0
	msgbox NPC_PortSarimPub_Pirate_1_Text_1
	call BattlePub_CHECKCARD
	hidenamebox
	goto_if_unset FLAG_PUB_TRAINER_1, NPC_PortSarimPub_Pirate_1_2
NPC_PortSarimPub_Pirate_1_1:
	hidenamebox
	release
	end

NPC_PortSarimPub_Pirate_1_2:
	msgbox NPC_PortSarimPub_NPC_1_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne NPC_PortSarimPub_Pirate_1_4
	goto NPC_PortSarimPub_Pirate_1_1

NPC_PortSarimPub_Pirate_1_4:
	hidenamebox
	setflag FLAG_PUB_TRAINER_1
	trainerbattle_no_intro TRAINER_PUB_SARIM_1, NPC_PortSarimPub_NPC_1_Text_3
	namebox NPC_PortSarimPub_Pirate_1_Text_2
	msgbox NPC_PortSarimPub_Pirate_1_Text_3
	hidenamebox
	call GIVE_RANDOM_ITEM
	goto NPC_PortSarimPub_Pirate_1_1


NPC_PortSarimPub_Pirate_2::
	lock
	faceplayer
	namebox NPC_PortSarimPub_Pirate_2_Text_0
	msgbox NPC_PortSarimPub_Pirate_2_Text_1
	call BattlePub_CHECKCARD
	hidenamebox
	goto_if_unset FLAG_PUB_TRAINER_2, NPC_PortSarimPub_Pirate_2_2
NPC_PortSarimPub_Pirate_2_1:
	hidenamebox
	release
	end

NPC_PortSarimPub_Pirate_2_2:
	msgbox NPC_PortSarimPub_NPC_1_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne NPC_PortSarimPub_Pirate_2_4
	goto NPC_PortSarimPub_Pirate_2_1

NPC_PortSarimPub_Pirate_2_4:
	setflag FLAG_PUB_TRAINER_2
	trainerbattle_no_intro TRAINER_PUB_SARIM_2, NPC_PortSarimPub_NPC_1_Text_3
	namebox NPC_PortSarimPub_Pirate_2_Text_0
	msgbox NPC_PortSarimPub_Pirate_2_Text_2
	hidenamebox
	call GIVE_RANDOM_ITEM
	goto NPC_PortSarimPub_Pirate_2_1


NPC_PortSarimPub_PUBCRAWL::
	lock
	faceplayer
	namebox NPC_PortSarimPub_PUBCRAWL_Text_0
	msgbox NPC_PortSarimPub_PUBCRAWL_Text_1
	call BattlePub_CHECKCARD
	goto_if_set FLAG_PUB_TRAINER_1, NPC_PortSarimPub_PUBCRAWL_4
NPC_PortSarimPub_PUBCRAWL_3:
	msgbox NPC_PortSarimPub_PUBCRAWL_Text_3
NPC_PortSarimPub_PUBCRAWL_1:
	hidenamebox
	closemessage
	release
	end

NPC_PortSarimPub_PUBCRAWL_2:
	msgbox NPC_PortSarimPub_PUBCRAWL_Text_2
	msgbox NPC_PortSarimPub_NPC_1_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne NPC_PortSarimPub_PUBCRAWL_9
	goto NPC_PortSarimPub_PUBCRAWL_1

NPC_PortSarimPub_PUBCRAWL_4:
	goto_if_set FLAG_PUB_TRAINER_2, NPC_PortSarimPub_PUBCRAWL_6
	goto NPC_PortSarimPub_PUBCRAWL_3

NPC_PortSarimPub_PUBCRAWL_6:
	goto_if_set FLAG_PUB_TRAINER_3, NPC_PortSarimPub_PUBCRAWL_2
	goto NPC_PortSarimPub_PUBCRAWL_3

NPC_PortSarimPub_PUBCRAWL_9:
	setflag FLAG_PUB_TRAINER_3
	trainerbattle_no_intro TRAINER_PUB_SARIM_3, NPC_PortSarimPub_NPC_1_Text_3
	namebox NPC_PortSarimPub_PUBCRAWL_Text_0
	msgbox NPC_PortSarimPub_NPC_1_Text_4
	hidenamebox
	call GIVE_RANDOM_ITEM
	goto NPC_PortSarimPub_PUBCRAWL_1


GIVE_RANDOM_ITEM::
	random 17
	switch VAR_RESULT
	case 0, GIVE_RANDOM_ITEM_3
	case 1, GIVE_RANDOM_ITEM_4
	case 2, GIVE_RANDOM_ITEM_5
	case 3, GIVE_RANDOM_ITEM_6
	case 4, GIVE_RANDOM_ITEM_7
	case 5, GIVE_RANDOM_ITEM_8
	case 6, GIVE_RANDOM_ITEM_9
	case 7, GIVE_RANDOM_ITEM_10
	case 8, GIVE_RANDOM_ITEM_11
	case 9, GIVE_RANDOM_ITEM_12
	case 10, GIVE_RANDOM_ITEM_13
	case 11, GIVE_RANDOM_ITEM_14
	case 12, GIVE_RANDOM_ITEM_15
	case 13, GIVE_RANDOM_ITEM_16
	case 14, GIVE_RANDOM_ITEM_17
	case 15, GIVE_RANDOM_ITEM_18
	case 16, GIVE_RANDOM_ITEM_19
GIVE_RANDOM_ITEM_1:
	return

GIVE_RANDOM_ITEM_3:
	giveitem ITEM_FLAX, 3
	goto GIVE_RANDOM_ITEM_1

GIVE_RANDOM_ITEM_4:
	giveitem ITEM_SPIRIT_SHARD, 1
	goto GIVE_RANDOM_ITEM_1

GIVE_RANDOM_ITEM_5:
	giveitem ITEM_PRAYER_POTION, 1
	goto GIVE_RANDOM_ITEM_1

GIVE_RANDOM_ITEM_6:
	giveitem ITEM_LAMP_SPATT, 1
	goto GIVE_RANDOM_ITEM_1

GIVE_RANDOM_ITEM_7:
	giveitem ITEM_STAT_BEER, 1
	goto GIVE_RANDOM_ITEM_1

GIVE_RANDOM_ITEM_8:
	giveitem ITEM_STAT_BEER, 1
	goto GIVE_RANDOM_ITEM_1

GIVE_RANDOM_ITEM_9:
	giveitem ITEM_MANY_SWEETS, 1
	goto GIVE_RANDOM_ITEM_1

GIVE_RANDOM_ITEM_10:
	giveitem ITEM_CHOCOLATE_CAKE, 1
	goto GIVE_RANDOM_ITEM_1

GIVE_RANDOM_ITEM_11:
	giveitem ITEM_MINT_CAKE, 1
	goto GIVE_RANDOM_ITEM_1

GIVE_RANDOM_ITEM_12:
	giveitem ITEM_HWEEN_MASK, 1
	goto GIVE_RANDOM_ITEM_1

GIVE_RANDOM_ITEM_13:
	giveitem ITEM_EMPTY_BUCKET, 1
	goto GIVE_RANDOM_ITEM_1

GIVE_RANDOM_ITEM_14:
	giveitem ITEM_EMPTY_BUCKET, 1
	goto GIVE_RANDOM_ITEM_1

GIVE_RANDOM_ITEM_15:
	giveitem ITEM_POUCH_GRANITE, 5
	goto GIVE_RANDOM_ITEM_1

GIVE_RANDOM_ITEM_16:
	giveitem ITEM_POUCH_BLACK, 10
	goto GIVE_RANDOM_ITEM_1

GIVE_RANDOM_ITEM_17:
	giveitem ITEM_POUCH, 20
	goto GIVE_RANDOM_ITEM_1

GIVE_RANDOM_ITEM_18:
	giveitem ITEM_SPIRIT_CHARM, 1
	goto GIVE_RANDOM_ITEM_1

GIVE_RANDOM_ITEM_19:
	giveitem ITEM_GODRABBITFOOT, 1
	goto GIVE_RANDOM_ITEM_1


NPC_PortSarim_Church_Monk_1::
	lock
	faceplayer
	namebox NPC_PortSarim_Church_Monk_1_Text_0
	msgbox NPC_PortSarim_Church_Monk_1_Text_1
	hidenamebox
	release
	end


NPC_PortSarim_Church_Monk_2::
	lock
	faceplayer
	namebox NPC_PortSarim_Church_Monk_2_Text_0
	msgbox NPC_PortSarim_Church_Monk_2_Text_1
	hidenamebox
	release
	end


NPC_Smuggler_Varlamore::
	lock
	faceplayer
	namebox NPC_Smuggler_Varlamore_Text_0
	checkitem ITEM_WHISTLE, 1
	compare VAR_RESULT, FALSE
	goto_if_eq NPC_Smuggler_Varlamore_2
NPC_Smuggler_Varlamore_1:
	msgbox NPC_Smuggler_Varlamore_Text_2
	closemessage
	hidenamebox
	release
	end

NPC_Smuggler_Varlamore_2:
	msgbox NPC_Smuggler_Varlamore_Text_1
	closemessage
	hidenamebox
	giveitem ITEM_WHISTLE, 1
	goto NPC_Smuggler_Varlamore_1


WHISTLE_TELEPORT::
	msgbox WHISTLE_TELEPORT_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne WHISTLE_TELEPORT_2
	closemessage
	release
	end

WHISTLE_TELEPORT_2:
	playse SE_M_SCREECH
	msgbox WHISTLE_TELEPORT_Text_1
	applymovement OBJ_EVENT_ID_PLAYER, movement_TELEPORT_OUT
	warpteleport MAP_VARLAMORE, 0, 0, 0
	closemessage
	release
	end


RING_OF_KINSHIP_TELEPORT::
	msgbox RING_OF_KINSHIP_TELEPORT_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne RING_OF_KINSHIP_TELEPORT_2
	closemessage
	release
	end

RING_OF_KINSHIP_TELEPORT_2:
	playse SE_M_SCREECH
	msgbox WHISTLE_TELEPORT_Text_1
	applymovement OBJ_EVENT_ID_PLAYER, movement_TELEPORT_OUT
	warpteleport MAP_DAEMONHEIM, 0, 0, 0
	closemessage
	release
	end


NPC_PortSarimPub_Dwarf::
	lock
	faceplayer
	namebox NPC_PortSarimPub_Dwarf_Text_0
	msgbox NPC_PortSarimPub_Dwarf_Text_1
	closemessage
	hidenamebox
	release
	end


BattlePub_INFO_Text_0:
	.string "How may I serve you today?$"

BattlePub_REST_Text_0:
	.string "Sorry, we have no beds left.\p"
	.string "The best I can do is heal your monsters\n"
	.string "for you.$"

BattlePub_RULES_Text_0:
	.string "The rules for the Bar Crawl Pub Battles\n"
	.string "are as follows…$"

BattlePub_RULES_Text_1:
	.string "You may only challenge someone to a\n"
	.string "battle once per day.\p"
	.string "The loser of the battle must pay the\n"
	.string "winner.\p"
	.string "If any damage is inflicted upon the pub\n"
	.string "itself, compensation must be made.\p"
	.string "Your wins and losses will be shown on\n"
	.string "your Pub Crawl Battle Card.$"

BattlePub_SIGNUP_Text_0:
	.string "You're a new face, I don't think I've\n"
	.string "seen you around these parts.\p"
	.string "Are you interested in signing up for the\n"
	.string "Bar Crawl Battles?$"

BattlePub_SIGNUP_Text_1:
	.string "Great, gimme yer name and I'll write it\n"
	.string "on this card.$"

BattlePub_SIGNUP_Text_2:
	.string "Right, here you go buddy.$"

BattlePub_SIGNUP_Text_3:
	.string "That card will allow you to participate\n"
	.string "in Bar Crawl Battles.$"

BattlePub_SIGNUP_Text_4:
	.string "Hope you have fun and remember to be\n"
	.string "respectful to other battlers.$"

BattlePub_SIGNUP_Text_5:
	.string "Ay, come back if you change yer mind.$"

BattlePub_CHECKCARD_Text_0:
	.string "Oh I noticed that you don't have a Pub\n"
	.string "Crawl Battle Card.\p"
	.string "You should speak to the bartender for\n"
	.string "one.$"

NPC_PortSarimPub_BARTENDER_Text_0:
	.string "Bartender$"

NPC_PortSarimPub_BARTENDER_Text_1:
	.string "Welcome to the Port Sarim Battle Pub!$"

NPC_PortSarimPub_BARTENDER_Text_2:
	.string "Take care, don't be a stranger!$"

NPC_PortSarimPub_BARMAID_Text_0:
	.string "Barmaid$"

NPC_PortSarimPub_BARMAID_Text_1:
	.string "Here at the Battle Pub, adventurers can\n"
	.string "challenge each other to battles.\p"
	.string "The loser must pay for their meals.\p"
	.string "I would say that it is making us profit,\n"
	.string "but the amount of damage that they\l"
	.string "cause makes us break about even.$"

NPC_PortSarimPub_NPC_2_Text_0:
	.string "Pirate$"

NPC_PortSarimPub_NPC_2_Text_1:
	.string "I heard that the Falador party room\n"
	.string "holds contests to show off the beauty\l"
	.string "of monsters instead of battling with\l"
	.string "them.\p"
	.string "Disgusting!$"

NPC_PortSarimPub_NPC_1_Text_0:
	.string "Sailor$"

NPC_PortSarimPub_NPC_1_Text_1:
	.string "There is an unspoken rule where you can\n"
	.string "only battle the same person once per\l"
	.string "day.\p"
	.string "I heard this rule came about after too\n"
	.string "many drunks lost all of their gold\l"
	.string "pieces.$"

NPC_PortSarimPub_NPC_1_Text_2:
	.string "Do you wish to challenge them to a\n"
	.string "battle?$"

NPC_PortSarimPub_NPC_1_Text_3:
	.string "…$"

NPC_PortSarimPub_NPC_1_Text_4:
	.string "This round is on me.$"

NPC_PortSarimPub_Pirate_1_Text_0:
	.string "Gibbs$"

NPC_PortSarimPub_Pirate_1_Text_1:
	.string "The customs officer confiscates all\n"
	.string "Karamja Rum.\p"
	.string "She is the reason the Rum is always\n"
	.string "gone.$"

NPC_PortSarimPub_Pirate_1_Text_2:
	.string "PIRATE GIBBS$"

NPC_PortSarimPub_Pirate_1_Text_3:
	.string "I guess I owe you this.$"

NPC_PortSarimPub_Pirate_2_Text_0:
	.string "AyePatch$"

NPC_PortSarimPub_Pirate_2_Text_1:
	.string "Aye come to this pub daily, yer should\n"
	.string "too.$"

NPC_PortSarimPub_Pirate_2_Text_2:
	.string "Yaarr, take this.$"

NPC_PortSarimPub_PUBCRAWL_Text_0:
	.string "Barbarian$"

NPC_PortSarimPub_PUBCRAWL_Text_1:
	.string "YAARRGHH!\p"
	.string "I am the strongest of this YAAARR\n"
	.string "BATTLE PUB!$"

NPC_PortSarimPub_PUBCRAWL_Text_2:
	.string "YARHAHA! I have observed your\n"
	.string "potential.\p"
	.string "I would like to test you!$"

NPC_PortSarimPub_PUBCRAWL_Text_3:
	.string "I do not battle weaklings, come back\n"
	.string "when you've shown potential!$"

NPC_PortSarim_Church_Monk_1_Text_0:
	.string "Monk$"

NPC_PortSarim_Church_Monk_1_Text_1:
	.string "The other night I saw a drunk throwing\n"
	.string "things into the ocean.\p"
	.string "He was shouting something about\n"
	.string "Mudskippers.\p"
	.string "I don't even know what a Mudskipper is.$"

NPC_PortSarim_Church_Monk_2_Text_0:
	.string "Priest$"

NPC_PortSarim_Church_Monk_2_Text_1:
	.string "Not many people visit our Church out\n"
	.string "here.\p"
	.string "I don't think many people know of its\n"
	.string "existence.$"

NPC_Smuggler_Varlamore_Text_0:
	.string "Smuggler$"

NPC_Smuggler_Varlamore_Text_1:
	.string "Psst, have you heard?\p"
	.string "There's a religion that worships the sun\n"
	.string "on the continent to the west.\p"
	.string "Not many people from this continent\n"
	.string "know about them.\p"
	.string "The people from the continent are also\n"
	.string "know to travel around by flying on the\l"
	.string "backs of huge birds!\p"
	.string "How cool is that!\p"
	.string "……\p"
	.string "Speaking of which, I need to get rid of\n"
	.string "this whistle.\p"
	.string "Take it.$"

NPC_Smuggler_Varlamore_Text_2:
	.string "You never got that whistle from me.$"

WHISTLE_TELEPORT_Text_0:
	.string "Would you like to teleport to\n"
	.string "Varlamore?$"

WHISTLE_TELEPORT_Text_1:
	.string "Suddenly the world starts to warp\n"
	.string "around you.$"

RING_OF_KINSHIP_TELEPORT_Text_0:
	.string "Would you like to teleport to\n"
	.string "Daemonheim?$"

NPC_PortSarimPub_Dwarf_Text_0:
	.string "Brehan$"

NPC_PortSarimPub_Dwarf_Text_1:
	.string "Outrageous!\p"
	.string "The barmaid does not want to sell me\n"
	.string "drinks because I am a miner!$"
