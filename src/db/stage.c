#include "tables.h"
#include "resources.h"

const stage_info_def stage_info[STAGE_COUNT] = {
	{ NULL,			NULL,		NULL,		&PAL_Regu,	0,	0,	"" },
	{ PXM_Pens1,	PXE_Pens1,	TSC_Pens1,	&PAL_Regu,	16,	1,	"Arthur's House" },
	{ PXM_Eggs,		PXE_Eggs,	TSC_Eggs,	&PAL_Regu,	6,	13,	"Egg Corridor" },
	{ PXM_EggX,		PXE_EggX,	TSC_EggX,	&PAL_Regu,	7,	0,	"Egg No. 00" },
	{ PXM_Egg6,		PXE_Egg6,	TSC_Egg6,	&PAL_Regu,	5,	0,	"Egg No. 06" },
	{ PXM_EggR,		PXE_EggR,	TSC_EggR,	&PAL_Regu,	19,	0,	"Egg Observatory" },
	{ PXM_Weed,		PXE_Weed,	TSC_Weed,	&PAL_Regu,	20,	2,	"Grasstown" },
	{ PXM_Santa,	PXE_Santa,	TSC_Santa,	&PAL_Regu,	2,	0,	"Santa's House" },
	{ PXM_Chako,	PXE_Chako,	TSC_Chako,	&PAL_Chaco,	2,	0,	"Chako's House" },
	{ PXM_MazeI,	PXE_MazeI,	TSC_MazeI,	&PAL_XB,	13,	9,	"Labyrinth I" },
	{ PXM_Sand,		PXE_Sand,	TSC_Sand,	&PAL_Regu,	18,	12,	"Sand Zone" },
	{ PXM_Mimi,		PXE_Mimi,	TSC_Mimi,	&PAL_Regu,	14,	2,	"Mimiga Village" },
	{ PXM_Cave,		PXE_Cave,	TSC_Cave,	&PAL_Regu,	3,	0,	"First Cave" },
	{ PXM_Start,	PXE_Start,	TSC_Start,	&PAL_Regu,	3,	0,	"Start Point" },
	{ PXM_Barr,		PXE_Barr,	TSC_Barr,	&PAL_Regu,	14,	0,	"Shack" },
	{ PXM_Pool,		PXE_Pool,	TSC_Pool,	&PAL_Regu,	14,	2,	"Reservoir" },
	/* 0x10 (16) */
	{ PXM_Cemet,	PXE_Cemet,	TSC_Cemet,	&PAL_Regu,	14,	0,	"Graveyard" },
	{ PXM_Plant,	PXE_Plant,	TSC_Plant,	&PAL_Plant,	14,	2,	"Yamashita Farm" },
	{ PXM_Shelt,	PXE_Shelt,	TSC_Shelt,	&PAL_Regu,	19,	0,	"Shelter" },
	{ PXM_Comu,		PXE_Comu,	TSC_Comu,	&PAL_Regu,	16,	0,	"Assembly Hall" },
	{ PXM_MiBox,	PXE_MiBox,	TSC_MiBox,	&PAL_Regu,	14,	0,	"Shack" },
	{ PXM_EgEnd1,	PXE_EgEnd1,	TSC_EgEnd1,	&PAL_Regu,	19,	0,	"Side Room" },
	{ PXM_Cthu,		PXE_Cthu,	TSC_Cthu,	&PAL_Regu,	19,	0,	"Cthulhu's Abode" },
	{ PXM_Egg1,		PXE_Egg1,	TSC_Egg1,	&PAL_Regu,	5,	0,	"Egg No. 01" },
	{ PXM_Pens2,	PXE_Pens2,	TSC_Pens2,	&PAL_Regu,	16,	1,	"Arthur's House" },
	{ PXM_Malco,	PXE_Malco,	TSC_Malco,	&PAL_Regu,	2,	0,	"Power Room" },
	{ PXM_WeedS,	PXE_WeedS,	TSC_WeedS,	&PAL_Regu,	2,	0,	"Save Point" },
	{ PXM_WeedD,	PXE_WeedD,	TSC_WeedD,	&PAL_Regu,	19,	0,	"ExecutionChamber" },
	{ PXM_Frog,		PXE_Frog,	TSC_Frog,	&PAL_Frog,	20,	2,	"Gum" },
	{ PXM_Curly,	PXE_Curly,	TSC_Curly,	&PAL_Regu,	18,	0,	"Sand Zone Bar" },
	{ PXM_WeedB,	PXE_WeedB,	TSC_WeedB,	&PAL_Regu,	16,	0,	"Grasstown Hut" },
	{ PXM_Stream,	PXE_Stream,	TSC_Stream,	&PAL_Regu,	17,	3,	"Main Artery" },
	/* 0x20 (32) */
	{ PXM_CurlyS,	PXE_CurlyS,	TSC_CurlyS,	&PAL_Regu,	16,	0,	"Small Room" },
	{ PXM_Jenka1,	PXE_Jenka1,	TSC_Jenka1,	&PAL_Jenka,	2,	0,	"Jenka's House" },
	{ PXM_Dark,		PXE_Dark,	TSC_Dark,	&PAL_Regu,	18,	0,	"Deserted House" },
	{ PXM_Gard,		PXE_Gard,	TSC_Gard,	&PAL_Regu,	9,	5,	"Storehouse" },
	{ PXM_Jenka2,	PXE_Jenka2,	TSC_Jenka2,	&PAL_Jenka,	2,	0,	"Jenka's House" },
	{ PXM_SandE,	PXE_SandE,	TSC_SandE,	&PAL_Regu,	18,	7,	"Sand Zone" },
	{ PXM_MazeH,	PXE_MazeH,	TSC_MazeH,	&PAL_XB,	13,	9,	"Labyrinth H" },
	{ PXM_MazeW,	PXE_MazeW,	TSC_MazeW,	&PAL_X,		13,	8,	"Labyrinth W" },
	{ PXM_MazeO,	PXE_MazeO,	TSC_MazeO,	&PAL_Regu,	13,	0,	"Camp" },
	{ PXM_MazeD,	PXE_MazeD,	TSC_MazeD,	&PAL_Dark,	13,	0,	"Clinic Ruins" },
	{ PXM_MazeA,	PXE_MazeA,	TSC_MazeA,	&PAL_Maze,	19,	0,	"Labyrinth Shop" },
	{ PXM_MazeB,	PXE_MazeB,	TSC_MazeB,	&PAL_XB,	13,	9,	"Labyrinth B" },
	{ PXM_MazeS,	PXE_MazeS,	TSC_MazeS,	&PAL_Boulder,13,0,	"Boulder Chamber" },
	{ PXM_MazeM,	PXE_MazeM,	TSC_MazeM,	&PAL_MazeM,	24,	10,	"Labyrinth M" },
	{ PXM_Drain,	PXE_Drain,	TSC_Drain,	&PAL_Regu,	3,	0,	"Dark Place" },
	{ PXM_Almond,	PXE_Almond,	TSC_Almond,	&PAL_Regu,	1,	0,	"Core" },
	/* 0x30 (48) */
	{ PXM_River,	PXE_River,	TSC_River,	&PAL_Regu,	17,	6,	"Waterway" },
	{ PXM_Eggs2,	PXE_Eggs2,	TSC_Eggs2,	&PAL_Eggs2,	23,	13,	"Egg Corridor?" },
	{ PXM_Cthu2,	PXE_Cthu2,	TSC_Cthu2,	&PAL_Regu,	19,	0,	"Cthulhu's Abode?" },
	{ PXM_EggR2,	PXE_EggR2,	TSC_EggR2,	&PAL_Sisters,19,0,	"Egg Observatory?" },
	{ PXM_EggX,		PXE_EggX2,	TSC_EggX2,	&PAL_Regu,	22,	0,	"Egg No. 00" },
	{ PXM_Oside,	PXE_Oside,	TSC_Oside,	&PAL_Regu,	15,	9,	"Outer Wall" },
	{ PXM_EgEnd2,	PXE_EgEnd2,	TSC_EgEnd2,	&PAL_Regu,	19,	0,	"Side Room" },
	{ PXM_Itoh,		PXE_Itoh,	TSC_Itoh,	&PAL_Regu,	19,	0,	"Storehouse" },
	{ PXM_Cent,		PXE_Cent,	TSC_Cent,	&PAL_Regu,	4,	6,	"Plantation" },
	{ PXM_Jail1,	PXE_Jail1,	TSC_Jail1,	&PAL_Regu,	11,	0,	"Jail No. 1" },
	{ PXM_Momo,		PXE_Momo,	TSC_Momo,	&PAL_Regu,	11,	0,	"Hideout" },
	{ PXM_Lounge,	PXE_Lounge,	TSC_Lounge,	&PAL_Regu,	11,	0,	"Rest Area" },
	{ PXM_CentW,	PXE_CentW,	TSC_CentW,	&PAL_Regu,	19,	0,	"Teleporter" },
	{ PXM_Jail2,	PXE_Jail2,	TSC_Jail2,	&PAL_Regu,	19,	0,	"Jail No. 2" },
	{ PXM_Blcny1,	PXE_Blcny1,	TSC_Blcny1,	&PAL_Regu,	21,	4,	"Balcony" },
	{ PXM_Priso1,	PXE_Priso1,	TSC_Priso1,	&PAL_Regu,	11,	0,	"Last Cave" },
	/* 0x40 (64) */
	{ PXM_Ring1,	PXE_Ring1,	TSC_Ring1,	&PAL_Regu,	25,	4,	"Throne Room" },
	{ PXM_Ring2,	PXE_Ring2,	TSC_Ring2,	&PAL_Regu,	25,	4,	"The King's Table" },
	{ PXM_Prefa1,	PXE_Prefa1,	TSC_Prefa1,	&PAL_Regu,	16,	0,	"Prefab House" },
	{ PXM_Priso2,	PXE_Priso2,	TSC_Priso2,	&PAL_Regu,	11,	0,	"Last Cave" },
	{ PXM_Ring3,	PXE_Ring3,	TSC_Ring3,	&PAL_Regu,	25,	0,	"Black Space" },
	{ PXM_Little,	PXE_Little,	TSC_Little,	&PAL_Regu,	16,	0,	"Little House" },
	{ PXM_Blcny2,	PXE_Blcny2,	TSC_Blcny2,	&PAL_Regu,	21,	4,	"Balcony" },
	{ PXM_Fall,		PXE_Fall,	TSC_Fall,	&PAL_Regu,	8,	0,	"Ending" },
	{ PXM_Kings,	PXE_Kings,	TSC_Kings,	&PAL_Regu,	25,	0,	"Intro" },
	{ PXM_Pixel,	PXE_Pixel,	TSC_Pixel,	&PAL_Regu,	16,	0,	"Waterway Cabin" },
	{ PXM_e_Maze,	PXE_e_Maze,	TSC_e_Maze,	&PAL_Regu,	13,	0,	"Credits" },
	{ PXM_e_Jenk,	PXE_e_Jenk,	TSC_e_Jenk,	&PAL_Regu,	2,	0,	"Credits" },
	{ PXM_e_Malc,	PXE_e_Malc,	TSC_e_Malc,	&PAL_Regu,	2,	0,	"Credits" },
	{ PXM_e_Ceme,	PXE_e_Ceme,	TSC_e_Ceme,	&PAL_Regu,	14,	0,	"Credits" },
	{ PXM_e_Sky,	PXE_e_Sky,	TSC_e_Sky,	&PAL_Regu,	8,	0,	"Credits" },
	{ PXM_Prefa2,	PXE_Prefa2,	TSC_Prefa2,	&PAL_Regu,	16,	0,	"Prefab House" },
	/* 0x50 (80) */
	{ PXM_Hell1,	PXE_Hell1,	TSC_Hell1,	&PAL_Regu,	10,	0,	"Sacred Ground B1" },
	{ PXM_Hell2,	PXE_Hell2,	TSC_Hell2,	&PAL_Regu,	10,	0,	"Sacred Ground B2" },
	{ PXM_Hell3,	PXE_Hell3,	TSC_Hell3,	&PAL_Regu,	10,	0,	"Sacred Ground B3" },
	{ PXM_Mapi,		PXE_Mapi,	TSC_Mapi,	&PAL_Regu,	3,	0,	"Storage" },
	{ PXM_Hell4,	PXE_Hell4,	TSC_Hell4,	&PAL_Regu,	10,	0,	"Passage?" },
	{ PXM_Hell42,	PXE_Hell42,	TSC_Hell42,	&PAL_Regu,	10,	0,	"Passage?" },
	{ PXM_Statue,	PXE_Statue,	TSC_Statue,	&PAL_Regu,	10,	0,	"Statue Chamber" },
	{ PXM_Ballo1,	PXE_Ballo1,	TSC_Ballo1,	&PAL_Regu,	10,	0,	"Seal Chamber" },
	{ PXM_Ostep,	PXE_Ostep,	TSC_Ostep,	&PAL_Regu,	21,	0,	"Corridor" },
	{ PXM_e_Labo,	PXE_e_Labo,	TSC_e_Labo,	&PAL_Regu,	12,	0,	"Credits" },
	{ PXM_Pole,		PXE_Pole,	TSC_Pole,	&PAL_Gunsmith,3,0,	"Hermit Gunsmith" },
	{ PXM_Island,	PXE_Island,	TSC_Island,	&PAL_Regu,	21,	0,	"" },
	{ PXM_Ballo2,	PXE_Ballo2,	TSC_Ballo2,	&PAL_Regu,	10,	0,	"Seal Chamber" },
	{ PXM_e_Blcn,	PXE_e_Blcn,	TSC_e_Blcn,	&PAL_Regu,	21,	0,	"Credits" },
	{ PXM_Clock,	PXE_Clock,	TSC_Clock,	&PAL_Regu,	15,	0,	"Clock" },
};
