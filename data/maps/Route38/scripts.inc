Route38_MapScripts::
	.byte 0


twoStapsRight:
	walk_right
	walk_right
	step_end

twoStapsLeft:
	walk_left
	walk_left
	step_end

surprisedAlert:
	emote_exclamation_mark
	step_end

lookbackleft:
	face_left
	step_end

skelletonsWarning::
	lock
	compare VAR_POKESCAPE_EVENT_ZEMOUREGAL, 1
	goto_if_lt skelletonsWarning_2
skelletonsWarning_1:
	release
	return

skelletonsWarning_2:
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, twoStapsRight
	waitmovement 0
	applymovement 11, surprisedAlert
	namebox skelletonsWarning_Text_0
	msgbox skelletonsWarning_Text_1
	waitmovement 0
	applymovement OBJ_EVENT_ID_CAMERA, twoStapsLeft
	waitmovement 0
	special RemoveCameraObject
	goto skelletonsWarning_1


skelletontalks::
	lock
	faceplayer
	switch VAR_POKESCAPE_EVENT_ZEMOUREGAL
	case 0, skelletontalks_3
	case 1, skelletontalks_4
	case 2, skelletontalks_4
	case 3, skelletontalks_4
	case 4, skelletontalks_4
	case 5, skelletontalks_4
	case 6, skelletontalks_4
	case 7, skelletontalks_5
	case 8, skelletontalks_6
	case 9, skelletontalks_6
	case 10, skelletontalks_7
	namebox skelletonsWarning_Text_0
	msgbox skelletontalks_Text_4
skelletontalks_1:
	applymovement 11, lookbackleft
	release
	return

skelletontalks_3:
	namebox skelletonsWarning_Text_0
	msgbox skelletonsWarning_Text_1
	goto skelletontalks_1

skelletontalks_4:
	namebox skelletonsWarning_Text_0
	msgbox skelletontalks_Text_0
	goto skelletontalks_1

skelletontalks_5:
	namebox skelletonsWarning_Text_0
	msgbox skelletontalks_Text_1
	goto skelletontalks_1

skelletontalks_6:
	namebox skelletonsWarning_Text_0
	msgbox skelletontalks_Text_2
	goto skelletontalks_1

skelletontalks_7:
	namebox skelletonsWarning_Text_0
	msgbox skelletontalks_Text_3
	goto skelletontalks_1


BATTLE_ROUTE_38_TRAINER_1::
	trainerbattle_single TRAINER_ROUTE_38_TRAINER_1, BATTLE_ROUTE_38_TRAINER_1_Text_0, BATTLE_ROUTE_38_TRAINER_1_Text_1
	namebox BATTLE_ROUTE_38_TRAINER_1_Text_2
	msgbox BATTLE_ROUTE_38_TRAINER_1_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE_38_TRAINER_2::
	trainerbattle_single TRAINER_ROUTE_38_TRAINER_2, BATTLE_ROUTE_38_TRAINER_2_Text_0, BATTLE_ROUTE_38_TRAINER_2_Text_1
	namebox BATTLE_ROUTE_38_TRAINER_2_Text_2
	msgbox BATTLE_ROUTE_38_TRAINER_2_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE_38_TRAINER_3::
	trainerbattle_single TRAINER_ROUTE_38_TRAINER_3, BATTLE_ROUTE_38_TRAINER_3_Text_0, BATTLE_ROUTE_38_TRAINER_3_Text_1
	namebox BATTLE_ROUTE_38_TRAINER_3_Text_2
	msgbox BATTLE_ROUTE_38_TRAINER_3_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE_38_TRAINER_4::
	trainerbattle_single TRAINER_ROUTE_38_TRAINER_4, BATTLE_ROUTE_38_TRAINER_4_Text_0, BATTLE_ROUTE_38_TRAINER_4_Text_1
	namebox BATTLE_ROUTE_38_TRAINER_4_Text_2
	msgbox BATTLE_ROUTE_38_TRAINER_4_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE_38_TRAINER_5::
	trainerbattle_single TRAINER_ROUTE_38_TRAINER_5, BATTLE_ROUTE_38_TRAINER_5_Text_0, BATTLE_ROUTE_38_TRAINER_5_Text_1
	namebox BATTLE_ROUTE_38_TRAINER_5_Text_2
	msgbox BATTLE_ROUTE_38_TRAINER_5_Text_1
	hidenamebox
	release
	end


ROUTE_38_NPC_1::
	faceplayer
	namebox ROUTE_38_NPC_1_Text_0
	msgbox ROUTE_38_NPC_1_Text_1
	closemessage
	hidenamebox
	release
	end


ITEM_ROUTE_38_PRAYER_POTION::
	finditem ITEM_PRAYER_POTION
	end


ITEM_ROUTE_38_CAKE::
	finditem ITEM_CAKE
	end


MORYTANIA_WARNING_SIGN::
	lock
	faceplayer
	msgbox MORYTANIA_WARNING_SIGN_Text_0
	release
	end


ROUTE_38_GRAVE_1::
	lock
	faceplayer
	msgbox ROUTE_38_GRAVE_1_Text_0
	release
	end


ROUTE_38_GRAVE_2::
	lock
	faceplayer
	msgbox ROUTE_38_GRAVE_2_Text_0
	release
	end


ROUTE_38_GRAVE_3::
	lock
	faceplayer
	msgbox ROUTE_38_GRAVE_3_Text_0
	release
	end


ROUTE_38_GRAVE_4::
	lock
	faceplayer
	msgbox ROUTE_38_GRAVE_4_Text_0
	release
	end


ROUTE_38_GRAVE_5::
	lock
	faceplayer
	msgbox ROUTE_38_GRAVE_5_Text_0
	release
	end


LOCKED_DOOR_RAG_AND_BONE::
	lock
	msgbox LOCKED_DOOR_RAG_AND_BONE_Text_0
	release
	end


skelletonsWarning_Text_0:
	.string "skelly guard$"

skelletonsWarning_Text_1:
	.string "There is no secret base here turn away$"

skelletontalks_Text_0:
	.string "Don't collect the red mist and open the\n"
	.string "gates. The master will be very annoyed\l"
	.string "with you.$"

skelletontalks_Text_1:
	.string "The gates are open? Good luck getting\n"
	.string "past the life detection wards.$"

skelletontalks_Text_2:
	.string "Did Sharathteerk and Arrav beat you?\n"
	.string "You honestly asked for it.$"

skelletontalks_Text_3:
	.string "Why are you still bothering us? Can't\n"
	.string "you see your not welcome here?$"

skelletontalks_Text_4:
	.string "The master is back to his fortress in\n"
	.string "The North. Lets hope you won't bother\l"
	.string "us there.$"

BATTLE_ROUTE_38_TRAINER_1_Text_0:
	.string "Hey noob you're on the wrong side of\n"
	.string "the map. Only pros goes through here!$"

BATTLE_ROUTE_38_TRAINER_1_Text_1:
	.string "What do you mean Priest in Peril is a\n"
	.string "noob quest?$"

BATTLE_ROUTE_38_TRAINER_1_Text_2:
	.string "Wow4lyf$"

BATTLE_ROUTE_38_TRAINER_2_Text_0:
	.string "Some old man told me to get bones, yours\n"
	.string "will do fine.$"

BATTLE_ROUTE_38_TRAINER_2_Text_1:
	.string "I have 15 bat bones and 3 human bones.\n"
	.string "The old man will be so happy.$"

BATTLE_ROUTE_38_TRAINER_2_Text_2:
	.string "Guide4lyf$"

BATTLE_ROUTE_38_TRAINER_3_Text_0:
	.string "Are you lost on your way to Ardougne\n"
	.string "too?$"

BATTLE_ROUTE_38_TRAINER_3_Text_1:
	.string "Oh, westward. I see.$"

BATTLE_ROUTE_38_TRAINER_3_Text_2:
	.string "xXx XOX xXx$"

BATTLE_ROUTE_38_TRAINER_4_Text_0:
	.string "I'm here to mine bones for the wise old\n"
	.string "man.$"

BATTLE_ROUTE_38_TRAINER_4_Text_1:
	.string "You can't mine bones? There is no wise\n"
	.string "old man here? Are you sure?$"

BATTLE_ROUTE_38_TRAINER_4_Text_2:
	.string "Leoh$"

BATTLE_ROUTE_38_TRAINER_5_Text_0:
	.string "This land is protected by the King of\n"
	.string "Varrock, you may not enter freely.$"

BATTLE_ROUTE_38_TRAINER_5_Text_1:
	.string "I guess we can make an exception for\n"
	.string "you.$"

BATTLE_ROUTE_38_TRAINER_5_Text_2:
	.string "Bernard$"

ROUTE_38_NPC_1_Text_0:
	.string "Drezel$"

ROUTE_38_NPC_1_Text_1:
	.string "Following the recent death of many\n"
	.string "members of The Myreque over in\l"
	.string "Morytania, I am afraid this area is\l"
	.string "currently off-limits by order of King\l"
	.string "Roald.$"

MORYTANIA_WARNING_SIGN_Text_0:
	.string "WARNING!\p"
	.string "The land east of the River Salve is\n"
	.string "dangerous, full of vampyres and ghasts.\p"
	.string "No entry is permitted, by decree of His\n"
	.string "Royal Highness King Roald III of\l"
	.string "Varrock.$"

ROUTE_38_GRAVE_1_Text_0:
	.string "The text on the gravestone is too old\n"
	.string "and faded to read.$"

ROUTE_38_GRAVE_2_Text_0:
	.string "There is a rune crossbow engraved in\n"
	.string "the stone.\p"
	.string "You wonder what it could mean.$"

ROUTE_38_GRAVE_3_Text_0:
	.string "In loving memory of Sani Piliu of The\n"
	.string "Myreque, who gave her life fighting to\l"
	.string "free Morytania from the vampyres.$"

ROUTE_38_GRAVE_4_Text_0:
	.string "This grave is for Harold Evans, freedom\n"
	.string "fighter of The Myreque.$"

ROUTE_38_GRAVE_5_Text_0:
	.string "RIP Spots. The best temple guarding dog\n"
	.string "a King could have asked for, cut down in\l"
	.string "his prime by a dim-witted adventurer.$"

LOCKED_DOOR_RAG_AND_BONE_Text_0:
	.string "It is securely locked.\p"
	.string "Though as you turn to leave, you could\n"
	.string "have sworn you heard a faint\l"
	.string "mumblemumblemumble coming from inside.$"
