Edgeville_Bank_MapScripts::
	.byte 0


BankDepositBox::
	lock
	msgbox BankDepositBox_Text_0
	waitmessage
	release
	end


NPC_EDGEVILLE_BANK_1::
	lock
	faceplayer
	namebox NPC_EDGEVILLE_BANK_1_Text_0
	msgbox NPC_EDGEVILLE_BANK_1_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_EDGEVILLE_BANK_2::
	lock
	faceplayer
	namebox NPC_EDGEVILLE_BANK_2_Text_0
	msgbox NPC_EDGEVILLE_BANK_2_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_EDGEVILLE_BANK_3::
	lock
	faceplayer
	namebox NPC_EDGEVILLE_BANK_3_Text_0
	msgbox NPC_EDGEVILLE_BANK_3_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_EDGEVILLE_BANK_4::
	lock
	faceplayer
	namebox NPC_EDGEVILLE_BANK_4_Text_0
	msgbox NPC_EDGEVILLE_BANK_4_Text_1
	closemessage
	hidenamebox
	release
	end


BankDepositBox_Text_0:
	.string "You have no idea how depositing\n"
	.string "monsters in this box would get them\l"
	.string "safely to your bank instead of anybody\l"
	.string "elses.\p"
	.string "You're better off speaking to a banker.$"

NPC_EDGEVILLE_BANK_1_Text_0:
	.string "K A B o0 M$"

NPC_EDGEVILLE_BANK_1_Text_1:
	.string "Dude my monster leveled up in battle\n"
	.string "but then someone PKed it…\p"
	.string "After the battle all that was left was a\n"
	.string "pile of bones…$"

NPC_EDGEVILLE_BANK_2_Text_0:
	.string "Ry4nInnit$"

NPC_EDGEVILLE_BANK_2_Text_1:
	.string "A couple of people made friends with me\n"
	.string "and convinced me to head into the\l"
	.string "Wilderness with them to find some rare\l"
	.string "monsters!\p"
	.string "But they weren't friendly after all, and\n"
	.string "I lost all my stuff...$"

NPC_EDGEVILLE_BANK_3_Text_0:
	.string "AltarCarbon$"

NPC_EDGEVILLE_BANK_3_Text_1:
	.string "Have you visited any of the\n"
	.string "Runecrafting Altars yet?\p"
	.string "There is supposedly nearby!\p"
	.string "I wonder where it is…$"

NPC_EDGEVILLE_BANK_4_Text_0:
	.string "Kifek$"

NPC_EDGEVILLE_BANK_4_Text_1:
	.string "I levelled up my chick in the Wilderness\n"
	.string "and it evolved into some weird looking\l"
	.string "chicken.\p"
	.string "I've never seen one like it before!\p"
	.string "It could shoot lightning!$"
