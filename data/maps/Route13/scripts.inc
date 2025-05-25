Route13_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route13_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_LOAD, Route13_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Route13_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 16
	call Route13_STATE
	return

Route13_MapScripts_MAP_SCRIPT_ON_LOAD:
	call PURO_PURO_EVENT
	return


Route13_STATE::
	compare VAR_POKESCAPE_GAMEMODE_STATE, 1
	goto_if_eq Route13_STATE_2
Route13_STATE_1:
	goto_if_unset FLAG_ROUTE13_BLOCK, Route13_STATE_5
	setobjectxyperm 9, 17, 20
	setobjectxyperm 10, 18, 23
	setobjectxyperm 11, 22, 24
	setobjectxyperm 19, 24, 17
	setobjectxyperm 20, 23, 21
	setobjectxyperm 13, 23, 18
	setobjectmovementtype 13, MOVEMENT_TYPE_FACE_DOWN
	setobjectmovementtype 9, MOVEMENT_TYPE_WANDER_AROUND
	setobjectmovementtype 10, MOVEMENT_TYPE_WANDER_AROUND
	setobjectmovementtype 11, MOVEMENT_TYPE_WANDER_AROUND
	setobjectmovementtype 19, MOVEMENT_TYPE_WANDER_AROUND
	setobjectmovementtype 20, MOVEMENT_TYPE_WANDER_AROUND
Route13_STATE_4:
	return

Route13_STATE_2:
	removeobject 18
	setflag FLAG_ROUTE13_BLOCK
	goto Route13_STATE_1

Route13_STATE_5:
	setvar VAR_TEMP_0, 1
	goto Route13_STATE_4


TRIGGER_BLOCK_HAZELMERE::
	lock
	delay 60
	applymovement 18, MOVEMENT_INTERACT_DOWN
	namebox TRIGGER_BLOCK_HAZELMERE_Text_0
	msgbox TRIGGER_BLOCK_HAZELMERE_Text_1
	closemessage
	hidenamebox
	waitmovement 0
	playse SE_PIN
	applymovement 9, Sheep_Face_Halzemere_up
	applymovement 10, Sheep_Face_Halzemere_left
	applymovement 11, Sheep_Face_Halzemere_up
	applymovement 19, Sheep_Face_Halzemere_left
	applymovement 20, Sheep_Face_Halzemere_down
	waitmovement 0
	delay 60
	playse SE_PIN
	applymovement 13, Farmer_Face_Halzemere_up
	waitmovement 0
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	compare VAR_TEMP_2, 32
	goto_if_eq TRIGGER_BLOCK_HAZELMERE_2
TRIGGER_BLOCK_HAZELMERE_1:
	applymovement 10, Sheep_Walk_to_Farm_4
	delay 30
	applymovement 9, Sheep_Walk_to_Farm_2
	applymovement 11, Sheep_Walk_to_Farm_1
	applymovement 19, Sheep_Walk_to_Farm_3
	applymovement 20, Sheep_Walk_to_Farm_5
	delay 120
	playse SE_LEDGE
	applymovement 13, Farmer_Shock_JumpInPlace
	waitse
	waitmovement 13
	playse SE_LEDGE
	applymovement 13, Movement_JumpInPlace_UP
	waitse
	delay 30
	applymovement 13, Farmer_Chase_Sheep
	delay 120
	applymovement 18, Halzmere_walk_off
	waitmovement 0
	setobjectxy 9, 17, 20
	setobjectxy 10, 18, 23
	setobjectxy 11, 22, 24
	setobjectxy 19, 24, 17
	setobjectxy 20, 23, 21
	setobjectxy 13, 23, 18
	setobjectxyperm 9, 17, 20
	setobjectxyperm 10, 18, 23
	setobjectxyperm 11, 22, 24
	setobjectxyperm 19, 24, 17
	setobjectxyperm 20, 23, 21
	setobjectxyperm 13, 23, 18
	setobjectmovementtype 13, MOVEMENT_TYPE_FACE_DOWN
	setobjectmovementtype 9, MOVEMENT_TYPE_WANDER_AROUND
	setobjectmovementtype 10, MOVEMENT_TYPE_WANDER_AROUND
	setobjectmovementtype 11, MOVEMENT_TYPE_WANDER_AROUND
	setobjectmovementtype 19, MOVEMENT_TYPE_WANDER_AROUND
	setobjectmovementtype 20, MOVEMENT_TYPE_WANDER_AROUND
	setflag FLAG_ROUTE13_BLOCK
	setvar VAR_TEMP_0, 2
	release
	end

TRIGGER_BLOCK_HAZELMERE_2:
	applymovement OBJ_EVENT_ID_PLAYER, movement_lock_walk_up
	goto TRIGGER_BLOCK_HAZELMERE_1


Halzmere_walk_off:
	walk_slow_right
	walk_slow_right
	walk_slow_right
	walk_slow_right
	walk_slow_right
	walk_slow_up
	walk_slow_right
	walk_slow_right
	walk_slow_right
	walk_slow_right
	walk_slow_right
	step_end

Farmer_Chase_Sheep:
	walk_up
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	face_down
	step_end

Farmer_Shock_JumpInPlace:
	emote_double_exclamation_mark
	jump_in_place_up
	step_end

Movement_JumpInPlace_UP:
	jump_in_place_up
	step_end

Sheep_Walk_to_Farm_1:
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	step_end

Sheep_Walk_to_Farm_2:
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	step_end

Sheep_Walk_to_Farm_3:
	walk_slow_left
	walk_slow_down
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	step_end

Sheep_Walk_to_Farm_4:
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	step_end

Sheep_Walk_to_Farm_5:
	walk_slow_down
	walk_slow_down
	walk_slow_down
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	step_end

Sheep_Face_Halzemere_up:
	emote_exclamation_mark
	face_up
	step_end

Sheep_Face_Halzemere_left:
	emote_exclamation_mark
	face_left
	step_end

Sheep_Face_Halzemere_down:
	emote_exclamation_mark
	face_down
	step_end

Farmer_Face_Halzemere_up:
	emote_question_mark
	face_up
	step_end

VARROCK_NPC_RATBURGUS::
	faceplayer
	namebox VARROCK_NPC_RATBURGUS_Text_0
	msgbox VARROCK_NPC_RATBURGUS_Text_1
	closemessage
	hidenamebox
	release
	end


ROUTE14_QUESTER::
	faceplayer
	msgbox ROUTE14_QUESTER_Text_0
	closemessage
	hidenamebox
	release
	end


BATTLE_ROUTE13_DARKWIZARD_1::
	trainerbattle_single TRAINER_ROUTE13_TRAINER_1, BATTLE_ROUTE13_DARKWIZARD_1_Text_0, BATTLE_ROUTE13_DARKWIZARD_1_Text_1
	namebox BATTLE_ROUTE13_DARKWIZARD_1_Text_2
	msgbox BATTLE_ROUTE13_DARKWIZARD_1_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE13_DARKWIZARD_2::
	trainerbattle_single TRAINER_ROUTE13_TRAINER_2, BATTLE_ROUTE13_DARKWIZARD_2_Text_0, BATTLE_ROUTE13_DARKWIZARD_2_Text_1
	namebox BATTLE_ROUTE13_DARKWIZARD_1_Text_2
	msgbox BATTLE_ROUTE13_DARKWIZARD_2_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE13_DARKWIZARD_3::
	trainerbattle_single TRAINER_ROUTE13_TRAINER_3, BATTLE_ROUTE13_DARKWIZARD_3_Text_0, BATTLE_ROUTE13_DARKWIZARD_3_Text_1
	namebox BATTLE_ROUTE13_DARKWIZARD_1_Text_2
	msgbox BATTLE_ROUTE13_DARKWIZARD_3_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE13_DARKWIZARD_4::
	trainerbattle_single TRAINER_ROUTE13_TRAINER_4, BATTLE_ROUTE13_DARKWIZARD_4_Text_0, BATTLE_ROUTE13_DARKWIZARD_4_Text_1
	namebox BATTLE_ROUTE13_DARKWIZARD_1_Text_2
	msgbox BATTLE_ROUTE13_DARKWIZARD_4_Text_2
	hidenamebox
	release
	end


BATTLE_ROUTE13_DARKWIZARD_5::
	trainerbattle_single TRAINER_ROUTE13_TRAINER_5, BATTLE_ROUTE13_DARKWIZARD_5_Text_0, BATTLE_ROUTE13_DARKWIZARD_5_Text_0
	namebox BATTLE_ROUTE13_DARKWIZARD_1_Text_2
	msgbox BATTLE_ROUTE13_DARKWIZARD_5_Text_0
	hidenamebox
	release
	end


BATTLE_ROUTE13_TRAINER_1::
	trainerbattle_single TRAINER_ROUTE13_TRAINER_6, BATTLE_ROUTE13_TRAINER_1_Text_0, BATTLE_ROUTE13_TRAINER_1_Text_1
	namebox BATTLE_ROUTE13_TRAINER_1_Text_2
	msgbox BATTLE_ROUTE13_TRAINER_1_Text_3
	hidenamebox
	release
	end


BATTLE_ROUTE13_TRAINER_2::
	trainerbattle_single TRAINER_ROUTE13_TRAINER_7, BATTLE_ROUTE13_TRAINER_2_Text_0, BATTLE_ROUTE13_TRAINER_2_Text_1
	namebox BATTLE_ROUTE13_TRAINER_2_Text_2
	msgbox BATTLE_ROUTE13_TRAINER_2_Text_3
	hidenamebox
	release
	end


BATTLE_ROUTE13_TRAINER_3::
	trainerbattle_single TRAINER_ROUTE13_TRAINER_8, BATTLE_ROUTE13_TRAINER_3_Text_0, BATTLE_ROUTE13_TRAINER_3_Text_1
	namebox BATTLE_ROUTE13_TRAINER_3_Text_2
	msgbox BATTLE_ROUTE13_TRAINER_3_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE13_TRAINER_4::
	trainerbattle_single TRAINER_ROUTE13_TRAINER_9, BATTLE_ROUTE13_TRAINER_4_Text_0, BATTLE_ROUTE13_TRAINER_4_Text_1
	namebox BATTLE_ROUTE13_TRAINER_4_Text_2
	msgbox BATTLE_ROUTE13_TRAINER_4_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE14_TRAINER_1::
	trainerbattle_single TRAINER_ROUTE14_TRAINER_1, BATTLE_ROUTE14_TRAINER_1_Text_0, BATTLE_ROUTE14_TRAINER_1_Text_1
	namebox BATTLE_ROUTE14_TRAINER_1_Text_2
	msgbox BATTLE_ROUTE14_TRAINER_1_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE14_TRAINER_2::
	trainerbattle_single TRAINER_ROUTE14_TRAINER_2, BATTLE_ROUTE14_TRAINER_2_Text_0, BATTLE_ROUTE14_TRAINER_2_Text_1
	namebox BATTLE_ROUTE14_TRAINER_1_Text_2
	msgbox BATTLE_ROUTE14_TRAINER_2_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE16_TRAINER_1::
	trainerbattle_single TRAINER_ROUTE16_TRAINER_1, BATTLE_ROUTE16_TRAINER_1_Text_0, BATTLE_ROUTE16_TRAINER_1_Text_1
	msgbox BATTLE_ROUTE16_TRAINER_1_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE16_TRAINER_2::
	trainerbattle_single TRAINER_ROUTE16_TRAINER_2, BATTLE_ROUTE16_TRAINER_2_Text_0, BATTLE_ROUTE16_TRAINER_2_Text_1
	namebox BATTLE_ROUTE16_TRAINER_2_Text_2
	msgbox BATTLE_ROUTE16_TRAINER_2_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE16_TRAINER_3::
	trainerbattle_single TRAINER_ROUTE16_TRAINER_3, BATTLE_ROUTE16_TRAINER_3_Text_0, BATTLE_ROUTE16_TRAINER_3_Text_1
	namebox BATTLE_ROUTE16_TRAINER_3_Text_2
	msgbox BATTLE_ROUTE16_TRAINER_3_Text_3
	hidenamebox
	release
	end


BATTLE_ROUTE16_TRAINER_4::
	trainerbattle_single TRAINER_ROUTE16_TRAINER_4, BATTLE_ROUTE13_DARKWIZARD_5_Text_0, BATTLE_ROUTE13_DARKWIZARD_5_Text_0
	msgbox BATTLE_ROUTE13_DARKWIZARD_5_Text_0
	hidenamebox
	release
	end


BATTLE_ROUTE16_TRAINER_5::
	trainerbattle_single TRAINER_ROUTE16_TRAINER_5, BATTLE_ROUTE16_TRAINER_5_Text_0, BATTLE_ROUTE16_TRAINER_5_Text_1
	msgbox BATTLE_ROUTE16_TRAINER_5_Text_2
	hidenamebox
	release
	end


BATTLE_ROUTE16_TRAINER_6::
	trainerbattle_single TRAINER_ROUTE16_TRAINER_6, BATTLE_ROUTE16_TRAINER_6_Text_0, BATTLE_ROUTE16_TRAINER_6_Text_1
	msgbox BATTLE_ROUTE16_TRAINER_6_Text_2
	hidenamebox
	release
	end


ROUTE16_NPC_GUARD_2::
	faceplayer
	namebox BATTLE_ROUTE16_TRAINER_2_Text_2
	msgbox ROUTE16_NPC_GUARD_2_Text_0
	closemessage
	hidenamebox
	release
	end


ROUTE17_NPC_ARCH::
	faceplayer
	namebox BATTLE_ROUTE16_TRAINER_3_Text_2
	msgbox ROUTE17_NPC_ARCH_Text_0
	closemessage
	hidenamebox
	release
	end


BATTLE_ROUTE17_TRAINER_1::
	trainerbattle_single TRAINER_ROUTE17_TRAINER_1, BATTLE_ROUTE17_TRAINER_1_Text_0, BATTLE_ROUTE17_TRAINER_1_Text_1
	namebox BATTLE_ROUTE17_TRAINER_1_Text_2
	msgbox BATTLE_ROUTE17_TRAINER_1_Text_3
	hidenamebox
	release
	end


BATTLE_ROUTE17_TRAINER_2::
	trainerbattle_single TRAINER_ROUTE17_TRAINER_2, BATTLE_ROUTE17_TRAINER_2_Text_0, BATTLE_ROUTE17_TRAINER_2_Text_1
	namebox BATTLE_ROUTE17_TRAINER_2_Text_2
	msgbox BATTLE_ROUTE17_TRAINER_2_Text_1
	hidenamebox
	release
	end


PURO_PURO_EVENT_ROUTE13::
	setmetatile 5, 21, METATILE_PokeScapeOutdoors_SHAKING_WHEAT, 0
	setmetatile 5, 22, METATILE_PokeScapeOutdoors_SHAKING_WHEAT, 0
	setmetatile 5, 23, METATILE_PokeScapeOutdoors_SHAKING_WHEAT, 0
	setmetatile 5, 24, METATILE_PokeScapeOutdoors_SHAKING_WHEAT, 0
	setmetatile 5, 25, METATILE_PokeScapeOutdoors_SHAKING_WHEAT, 0
	setmetatile 6, 21, METATILE_PokeScapeOutdoors_SHAKING_WHEAT, 0
	setmetatile 6, 22, METATILE_PokeScapeOutdoors_SHAKING_WHEAT, 0
	setmetatile 6, 23, METATILE_PokeScapeOutdoors_SHAKING_WHEAT, 0
	setmetatile 6, 24, METATILE_PokeScapeOutdoors_SHAKING_WHEAT, 0
	setmetatile 6, 25, METATILE_PokeScapeOutdoors_SHAKING_WHEAT, 0
	setmetatile 7, 21, METATILE_PokeScapeOutdoors_SHAKING_WHEAT, 0
	setmetatile 7, 25, METATILE_PokeScapeOutdoors_SHAKING_WHEAT, 0
	setmetatile 8, 21, METATILE_PokeScapeOutdoors_SHAKING_WHEAT, 0
	setmetatile 8, 22, METATILE_PokeScapeOutdoors_SHAKING_WHEAT, 0
	setmetatile 8, 23, METATILE_PokeScapeOutdoors_SHAKING_WHEAT, 0
	setmetatile 8, 24, METATILE_PokeScapeOutdoors_SHAKING_WHEAT, 0
	setmetatile 8, 25, METATILE_PokeScapeOutdoors_SHAKING_WHEAT, 0
	setmetatile 9, 21, METATILE_PokeScapeOutdoors_SHAKING_WHEAT, 0
	setmetatile 9, 22, METATILE_PokeScapeOutdoors_SHAKING_WHEAT, 0
	setmetatile 9, 23, METATILE_PokeScapeOutdoors_SHAKING_WHEAT, 0
	setmetatile 9, 24, METATILE_PokeScapeOutdoors_SHAKING_WHEAT, 0
	setmetatile 9, 25, METATILE_PokeScapeOutdoors_SHAKING_WHEAT, 0
	setmetatile 7, 22, METATILE_PokeScapeOutdoors_TELEPORT_WHEAT_1, 0
	setmetatile 7, 23, METATILE_PokeScapeOutdoors_TELEPORT_WHEAT_2, 0
	setmetatile 7, 24, METATILE_PokeScapeOutdoors_TELEPORT_WHEAT_3, 0
	return


TRIGGER_BLOCK_HAZELMERE_Text_0:
	.string "???$"

TRIGGER_BLOCK_HAZELMERE_Text_1:
	.string "Andra andro krachis mond.\p"
	.string "Mi tuzo undri.\p"
	.string "Lemantolly cef o cinqo.\p"
	.string "Lemanto, mi lovos imindus.\p"
	.string "Lwmqnto quir, qui umesco ir undri.$"

VARROCK_NPC_RATBURGUS_Text_0:
	.string "Ratburgus$"

VARROCK_NPC_RATBURGUS_Text_1:
	.string "I got mugged and lost all of my\n"
	.string "important papers.\p"
	.string "It will be okay though, I sent an\n"
	.string "adventurer out on a quest to retrieve\l"
	.string "them.$"

ROUTE14_QUESTER_Text_0:
	.string "This is the champions guild.\p"
	.string "Make yourself worthy and you may one\n"
	.string "day become a member.$"

BATTLE_ROUTE13_DARKWIZARD_1_Text_0:
	.string "Beware the might of Zamorak!$"

BATTLE_ROUTE13_DARKWIZARD_1_Text_1:
	.string "Praise lord Zamorak!$"

BATTLE_ROUTE13_DARKWIZARD_1_Text_2:
	.string "DARK WIZARD$"

BATTLE_ROUTE13_DARKWIZARD_2_Text_0:
	.string "This circle is taken, get lost kid.$"

BATTLE_ROUTE13_DARKWIZARD_2_Text_1:
	.string "And let that be a warning.$"

BATTLE_ROUTE13_DARKWIZARD_3_Text_0:
	.string "For the glory of Delrith!$"

BATTLE_ROUTE13_DARKWIZARD_3_Text_1:
	.string "Just wait until we have the might of\n"
	.string "Delrith on our side.$"

BATTLE_ROUTE13_DARKWIZARD_4_Text_0:
	.string "Step one: Aquire the circle.\p"
	.string "Check.\p"
	.string "Step two: Summon the Demon…\p"
	.string "Hmmm…\p"
	.string "Hey, you! You are not supposed to be\n"
	.string "here!$"

BATTLE_ROUTE13_DARKWIZARD_4_Text_1:
	.string "At least I know step 4 is to worship the\n"
	.string "demon.$"

BATTLE_ROUTE13_DARKWIZARD_4_Text_2:
	.string "At least I know step 4 is to worship the\n"
	.string "Demon.$"

BATTLE_ROUTE13_DARKWIZARD_5_Text_0:
	.string "$"

BATTLE_ROUTE13_TRAINER_1_Text_0:
	.string "Where is Varok?$"

BATTLE_ROUTE13_TRAINER_1_Text_1:
	.string "Oh it is pronounced Varrock?$"

BATTLE_ROUTE13_TRAINER_1_Text_2:
	.string "NOOB$"

BATTLE_ROUTE13_TRAINER_1_Text_3:
	.string "Where is Varok?\p"
	.string "Oh it is pronounced Varrock?\p"
	.string "That explains why I couldn't find it on\n"
	.string "my Newcomer Map.\p"
	.string "Thanks bud.$"

BATTLE_ROUTE13_TRAINER_2_Text_0:
	.string "I am full of energy after jumping over\n"
	.string "that gate!$"

BATTLE_ROUTE13_TRAINER_2_Text_1:
	.string "I have run energy for days.$"

BATTLE_ROUTE13_TRAINER_2_Text_2:
	.string "AGILE$"

BATTLE_ROUTE13_TRAINER_2_Text_3:
	.string "Beware on the road to Varrock.\p"
	.string "Some shady people have started\n"
	.string "residing in the old ruins near the\l"
	.string "gates.\p"
	.string "You may want to take the east path\n"
	.string "instead.$"

BATTLE_ROUTE13_TRAINER_3_Text_0:
	.string "Go fish, get lost.$"

BATTLE_ROUTE13_TRAINER_3_Text_1:
	.string "No seriously.\p"
	.string "Get lost and try fishing.$"

BATTLE_ROUTE13_TRAINER_3_Text_2:
	.string "Willford$"

BATTLE_ROUTE13_TRAINER_4_Text_0:
	.string "The guide tells me to fight you, lets do\n"
	.string "this!$"

BATTLE_ROUTE13_TRAINER_4_Text_1:
	.string "Says nothing in the guide on how to\n"
	.string "beat you or how to cope with my loss.\p"
	.string "Do I just wing it then?$"

BATTLE_ROUTE13_TRAINER_4_Text_2:
	.string "QUESTER$"

BATTLE_ROUTE14_TRAINER_1_Text_0:
	.string "Don't disturb me!$"

BATTLE_ROUTE14_TRAINER_1_Text_1:
	.string "You woke my pet rock up…$"

BATTLE_ROUTE14_TRAINER_1_Text_2:
	.string "MINER$"

BATTLE_ROUTE14_TRAINER_2_Text_0:
	.string "This spot is taken, leave!$"

BATTLE_ROUTE14_TRAINER_2_Text_1:
	.string "Well I guess we can share a little bit…$"

BATTLE_ROUTE16_TRAINER_1_Text_0:
	.string "Stop right there timbering scum.$"

BATTLE_ROUTE16_TRAINER_1_Text_1:
	.string "The sawmill is up north, but all I hear\n"
	.string "when I go there is meowing.$"

BATTLE_ROUTE16_TRAINER_2_Text_0:
	.string "Watch out for the dangers of Eastern\n"
	.string "Misthalin!$"

BATTLE_ROUTE16_TRAINER_2_Text_1:
	.string "Beware of bears and giant rats out\n"
	.string "there stranger.$"

BATTLE_ROUTE16_TRAINER_2_Text_2:
	.string "Guard$"

BATTLE_ROUTE16_TRAINER_3_Text_0:
	.string "You won't believe it!\p"
	.string "I just uncovered this rare amulet!$"

BATTLE_ROUTE16_TRAINER_3_Text_1:
	.string "Oh, it was a dud…$"

BATTLE_ROUTE16_TRAINER_3_Text_2:
	.string "Archaeologist$"

BATTLE_ROUTE16_TRAINER_3_Text_3:
	.string "You can uncover all sorts of things at\n"
	.string "the digsite.$"

BATTLE_ROUTE16_TRAINER_5_Text_0:
	.string "You should join me in my daily agility\n"
	.string "training!$"

BATTLE_ROUTE16_TRAINER_5_Text_1:
	.string "What do you mean I won't gain any xp\n"
	.string "running around without a Silverhawk?$"

BATTLE_ROUTE16_TRAINER_5_Text_2:
	.string "I train here every day, you should train\n"
	.string "with me again sometime.$"

BATTLE_ROUTE16_TRAINER_6_Text_0:
	.string "Where do you think you are going!$"

BATTLE_ROUTE16_TRAINER_6_Text_1:
	.string "Stand and Del-$"

BATTLE_ROUTE16_TRAINER_6_Text_2:
	.string "I'm sorry, please don't hurt me!\p"
	.string "I promise I will change my ways.$"

ROUTE16_NPC_GUARD_2_Text_0:
	.string "Do not to cause trouble for the workmen\n"
	.string "who make the trek from the Digsite.$"

ROUTE17_NPC_ARCH_Text_0:
	.string "This statue just collapsed and\n"
	.string "revealed a cavern.\p"
	.string "I must investegate this.$"

BATTLE_ROUTE17_TRAINER_1_Text_0:
	.string "Stop!\p"
	.string "Your woodcutting level is too low to\n"
	.string "enter the lumberyard.$"

BATTLE_ROUTE17_TRAINER_1_Text_1:
	.string "I think you levelled up after out fight.\p"
	.string "You may pass.$"

BATTLE_ROUTE17_TRAINER_1_Text_2:
	.string "Woodcutter$"

BATTLE_ROUTE17_TRAINER_1_Text_3:
	.string "I think you levelled up after out fight.\n"
	.string "You may pass.$"

BATTLE_ROUTE17_TRAINER_2_Text_0:
	.string "To get to Morytania I need to get past\n"
	.string "those blasted bats…\p"
	.string "Now if I only- WAH!$"

BATTLE_ROUTE17_TRAINER_2_Text_1:
	.string "You scared me there.\p"
	.string "I thought you were a bat.$"

BATTLE_ROUTE17_TRAINER_2_Text_2:
	.string "Jam Hug$"
