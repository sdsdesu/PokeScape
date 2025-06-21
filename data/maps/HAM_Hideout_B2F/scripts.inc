HAM_Hideout_B2F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, HAM_Hideout_B2F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

HAM_Hideout_B2F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	call HAMHIDEOUT_B2F_STATE
	return


HAMHIDEOUT_B2F_STATE::
	setflag FLAG_TEMP_1F
	setflag FLAG_TEMP_1E
	setflag FLAG_TEMP_1D
	removeobject 27
	removeobject 22
	removeobject 24
	removeobject 4
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 230
	goto_if_eq HAMHIDEOUT_B2F_STATE_2
HAMHIDEOUT_B2F_STATE_1:
	return

HAMHIDEOUT_B2F_STATE_2:
	setvar VAR_TEMP_0, 1
	clearflag FLAG_TEMP_1E
	clearflag FLAG_TEMP_1D
	addobject 22
	addobject 24
	addobject 4
	goto HAMHIDEOUT_B2F_STATE_1


NPC_HAM_HIDEOUT_1::
	lock
	faceplayer
	namebox NPC_HAM_HIDEOUT_1_Text_0
	msgbox NPC_HAM_HIDEOUT_1_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_HAM_HIDEOUT_2::
	lock
	faceplayer
	namebox NPC_HAM_HIDEOUT_1_Text_0
	msgbox NPC_HAM_HIDEOUT_2_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_HAM_HIDEOUT_3::
	lock
	faceplayer
	namebox NPC_HAM_HIDEOUT_1_Text_0
	msgbox NPC_HAM_HIDEOUT_3_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_HAM_HIDEOUT_4::
	lock
	faceplayer
	namebox NPC_HAM_HIDEOUT_1_Text_0
	msgbox NPC_HAM_HIDEOUT_4_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_HAM_HIDEOUT_5::
	lock
	faceplayer
	namebox NPC_HAM_HIDEOUT_1_Text_0
	msgbox NPC_HAM_HIDEOUT_5_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_HAM_HIDEOUT_6::
	lock
	faceplayer
	namebox NPC_HAM_HIDEOUT_1_Text_0
	msgbox NPC_HAM_HIDEOUT_6_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_HAM_HIDEOUT_7::
	lock
	faceplayer
	namebox NPC_HAM_HIDEOUT_1_Text_0
	msgbox NPC_HAM_HIDEOUT_7_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_HAM_HIDEOUT_8::
	lock
	faceplayer
	namebox NPC_HAM_HIDEOUT_1_Text_0
	msgbox NPC_HAM_HIDEOUT_8_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_HAM_HIDEOUT_9::
	lock
	faceplayer
	namebox NPC_HAM_HIDEOUT_1_Text_0
	msgbox NPC_HAM_HIDEOUT_9_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_HAM_HIDEOUT_10::
	lock
	faceplayer
	namebox NPC_HAM_HIDEOUT_1_Text_0
	msgbox NPC_HAM_HIDEOUT_10_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_HAM_HIDEOUT_11::
	lock
	faceplayer
	namebox NPC_HAM_HIDEOUT_1_Text_0
	msgbox NPC_HAM_HIDEOUT_11_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_HAM_HIDEOUT_12::
	lock
	faceplayer
	namebox NPC_HAM_HIDEOUT_1_Text_0
	msgbox NPC_HAM_HIDEOUT_12_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_HAM_HIDEOUT_13::
	lock
	faceplayer
	namebox NPC_HAM_HIDEOUT_1_Text_0
	msgbox NPC_HAM_HIDEOUT_13_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_HAM_HIDEOUT_14::
	lock
	faceplayer
	namebox NPC_HAM_HIDEOUT_1_Text_0
	msgbox NPC_HAM_HIDEOUT_14_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_HAM_HIDEOUT_15::
	lock
	faceplayer
	namebox NPC_HAM_HIDEOUT_1_Text_0
	msgbox NPC_HAM_HIDEOUT_15_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_HAM_HIDEOUT_16::
	lock
	faceplayer
	namebox NPC_HAM_HIDEOUT_1_Text_0
	msgbox NPC_HAM_HIDEOUT_16_Text_0
	closemessage
	hidenamebox
	release
	end


BATTLE_HAM_HIDEOUT_GRUNT_1::
	trainerbattle_single TRAINER_HAM_HIDEOUT_GRUNT_1, BATTLE_HAM_HIDEOUT_GRUNT_1_Text_0, BATTLE_HAM_HIDEOUT_GRUNT_1_Text_1
	namebox BATTLE_HAM_HIDEOUT_GRUNT_1_Text_2
	msgbox BATTLE_HAM_HIDEOUT_GRUNT_1_Text_3
	hidenamebox
	release
	end


BATTLE_HAM_HIDEOUT_GRUNT_2::
	trainerbattle_single TRAINER_HAM_HIDEOUT_GRUNT_2, BATTLE_HAM_HIDEOUT_GRUNT_2_Text_0, BATTLE_HAM_HIDEOUT_GRUNT_2_Text_1
	namebox BATTLE_HAM_HIDEOUT_GRUNT_1_Text_2
	msgbox BATTLE_HAM_HIDEOUT_GRUNT_2_Text_2
	hidenamebox
	release
	end


BATTLE_HAM_HIDEOUT_GRUNT_3::
	trainerbattle_single TRAINER_HAM_HIDEOUT_GRUNT_3, BATTLE_HAM_HIDEOUT_GRUNT_3_Text_0, BATTLE_HAM_HIDEOUT_GRUNT_3_Text_1
	namebox BATTLE_HAM_HIDEOUT_GRUNT_1_Text_2
	msgbox BATTLE_HAM_HIDEOUT_GRUNT_3_Text_2
	hidenamebox
	release
	end


BATTLE_HAM_HIDEOUT_GRUNT_4::
	trainerbattle_single TRAINER_HAM_HIDEOUT_GRUNT_4, BATTLE_HAM_HIDEOUT_GRUNT_4_Text_0, BATTLE_HAM_HIDEOUT_GRUNT_4_Text_1
	namebox BATTLE_HAM_HIDEOUT_GRUNT_1_Text_2
	msgbox BATTLE_HAM_HIDEOUT_GRUNT_4_Text_2
	hidenamebox
	release
	end


BATTLE_HAM_HIDEOUT_GRUNT_5::
	trainerbattle_single TRAINER_HAM_HIDEOUT_GRUNT_5, BATTLE_HAM_HIDEOUT_GRUNT_5_Text_0, BATTLE_HAM_HIDEOUT_GRUNT_5_Text_1
	namebox BATTLE_HAM_HIDEOUT_GRUNT_1_Text_2
	msgbox BATTLE_HAM_HIDEOUT_GRUNT_5_Text_2
	hidenamebox
	release
	end


BATTLE_HAM_HIDEOUT_GRUNT_6::
	trainerbattle_single TRAINER_HAM_HIDEOUT_GRUNT_6, BATTLE_HAM_HIDEOUT_GRUNT_6_Text_0, BATTLE_HAM_HIDEOUT_GRUNT_6_Text_1
	namebox BATTLE_HAM_HIDEOUT_GRUNT_1_Text_2
	msgbox BATTLE_HAM_HIDEOUT_GRUNT_6_Text_2
	hidenamebox
	release
	end


BATTLE_HAM_HIDEOUT_GRUNT_7::
	trainerbattle_single TRAINER_HAM_HIDEOUT_GRUNT_7, BATTLE_HAM_HIDEOUT_GRUNT_7_Text_0, BATTLE_HAM_HIDEOUT_GRUNT_7_Text_1
	namebox BATTLE_HAM_HIDEOUT_GRUNT_1_Text_2
	msgbox BATTLE_HAM_HIDEOUT_GRUNT_7_Text_2
	hidenamebox
	release
	end


BATTLE_HAM_HIDEOUT_GRUNT_8::
	trainerbattle_single TRAINER_HAM_HIDEOUT_GRUNT_8, BATTLE_HAM_HIDEOUT_GRUNT_8_Text_0, BATTLE_HAM_HIDEOUT_GRUNT_8_Text_1
	namebox BATTLE_HAM_HIDEOUT_GRUNT_1_Text_2
	msgbox BATTLE_HAM_HIDEOUT_GRUNT_8_Text_2
	hidenamebox
	release
	end


BATTLE_HAM_HIDEOUT_GRUNT_9::
	trainerbattle_single TRAINER_HAM_HIDEOUT_GRUNT_9, BATTLE_HAM_HIDEOUT_GRUNT_9_Text_0, BATTLE_HAM_HIDEOUT_GRUNT_9_Text_1
	namebox BATTLE_HAM_HIDEOUT_GRUNT_1_Text_2
	msgbox BATTLE_HAM_HIDEOUT_GRUNT_9_Text_2
	hidenamebox
	release
	end


BATTLE_HAM_HIDEOUT_GRUNT_10::
	trainerbattle_single TRAINER_HAM_HIDEOUT_GRUNT_10, BATTLE_HAM_HIDEOUT_GRUNT_10_Text_0, BATTLE_HAM_HIDEOUT_GRUNT_10_Text_1
	namebox BATTLE_HAM_HIDEOUT_GRUNT_1_Text_2
	msgbox BATTLE_HAM_HIDEOUT_GRUNT_10_Text_2
	hidenamebox
	release
	end


TRIGGER_HAMHIDEOUT_BABE_PATTY::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, movement_HAMHIDEOUT_PLAYER_1
	applymovement OBJ_EVENT_ID_FOLLOWER, movement_HAMHIDEOUT_ZANIK_1
	applymovement 22, movement_HAMHIDEOUT_PATTY_1
	applymovement 24, movement_HAMHIDEOUT_BABE_1
	waitmovement 22
	removeobject 22
	playse SE_EXIT
	waitmovement 24
	namebox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_0
	msgbox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_1
	hidenamebox
	closemessage
	delay 30
	namebox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_2
	msgbox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_3
	hidenamebox
	closemessage
	playse SE_PIN
	applymovement 24, movement_HAMHIDEOUT_BABE_2
	waitmovement 0
	namebox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_0
	msgbox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_4
	hidenamebox
	closemessage
	applymovement 24, movement_HAMHIDEOUT_BABE_3
	waitmovement 0
	removeobject 24
	playse SE_EXIT
	setflag FLAG_TEMP_1E
	delay 30
	applymovement OBJ_EVENT_ID_FOLLOWER, MOVEMENT_WALKLEFT
	waitmovement 0
	namebox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_5
	msgbox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_6
	hidenamebox
	closemessage
	applymovement 4, movement_HAMHIDEOUT_GUARD_1
	waitmovement 0
	namebox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_7
	msgbox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_8
	hidenamebox
	closemessage
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_EXCLAMATIONMARK_FACE_UP
	applymovement OBJ_EVENT_ID_FOLLOWER, MOVEMENT_EXCLAMATIONMARK_FACE_UP
	waitmovement 0
	delay 90
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_INTERACT_UP
	waitmovement 0
	namebox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_7
	msgbox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_9
	hidenamebox
	closemessage
	playfanfare MUS_OBTAIN_ITEM
	msgbox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_10
	waitfanfare
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Movement_InteractFACERIGHT
	applymovement OBJ_EVENT_ID_FOLLOWER, Movement_InteractFACELEFT
	waitmovement 0
	namebox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_5
	msgbox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_11
	hidenamebox
	closemessage
	namebox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_7
	msgbox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_12
	hidenamebox
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Movement_InteractFACEUP
	applymovement OBJ_EVENT_ID_FOLLOWER, Movement_InteractFACEUP
	waitmovement 0
	namebox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_5
	msgbox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_13
	hidenamebox
	closemessage
	namebox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_7
	msgbox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_14
	hidenamebox
	closemessage
	namebox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_5
	msgbox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_15
	hidenamebox
	closemessage
	namebox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_7
	msgbox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_16
	hidenamebox
	closemessage
	facefollower
	namebox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_5
	msgbox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_17, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq TRIGGER_HAMHIDEOUT_BABE_PATTY_2
	namebox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_5
	msgbox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_21
	hidenamebox
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Movement_InteractFACEUP
	applymovement OBJ_EVENT_ID_FOLLOWER, Movement_InteractFACEUP
	waitmovement 0
	msgbox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_22
	hidenamebox
	closemessage
	fadescreenswapbuffers FADE_TO_BLACK
	setvar VAR_0x8004, OUTFIT_DEFAULT
	special WearOutfit
	destroyfollower
	addobject 27
	clearflag FLAG_TEMP_1F
	loadword 0, Following_Zanik
	setfollower 27, 0x80
	fadescreenswapbuffers FADE_FROM_BLACK
TRIGGER_HAMHIDEOUT_BABE_PATTY_1:
	playse SE_LEDGE
	applymovement 4, movement_HAMHIDEOUT_GUARD_3
	waitmovement 0
	namebox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_7
	msgbox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_23
	hidenamebox
	closemessage
	namebox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_7
	msgbox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_24
	hidenamebox
	closemessage
	namebox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_7
	msgbox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_25
	hidenamebox
	closemessage
	applymovement 4, movement_HAMHIDEOUT_GUARD_2
	waitmovement 0
	removeobject 4
	setflag FLAG_TEMP_1D
	namebox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_5
	msgbox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_26
	hidenamebox
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_INTERACT_RIGHT
	waitmovement 0
	namebox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_5
	msgbox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_27
	hidenamebox
	closemessage
	setvar VAR_TEMP_0, 2
	setvar VAR_POKESCAPE_STORYMODE_PROGRESS, 235
	release
	end

TRIGGER_HAMHIDEOUT_BABE_PATTY_2:
	hidenamebox
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Movement_InteractFACEUP
	applymovement OBJ_EVENT_ID_FOLLOWER, Movement_InteractFACEUP
	waitmovement 0
	namebox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_5
	msgbox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_18
	hidenamebox
	closemessage
	namebox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_7
	msgbox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_19
	hidenamebox
	closemessage
	fadescreenswapbuffers FADE_TO_BLACK
	msgbox TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_20
	hidenamebox
	closemessage
	setvar VAR_0x8004, OUTFIT_DEFAULT
	special WearOutfit
	destroyfollower
	addobject 27
	clearflag FLAG_TEMP_1F
	loadword 0, Following_Zanik
	setfollower 27, 0x80
	fadescreenswapbuffers FADE_FROM_BLACK
	goto TRIGGER_HAMHIDEOUT_BABE_PATTY_1


MOVEMENT_EXCLAMATIONMARK_FACE_UP:
	emote_exclamation_mark
	face_up
	step_end

movement_HAMHIDEOUT_GUARD_1:
	walk_down
	walk_down
	walk_down
	step_end

movement_HAMHIDEOUT_GUARD_2:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

movement_HAMHIDEOUT_GUARD_3:
	jump_in_place_down
	step_end

movement_HAMHIDEOUT_PLAYER_1:
	lock_facing_direction
	walk_left
	unlock_facing_direction
	face_right
	step_end

movement_HAMHIDEOUT_ZANIK_1:
	walk_up
	lock_facing_direction
	walk_right
	unlock_facing_direction
	face_left
	step_end

movement_HAMHIDEOUT_PATTY_1:
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

movement_HAMHIDEOUT_BABE_1:
	walk_right
	walk_down
	walk_down
	walk_down
	delay_16
	face_left
	step_end

movement_HAMHIDEOUT_BABE_2:
	emote_double_exclamation_mark
	jump_in_place_down
	step_end

movement_HAMHIDEOUT_BABE_3:
	walk_fast_down
	step_end

NPC_HAM_HIDEOUT_1_Text_0:
	.string "H.A.M Member$"

NPC_HAM_HIDEOUT_1_Text_1:
	.string "We will not tolerate anyone with an\n"
	.string "opinion differing from our own.\p"
	.string "That is the path of disaster.$"

NPC_HAM_HIDEOUT_2_Text_0:
	.string "Before I joined H.A.M my family was\n"
	.string "killed by goblins.\p"
	.string "Now I feel like I have found my life's\n"
	.string "calling right here.$"

NPC_HAM_HIDEOUT_3_Text_0:
	.string "I quite like it here honestly.\p"
	.string "One thing bugs me however.\p"
	.string "Why did the leaders decide on the robes\n"
	.string "being pink?\p"
	.string "Is there some symbolism I am not\n"
	.string "getting?$"

NPC_HAM_HIDEOUT_4_Text_0:
	.string "Don't tell any of the other grunts, but\n"
	.string "I got a thing for Babe.\p"
	.string "Do you know anything that might help me\n"
	.string "get closer to her?\n"
	.string "There is a limit to how much hatred\l"
	.string "against monsters can bring people\l"
	.string "together…$"

NPC_HAM_HIDEOUT_5_Text_0:
	.string "We are going to make Lumbridge great\n"
	.string "again.\n"
	.string "Then the world will follow.$"

NPC_HAM_HIDEOUT_6_Text_0:
	.string "If you do not agree with my opinion you\n"
	.string "are my enemy, that is how the world\l"
	.string "works.$"

NPC_HAM_HIDEOUT_7_Text_0:
	.string "The dog I grew up with evolved into a\n"
	.string "green monstrosity.\p"
	.string "I still like it, but now it's the thing we\n"
	.string "are trying to vanquish from the world.\p"
	.string "Am I in the wrong for not wanting to\n"
	.string "abandon my friend?$"

NPC_HAM_HIDEOUT_8_Text_0:
	.string "We might use monsters to fight\n"
	.string "monsters, but we have standards.\p"
	.string "Dogs, spiders, cows, pigs, sheep, and\n"
	.string "cats have been friends and allies to\l"
	.string "humans for centuries.\n"
	.string "Now they stand with us against the\l"
	.string "scourge that are monsters!$"

NPC_HAM_HIDEOUT_9_Text_0:
	.string "I miss not living in a cave.$"

NPC_HAM_HIDEOUT_10_Text_0:
	.string "Johanhus is an idealist, he wants to\n"
	.string "solve conflict with words alone.\p"
	.string "So far it hasn't really worked, though.$"

NPC_HAM_HIDEOUT_11_Text_0:
	.string "Babe and Patty are recent admins\n"
	.string "recruited by Sigmund for their hard\l"
	.string "work.\n"
	.string "Patty's hard work that is, I don't know\l"
	.string "what Babe did…$"

NPC_HAM_HIDEOUT_12_Text_0:
	.string "Babe is really aloof.\p"
	.string "It's really hard to tell what's going on\n"
	.string "in her head.$"

NPC_HAM_HIDEOUT_13_Text_0:
	.string "I hear Patty used to be a wizard in the\n"
	.string "Wizards' Tower before she joined us.\p"
	.string "She was thrown out due to rash and\n"
	.string "feisty decisions apparently.$"

NPC_HAM_HIDEOUT_14_Text_0:
	.string "Sigmund is an extremist among us.\p"
	.string "He doesn't mind flooding a cavern of\n"
	.string "goblins if it means they will all die.\n"
	.string "Personally I get that.$"

NPC_HAM_HIDEOUT_15_Text_0:
	.string "Sigmund believes power and might makes\n"
	.string "right, so we in H.A.M will become the most\l"
	.string "powerful organisation in Gielinor.$"

NPC_HAM_HIDEOUT_16_Text_0:
	.string "$"

BATTLE_HAM_HIDEOUT_GRUNT_1_Text_0:
	.string "I bet you're wondering how I ended up\n"
	.string "here.$"

BATTLE_HAM_HIDEOUT_GRUNT_1_Text_1:
	.string "Urgh...$"

BATTLE_HAM_HIDEOUT_GRUNT_1_Text_2:
	.string "H.A.M Grunt$"

BATTLE_HAM_HIDEOUT_GRUNT_1_Text_3:
	.string "When I signed up to become a member, I\n"
	.string "was never told that our headquarters\l"
	.string "was in a cave.\p"
	.string "The Black Knights have a whole\n"
	.string "fortress...$"

BATTLE_HAM_HIDEOUT_GRUNT_2_Text_0:
	.string "I've only been a member for a few days...\p"
	.string "Do you know where the toilets are?$"

BATTLE_HAM_HIDEOUT_GRUNT_2_Text_1:
	.string "Aaaaaahhhh!$"

BATTLE_HAM_HIDEOUT_GRUNT_2_Text_2:
	.string "Please tell me it's not just a hole in\n"
	.string "the floor...$"

BATTLE_HAM_HIDEOUT_GRUNT_3_Text_0:
	.string "I've not had a good night's sleep in\n"
	.string "weeks!\p"
	.string "I'm going to take my frustrations on\n"
	.string "you!$"

BATTLE_HAM_HIDEOUT_GRUNT_3_Text_1:
	.string "My back!$"

BATTLE_HAM_HIDEOUT_GRUNT_3_Text_2:
	.string "Have you seen how many of us there are\n"
	.string "compared to how many beds we have?\p"
	.string "There's a rota, but most nights it's\n"
	.string "whatever space we can find on the\l"
	.string "floor.$"

BATTLE_HAM_HIDEOUT_GRUNT_4_Text_0:
	.string "People like you who are friends with\n"
	.string "monsters make me sick.$"

BATTLE_HAM_HIDEOUT_GRUNT_4_Text_1:
	.string "Disgusting!$"

BATTLE_HAM_HIDEOUT_GRUNT_4_Text_2:
	.string "I can't bear to speak to a monster\n"
	.string "sympathiser like you.$"

BATTLE_HAM_HIDEOUT_GRUNT_5_Text_0:
	.string "Johanhus and Sigmund were able to build\n"
	.string "all this in a cave!\p"
	.string "With a box of scraps!$"

BATTLE_HAM_HIDEOUT_GRUNT_5_Text_1:
	.string "Gah!$"

BATTLE_HAM_HIDEOUT_GRUNT_5_Text_2:
	.string "Praise be to Johanhus and Sigmund.\p"
	.string "Where would we be without them?$"

BATTLE_HAM_HIDEOUT_GRUNT_6_Text_0:
	.string "I have been chosen by Johanhus for a\n"
	.string "special purpose.$"

BATTLE_HAM_HIDEOUT_GRUNT_6_Text_1:
	.string "I may have lost, but I won't fail him.$"

BATTLE_HAM_HIDEOUT_GRUNT_6_Text_2:
	.string "Johanhus has tasked me with searching\n"
	.string "for caches of First Age armour.\p"
	.string "I wonder why he wants it, we already\n"
	.string "have plenty of sets of much newer\l"
	.string "armour...$"

BATTLE_HAM_HIDEOUT_GRUNT_7_Text_0:
	.string "Do you think Sigmund's plans are\n"
	.string "extremist?$"

BATTLE_HAM_HIDEOUT_GRUNT_7_Text_1:
	.string "I only asked a question!$"

BATTLE_HAM_HIDEOUT_GRUNT_7_Text_2:
	.string "There are lots of mutterings around\n"
	.string "here that Sigmund's actions are\l"
	.string "dangerous and destructive.\p"
	.string "Personally, I don't think he's done\n"
	.string "enough yet.\p"
	.string "It will take a substantial amount of\n"
	.string "power to wipe out the scourge of\l"
	.string "monsters.$"

BATTLE_HAM_HIDEOUT_GRUNT_8_Text_0:
	.string "Go in peace in the name of Saradomin.\p"
	.string "May his glory shine upon you like the\n"
	.string "sun.$"

BATTLE_HAM_HIDEOUT_GRUNT_8_Text_1:
	.string "May Saradomin guide your soul to light.$"

BATTLE_HAM_HIDEOUT_GRUNT_8_Text_2:
	.string "As Saradomin is the 'Lord of Light', do\n"
	.string "you think that Johanhus and Sigmund\l"
	.string "deliberately build our base underground\l"
	.string "where the light cannot reach because\l"
	.string "they know he would be ashamed of us?$"

BATTLE_HAM_HIDEOUT_GRUNT_9_Text_0:
	.string "How dare you side with those THINGS\n"
	.string "instead of your fellow humans!$"

BATTLE_HAM_HIDEOUT_GRUNT_9_Text_1:
	.string "Traitor!$"

BATTLE_HAM_HIDEOUT_GRUNT_9_Text_2:
	.string "I used to be a farmer, you know.\p"
	.string "Until a group of hobgoblins destroyed\n"
	.string "my crops.\p"
	.string "Ruined my livelihood!\p"
	.string "Honest farmers shouldn't have to deal\n"
	.string "with that, it's why monsters should be\l"
	.string "eradicated.$"

BATTLE_HAM_HIDEOUT_GRUNT_10_Text_0:
	.string "Monsters are evil, so that means we can\n"
	.string "kill them for fun.$"

BATTLE_HAM_HIDEOUT_GRUNT_10_Text_1:
	.string "Evil, evil creatures!$"

BATTLE_HAM_HIDEOUT_GRUNT_10_Text_2:
	.string "I learned that from an old book, the\n"
	.string "'Manual of Monsters'.\p"
	.string "It had details on all different kinds of\n"
	.string "monsters and it said if they were good\l"
	.string "or evil...\n"
	.string "and most of them are evil!$"

TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_0:
	.string "Babe$"

TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_1:
	.string "Hey… You look familiar…$"

TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_2:
	.string "Patty$"

TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_3:
	.string "Hurry up Babe, we need to go to Varrock!\p"
	.string "I swear if you make us late again…$"

TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_4:
	.string "C-coming!$"

TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_5:
	.string "Zanik$"

TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_6:
	.string "What was that about?$"

TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_7:
	.string "H.A.M Guard$"

TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_8:
	.string "What are you two doing straying from\n"
	.string "your posts?!$"

TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_9:
	.string "The spare jail key?\p"
	.string "Man you guys are useless!\p"
	.string "Here take it and don't lose this one\n"
	.string "otherwise Sigmund will have your heads.$"

TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_10:
	.string "{PLAYER} obtained the CELL KEY.$"

TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_11:
	.string "Alright {PLAYER} lets go free the\n"
	.string "prisioners!$"

TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_12:
	.string "Wait what did you say?!$"

TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_13:
	.string "Uh, let's go beat up the prisioners!$"

TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_14:
	.string "Nice try…\n"
	.string "Take your hood off.$"

TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_15:
	.string "Uh, I cannot do that…$"

TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_16:
	.string "Take it off or else!$"

TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_17:
	.string "{PLAYER} what should we do, should we\n"
	.string "take our disguses off?$"

TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_18:
	.string "No we will not!$"

TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_19:
	.string "Sorry but I didn't give you a choice!$"

TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_20:
	.string "The guard removes your outfits.$"

TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_21:
	.string "Okay…$"

TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_22:
	.string "You remove your outfits.$"

TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_23:
	.string "AARRRGH!\p"
	.string "A GOBLIN!\p"
	.string "A DISGUSTING VILE GOBLIN!$"

TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_24:
	.string "Stand still while I eliminate you!$"

TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_25:
	.string "Urgh…\p"
	.string "Stupid goblin…\p"
	.string "You wouldn't have stoof a chance if it\n"
	.string "wasn't for this human!\p"
	.string "There's no way I'm letting either of you\n"
	.string "escape alive!$"

TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_26:
	.string "I'm sorry {PLAYER}…\p"
	.string "I should have just kept my mouth shut…$"

TRIGGER_HAMHIDEOUT_BABE_PATTY_Text_27:
	.string "You're right, no time to feel sorry.\p"
	.string "We've got some people to rescue!$"
