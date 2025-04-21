Dung_Gym_12_MapScripts::
	.byte 0


THOK_GYM_CHALLENGE_STATE_POST_BADGE::
	lockall
	faceplayer
	namebox THOK_GYM_CHALLENGE_STATE_POST_BADGE_Text_0
	msgbox THOK_GYM_CHALLENGE_STATE_POST_BADGE_Text_1
	hidenamebox
	closemessage
	playfanfare MUS_PS_QUEST_COMPLETE
	msgbox THOK_GYM_CHALLENGE_STATE_POST_BADGE_Text_2
	waitfanfare
	waitmessage
	namebox THOK_GYM_CHALLENGE_STATE_POST_BADGE_Text_0
	msgbox THOK_GYM_CHALLENGE_STATE_POST_BADGE_Text_3
	hidenamebox
	giveitem ITEM_TM48, 1
	compare VAR_RESULT, FALSE
	goto_if_eq Common_EventScript_ShowBagIsFull
	namebox THOK_GYM_CHALLENGE_STATE_POST_BADGE_Text_0
	msgbox THOK_GYM_CHALLENGE_STATE_POST_BADGE_Text_4
	setvar VAR_POKESCAPE_DAEMONHEIM_GYM_QUEST, 30
	setflag FLAG_BADGE08_GET
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_MVM_CHAMPIONSHIPS, 7
	call HIDDEN_GROTTO_RESET
	addvar VAR_GAMEMODE_LEVEL_SCALING, 1
	namebox THOK_GYM_CHALLENGE_STATE_POST_BADGE_Text_0
	msgbox THOK_GYM_CHALLENGE_STATE_POST_BADGE_Text_5
	hidenamebox
	closemessage
	applymovement 2, Movement_DaemonheimGym_PostBadge_1
	applymovement OBJ_EVENT_ID_PLAYER, Movement_DaemonheimGym_PostBadge_2
	waitmovement 0
	delay 60
	playse SE_PIN
	applymovement 2, Movement_DaemonheimGym_PostBadge_3
	fadeoutbgm 1
	waitmovement 0
	namebox THOK_GYM_CHALLENGE_STATE_POST_BADGE_Text_0
	msgbox THOK_GYM_CHALLENGE_STATE_POST_BADGE_Text_6
	hidenamebox
	closemessage
	applymovement 2, Movement_DaemonheimGym_PostBadge_10
	applymovement OBJ_EVENT_ID_PLAYER, Movement_DaemonheimGym_PostBadge_9
	waitmovement 0
	applymovement 1, Movement_DaemonheimGym_PostBadge_4
	waitmovement 0
	namebox THOK_GYM_CHALLENGE_STATE_POST_BADGE_Text_7
	playmoncry SPECIES_FERRET, CRY_MODE_NORMAL
	msgbox THOK_GYM_CHALLENGE_STATE_POST_BADGE_Text_8
	waitmoncry
	hidenamebox
	closemessage
	applymovement 2, Movement_DaemonheimGym_PostBadge_5
	playse SE_LEDGE
	waitse
	playse SE_LEDGE
	waitse
	playse SE_LEDGE
	waitmovement 0
	namebox THOK_GYM_CHALLENGE_STATE_POST_BADGE_Text_0
	msgbox THOK_GYM_CHALLENGE_STATE_POST_BADGE_Text_9
	hidenamebox
	closemessage
	playse SE_FLEE
	applymovement 2, Movement_DaemonheimGym_PostBadge_6
	waitmovement 0
	waitse
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Movement_DaemonheimGym_PostBadge_7
	waitmovement 0
	applymovement 1, Movement_DaemonheimGym_PostBadge_8
	waitmovement 0
	namebox THOK_GYM_CHALLENGE_STATE_POST_BADGE_Text_7
	playmoncry SPECIES_FERRET, CRY_MODE_ECHO_START
	msgbox THOK_GYM_CHALLENGE_STATE_POST_BADGE_Text_8
	waitmoncry
	hidenamebox
	closemessage
	msgbox THOK_GYM_CHALLENGE_STATE_POST_BADGE_Text_10
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Movement_DaemonheimGym_PostBadge_11
	applymovement 1, Movement_DaemonheimGym_PostBadge_8
	waitmovement 0
	delay 40
	applymovement OBJ_EVENT_ID_PLAYER, Movement_DaemonheimGym_PostBadge_11
	applymovement 1, Movement_DaemonheimGym_PostBadge_8
	waitmovement 0
	delay 40
	applymovement 1, Movement_DaemonheimGym_PostBadge_8
	waitmovement 0
	namebox THOK_GYM_CHALLENGE_STATE_POST_BADGE_Text_7
	playmoncry SPECIES_FERRET, CRY_MODE_FAINT
	msgbox THOK_GYM_CHALLENGE_STATE_POST_BADGE_Text_8
	waitmoncry
	hidenamebox
	closemessage
	msgbox THOK_GYM_CHALLENGE_STATE_POST_BADGE_Text_11
	closemessage
	fadescreenswapbuffers FADE_TO_BLACK
	delay 60
	msgbox THOK_GYM_CHALLENGE_STATE_POST_BADGE_Text_12
	closemessage
	fadeinbgm 2
	warpsilent MAP_DAEMONHEIM, 2, 0, 0
	return


Movement_DaemonheimGym_PostBadge_1:
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Movement_DaemonheimGym_PostBadge_2:
	lock_facing_direction
	walk_down
	unlock_facing_direction
	face_right
	lock_facing_direction
	walk_left
	delay_8
	unlock_facing_direction
	walk_right
	walk_down
	step_end

Movement_DaemonheimGym_PostBadge_3:
	emote_question_mark
	delay_16
	delay_16
	face_left
	delay_16
	delay_16
	face_right
	delay_16
	delay_16
	face_up
	step_end

Movement_DaemonheimGym_PostBadge_4:
	walk_slow_right
	walk_slow_right
	walk_slow_right
	step_end

Movement_DaemonheimGym_PostBadge_5:
	face_left
	delay_8
	emote_double_exclamation_mark
	jump_in_place_left
	jump_in_place_left
	jump_in_place_left
	step_end

Movement_DaemonheimGym_PostBadge_6:
	walk_faster_down
	set_invisible
	step_end

Movement_DaemonheimGym_PostBadge_7:
	face_left
	emote_question_mark
	delay_16
	step_end

Movement_DaemonheimGym_PostBadge_8:
	walk_slow_right
	step_end

Movement_DaemonheimGym_PostBadge_9:
	face_up
	delay_16
	delay_16
	face_right
	delay_16
	delay_16
	face_up
	delay_16
	delay_16
	face_left
	step_end

Movement_DaemonheimGym_PostBadge_10:
	face_right
	delay_16
	delay_16
	face_left
	delay_16
	delay_16
	face_down
	delay_16
	delay_16
	face_left
	step_end

Movement_DaemonheimGym_PostBadge_11:
	lock_facing_direction
	walk_slow_right
	step_end

THOK_GYM_CHALLENGE_STATE_POST_BADGE_Text_0:
	.string "Thok$"

THOK_GYM_CHALLENGE_STATE_POST_BADGE_Text_1:
	.string "RAHAHAHA! YOU FIGHT WELL!\l"
	.string "HAVE THIS BADGE!$"

THOK_GYM_CHALLENGE_STATE_POST_BADGE_Text_2:
	.string "{PLAYER} received the DAEMONHEIM\n"
	.string "BADGE from Thok.$"

THOK_GYM_CHALLENGE_STATE_POST_BADGE_Text_3:
	.string "TAKE THIS TOO!$"

THOK_GYM_CHALLENGE_STATE_POST_BADGE_Text_4:
	.string "That is CUPHOLDER!\p"
	.string "CUPHOLDER.$"

THOK_GYM_CHALLENGE_STATE_POST_BADGE_Text_5:
	.string "Let us return to the surface and\n"
	.string "celebrate!\p"
	.string "RAH HA HA!$"

THOK_GYM_CHALLENGE_STATE_POST_BADGE_Text_6:
	.string "Thok is cold…\p"
	.string "Thok thinks something is watching us…$"

THOK_GYM_CHALLENGE_STATE_POST_BADGE_Text_7:
	.string "Ferret$"

THOK_GYM_CHALLENGE_STATE_POST_BADGE_Text_8:
	.string "Squeeak.$"

THOK_GYM_CHALLENGE_STATE_POST_BADGE_Text_9:
	.string "RAAAAAAAAAAAAAAAAAAAAAH!!!\p"
	.string "RUN!! {PLAYER}!! RUN!!!$"

THOK_GYM_CHALLENGE_STATE_POST_BADGE_Text_10:
	.string "You suddenly feel a chill run down your\n"
	.string "spine as if this was the end of your\l"
	.string "life…$"

THOK_GYM_CHALLENGE_STATE_POST_BADGE_Text_11:
	.string "As the ferret gets closer your eyes\n"
	.string "begin to fade.$"

THOK_GYM_CHALLENGE_STATE_POST_BADGE_Text_12:
	.string "Oh dear, you've whited out…$"
