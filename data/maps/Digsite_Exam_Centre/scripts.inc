Digsite_Exam_Centre_MapScripts::
	.byte 0


NPC_EXAMCENTRE_HALZEMERE::
	lock
	faceplayer
	namebox NPC_EXAMCENTRE_HALZEMERE_Text_0
	msgbox NPC_EXAMCENTRE_HALZEMERE_Text_1
	closemessage
	hidenamebox
	msgbox NPC_EXAMCENTRE_HALZEMERE_Text_2
	closemessage
	hidenamebox
	release
	end


NPC_EXAMCENTRE_MODSTU::
	lock
	faceplayer
	namebox NPC_EXAMCENTRE_MODSTU_Text_0
	msgbox NPC_EXAMCENTRE_MODSTU_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_EXAMCENTRE_HALZEMERE_Text_0:
	.string "???$"

NPC_EXAMCENTRE_HALZEMERE_Text_1:
	.string "Ip eto qui undri.\p"
	.string "Mi irno har arpos.$"

NPC_EXAMCENTRE_HALZEMERE_Text_2:
	.string "You suddenly get a headache and feel\n"
	.string "that should leave the gnome to drink\l"
	.string "his tea in peace.$"

NPC_EXAMCENTRE_MODSTU_Text_0:
	.string "Mod Stu$"

NPC_EXAMCENTRE_MODSTU_Text_1:
	.string "Ah, nothing like a nice cuppa tea.$"
