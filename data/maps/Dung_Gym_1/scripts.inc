Dung_Gym_1_MapScripts::
	.byte 0


BATTLE_DAEMONHEIM_GYM_1::
	trainerbattle_single TRAINER_SINKHOLE_NPC_FORGOTTENWARRIOR_1, BATTLE_DAEMONHEIM_GYM_1_Text_0, BATTLE_DAEMONHEIM_GYM_1_Text_1
	msgbox BATTLE_DAEMONHEIM_GYM_1_Text_1
	hidenamebox
	release
	end


BATTLE_DAEMONHEIM_GYM_2::
	trainerbattle_single TRAINER_SINKHOLE_NPC_FORGOTTENWARRIOR_1, BATTLE_DAEMONHEIM_GYM_2_Text_0, BATTLE_DAEMONHEIM_GYM_2_Text_1
	msgbox BATTLE_DAEMONHEIM_GYM_2_Text_2
	hidenamebox
	release
	end


BATTLE_DAEMONHEIM_GYM_3::
	trainerbattle_single TRAINER_SINKHOLE_NPC_FORGOTTENWARRIOR_1, BATTLE_DAEMONHEIM_GYM_3_Text_0, BATTLE_DAEMONHEIM_GYM_3_Text_1
	msgbox BATTLE_DAEMONHEIM_GYM_3_Text_2
	hidenamebox
	release
	end


BATTLE_DAEMONHEIM_GYM_4::
	trainerbattle_single TRAINER_SINKHOLE_NPC_FORGOTTENWARRIOR_1, BATTLE_DAEMONHEIM_GYM_4_Text_0, BATTLE_DAEMONHEIM_GYM_4_Text_1
	msgbox BATTLE_DAEMONHEIM_GYM_4_Text_1
	hidenamebox
	release
	end


BATTLE_DAEMONHEIM_GYM_5::
	trainerbattle_single TRAINER_SINKHOLE_NPC_FORGOTTENWARRIOR_1, BATTLE_DAEMONHEIM_GYM_5_Text_0, BATTLE_DAEMONHEIM_GYM_5_Text_1
	msgbox BATTLE_DAEMONHEIM_GYM_5_Text_2
	hidenamebox
	release
	end


NPC_DAEMONHEIM_GYM_1::
	faceplayer
	namebox NPC_DAEMONHEIM_GYM_1_Text_0
	msgbox NPC_DAEMONHEIM_GYM_1_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_DAEMONHEIM_GYM_2::
	faceplayer
	namebox NPC_DAEMONHEIM_GYM_2_Text_0
	msgbox NPC_DAEMONHEIM_GYM_2_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_DAEMONHEIM_GYM_3::
	faceplayer
	namebox NPC_DAEMONHEIM_GYM_3_Text_0
	msgbox NPC_DAEMONHEIM_GYM_3_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_DAEMONHEIM_GYM_4::
	faceplayer
	namebox NPC_DAEMONHEIM_GYM_4_Text_0
	msgbox NPC_DAEMONHEIM_GYM_4_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_DAEMONHEIM_GYM_5::
	faceplayer
	namebox NPC_DAEMONHEIM_GYM_5_Text_0
	msgbox NPC_DAEMONHEIM_GYM_5_Text_1
	closemessage
	hidenamebox
	release
	end


BATTLE_DAEMONHEIM_GYM_1_Text_0:
	.string "Stand back challenger, these dungeons\n"
	.string "belong to us!$"

BATTLE_DAEMONHEIM_GYM_1_Text_1:
	.string "$"

BATTLE_DAEMONHEIM_GYM_2_Text_0:
	.string "Churrah!\p"
	.string "Thok Bloodrager's power is immense\n"
	.string "challenger.\p"
	.string "Do you truly believe yourself to be his\n"
	.string "equal?$"

BATTLE_DAEMONHEIM_GYM_2_Text_1:
	.string "Your power is also immense!$"

BATTLE_DAEMONHEIM_GYM_2_Text_2:
	.string "Thok Bloodrager always gives me a weird\n"
	.string "look.\p"
	.string "Does he not like being in my company?$"

BATTLE_DAEMONHEIM_GYM_3_Text_0:
	.string "Got lost? No worries, let us battle!$"

BATTLE_DAEMONHEIM_GYM_3_Text_1:
	.string "Still lost? Gatekey teleport! You dont\n"
	.string "have one? Wow you are bad at this my\l"
	.string "friend.$"

BATTLE_DAEMONHEIM_GYM_3_Text_2:
	.string "Still lost?\n"
	.string "Gatekey teleport!\p"
	.string "You dont have one?\p"
	.string "Wow you are bad at this my friend.$"

BATTLE_DAEMONHEIM_GYM_4_Text_0:
	.string "Beyond here lies warriors far stronger\n"
	.string "than you are capable, turn back.$"

BATTLE_DAEMONHEIM_GYM_4_Text_1:
	.string "Maybe you have what it takes, or maybe\n"
	.string "you will die.\p"
	.string "Regardless, I don't care for you.$"

BATTLE_DAEMONHEIM_GYM_5_Text_0:
	.string "We have trained our entire lives to\n"
	.string "protect these dungeons.\p"
	.string "You will not intrude!$"

BATTLE_DAEMONHEIM_GYM_5_Text_1:
	.string "All those years of training, wasted…$"

BATTLE_DAEMONHEIM_GYM_5_Text_2:
	.string "All those years of training, wasted.\p"
	.string "You have crushed our very existence\n"
	.string "down to this existencial\l"
	.string "insignificance.\p"
	.string "Have you no shame?$"

NPC_DAEMONHEIM_GYM_1_Text_0:
	.string "Skinweaver$"

NPC_DAEMONHEIM_GYM_1_Text_1:
	.string "You think you are ready to face Thok\n"
	.string "Bloodrager?\p"
	.string "I once saw him take out a Gulega.\p"
	.string "With his fists.\p"
	.string "We Gorajo fears one like him, and you\n"
	.string "would be wise to be careful too.$"

NPC_DAEMONHEIM_GYM_2_Text_0:
	.string "Choob$"

NPC_DAEMONHEIM_GYM_2_Text_1:
	.string "Thok has beaten me about 70 times by\n"
	.string "now, but I have hope this time.\p"
	.string "Me and my trusted pigeon will beat him\n"
	.string "and his rock types on the 71st try!$"

NPC_DAEMONHEIM_GYM_3_Text_0:
	.string "Warrior$"

NPC_DAEMONHEIM_GYM_3_Text_1:
	.string "Bilrach told me to make sure people who\n"
	.string "challenged Thok would not open the\l"
	.string "door by placing the boulder on the\l"
	.string "pressure pad.\p"
	.string "He really had the audacity to use our\n"
	.string "dungeon to build a gym and Bilrach is\l"
	.string "furious about it.$"

NPC_DAEMONHEIM_GYM_4_Text_0:
	.string "Frozen Warrior$"

NPC_DAEMONHEIM_GYM_4_Text_1:
	.string "I moved to this corner and can no\n"
	.string "longer get out!\p"
	.string "My feet hurt…\p"
	.string "I'm cold…\p"
	.string "It's so chilly here…\p"
	.string "I wish I could get out of here…$"

NPC_DAEMONHEIM_GYM_5_Text_0:
	.string "Summoner$"

NPC_DAEMONHEIM_GYM_5_Text_1:
	.string "Well, I have lost a lot to Thok.\p"
	.string "But my next plan is to summon a\n"
	.string "bloodrager and make it and Thok duke it\l"
	.string "out.\p"
	.string "…\p"
	.string "That doesnt count as an MvM battle?\p"
	.string "And Thok would win anyway?\p"
	.string "Well why don't you mind your own\n"
	.string "business!$"
