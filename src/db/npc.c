#include "tables.h"
#include "resources.h"
#include "ai.h"

const npc_info_def npc_info[NPC_COUNT + 8] = {
	{ NULL, 		PAL0, "Nothing",
		NULL, NULL, NULL, NULL },
	{ &SPR_Energy, 	PAL1, "Weapon Energy",
		&ai_energy_onCreate, &ai_energy_onUpdate, NULL, NULL },
	{ &SPR_Behem, 	PAL1, "Behemoth",
		NULL, &ai_behemoth_onUpdate, &ai_behemoth_onState, NULL },
	{ NULL, 		PAL0, "Nothing",
		NULL, NULL, NULL, NULL },
	{ &SPR_Smoke, 	PAL1, "Smoke",
		NULL, NULL, NULL, NULL },
	{ &SPR_CritHG, 	PAL3, "Green Hopping Critter",
		&ai_pushdn_onCreate, &ai_critterHop_onUpdate, &ai_critterHop_onState, NULL },
	{ &SPR_BtlHG, 	PAL3, "Green Beetle",
		NULL, &ai_beetle_onUpdate, &ai_default_onState, NULL },
	{ &SPR_Basil, 	PAL1, "Basil",
		&ai_basil_onCreate, &ai_basil_onUpdate, NULL, NULL },
	{ &SPR_BtlHG, 	PAL3, "Green Beetle (Follow)",
		NULL, &ai_beetleFollow_onUpdate, &ai_default_onState, NULL },
	{ &SPR_Balrog, 	PAL1, "Balrog (Drops in)",
		NULL, &ai_balrog_onUpdate, &ai_balrog_onState, NULL },
	{ NULL, 		PAL0, "Nothing",
		NULL, NULL, NULL, NULL },
	{ NULL, 		PAL0, "Balrog Energy Shot",
		NULL, NULL, NULL, NULL },
	{ &SPR_Balrog, 	PAL1, "Balrog (Scene)",
		NULL, &ai_balrog_onUpdate, &ai_balrog_onState, NULL },
	{ &SPR_ForceField, PAL1, "Force Field",
		NULL, NULL, NULL, NULL },
	{ &SPR_Key, 	PAL1, "Santa's Key",
		NULL, NULL, NULL, NULL },
	{ &SPR_Chest, 	PAL1, "Treasure Chest",
		NULL, NULL, NULL, NULL },
	/* 0x010 (16) */
	{ &SPR_Save, 	PAL1, "Save Point",
		NULL, NULL, NULL, NULL },
	{ &SPR_Refill, 	PAL1, "Health & Ammo Refill",
		NULL, NULL, NULL, NULL },
	{ &SPR_Door, 	PAL1, "Door",
		&ai_door_onCreate, NULL, &ai_door_onState, NULL },
	{ &SPR_Balrog, 	PAL1, "Balrog (Mimiga Village)",
		NULL, &ai_balrog_onUpdate, &ai_balrog_onState, NULL },
	{ &SPR_Computer, PAL1, "Computer",
		&ai_op2anim_onCreate, NULL, NULL, NULL },
	{ &SPR_Chest2, 	PAL1, "Opened Chest",
		&ai_pushdn_onCreate, NULL, NULL, NULL },
	{ &SPR_Tele, 	PAL1, "Teleporter",
		NULL, NULL, NULL, NULL },
	{ NULL, 		PAL0, "Teleporter Lights",
		NULL, NULL, NULL, NULL },
	{ &SPR_CritBig, PAL0, "Power Critter",
		NULL, NULL, &ai_default_onState, NULL },
	{ &SPR_Platform, PAL1, "Lift Platform",
		&ai_lift_onCreate, &ai_lift_onUpdate, NULL, NULL },
	{ &SPR_Bat, 	PAL0, "Bat (Circling)",
		NULL, NULL, &ai_default_onState, NULL },
	{ &SPR_Trap, 	PAL1, "Death Trap",
		NULL, NULL, NULL, NULL },
	{ &SPR_CritHG, 	PAL3, "Flying Critter",
		NULL, NULL, &ai_default_onState, NULL },
	{ &SPR_Cthu, 	PAL3, "Cthulhu",
		NULL, NULL, NULL, NULL },
	{ &SPR_Gunsmith, PAL3, "Hermit Gunsmith",
		&ai_pushdn_onCreate, NULL, NULL, NULL },
	{ &SPR_Bat, 	PAL0, "Bat (Hanging)",
		NULL, NULL, &ai_default_onState, NULL },
	/* 0x020 (32) */
	{ &SPR_LifeUp, 	PAL1, "Life Capsule",
		NULL, NULL, NULL, NULL },
	{ NULL, 		PAL0, "Balrog Energy Bounce",
		NULL, NULL, NULL, NULL },
	{ &SPR_Bed, 	PAL1, "Bed",
		NULL, NULL, NULL, NULL },
	{ &SPR_Mannan, 	PAL3, "Mannan",
		NULL, NULL, &ai_default_onState, NULL },
	{ &SPR_Balrog, 	PAL1, "Balrog (Second Fight)",
		NULL, NULL, &ai_default_onState, NULL },
	{ &SPR_Sign, 	PAL1, "Sign Post",
		NULL, NULL, NULL, NULL },
	{ &SPR_Fire, 	PAL1, "Fireplace Fire",
		NULL, NULL, NULL, NULL },
	{ &SPR_SaveSign, PAL1, "Save Sign",
		NULL, NULL, NULL, NULL },
	{ &SPR_Santa, 	PAL3, "Santa",
		NULL, NULL, NULL, NULL },
	{ NULL, 		PAL0, "Busted Doorway",
		NULL, NULL, NULL, NULL },
	{ &SPR_Sue, 	PAL3, "Sue",
		NULL, NULL, NULL, NULL },
	{ &SPR_Board, 	PAL1, "Blackboard",
		&ai_blackboard_onCreate, NULL, NULL, NULL },
	{ NULL, 		PAL0, "Polish",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Baby",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Horiz/Vert Trigger",
		NULL, &ai_trigger_onUpdate, NULL, NULL },
	{ NULL, 		PAL0, "Green Sandcroc",
		NULL, NULL, &ai_default_onState, NULL },
	/* 0x030 (48) */
	{ NULL, 		PAL0, "Omega Projectile",
		NULL, NULL, NULL, NULL },
	{ NULL, 		PAL0, "Skullhead",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Skeleton",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Crow & Skullhead",
		NULL, NULL, &ai_default_onState, NULL },
	{ &SPR_Robot, 	PAL3, "Blue Robot (Sitting)",
		NULL, NULL, NULL, NULL },
	{ NULL, 		PAL0, "???",
		NULL, NULL, NULL, NULL },
	{ NULL, 		PAL0, "Skullstep",
		NULL, NULL, &ai_default_onState, NULL },
	{ &SPR_Kazuma, 	PAL3, "Kazuma",
		NULL, NULL, NULL, NULL },
	{ NULL, 		PAL0, "Brown Beetle",
		NULL, &ai_beetle_onUpdate, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Crow",
		NULL, NULL, &ai_default_onState, NULL },
	{ &SPR_Basu, 	PAL3, "Basu",
		NULL, NULL, &ai_default_onState, NULL },
	{ &SPR_DoorE, 	PAL1, "Door Enemy",
		NULL, &ai_theDoor_onUpdate, &ai_default_onState, &ai_theDoor_onHurt },
	{ &SPR_Toroko, 	PAL3, "Toroko",
		&ai_op2flip_onCreate, &ai_toroko_onUpdate, &ai_toroko_onState, NULL },
	{ &SPR_King, 	PAL3, "King",
		&ai_op2flip_onCreate, &ai_king_onUpdate, &ai_king_onState, NULL },
	{ &SPR_KazuCom, PAL3, "Kazuma (Computer)",
		&ai_pushdn_onCreate, &ai_kazuComp_onUpdate, NULL, NULL },
	{ &SPR_Toroko, 	PAL3, "Toroko (Attacking)",
		&ai_torokoAtk_onCreate, &ai_toroko_onUpdate, &ai_toroko_onState, NULL },
	/* 0x040 (64) */
	{ &SPR_CritHB, 	PAL2, "Blue Hopping Critter",
		&ai_pushdn_onCreate, &ai_critterHop_onUpdate, &ai_critterHop_onState, NULL },
	{ &SPR_Bat, 	PAL0, "Bat",
		&ai_batVertical_onCreate, &ai_batVertical_onUpdate, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Misery's Bubble",
		NULL, NULL, NULL, NULL },
	{ &SPR_Misery, 	PAL0, "Misery (Floating)",
		NULL, &ai_miseryFloat_onUpdate, &ai_miseryFloat_onState, NULL },
	{ &SPR_Balrog, 	PAL1, "Balrog (First Fight)",
		NULL, &ai_balrogRunning_onUpdate, &ai_balrogRunning_onState, NULL },
	{ &SPR_Pignon, 	PAL1, "Pignon",
		NULL, &ai_pignon_onUpdate, &ai_default_onState, &ai_pignon_onHurt },
	{ &SPR_Sparkle, PAL1, "Sparkling Item",
		NULL, NULL, NULL, NULL },
	{ &SPR_Fish, 	PAL0, "Chinfish",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Sprinkler",
		NULL, NULL, NULL, NULL },
	{ NULL, 		PAL0, "Water Drop",
		NULL, NULL, NULL, NULL },
	{ &SPR_Jack, 	PAL3, "Jack",
		&ai_pushdn_onCreate, &ai_jack_onUpdate, NULL, NULL },
	{ &SPR_Kanpachi, PAL3, "Kanpachi (Fishing)",
		NULL, NULL, NULL, NULL },
	{ &SPR_Flower, 	PAL3, "Flowers",
		NULL, NULL, NULL, NULL },
	{ &SPR_Sanda, 	PAL3, "Sandame's Pavilion",
		NULL, NULL, NULL, NULL },
	{ &SPR_Pot, 	PAL1 , "Pot",
		&ai_op2frame_onCreate, NULL, NULL, NULL },
	{ &SPR_Mahin, 	PAL3, "Mahin",
		&ai_pushdn_onCreate, NULL, NULL, NULL },
	/* 0x050 (80) */
	{ &SPR_Keeper, 	PAL1, "Gravekeeper",
		NULL, NULL, &ai_default_onState, NULL },
	{ &SPR_PignonB, PAL1, "Big Pignon",
		NULL, &ai_pignon_onUpdate, &ai_default_onState, &ai_pignon_onHurt },
	{ &SPR_Misery, 	PAL0, "Misery (Standing)",
		NULL, NULL, NULL, NULL },
	{ &SPR_Igor, 	PAL3, "Igor (Scene)",
		NULL, NULL, NULL, NULL },
	{ NULL, 		PAL0, "Basu Projectile",
		NULL, NULL, NULL, NULL },
	{ &SPR_Term, 	PAL1, "Terminal",
		NULL, NULL, NULL, NULL },
	{ NULL, 		PAL0, "Missile",
		NULL, NULL, NULL, NULL },
	{ &SPR_Heart, 	PAL1, "Heart",
		NULL, NULL, NULL, NULL },
	{ &SPR_Igor, 	PAL3, "Igor (Boss)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL3, "Igor (Defeated)",
		NULL, NULL, NULL, NULL },
	{ NULL, 		PAL0, "Nothing",
		NULL, &ai_behemoth_onUpdate, &ai_behemoth_onState, NULL },
	{ &SPR_Cage, 	PAL1, "Cage",
		NULL, NULL, NULL, NULL },
	{ NULL, 		PAL0, "Sue (Computer)",
		NULL, NULL, NULL, NULL },
	{ NULL, 		PAL0, "Chaco",
		NULL, NULL, NULL, NULL },
	{ &SPR_Kulala, 	PAL0, "Kulala",
		NULL, NULL, &ai_default_onState, NULL },
	{ &SPR_Jelly, 	PAL0, "Jelly",
		NULL, NULL, &ai_default_onState, NULL },
	/* 0x060 (96) */
	{ &SPR_Fan, 	PAL1, "Fan (Left)",
		&ai_fan_onCreate, &ai_fan_onUpdate, NULL, NULL },
	{ &SPR_Fan, 	PAL1, "Fan (Up)",
		&ai_fan_onCreate, &ai_fan_onUpdate, NULL, NULL },
	{ &SPR_Fan, 	PAL1, "Fan (Right)",
		&ai_fan_onCreate, &ai_fan_onUpdate, NULL, NULL },
	{ &SPR_Fan, 	PAL1, "Fan (Down)",
		&ai_fan_onCreate, &ai_fan_onUpdate, NULL, NULL },
	{ NULL, 		PAL0, "Grate",
		NULL, NULL, NULL, NULL },
	{ NULL, 		PAL0, "Power Controls (Screen)",
		NULL, NULL, NULL, NULL },
	{ &SPR_Wave, 	PAL1, "Power Controls (Flow)",
		NULL, NULL, NULL, NULL },
	{ NULL, 		PAL0, "Mannan Projectile",
		NULL, NULL, NULL, NULL },
	{ NULL, 		PAL0, "Frog",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Hey! (Low)",
		NULL, NULL, NULL, NULL },
	{ NULL, 		PAL0, "Hey! (High)",
		NULL, NULL, NULL, NULL },
	{ &SPR_Malco, 	PAL1, "Malco",
		NULL, NULL, NULL, NULL },
	{ NULL, 		PAL0, "Balfrog Projectile",
		NULL, NULL, NULL, NULL },
	{ &SPR_Malco, 	PAL1, "Malco (Damaged)",
		NULL, NULL, NULL, NULL },
	{ NULL, 		PAL0, "Puchi",
		NULL, NULL, &ai_default_onState, NULL },
	{ &SPR_Quote, 	PAL0, "Quote Teleporting Out",
		NULL, NULL, NULL, NULL },
	/* 0x070 (112) */
	{ &SPR_Quote, 	PAL0, "Quote Teleporting In",
		NULL, NULL, NULL, NULL },
	{ NULL, 		PAL0, "Prof. Booster",
		NULL, NULL, NULL, NULL },
	{ &SPR_Press, 	PAL1, "Press",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Ravil",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Red Flower Petals",
		NULL, NULL, NULL, NULL },
	{ NULL, 		PAL0, "Curly",
		NULL, NULL, NULL, NULL },
	{ NULL, 		PAL0, "Curly (Boss)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Tables & Chair",
		NULL, NULL, NULL, NULL },
	{ NULL, 		PAL0, "Colon 1",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Colon 2",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Colon (Enemy)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Curly Projectile",
		NULL, NULL, NULL, NULL },
	{ NULL, 		PAL0, "Sunstone",
		NULL, NULL, NULL, NULL },
	{ NULL, 		PAL0, "Hidden Heart/Missile",
		NULL, NULL, NULL, NULL },
	{ NULL, 		PAL0, "Puppy (Runs Away)",
		NULL, NULL, NULL, NULL },
	{ NULL, 		PAL0, "???",
		NULL, NULL, NULL, NULL },
	/* 0x080 (128) */
	{ NULL, 		PAL0, "???",
		NULL, NULL, NULL, NULL },
	{ NULL, 		PAL0, "???",
		NULL, NULL, NULL, NULL },
	{ NULL, 		PAL0, "Puppy (Tail Wag)",
		NULL, NULL, NULL, NULL },
	{ NULL, 		PAL0, "Puppy (Sleeping)",
		NULL, NULL, NULL, NULL },
	{ NULL, 		PAL0, "Puppy (Bark)",
		NULL, NULL, NULL, NULL },
	{ NULL, 		PAL0, "Jenka",
		NULL, NULL, NULL, NULL },
	{ NULL, 		PAL0, "Armadillo",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Skeleton",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Puppy (Carried)",
		NULL, NULL, NULL, NULL },
	{ NULL, 		PAL0, "Large Doorway (Frame)",
		NULL, NULL, NULL, NULL },
	{ NULL, 		PAL0, "Large Doorway (Doors)",
		NULL, NULL, NULL, NULL },
	{ NULL, 		PAL0, "Doctor (Crowned)",
		NULL, NULL, NULL, NULL },
	{ NULL, 		PAL0, "Frenzied Toroko",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "???",
		NULL, NULL, NULL, NULL },
	{ NULL, 		PAL0, "Flowercub",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Jenka (Collapsed)",
		NULL, NULL, &ai_default_onState, NULL },
	/* 0x090 (144) */
	{ NULL, 		PAL0, "Toroko (Teleport In)",
		NULL, NULL, NULL, NULL },
	{ NULL, 		PAL0, "???",
		NULL, NULL, NULL, NULL },
	{ NULL, 		PAL0, "Lightning",
		NULL, NULL, NULL, NULL },
	{ NULL, 		PAL0, "Purple Critter",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Critter Projectile",
		NULL, NULL, NULL, NULL },
	{ NULL, 		PAL0, "Moving Block (Horiz)",
		NULL, NULL, NULL, NULL },
	{ NULL, 		PAL0, "Quote",
		NULL, NULL, NULL, NULL },
	{ &SPR_Robot, 	PAL3, "Blue Robot",
		NULL, NULL, NULL, NULL },
	{ NULL, 		PAL0, "Shutter (Stuck)",
		NULL, NULL, NULL, NULL },
	{ NULL, 		PAL0, "Gaudi",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Gaudi (Defeated)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Gaudi (Flying)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Gaudi Projectile",
		NULL, NULL, NULL, NULL },
	{ NULL, 		PAL0, "Moving Block (Vert)",
		NULL, NULL, NULL, NULL },
	{ NULL, 		PAL0, "Monster X Projectile",
		NULL, NULL, NULL, NULL },
	{ NULL, 		PAL0, "Monster X (Defeated)",
		NULL, NULL, NULL, NULL },
	/* 0x0A0 (160) */
	{ NULL, 		PAL0, "Pooh Black",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Pooh Black Projectile",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Pooh Black (Defeated)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Dr. Gero",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Nurse Hasumi",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Curly (Collapsed)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Chaba",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Prof. Booster (Fall)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Boulder",
		NULL, NULL, &ai_default_onState, NULL },
	{ &SPR_Balrog, 	PAL1, "Balrog (Third Fight)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Balrog Missile",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Fire Whirr",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Fire Whirr Projectile",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Gaudi Armor",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Gaudi Armor Projectile",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Gaudi Egg",
		NULL, NULL, &ai_default_onState, NULL },
	/* 0x0B0 (176) */
	{ NULL, 		PAL0, "Buyobuyo Base",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Buyobuyo",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Core Spinning Projectile",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Core Wisp Projectile",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Curly (AI)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "???",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "???",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "???",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Shutter (Large)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Shutter (Small)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Lift Block",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Fuzz Core",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "???",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Homing Flame Projectile",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Surface Robot",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Water Level",
		NULL, NULL, &ai_default_onState, NULL },
	/* 0x0C0 (192) */
	{ NULL, 		PAL0, "Scooter",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Scooter (Pieces)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL3, "Blue Robot (Pieces)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Grate Mouth",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Motion Wall",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Porcupine Fish",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Ironhead Projectile",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Underwater Current",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Dragon Zombie",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Dragon Zombie (Dead)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Dragon Zombie Projectile",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Blue Hopping Critter",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Falling Spike (Small)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Falling Spike (Large)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Counter Bomb",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Countdown Balloon",
		NULL, NULL, &ai_default_onState, NULL },
	// 0x0D0 (208) */
	{ NULL, 		PAL0, "Basu (2)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Basu Projectile (2)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Green Beetle (Follow 2)",
		NULL, NULL, &ai_default_onState, NULL },
	{ &SPR_Spikes, 	PAL1, "Spikes",
		&ai_spike_onCreate, NULL, NULL, NULL },
	{ NULL, 		PAL0, "Sky Dragon",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Night Spirit",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Night Spirit Projectile",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "White Sandcroc",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Debug Cat",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Itoh",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "???",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Smoke/Current Generator",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Shovel Brigade",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Shovel Brigade (Walking)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Prison Bars",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Momorin",
		NULL, NULL, &ai_default_onState, NULL },
	/* 0x0E0 (224) */
	{ NULL, 		PAL0, "Chie",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Megane",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Kanpachi",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Bucket",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Droll (Guard)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Red Flower Sprouts",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Blooming Red Flowers",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Rocket",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Orangebell",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "???",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Picked Red Flowers",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Midorin",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Gunfish",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Gunfish Projectile",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Lethal Press",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Cage Bars",
		NULL, NULL, &ai_default_onState, NULL },
	/* 0x0F0 (240) */
	{ NULL, 		PAL0, "Jailed Mimiga",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Red Critter",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Red Bat",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Red Bat Generator",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Acid Drop",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Acid Drop Generator",
		NULL, NULL, &ai_default_onState, NULL },
	{ &SPR_Press, 	PAL1, "Press (Proximity)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Misery (Boss)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Misery (Vanish)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Misery Energy Shot",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Misery Lightning Ball",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Misery Lightning",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "???",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Energy Capsule",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Helicopter",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "???",
		NULL, NULL, &ai_default_onState, NULL },
	/* 0x100 (256) */
	{ NULL, 		PAL0, "Doctor (Before Fight)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Red Crystal",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Sleeping Mimiga",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Curly (Carried)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Shovel Brigade (Caged)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Chie (Caged)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Chaco (Caged)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Doctor (Boss)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Doctor Red Wave",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Doctor Red Ball (Fast)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Doctor Red Ball (Slow)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Muscle Doctor (Boss)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Igor",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Red Energy Bat",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Red Energy",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Underwater Block",
		NULL, NULL, &ai_default_onState, NULL },
	/* 0x110 (272) */
	{ NULL, 		PAL0, "Water Block Generator",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Droll Projectile",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Droll",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Puppy (With Item)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Red Demon",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Red Demon Projectile",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Little Family",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Falling Block (Large)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Sue (Teleport In)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Doctor (Red Energy)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Mini Undead Core",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Misery (Transformed)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Sue (Transformed)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Orange Spinning Shot",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Orange Dot",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Orange Smoke",
		NULL, NULL, &ai_default_onState, NULL },
	/* 0x120 (288) */
	{ NULL, 		PAL0, "Glowing Rock Shot",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Orange Critter",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Orange Bat",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Mini Core (Before Fight)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Quake",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Huge Energy Shot",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Falling Block Generator",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Cloud",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Cloud Generator",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "???",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Doctor (Uncrowned)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Balrog/Misery (Bubble)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Demon Crown",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Fish Missile (Orange)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "???",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "???",
		NULL, NULL, &ai_default_onState, NULL },
	/* 0x130 (304) */
	{ NULL, 		PAL0, "Gaudi (Sitting)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Puppy (Small)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Balrog (Nurse)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Santa (Caged)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Stumpy",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Bute",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Bute (Sword)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Bute (Archer)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Bute Projectile",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Ma Pignon",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Falling (?)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Hopping Enemy (?)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Bute (Defeated)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Mesa",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Mesa (Defeated)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "???",
		NULL, NULL, &ai_default_onState, NULL },
	/* 0x140 (320) */
	{ NULL, 		PAL0, "Curly (Hell)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "???",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Deleet",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Bute (Generated)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Bute Generator",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Heavy Press Projectile",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Itoh/Sue (Ending)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "???",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Transmogrifier",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Building Fan",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Rolling",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Ballos Bone Shot",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Ballos Shockwave",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Ballos Lightning",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Sweat",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Ika-chan",
		NULL, NULL, &ai_default_onState, NULL },
	/* 0x150 (336) */
	{ NULL, 		PAL0, "Ika-chan Generator",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Numahachi",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Green Devil",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Green Devil Generator",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Ballos (Boss)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "???",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "???",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "???",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "???",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Ballos Skull Shot",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "???",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Hoppy",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Ballos Spikes",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Statue",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Red Bute (Archer)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Statue (Breakable)",
		NULL, NULL, &ai_default_onState, NULL },
	/* 0x160 (352) */
	{ NULL, 		PAL0, "King (Sword)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Red Bute (Sword)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Kill Zone",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "???",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Balrog (Rescue)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Puppy (Ghost)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Misery (Wind)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Water Drop Generator",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, "Thank You",
		NULL, NULL, &ai_default_onState, NULL },
	/* ^ 0x168 (360) ^ */
	/* MAJOR BOSSES - Don't exist in npc.tbl, but need AI methods */
	/* 0x169 (361) */
	{ NULL, 		PAL3, "Omega",
		NULL, NULL, &ai_default_onState, NULL },
	{ &SPR_Balfrog1, PAL3, "Balfrog",
		NULL, NULL, &ai_balfrog_onState, NULL },
};
