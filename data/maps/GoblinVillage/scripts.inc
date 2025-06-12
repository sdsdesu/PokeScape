GoblinVillage_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, GoblinVillage_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

GoblinVillage_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 14
	return


NPC_GOBLINVILLAGE_GOBLIN_1::
	lock
	faceplayer
	namebox NPC_GOBLINVILLAGE_GOBLIN_1_Text_0
	msgbox NPC_GOBLINVILLAGE_GOBLIN_1_Text_1
	hidenamebox
	release
	end


NPC_GOBLINVILLAGE_GOBLIN_2::
	lock
	faceplayer
	namebox NPC_GOBLINVILLAGE_GOBLIN_2_Text_0
	msgbox NPC_GOBLINVILLAGE_GOBLIN_2_Text_1
	hidenamebox
	release
	end


NPC_GOBLINVILLAGE_GOBLIN_3::
	lock
	faceplayer
	namebox NPC_GOBLINVILLAGE_GOBLIN_3_Text_0
	msgbox NPC_GOBLINVILLAGE_GOBLIN_3_Text_1
	hidenamebox
	release
	end


NPC_GOBLINVILLAGE_GOBLIN_4::
	lock
	faceplayer
	namebox NPC_GOBLINVILLAGE_GOBLIN_4_Text_0
	msgbox NPC_GOBLINVILLAGE_GOBLIN_4_Text_1
	hidenamebox
	release
	end


NPC_GOBLINVILLAGE_GOBLIN_5::
	lock
	faceplayer
	namebox NPC_GOBLINVILLAGE_GOBLIN_5_Text_0
	msgbox NPC_GOBLINVILLAGE_GOBLIN_5_Text_1
	hidenamebox
	release
	end


NPC_GOBLINVILLAGE_GOBLIN_6::
	lock
	faceplayer
	namebox NPC_GOBLINVILLAGE_GOBLIN_6_Text_0
	msgbox NPC_GOBLINVILLAGE_GOBLIN_6_Text_1
	hidenamebox
	release
	end


NPC_GOBLINVILLAGE_WARTFACE::
	lock
	faceplayer
	namebox NPC_GOBLINVILLAGE_WARTFACE_Text_0
	msgbox NPC_GOBLINVILLAGE_WARTFACE_Text_0
	hidenamebox
	release
	end


NPC_GOBLINVILLAGE_BENTNOZE::
	lock
	faceplayer
	namebox NPC_GOBLINVILLAGE_WARTFACE_Text_0
	msgbox NPC_GOBLINVILLAGE_WARTFACE_Text_0
	hidenamebox
	release
	end


NPC_GOBLINVILLAGE_GRUBFOOT::
	lock
	faceplayer
	namebox NPC_GOBLINVILLAGE_GRUBFOOT_Text_0
	msgbox NPC_GOBLINVILLAGE_GRUBFOOT_Text_1
	hidenamebox
	release
	end


NPC_GOBLINVILLAGE_GOBLIN_COOK::
	lock
	faceplayer
	namebox NPC_GOBLINVILLAGE_GOBLIN_COOK_Text_0
	msgbox NPC_GOBLINVILLAGE_GOBLIN_COOK_Text_1
	hidenamebox
	release
	end


NPC_GOBLINVILLAGE_RAT::
	lock
	faceplayer
	namebox NPC_GOBLINVILLAGE_RAT_Text_0
	msgbox NPC_GOBLINVILLAGE_RAT_Text_1
	hidenamebox
	release
	end


BATTLE_DEMONHEADGE::
	faceplayer
	namebox BATTLE_DEMONHEADGE_Text_0
	msgbox BATTLE_DEMONHEADGE_Text_1
	hidenamebox
	closemessage
	trainerbattle_no_intro TRAINER_DEMONHEADGE, BATTLE_DEMONHEADGE_Text_2
	namebox BATTLE_DEMONHEADGE_Text_0
	msgbox BATTLE_DEMONHEADGE_Text_3
	hidenamebox
	release
	end


BATTLE_DEMONHEADGE2::
	faceplayer
	namebox BATTLE_DEMONHEADGE2_Text_0
	msgbox BATTLE_DEMONHEADGE2_Text_1
	hidenamebox
	closemessage
	trainerbattle_no_intro TRAINER_DEMONHEADGE, BATTLE_DEMONHEADGE_Text_2
	namebox BATTLE_DEMONHEADGE2_Text_0
	msgbox BATTLE_DEMONHEADGE2_Text_2
	hidenamebox
	release
	end


BATTLE_LOPENDEBANK::
	lock
	delay 30
	playse SE_PIN
	applymovement 1, MOVEMENT_EXCLAMATIONMARK_FACEPLAYER
	waitmovement 0
	namebox BATTLE_LOPENDEBANK_Text_0
	msgbox BATTLE_LOPENDEBANK_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne BATTLE_LOPENDEBANK_2
	msgbox BATTLE_LOPENDEBANK_Text_4
BATTLE_LOPENDEBANK_1:
	hidenamebox
	closemessage
	applymovement 1, Movement_InteractFACEUP
	waitmovement 0
	release
	end

BATTLE_LOPENDEBANK_2:
	trainerbattle_no_intro TRAINER_LOPENDEBANK, BATTLE_LOPENDEBANK_Text_2
	namebox BATTLE_LOPENDEBANK_Text_0
	msgbox BATTLE_LOPENDEBANK_Text_3
	goto BATTLE_LOPENDEBANK_1


BATTLE_ATWISTEDSMILE::
	lock
	playse SE_PIN
	applymovement 1, MOVEMENT_EXCLAMATIONMARK_FACEPLAYER
	waitmovement 0
	namebox BATTLE_ATWISTEDSMILE_Text_0
	msgbox BATTLE_ATWISTEDSMILE_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne BATTLE_ATWISTEDSMILE_2
	msgbox BATTLE_ATWISTEDSMILE_Text_4
BATTLE_ATWISTEDSMILE_1:
	hidenamebox
	closemessage
	applymovement 1, Movement_InteractFACERIGHT
	waitmovement 0
	release
	end

BATTLE_ATWISTEDSMILE_2:
	trainerbattle_no_intro TRAINER_A_TWISTED_SMILE, BATTLE_ATWISTEDSMILE_Text_2
	namebox BATTLE_ATWISTEDSMILE_Text_0
	msgbox BATTLE_ATWISTEDSMILE_Text_3
	goto BATTLE_ATWISTEDSMILE_1


NPC_AMBER::
	lock
	faceplayer
	namebox NPC_AMBER_Text_0
	playmoncry SPECIES_POMAPOO, 0
	msgbox NPC_AMBER_Text_1
	waitmoncry
	hidenamebox
	release
	end


POKESCAPER_ORCHY::
	lock
	faceplayer
	namebox POKESCAPER_ORCHY_Text_0
	msgbox POKESCAPER_ORCHY_Text_1
	closemessage
	hidenamebox
	goto BATTLE_ORCHY
	release
	end


BATTLE_ORCHY::
	playse SE_PIN
	applymovement 6, MOVEMENT_EXCLAMATIONMARK
	waitmovement 0
	namebox POKESCAPER_ORCHY_Text_0
	msgbox BATTLE_ORCHY_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne BATTLE_ORCHY_2
	msgbox BATTLE_ORCHY_Text_4
BATTLE_ORCHY_1:
	hidenamebox
	closemessage
	applymovement 6, Movement_InteractFACERIGHT
	waitmovement 0
	random 11
	switch VAR_RESULT
	case 0, BATTLE_ORCHY_7
	case 1, BATTLE_ORCHY_8
	case 2, BATTLE_ORCHY_9
	case 3, BATTLE_ORCHY_10
	case 4, BATTLE_ORCHY_11
	case 5, BATTLE_ORCHY_12
	case 6, BATTLE_ORCHY_13
	case 7, BATTLE_ORCHY_14
	case 8, BATTLE_ORCHY_15
	case 9, BATTLE_ORCHY_16
	case 10, BATTLE_ORCHY_17
BATTLE_ORCHY_5:
	release
	end

BATTLE_ORCHY_2:
	msgbox BATTLE_ORCHY_Text_1
	closemessage
	hidenamebox
	trainerbattle_no_intro TRAINER_ORCHY, BATTLE_ORCHY_Text_2
	namebox POKESCAPER_ORCHY_Text_0
	msgbox BATTLE_ORCHY_Text_3
	goto BATTLE_ORCHY_1

BATTLE_ORCHY_7:
	playbgm MUS_PS_WISE_OLD_MAN_THEME, 1
	goto BATTLE_ORCHY_5

BATTLE_ORCHY_8:
	playbgm MUS_PS_VS_WISE_OLD_MAN_RIVAL, 1
	goto BATTLE_ORCHY_5

BATTLE_ORCHY_9:
	playbgm MUS_PS_GODSLAYER, 1
	goto BATTLE_ORCHY_5

BATTLE_ORCHY_10:
	playbgm MUS_PS_VS_CHAOS_TUNNELS, 1
	goto BATTLE_ORCHY_5

BATTLE_ORCHY_11:
	playbgm MUS_PS_VS_ORCHY, 1
	goto BATTLE_ORCHY_5

BATTLE_ORCHY_12:
	playbgm MUS_PS_VS_POKESCAPERS, 1
	goto BATTLE_ORCHY_5

BATTLE_ORCHY_13:
	playbgm MUS_PS_VS_CHAOS_ELEMENTAL, 1
	goto BATTLE_ORCHY_5

BATTLE_ORCHY_14:
	playbgm MUS_PS_VS_LEGENDARY, 1
	goto BATTLE_ORCHY_5

BATTLE_ORCHY_15:
	playbgm MUS_PS_ROUTE_DESERT, 1
	goto BATTLE_ORCHY_5

BATTLE_ORCHY_16:
	playbgm MUS_PS_SURFING, 1
	goto BATTLE_ORCHY_5

BATTLE_ORCHY_17:
	playbgm MUS_PS_GENERAL_STORE, 1
	goto BATTLE_ORCHY_5


POKESCAPER_ORCHY_V2::
	lock
	faceplayer
	namebox POKESCAPER_ORCHY_Text_0
	msgbox POKESCAPER_ORCHY_Text_1
	closemessage
	goto_if_unset FLAG_SYS_POKEMON_GET, POKESCAPER_ORCHY_V2_2
	goto_if_set FLAG_BADGE01_GET, POKESCAPER_ORCHY_V2_5
	goto_if_set FLAG_BADGE02_GET, POKESCAPER_ORCHY_V2_8
	goto_if_set FLAG_BADGE03_GET, POKESCAPER_ORCHY_V2_11
	goto ORCHY_MUSIC
	release
	end

POKESCAPER_ORCHY_V2_2:
	msgbox POKESCAPER_ORCHY_V2_Text_0
	hidenamebox
	closemessage
	release
	end

POKESCAPER_ORCHY_V2_5:
	msgbox POKESCAPER_ORCHY_V2_Text_1
	hidenamebox
	closemessage
	goto ORCHY_MUSIC
	release
	end

POKESCAPER_ORCHY_V2_8:
	msgbox POKESCAPER_ORCHY_V2_Text_2
	hidenamebox
	closemessage
	goto ORCHY_MUSIC
	release
	end

POKESCAPER_ORCHY_V2_11:
	goto BATTLE_ORCHY_V2
	release
	end


BATTLE_ORCHY_V2::
	playse SE_PIN
	applymovement 6, MOVEMENT_EXCLAMATIONMARK
	waitmovement 0
	namebox POKESCAPER_ORCHY_Text_0
	msgbox BATTLE_ORCHY_V2_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne BATTLE_ORCHY_V2_2
	goto ORCHY_MUSIC
	release
	end

BATTLE_ORCHY_V2_1:
	hidenamebox
	closemessage
	release
	end

BATTLE_ORCHY_V2_2:
	msgbox BATTLE_ORCHY_Text_1
	closemessage
	hidenamebox
	trainerbattle_no_intro TRAINER_ORCHY, BATTLE_ORCHY_Text_2
	namebox POKESCAPER_ORCHY_Text_0
	msgbox BATTLE_ORCHY_Text_3
	goto BATTLE_ORCHY_V2_1


ORCHY_MUSIC::
	namebox POKESCAPER_ORCHY_Text_0
	msgbox ORCHY_MUSIC_Text_0
	hidenamebox
	closemessage
	applymovement 6, Movement_InteractFACERIGHT
	waitmovement 0
	random 11
	switch VAR_RESULT
	case 0, ORCHY_MUSIC_3
	case 1, ORCHY_MUSIC_4
	case 2, ORCHY_MUSIC_5
	case 3, ORCHY_MUSIC_6
	case 4, ORCHY_MUSIC_7
	case 5, ORCHY_MUSIC_8
	case 6, ORCHY_MUSIC_9
	case 7, ORCHY_MUSIC_10
	case 8, ORCHY_MUSIC_11
	case 9, ORCHY_MUSIC_12
	case 10, ORCHY_MUSIC_13
ORCHY_MUSIC_1:
	release
	end

ORCHY_MUSIC_3:
	playbgm MUS_PS_WISE_OLD_MAN_THEME, 1
	goto ORCHY_MUSIC_1

ORCHY_MUSIC_4:
	playbgm MUS_PS_VS_WISE_OLD_MAN_RIVAL, 1
	goto ORCHY_MUSIC_1

ORCHY_MUSIC_5:
	playbgm MUS_PS_GODSLAYER, 1
	goto ORCHY_MUSIC_1

ORCHY_MUSIC_6:
	playbgm MUS_PS_VS_CHAOS_TUNNELS, 1
	goto ORCHY_MUSIC_1

ORCHY_MUSIC_7:
	playbgm MUS_PS_VS_ORCHY, 1
	goto ORCHY_MUSIC_1

ORCHY_MUSIC_8:
	playbgm MUS_PS_VS_POKESCAPERS, 1
	goto ORCHY_MUSIC_1

ORCHY_MUSIC_9:
	playbgm MUS_PS_VS_CHAOS_ELEMENTAL, 1
	goto ORCHY_MUSIC_1

ORCHY_MUSIC_10:
	playbgm MUS_PS_VS_LEGENDARY, 1
	goto ORCHY_MUSIC_1

ORCHY_MUSIC_11:
	playbgm MUS_PS_ROUTE_DESERT, 1
	goto ORCHY_MUSIC_1

ORCHY_MUSIC_12:
	playbgm MUS_PS_SURFING, 1
	goto ORCHY_MUSIC_1

ORCHY_MUSIC_13:
	playbgm MUS_PS_GENERAL_STORE, 1
	goto ORCHY_MUSIC_1


NPC_GOBLINVILLAGE_GOBLIN_1_Text_0:
	.string "Dulleyes$"

NPC_GOBLINVILLAGE_GOBLIN_1_Text_1:
	.string "Dulleyes do not understand this\n"
	.string "conflict.\p"
	.string "Bentnoze shows me gray goblin mail\n"
	.string "telling Dulleyes Wartface is wrong.\p"
	.string "Then Wartface show Dulleyes gray\n"
	.string "goblin mail telling Dulleyes this mail\l"
	.string "better.\p"
	.string "War is complicated to Dulleyes.$"

NPC_GOBLINVILLAGE_GOBLIN_2_Text_0:
	.string "Slugteeth$"

NPC_GOBLINVILLAGE_GOBLIN_2_Text_1:
	.string "Goblins green.\p"
	.string "Green is better than red.$"

NPC_GOBLINVILLAGE_GOBLIN_3_Text_0:
	.string "Mossblood$"

NPC_GOBLINVILLAGE_GOBLIN_3_Text_1:
	.string "Blood is red.\p"
	.string "Red is better than green.$"

NPC_GOBLINVILLAGE_GOBLIN_4_Text_0:
	.string "Fouleye$"

NPC_GOBLINVILLAGE_GOBLIN_4_Text_1:
	.string "Seeing goblins go around saying green\n"
	.string "be good makes me see red.$"

NPC_GOBLINVILLAGE_GOBLIN_5_Text_0:
	.string "Thickfeet$"

NPC_GOBLINVILLAGE_GOBLIN_5_Text_1:
	.string "Last week goblin village fought over\n"
	.string "shoes or no shoes.\p"
	.string "War is constant here.\p"
	.string "I love it.$"

NPC_GOBLINVILLAGE_GOBLIN_6_Text_0:
	.string "Dripnose$"

NPC_GOBLINVILLAGE_GOBLIN_6_Text_1:
	.string "Stinky Hoomans dress in ugly red armour\n"
	.string "were wanting passage through Goblin\l"
	.string "Village.\p"
	.string "Me said red are stinks green armour\n"
	.string "better, no passage for reds.\p"
	.string "So me block off passage way!$"

NPC_GOBLINVILLAGE_WARTFACE_Text_0:
	.string "$"

NPC_GOBLINVILLAGE_GRUBFOOT_Text_0:
	.string "GRUBFOOT$"

NPC_GOBLINVILLAGE_GRUBFOOT_Text_1:
	.string "Me do not see what colours matter.\p"
	.string "We all goblins on the inside.$"

NPC_GOBLINVILLAGE_GOBLIN_COOK_Text_0:
	.string "Goblin Cook$"

NPC_GOBLINVILLAGE_GOBLIN_COOK_Text_1:
	.string "Me Goblin cook, me make food for all\n"
	.string "goblins.\p"
	.string "Goblins saying me food is best.$"

NPC_GOBLINVILLAGE_RAT_Text_0:
	.string "Goblin$"

NPC_GOBLINVILLAGE_RAT_Text_1:
	.string "Me live here with me rats.\p"
	.string "They best except when they steal me\n"
	.string "food.$"

BATTLE_DEMONHEADGE_Text_0:
	.string "DEMONHEADGE$"

BATTLE_DEMONHEADGE_Text_1:
	.string "Hello there.\p"
	.string "I am currently a Cupholder.\p"
	.string "But I am also the Leader of team\n"
	.string "PokeScapers.\p"
	.string "Team PokeScape is made up some amazing\n"
	.string "people.\p"
	.string "Oh but enough of that.\p"
	.string "You wish to battle me then so be it!\p"
	.string "Feel the wrath of an Elder God!$"

BATTLE_DEMONHEADGE_Text_2:
	.string "You are a PokeScapian Master!$"

BATTLE_DEMONHEADGE_Text_3:
	.string "You may find others from team\n"
	.string "PokeScaper scattered all across the\l"
	.string "region.\p"
	.string "I hope you enjoy playing the game.$"

BATTLE_DEMONHEADGE2_Text_0:
	.string "Demonheadge$"

BATTLE_DEMONHEADGE2_Text_1:
	.string "Hahaha!!\p"
	.string "Hey guys, I've got something cool to\n"
	.string "show you!$"

BATTLE_DEMONHEADGE2_Text_2:
	.string "What do you think about dem apples!$"

BATTLE_LOPENDEBANK_Text_0:
	.string "Lopendebank$"

BATTLE_LOPENDEBANK_Text_1:
	.string "Aeeyyye!\p"
	.string "Please don't ban me!\p"
	.string "Oh, are you looking for a battle?$"

BATTLE_LOPENDEBANK_Text_2:
	.string "OMG pls don't ban me pl0x!$"

BATTLE_LOPENDEBANK_Text_3:
	.string "I am apart of team PokeScaper.\p"
	.string "Keep your eyes out as we are\n"
	.string "everywhere.\p"
	.string "Now if you will excuse me I have got a\n"
	.string "lot of things to not read.$"

BATTLE_LOPENDEBANK_Text_4:
	.string "Oh, okay. If you'll excuse me I have got\n"
	.string "a lot of things to not read.$"

BATTLE_ATWISTEDSMILE_Text_0:
	.string "Twisted Smile$"

BATTLE_ATWISTEDSMILE_Text_1:
	.string "Oh hello there, Amber and I were about\n"
	.string "to go for a walk around the park.\p"
	.string "But I suppose I could fit in a quick\n"
	.string "battle.\p"
	.string "If that is what you are after?$"

BATTLE_ATWISTEDSMILE_Text_2:
	.string "Haha that was a fun warm-up before our\n"
	.string "walk!$"

BATTLE_ATWISTEDSMILE_Text_3:
	.string "I am apart of team PokeScaper.\p"
	.string "Keep your eyes out as we are\n"
	.string "everywhere.\p"
	.string "Now if you will excuse me Amber and I\n"
	.string "have to get ready to go out.$"

BATTLE_ATWISTEDSMILE_Text_4:
	.string "Oh, okay. Amber and I will continue\n"
	.string "getting ready to go out to Falador\l"
	.string "Park.$"

NPC_AMBER_Text_0:
	.string "Amber$"

NPC_AMBER_Text_1:
	.string "Yip, Yiip!$"

POKESCAPER_ORCHY_Text_0:
	.string "Orchy$"

POKESCAPER_ORCHY_Text_1:
	.string "Hey!\p"
	.string "I'm Runescape Reorchestrated, you can\n"
	.string "call me Orchy for short.\p"
	.string "I made all the music for this game.$"

BATTLE_ORCHY_Text_0:
	.string "Oh, by any chance are you looking for a\n"
	.string "battle?$"

BATTLE_ORCHY_Text_1:
	.string "Alright, then let us let the bodies hit\n"
	.string "the floor!$"

BATTLE_ORCHY_Text_2:
	.string "Can you hear that?\n"
	.string "It's the sound of my defeat.$"

BATTLE_ORCHY_Text_3:
	.string "As a member of team PokeScaper, I must\n"
	.string "say be sure to keep your eyes out as we\l"
	.string "are everywhere.$"

BATTLE_ORCHY_Text_4:
	.string "That's alright, you can just listen to\n"
	.string "me playing some music.$"

POKESCAPER_ORCHY_V2_Text_0:
	.string "What's that?\p"
	.string "You still don't have any monsters of\n"
	.string "your own yet?\p"
	.string "What are you waiting for, why don't you\n"
	.string "go and visit Professor Normal Tree in\l"
	.string "Lumbridge Castle.$"

POKESCAPER_ORCHY_V2_Text_1:
	.string "Congratulations on beating the gym!\p"
	.string "Come back when you've got a few more\n"
	.string "and maybe you'll be strong enough to\l"
	.string "challenge me.$"

POKESCAPER_ORCHY_V2_Text_2:
	.string "Two badges?\p"
	.string "Not bad, but I think you still need at\n"
	.string "least one, maybe even two more to\l"
	.string "compete with these melodies.$"

BATTLE_ORCHY_V2_Text_0:
	.string "Oh, do you think you're finally ready for\n"
	.string "our battle?$"

ORCHY_MUSIC_Text_0:
	.string "Why don't you stay for a while and just\n"
	.string "listen to me playing some music instead.$"
