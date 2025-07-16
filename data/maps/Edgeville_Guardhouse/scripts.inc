Edgeville_Guardhouse_MapScripts::
	.byte 0


SIR_THEO_EDGEVILLE::
	lock
	compare VAR_EDGEVILLE_KRYSTILIA, 0
	goto_if_eq SIR_THEO_EDGEVILLE_2
	compare VAR_EDGEVILLE_KRYSTILIA, 5
	goto_if_eq SIR_THEO_EDGEVILLE_3
	applymovement 2, MOVEMENT_SIR_THEO_EDGEVILLE_1
	namebox SIR_THEO_EDGEVILLE_Text_2
	msgbox SIR_THEO_EDGEVILLE_Text_13
	closemessage
	hidenamebox
	namebox SIR_THEO_EDGEVILLE_Text_0
	msgbox SIR_THEO_EDGEVILLE_Text_14
	closemessage
	hidenamebox
	release
	end

SIR_THEO_EDGEVILLE_2:
	faceplayer
	namebox SIR_THEO_EDGEVILLE_Text_0
	msgbox SIR_THEO_EDGEVILLE_Text_1
	hidenamebox
	closemessage
	applymovement 1, MOVEMENT_KRYSTILIA_1
	waitmovement 0
	applymovement 2, MOVEMENT_SIR_THEO_EDGEVILLE_1
	namebox SIR_THEO_EDGEVILLE_Text_2
	msgbox SIR_THEO_EDGEVILLE_Text_3
	waitmovement 0
	hidenamebox
	closemessage
	applymovement 2, MOVEMENT_SIR_THEO_EDGEVILLE_2
	namebox SIR_THEO_EDGEVILLE_Text_0
	msgbox SIR_THEO_EDGEVILLE_Text_4
	msgbox SIR_THEO_EDGEVILLE_Text_5, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne SIR_THEO_EDGEVILLE_8
SIR_THEO_EDGEVILLE_7:
	setvar VAR_EDGEVILLE_KRYSTILIA, 5
	msgbox SIR_THEO_EDGEVILLE_Text_6
	hidenamebox
	closemessage
	applymovement 2, MOVEMENT_SIR_THEO_EDGEVILLE_1
	namebox SIR_THEO_EDGEVILLE_Text_2
	msgbox SIR_THEO_EDGEVILLE_Text_7
	hidenamebox
	closemessage
	namebox SIR_THEO_EDGEVILLE_Text_0
	msgbox SIR_THEO_EDGEVILLE_Text_8
	waitmovement 0
	closemessage
	hidenamebox
	release
	end

SIR_THEO_EDGEVILLE_3:
	faceplayer
	namebox SIR_THEO_EDGEVILLE_Text_0
	msgbox SIR_THEO_EDGEVILLE_Text_9, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne SIR_THEO_EDGEVILLE_11
SIR_THEO_EDGEVILLE_10:
	msgbox SIR_THEO_EDGEVILLE_Text_10
	hidenamebox
	closemessage
	applymovement 2, MOVEMENT_SIR_THEO_EDGEVILLE_1
	namebox SIR_THEO_EDGEVILLE_Text_2
	msgbox SIR_THEO_EDGEVILLE_Text_11
	hidenamebox
	closemessage
	namebox SIR_THEO_EDGEVILLE_Text_0
	msgbox SIR_THEO_EDGEVILLE_Text_12
	waitmovement 0
	closemessage
	hidenamebox
	release
	end

SIR_THEO_EDGEVILLE_8:
	goto BATTLE_SIR_THEO_EDGEVILLE
	goto SIR_THEO_EDGEVILLE_7

SIR_THEO_EDGEVILLE_11:
	goto BATTLE_SIR_THEO_EDGEVILLE
	goto SIR_THEO_EDGEVILLE_10


BATTLE_SIR_THEO_EDGEVILLE::
	namebox SIR_THEO_EDGEVILLE_Text_0
	msgbox BATTLE_SIR_THEO_EDGEVILLE_Text_0
	closemessage
	hidenamebox
	trainerbattle_no_intro TRAINER_SIR_THEO_EDGEVILLE, BATTLE_SIR_THEO_EDGEVILLE_Text_1
	namebox SIR_THEO_EDGEVILLE_Text_0
	msgbox BATTLE_SIR_THEO_EDGEVILLE_Text_2
	closemessage
	hidenamebox
	giveitem ITEM_TM28, 1
	setvar VAR_EDGEVILLE_KRYSTILIA, 10
	namebox SIR_THEO_EDGEVILLE_Text_0
	msgbox BATTLE_SIR_THEO_EDGEVILLE_Text_3
	closemessage
	hidenamebox
	release
	end


MOVEMENT_KRYSTILIA_1:
	face_down
	emote_exclamation_mark
	step_end

MOVEMENT_KRYSTILIA_2:
	face_down
	step_end

MOVEMENT_SIR_THEO_EDGEVILLE_1:
	face_up
	step_end

MOVEMENT_SIR_THEO_EDGEVILLE_2:
	face_player
	step_end

EDGEVILLE_JAILER_1::
	lock
	faceplayer
	namebox EDGEVILLE_JAILER_1_Text_0
	msgbox EDGEVILLE_JAILER_1_Text_1
	closemessage
	release
	end


EDGEVILLE_JAILER_2::
	lock
	faceplayer
	namebox EDGEVILLE_JAILER_1_Text_0
	msgbox EDGEVILLE_JAILER_2_Text_0
	closemessage
	release
	end


EDGEVILLE_KRYSTILIA::
	lock
	applymovement 1, MOVEMENT_KRYSTILIA_2
	applymovement 2, MOVEMENT_SIR_THEO_EDGEVILLE_1
	namebox SIR_THEO_EDGEVILLE_Text_2
	msgbox EDGEVILLE_KRYSTILIA_Text_0
	closemessage
	hidenamebox
	namebox SIR_THEO_EDGEVILLE_Text_0
	msgbox EDGEVILLE_KRYSTILIA_Text_1
	closemessage
	hidenamebox
	release
	end


SIR_THEO_EDGEVILLE_Text_0:
	.string "Sir Theo$"

SIR_THEO_EDGEVILLE_Text_1:
	.string "{PLAYER}? Fancy meeting you here!\p"
	.string "Me?\p"
	.string "Due to the Black Knight Fortress\n"
	.string "incident I have been stationed here by\l"
	.string "Sir Amik to keep peace in this area.\p"
	.string "I recently got this Witch right here\n"
	.string "arrested for causing chaos.$"

SIR_THEO_EDGEVILLE_Text_2:
	.string "Krystilia$"

SIR_THEO_EDGEVILLE_Text_3:
	.string "I can get out anytime I want, don't you\n"
	.string "worry about me Theodore.$"

SIR_THEO_EDGEVILLE_Text_4:
	.string "Or so she says, but she has not left\n"
	.string "just yet.$"

SIR_THEO_EDGEVILLE_Text_5:
	.string "Either way {PLAYER}, I don't want to\n"
	.string "get rusty in my battle prowess.\p"
	.string "Would you care to spar with me?$"

SIR_THEO_EDGEVILLE_Text_6:
	.string "Well, that is a shame.$"

SIR_THEO_EDGEVILLE_Text_7:
	.string "Suuuuuuch a shame.\p"
	.string "Do you want to hear more about my\n"
	.string "homemade hat then?$"

SIR_THEO_EDGEVILLE_Text_8:
	.string "I am obligated to hear you out…$"

SIR_THEO_EDGEVILLE_Text_9:
	.string "Do you feel like giving me a break from\n"
	.string "this witch to have a little kerfuffle?$"

SIR_THEO_EDGEVILLE_Text_10:
	.string "If you change your mind, I'll be here…$"

SIR_THEO_EDGEVILLE_Text_11:
	.string "Awwww, that means you've got even more\n"
	.string "time to spend with me then don't you!\p"
	.string "It takes a big strong knight to keep me\n"
	.string "restrained…$"

SIR_THEO_EDGEVILLE_Text_12:
	.string "Gods not this again!$"

SIR_THEO_EDGEVILLE_Text_13:
	.string "And that's how I make so much stuff\n"
	.string "that I am now running out of room.\p"
	.string "I am considering filling another cell\n"
	.string "with just my hats.$"

SIR_THEO_EDGEVILLE_Text_14:
	.string "Again… back to the point…\p"
	.string "What do your hats have to do with the\n"
	.string "Wilderness?$"

BATTLE_SIR_THEO_EDGEVILLE_Text_0:
	.string "Excellent, let us fight!$"

BATTLE_SIR_THEO_EDGEVILLE_Text_1:
	.string "A worthy defeat.$"

BATTLE_SIR_THEO_EDGEVILLE_Text_2:
	.string "Well as expected, I am no match for you.\p"
	.string "No wonder Sir Owen and Sir Tiffy Cashien\n"
	.string "holds you in high regard.\p"
	.string "Here's a little something from me as a\n"
	.string "thank you.$"

BATTLE_SIR_THEO_EDGEVILLE_Text_3:
	.string "That's a move used by us knights, but\n"
	.string "some monsters can learn it too.\p"
	.string "Hopefully you can put it to good use.\n"
	.string "Hope I get to see you after I am done\l"
	.string "here.$"

EDGEVILLE_JAILER_1_Text_0:
	.string "Jailer$"

EDGEVILLE_JAILER_1_Text_1:
	.string "These two never seem to shut up!$"

EDGEVILLE_JAILER_2_Text_0:
	.string "I'm not paid enough to listen to this\n"
	.string "sort of thing.$"

EDGEVILLE_KRYSTILIA_Text_0:
	.string "I heard there's a mystery man who is\n"
	.string "lurking in Lumbridge who loves hats\l"
	.string "almost as much as me.\p"
	.string "Do you know anything about him?$"

EDGEVILLE_KRYSTILIA_Text_1:
	.string "Who?\p"
	.string "The guy that's obsessed with frogeels?\p"
	.string "What on Gielinor do you want with him?$"
