#include "../config.h"
#include "../../include/global.h"
#include "../../include/constants/maps.h"
#include "../../include/wild_encounter.h"
#include "../../include/constants/region_map_sections.h"
#include "../../include/constants/species.h"

/*
wild_encounter_tables.c
	day/night and/or regular map wild encounter species

tables to edit:
	gWildMonMorningHeaders
	gWildMonEveningHeaders
	gWildMonNightHeaders
	gSwarmTable

*/

#ifndef UNBOUND //Modify this section


static const struct WildPokemon s3_19_LandMonsMorning[] =
{
	{4, 4, SPECIES_PIDGEY},
	{4, 4, SPECIES_RATTATA},
	{4, 4, SPECIES_SKWOVET},
	{4, 4, SPECIES_SKWOVET},
	{3, 3, SPECIES_MEOWTH},
	{3, 3, SPECIES_RATTATA},
	{4, 4, SPECIES_PIDGEY},
	{4, 4, SPECIES_RATTATA},
	{5, 5, SPECIES_PIDGEY},
	{5, 5, SPECIES_RATTATA},
	{6, 6, SPECIES_PIDGEY},
	{5, 5, SPECIES_RATTATA},
};

static const struct WildPokemonInfo s3_19_LandMonsMorningInfo = {21, s3_19_LandMonsMorning};

const struct WildPokemonHeader gWildMonMorningHeaders[] =
{
	/*
	{
		.mapGroup = 0x3,
		.mapNum = 0x13,
		.landMonsInfo = &s3_19_LandMonsMorningInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	*/
	{
		.mapGroup = 0xFF,
		.mapNum = 0xFF,
		.landMonsInfo = NULL,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	}
};

const struct WildPokemonHeader gWildMonEveningHeaders[] =
{
	{
		.mapGroup = 0xFF,
		.mapNum = 0xFF,
		.landMonsInfo = NULL,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	}
};

static const struct WildPokemon s3_19_LandMonsNight[] =
{
	{4, 4, SPECIES_PIDGEY},
	{4, 4, SPECIES_RATTATA_A},
	{4, 4, SPECIES_PIDGEY},
	{4, 4, SPECIES_RATTATA_A},
	{3, 3, SPECIES_MEOWTH_A},
	{3, 3, SPECIES_RATTATA_A},
	{4, 4, SPECIES_PIDGEY},
	{4, 4, SPECIES_RATTATA_A},
	{5, 5, SPECIES_PIDGEY},
	{5, 5, SPECIES_RATTATA_A},
	{6, 6, SPECIES_PIDGEY},
	{5, 5, SPECIES_RATTATA_A},
};

static const struct WildPokemonInfo s3_19_LandMonsNightInfo = {21, s3_19_LandMonsNight};

const struct WildPokemonHeader gWildMonNightHeaders[] =
{
	/*
	{
		.mapGroup = 0x3,
		.mapNum = 0x13,
		.landMonsInfo = &s3_19_LandMonsNightInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	*/
	{
		.mapGroup = 0xFF,
		.mapNum = 0xFF,
		.landMonsInfo = NULL,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	}
};

const struct SwarmData gSwarmTable[] =
{
	/*{
		.mapName = 0xFF,
		.species = 0xFFFF,
	},*/
};

// Fire Red vanilla encounter tables
/*
static const struct WildPokemon s2_27_LandMons[] =
{
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
};

static const struct WildPokemonInfo s2_27_LandMonsInfo = {7, s2_27_LandMons};

static const struct WildPokemon s2_28_LandMons[] =
{
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
};

static const struct WildPokemonInfo s2_28_LandMonsInfo = {7, s2_28_LandMons};

static const struct WildPokemon s2_29_LandMons[] =
{
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
};

static const struct WildPokemonInfo s2_29_LandMonsInfo = {7, s2_29_LandMons};

static const struct WildPokemon s2_30_LandMons[] =
{
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
};

static const struct WildPokemonInfo s2_30_LandMonsInfo = {7, s2_30_LandMons};

static const struct WildPokemon s2_31_LandMons[] =
{
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
};

static const struct WildPokemonInfo s2_31_LandMonsInfo = {7, s2_31_LandMons};

static const struct WildPokemon s2_32_LandMons[] =
{
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
};

static const struct WildPokemonInfo s2_32_LandMonsInfo = {7, s2_32_LandMons};

static const struct WildPokemon s2_33_LandMons[] =
{
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
};

static const struct WildPokemonInfo s2_33_LandMonsInfo = {7, s2_33_LandMons};

static const struct WildPokemon s1_0_LandMons[] =
{
	{5, 6, SPECIES_CATERPIE},
	{5, 6, SPECIES_WEEDLE},
	{5, 6, SPECIES_ODDISH},
	{5, 6, SPECIES_BELLSPROUT},
	{7, 7, SPECIES_METAPOD},
	{7, 7, SPECIES_KAKUNA},
	{6, 7, SPECIES_BELLSPROUT},
	{6, 7, SPECIES_ODDISH},
	{5, 5, SPECIES_CATERPIE},
	{5, 5, SPECIES_CATERPIE},
	{7, 7, SPECIES_PIKACHU},
	{9, 9, SPECIES_PIKACHU},
};

static const struct WildPokemonInfo s1_0_LandMonsInfo = {14, s1_0_LandMons};

static const struct WildPokemon s1_1_LandMons[] =
{
	{7, 7, SPECIES_ZUBAT},
	{8, 8, SPECIES_ZUBAT},
	{7, 7, SPECIES_GEODUDE},
	{9, 9, SPECIES_ZUBAT},
	{10, 10, SPECIES_ZUBAT},
	{8, 8, SPECIES_GEODUDE},
	{9, 9, SPECIES_GEODUDE},
	{8, 8, SPECIES_PARAS},
	{7, 7, SPECIES_ZUBAT},
	{7, 7, SPECIES_ZUBAT},
	{7, 7, SPECIES_ZUBAT},
	{8, 8, SPECIES_CLEFAIRY},
};

static const struct WildPokemonInfo s1_1_LandMonsInfo = {7, s1_1_LandMons};

static const struct WildPokemon s1_2_LandMons[] =
{
	{7, 7, SPECIES_PARAS},
	{8, 8, SPECIES_PARAS},
	{5, 5, SPECIES_PARAS},
	{6, 6, SPECIES_PARAS},
	{9, 9, SPECIES_PARAS},
	{10, 10, SPECIES_PARAS},
	{7, 7, SPECIES_PARAS},
	{8, 8, SPECIES_PARAS},
	{5, 5, SPECIES_PARAS},
	{6, 6, SPECIES_PARAS},
	{9, 9, SPECIES_PARAS},
	{10, 10, SPECIES_PARAS},
};

static const struct WildPokemonInfo s1_2_LandMonsInfo = {5, s1_2_LandMons};

static const struct WildPokemon s1_3_LandMons[] =
{
	{8, 8, SPECIES_ZUBAT},
	{9, 9, SPECIES_GEODUDE},
	{9, 9, SPECIES_ZUBAT},
	{10, 10, SPECIES_ZUBAT},
	{10, 10, SPECIES_GEODUDE},
	{10, 10, SPECIES_PARAS},
	{12, 12, SPECIES_PARAS},
	{10, 10, SPECIES_CLEFAIRY},
	{11, 11, SPECIES_ZUBAT},
	{11, 11, SPECIES_ZUBAT},
	{11, 11, SPECIES_ZUBAT},
	{12, 12, SPECIES_CLEFAIRY},
};

static const struct WildPokemonInfo s1_3_LandMonsInfo = {7, s1_3_LandMons};

static const struct WildPokemon s1_37_LandMons[] =
{
	{18, 18, SPECIES_DIGLETT},
	{19, 19, SPECIES_DIGLETT},
	{17, 17, SPECIES_DIGLETT},
	{15, 15, SPECIES_DIGLETT},
	{16, 16, SPECIES_DIGLETT},
	{20, 20, SPECIES_DIGLETT},
	{21, 21, SPECIES_DIGLETT},
	{22, 22, SPECIES_DIGLETT},
	{17, 17, SPECIES_DIGLETT},
	{29, 29, SPECIES_DUGTRIO},
	{17, 17, SPECIES_DIGLETT},
	{31, 31, SPECIES_DUGTRIO},
};

static const struct WildPokemonInfo s1_37_LandMonsInfo = {5, s1_37_LandMons};

static const struct WildPokemon s1_39_LandMons[] =
{
	{32, 32, SPECIES_MACHOP},
	{32, 32, SPECIES_GEODUDE},
	{46, 46, SPECIES_ONIX},
	{43, 43, SPECIES_ONIX},
	{44, 44, SPECIES_SANDSLASH},
	{32, 32, SPECIES_ZUBAT},
	{44, 44, SPECIES_ARBOK},
	{44, 44, SPECIES_GOLBAT},
	{44, 44, SPECIES_MAROWAK},
	{44, 44, SPECIES_MACHOKE},
	{46, 46, SPECIES_MACHOKE},
	{46, 46, SPECIES_MAROWAK},
};

static const struct WildPokemonInfo s1_39_LandMonsInfo = {7, s1_39_LandMons};

static const struct WildPokemon s1_40_LandMons[] =
{
	{34, 34, SPECIES_MACHOP},
	{34, 34, SPECIES_GEODUDE},
	{42, 42, SPECIES_PRIMEAPE},
	{46, 46, SPECIES_SANDSLASH},
	{48, 48, SPECIES_ONIX},
	{34, 34, SPECIES_ZUBAT},
	{46, 46, SPECIES_ARBOK},
	{46, 46, SPECIES_GOLBAT},
	{46, 46, SPECIES_MAROWAK},
	{46, 46, SPECIES_MACHOKE},
	{48, 48, SPECIES_MACHOKE},
	{48, 48, SPECIES_MAROWAK},
};

static const struct WildPokemonInfo s1_40_LandMonsInfo = {7, s1_40_LandMons};

static const struct WildPokemon s1_41_LandMons[] =
{
	{32, 32, SPECIES_MACHOP},
	{32, 32, SPECIES_GEODUDE},
	{46, 46, SPECIES_ONIX},
	{43, 43, SPECIES_ONIX},
	{44, 44, SPECIES_SANDSLASH},
	{32, 32, SPECIES_ZUBAT},
	{44, 44, SPECIES_ARBOK},
	{44, 44, SPECIES_GOLBAT},
	{44, 44, SPECIES_MAROWAK},
	{44, 44, SPECIES_MACHOKE},
	{46, 46, SPECIES_MACHOKE},
	{46, 46, SPECIES_MAROWAK},
};

static const struct WildPokemonInfo s1_41_LandMonsInfo = {7, s1_41_LandMons};

static const struct WildPokemon s1_59_LandMons[] =
{
	{30, 30, SPECIES_KOFFING},
	{32, 32, SPECIES_RATICATE},
	{30, 30, SPECIES_GRIMER},
	{36, 36, SPECIES_RATICATE},
	{30, 30, SPECIES_GROWLITHE},
	{28, 28, SPECIES_RATTATA},
	{28, 28, SPECIES_GRIMER},
	{32, 32, SPECIES_WEEZING},
	{32, 32, SPECIES_VULPIX},
	{32, 32, SPECIES_MUK},
	{32, 32, SPECIES_VULPIX},
	{32, 32, SPECIES_MUK},
};

static const struct WildPokemonInfo s1_59_LandMonsInfo = {7, s1_59_LandMons};

static const struct WildPokemon s1_60_LandMons[] =
{
	{30, 30, SPECIES_KOFFING},
	{32, 32, SPECIES_RATICATE},
	{30, 30, SPECIES_GRIMER},
	{36, 36, SPECIES_RATICATE},
	{30, 30, SPECIES_GROWLITHE},
	{28, 28, SPECIES_RATTATA},
	{28, 28, SPECIES_GRIMER},
	{32, 32, SPECIES_WEEZING},
	{32, 32, SPECIES_VULPIX},
	{32, 32, SPECIES_MUK},
	{32, 32, SPECIES_VULPIX},
	{32, 32, SPECIES_MUK},
};

static const struct WildPokemonInfo s1_60_LandMonsInfo = {7, s1_60_LandMons};

static const struct WildPokemon s1_61_LandMons[] =
{
	{30, 30, SPECIES_KOFFING},
	{32, 32, SPECIES_RATICATE},
	{30, 30, SPECIES_GRIMER},
	{36, 36, SPECIES_RATICATE},
	{30, 30, SPECIES_GROWLITHE},
	{28, 28, SPECIES_RATTATA},
	{28, 28, SPECIES_GRIMER},
	{32, 32, SPECIES_WEEZING},
	{32, 32, SPECIES_VULPIX},
	{32, 32, SPECIES_MUK},
	{32, 32, SPECIES_VULPIX},
	{32, 32, SPECIES_MUK},
};

static const struct WildPokemonInfo s1_61_LandMonsInfo = {7, s1_61_LandMons};

static const struct WildPokemon s1_62_LandMons[] =
{
	{28, 28, SPECIES_KOFFING},
	{34, 34, SPECIES_RATICATE},
	{30, 30, SPECIES_KOFFING},
	{30, 30, SPECIES_DITTO},
	{30, 30, SPECIES_GROWLITHE},
	{38, 38, SPECIES_RATICATE},
	{28, 28, SPECIES_GRIMER},
	{34, 34, SPECIES_WEEZING},
	{32, 32, SPECIES_VULPIX},
	{26, 26, SPECIES_MUK},
	{32, 32, SPECIES_VULPIX},
	{26, 26, SPECIES_MUK},
};

static const struct WildPokemonInfo s1_62_LandMonsInfo = {5, s1_62_LandMons};

static const struct WildPokemon s1_63_LandMons[] =
{
	{25, 25, SPECIES_RHYHORN},
	{22, 22, SPECIES_NIDORAN_M},
	{24, 24, SPECIES_EXEGGCUTE},
	{25, 25, SPECIES_EXEGGCUTE},
	{22, 22, SPECIES_VENONAT},
	{31, 31, SPECIES_NIDORINO},
	{31, 31, SPECIES_NIDORINA},
	{30, 30, SPECIES_PARASECT},
	{22, 22, SPECIES_PINSIR},
	{23, 23, SPECIES_SCYTHER},
	{22, 22, SPECIES_VENONAT},
	{23, 23, SPECIES_CHANSEY},
};

static const struct WildPokemonInfo s1_63_LandMonsInfo = {21, s1_63_LandMons};

static const struct WildPokemon s1_64_LandMons[] =
{
	{24, 24, SPECIES_NIDORAN_F},
	{26, 26, SPECIES_DODUO},
	{23, 23, SPECIES_EXEGGCUTE},
	{25, 25, SPECIES_EXEGGCUTE},
	{22, 22, SPECIES_PARAS},
	{33, 33, SPECIES_NIDORINO},
	{24, 24, SPECIES_NIDORAN_M},
	{25, 25, SPECIES_PARASECT},
	{22, 22, SPECIES_PARAS},
	{25, 25, SPECIES_KANGASKHAN},
	{28, 28, SPECIES_PINSIR},
	{28, 28, SPECIES_SCYTHER},
};

static const struct WildPokemonInfo s1_64_LandMonsInfo = {21, s1_64_LandMons};

static const struct WildPokemon s1_65_LandMons[] =
{
	{26, 26, SPECIES_RHYHORN},
	{30, 30, SPECIES_NIDORAN_M},
	{25, 25, SPECIES_EXEGGCUTE},
	{27, 27, SPECIES_EXEGGCUTE},
	{23, 23, SPECIES_PARAS},
	{30, 30, SPECIES_NIDORINO},
	{30, 30, SPECIES_NIDORINA},
	{32, 32, SPECIES_VENOMOTH},
	{23, 23, SPECIES_PARAS},
	{26, 26, SPECIES_CHANSEY},
	{23, 23, SPECIES_PARAS},
	{28, 28, SPECIES_TAUROS},
};

static const struct WildPokemonInfo s1_65_LandMonsInfo = {21, s1_65_LandMons};

static const struct WildPokemon s1_66_LandMons[] =
{
	{26, 26, SPECIES_DODUO},
	{22, 22, SPECIES_NIDORAN_M},
	{25, 25, SPECIES_EXEGGCUTE},
	{27, 27, SPECIES_EXEGGCUTE},
	{23, 23, SPECIES_VENONAT},
	{30, 30, SPECIES_NIDORINO},
	{30, 30, SPECIES_NIDORAN_F},
	{32, 32, SPECIES_VENOMOTH},
	{23, 23, SPECIES_VENONAT},
	{25, 25, SPECIES_TAUROS},
	{23, 23, SPECIES_VENONAT},
	{28, 28, SPECIES_KANGASKHAN},
};

static const struct WildPokemonInfo s1_66_LandMonsInfo = {21, s1_66_LandMons};

static const struct WildPokemon s1_72_LandMons[] =
{
	{49, 49, SPECIES_MAGNETON},
	{49, 49, SPECIES_PARASECT},
	{46, 46, SPECIES_GOLBAT},
	{46, 46, SPECIES_MACHOKE},
	{52, 52, SPECIES_PRIMEAPE},
	{52, 52, SPECIES_DITTO},
	{58, 58, SPECIES_ELECTRODE},
	{58, 58, SPECIES_PARASECT},
	{55, 55, SPECIES_GOLBAT},
	{55, 55, SPECIES_WOBBUFFET},
	{61, 61, SPECIES_PRIMEAPE},
	{61, 61, SPECIES_DITTO},
};

static const struct WildPokemonInfo s1_72_LandMonsInfo = {7, s1_72_LandMons};

static const struct WildPokemon s1_73_LandMons[] =
{
	{49, 49, SPECIES_GOLBAT},
	{49, 49, SPECIES_MACHOKE},
	{52, 52, SPECIES_MAGNETON},
	{52, 52, SPECIES_PARASECT},
	{55, 55, SPECIES_KADABRA},
	{55, 55, SPECIES_DITTO},
	{58, 58, SPECIES_GOLBAT},
	{58, 58, SPECIES_WOBBUFFET},
	{61, 61, SPECIES_ELECTRODE},
	{61, 61, SPECIES_PARASECT},
	{64, 64, SPECIES_KADABRA},
	{64, 64, SPECIES_DITTO},
};

static const struct WildPokemonInfo s1_73_LandMonsInfo = {7, s1_73_LandMons};

static const struct WildPokemon s1_74_LandMons[] =
{
	{58, 58, SPECIES_KADABRA},
	{58, 58, SPECIES_DITTO},
	{55, 55, SPECIES_MAGNETON},
	{55, 55, SPECIES_PARASECT},
	{52, 52, SPECIES_GOLBAT},
	{52, 52, SPECIES_MACHOKE},
	{67, 67, SPECIES_KADABRA},
	{67, 67, SPECIES_DITTO},
	{64, 64, SPECIES_ELECTRODE},
	{64, 64, SPECIES_PARASECT},
	{61, 61, SPECIES_GOLBAT},
	{61, 61, SPECIES_WOBBUFFET},
};

static const struct WildPokemonInfo s1_74_LandMonsInfo = {7, s1_74_LandMons};

static const struct WildPokemon s1_81_LandMons[] =
{
	{15, 15, SPECIES_ZUBAT},
	{16, 16, SPECIES_GEODUDE},
	{16, 16, SPECIES_MANKEY},
	{17, 17, SPECIES_GEODUDE},
	{16, 16, SPECIES_ZUBAT},
	{16, 16, SPECIES_MACHOP},
	{17, 17, SPECIES_MANKEY},
	{17, 17, SPECIES_MACHOP},
	{15, 15, SPECIES_GEODUDE},
	{13, 13, SPECIES_ONIX},
	{15, 15, SPECIES_GEODUDE},
	{15, 15, SPECIES_ONIX},
};

static const struct WildPokemonInfo s1_81_LandMonsInfo = {7, s1_81_LandMons};

static const struct WildPokemon s1_82_LandMons[] =
{
	{16, 16, SPECIES_ZUBAT},
	{17, 17, SPECIES_GEODUDE},
	{17, 17, SPECIES_MANKEY},
	{16, 16, SPECIES_GEODUDE},
	{15, 15, SPECIES_ZUBAT},
	{17, 17, SPECIES_MACHOP},
	{16, 16, SPECIES_MANKEY},
	{13, 13, SPECIES_ONIX},
	{15, 15, SPECIES_GEODUDE},
	{15, 15, SPECIES_ONIX},
	{15, 15, SPECIES_GEODUDE},
	{17, 17, SPECIES_ONIX},
};

static const struct WildPokemonInfo s1_82_LandMonsInfo = {7, s1_82_LandMons};

static const struct WildPokemon s1_83_LandMons[] =
{
	{27, 29, SPECIES_PSYDUCK},
	{27, 29, SPECIES_SLOWPOKE},
	{31, 31, SPECIES_PSYDUCK},
	{22, 22, SPECIES_ZUBAT},
	{22, 22, SPECIES_ZUBAT},
	{24, 24, SPECIES_ZUBAT},
	{26, 26, SPECIES_GOLBAT},
	{28, 28, SPECIES_GOLBAT},
	{33, 33, SPECIES_SLOWPOKE},
	{26, 26, SPECIES_ZUBAT},
	{26, 26, SPECIES_SLOWPOKE},
	{30, 30, SPECIES_GOLBAT},
};

static const struct WildPokemonInfo s1_83_LandMonsInfo = {7, s1_83_LandMons};

static const struct WildPokemon s1_84_LandMons[] =
{
	{29, 31, SPECIES_PSYDUCK},
	{29, 31, SPECIES_SLOWPOKE},
	{28, 28, SPECIES_SEEL},
	{22, 22, SPECIES_ZUBAT},
	{22, 22, SPECIES_ZUBAT},
	{24, 24, SPECIES_ZUBAT},
	{26, 26, SPECIES_GOLBAT},
	{28, 28, SPECIES_GOLBAT},
	{33, 33, SPECIES_GOLDUCK},
	{26, 26, SPECIES_ZUBAT},
	{35, 35, SPECIES_SLOWBRO},
	{35, 35, SPECIES_SLOWBRO},
};

static const struct WildPokemonInfo s1_84_LandMonsInfo = {7, s1_84_LandMons};

static const struct WildPokemon s1_85_LandMons[] =
{
	{30, 32, SPECIES_PSYDUCK},
	{30, 32, SPECIES_SLOWPOKE},
	{30, 30, SPECIES_SEEL},
	{32, 32, SPECIES_SEEL},
	{22, 22, SPECIES_ZUBAT},
	{24, 24, SPECIES_ZUBAT},
	{26, 26, SPECIES_GOLBAT},
	{34, 34, SPECIES_GOLDUCK},
	{32, 32, SPECIES_SLOWBRO},
	{28, 28, SPECIES_GOLBAT},
	{32, 32, SPECIES_GOLDUCK},
	{30, 30, SPECIES_SLOWBRO},
};

static const struct WildPokemonInfo s1_85_LandMonsInfo = {7, s1_85_LandMons};

static const struct WildPokemon s1_86_LandMons[] =
{
	{30, 30, SPECIES_SEEL},
	{32, 32, SPECIES_SEEL},
	{30, 32, SPECIES_PSYDUCK},
	{30, 32, SPECIES_SLOWPOKE},
	{32, 32, SPECIES_GOLDUCK},
	{24, 24, SPECIES_ZUBAT},
	{26, 26, SPECIES_GOLBAT},
	{34, 34, SPECIES_SLOWBRO},
	{32, 32, SPECIES_DEWGONG},
	{28, 28, SPECIES_GOLBAT},
	{34, 34, SPECIES_DEWGONG},
	{30, 30, SPECIES_GOLBAT},
};

static const struct WildPokemonInfo s1_86_LandMonsInfo = {7, s1_86_LandMons};

static const struct WildPokemon s1_87_LandMons[] =
{
	{30, 30, SPECIES_SEEL},
	{32, 32, SPECIES_SEEL},
	{32, 32, SPECIES_PSYDUCK},
	{34, 34, SPECIES_SLOWPOKE},
	{32, 32, SPECIES_GOLDUCK},
	{32, 32, SPECIES_SLOWBRO},
	{34, 34, SPECIES_DEWGONG},
	{34, 34, SPECIES_GOLDUCK},
	{36, 36, SPECIES_DEWGONG},
	{28, 28, SPECIES_GOLBAT},
	{36, 36, SPECIES_DEWGONG},
	{30, 30, SPECIES_GOLBAT},
};

static const struct WildPokemonInfo s1_87_LandMonsInfo = {7, s1_87_LandMons};

static const struct WildPokemon s1_90_LandMons[] =
{
	{15, 15, SPECIES_GASTLY},
	{16, 16, SPECIES_GASTLY},
	{17, 17, SPECIES_GASTLY},
	{13, 13, SPECIES_GASTLY},
	{14, 14, SPECIES_GASTLY},
	{18, 18, SPECIES_GASTLY},
	{19, 19, SPECIES_GASTLY},
	{15, 15, SPECIES_CUBONE},
	{17, 17, SPECIES_GASTLY},
	{17, 17, SPECIES_CUBONE},
	{17, 17, SPECIES_GASTLY},
	{20, 20, SPECIES_HAUNTER},
};

static const struct WildPokemonInfo s1_90_LandMonsInfo = {2, s1_90_LandMons};

static const struct WildPokemon s1_91_LandMons[] =
{
	{15, 15, SPECIES_GASTLY},
	{16, 16, SPECIES_GASTLY},
	{17, 17, SPECIES_GASTLY},
	{13, 13, SPECIES_GASTLY},
	{14, 14, SPECIES_GASTLY},
	{18, 18, SPECIES_GASTLY},
	{20, 20, SPECIES_HAUNTER},
	{15, 15, SPECIES_CUBONE},
	{17, 17, SPECIES_GASTLY},
	{17, 17, SPECIES_CUBONE},
	{17, 17, SPECIES_GASTLY},
	{19, 19, SPECIES_GASTLY},
};

static const struct WildPokemonInfo s1_91_LandMonsInfo = {4, s1_91_LandMons};

static const struct WildPokemon s1_92_LandMons[] =
{
	{15, 15, SPECIES_GASTLY},
	{16, 16, SPECIES_GASTLY},
	{17, 17, SPECIES_GASTLY},
	{13, 13, SPECIES_GASTLY},
	{14, 14, SPECIES_GASTLY},
	{18, 18, SPECIES_GASTLY},
	{20, 20, SPECIES_HAUNTER},
	{15, 15, SPECIES_CUBONE},
	{17, 17, SPECIES_GASTLY},
	{17, 17, SPECIES_CUBONE},
	{17, 17, SPECIES_GASTLY},
	{19, 19, SPECIES_GASTLY},
};

static const struct WildPokemonInfo s1_92_LandMonsInfo = {6, s1_92_LandMons};

static const struct WildPokemon s1_93_LandMons[] =
{
	{16, 16, SPECIES_GASTLY},
	{17, 17, SPECIES_GASTLY},
	{18, 18, SPECIES_GASTLY},
	{14, 14, SPECIES_GASTLY},
	{15, 15, SPECIES_GASTLY},
	{19, 19, SPECIES_GASTLY},
	{21, 21, SPECIES_HAUNTER},
	{17, 17, SPECIES_CUBONE},
	{18, 18, SPECIES_GASTLY},
	{19, 19, SPECIES_CUBONE},
	{18, 18, SPECIES_GASTLY},
	{23, 23, SPECIES_HAUNTER},
};

static const struct WildPokemonInfo s1_93_LandMonsInfo = {8, s1_93_LandMons};

static const struct WildPokemon s1_94_LandMons[] =
{
	{16, 16, SPECIES_GASTLY},
	{17, 17, SPECIES_GASTLY},
	{18, 18, SPECIES_GASTLY},
	{15, 15, SPECIES_GASTLY},
	{19, 19, SPECIES_GASTLY},
	{23, 23, SPECIES_HAUNTER},
	{17, 17, SPECIES_CUBONE},
	{19, 19, SPECIES_CUBONE},
	{18, 18, SPECIES_GASTLY},
	{23, 23, SPECIES_HAUNTER},
	{18, 18, SPECIES_GASTLY},
	{25, 25, SPECIES_HAUNTER},
};

static const struct WildPokemonInfo s1_94_LandMonsInfo = {10, s1_94_LandMons};

static const struct WildPokemon s1_95_LandMons[] =
{
	{22, 22, SPECIES_VOLTORB},
	{22, 22, SPECIES_MAGNEMITE},
	{25, 25, SPECIES_VOLTORB},
	{25, 25, SPECIES_MAGNEMITE},
	{22, 22, SPECIES_PIKACHU},
	{24, 24, SPECIES_PIKACHU},
	{31, 31, SPECIES_MAGNETON},
	{34, 34, SPECIES_MAGNETON},
	{26, 26, SPECIES_PIKACHU},
	{32, 32, SPECIES_ELECTABUZZ},
	{26, 26, SPECIES_PIKACHU},
	{35, 35, SPECIES_ELECTABUZZ},
};

static const struct WildPokemonInfo s1_95_LandMonsInfo = {7, s1_95_LandMons};

static const struct WildPokemon s1_97_LandMons[] =
{
	{30, 30, SPECIES_PONYTA},
	{38, 38, SPECIES_FEAROW},
	{33, 33, SPECIES_PONYTA},
	{32, 32, SPECIES_SPEAROW},
	{35, 35, SPECIES_MACHOP},
	{33, 33, SPECIES_GEODUDE},
	{36, 36, SPECIES_PONYTA},
	{40, 40, SPECIES_FEAROW},
	{30, 30, SPECIES_MAGMAR},
	{39, 39, SPECIES_RAPIDASH},
	{30, 30, SPECIES_MAGMAR},
	{42, 42, SPECIES_RAPIDASH},
};

static const struct WildPokemonInfo s1_97_LandMonsInfo = {21, s1_97_LandMons};

static const struct WildPokemon s1_98_LandMons[] =
{
	{33, 33, SPECIES_GEODUDE},
	{35, 35, SPECIES_MACHOP},
	{29, 29, SPECIES_GEODUDE},
	{31, 31, SPECIES_GEODUDE},
	{31, 31, SPECIES_MACHOP},
	{33, 33, SPECIES_MACHOP},
	{35, 35, SPECIES_GEODUDE},
	{37, 37, SPECIES_MACHOP},
	{37, 37, SPECIES_GEODUDE},
	{39, 39, SPECIES_MACHOP},
	{37, 37, SPECIES_GEODUDE},
	{39, 39, SPECIES_MACHOP},
};

static const struct WildPokemonInfo s1_98_LandMonsInfo = {7, s1_98_LandMons};

static const struct WildPokemon s1_99_LandMons[] =
{
	{34, 34, SPECIES_GEODUDE},
	{36, 36, SPECIES_MACHOP},
	{30, 30, SPECIES_GEODUDE},
	{32, 32, SPECIES_GEODUDE},
	{32, 32, SPECIES_MACHOP},
	{34, 34, SPECIES_MACHOP},
	{38, 38, SPECIES_MACHOKE},
	{38, 38, SPECIES_MACHOKE},
	{40, 40, SPECIES_MACHOKE},
	{40, 40, SPECIES_MACHOKE},
	{40, 40, SPECIES_MACHOKE},
	{40, 40, SPECIES_MACHOKE},
};

static const struct WildPokemonInfo s1_99_LandMonsInfo = {7, s1_99_LandMons};

static const struct WildPokemon s1_100_LandMons[] =
{
	{33, 33, SPECIES_GEODUDE},
	{35, 35, SPECIES_MACHOP},
	{29, 29, SPECIES_GEODUDE},
	{31, 31, SPECIES_GEODUDE},
	{31, 31, SPECIES_MACHOP},
	{33, 33, SPECIES_MACHOP},
	{35, 35, SPECIES_GEODUDE},
	{37, 37, SPECIES_MACHOP},
	{37, 37, SPECIES_GEODUDE},
	{39, 39, SPECIES_MACHOP},
	{37, 37, SPECIES_GEODUDE},
	{39, 39, SPECIES_MACHOP},
};

static const struct WildPokemonInfo s1_100_LandMonsInfo = {7, s1_100_LandMons};

static const struct WildPokemon s1_103_LandMons[] =
{
	{36, 36, SPECIES_GEODUDE},
	{38, 38, SPECIES_MACHOP},
	{32, 32, SPECIES_GEODUDE},
	{34, 34, SPECIES_GEODUDE},
	{34, 34, SPECIES_MACHOP},
	{36, 36, SPECIES_MACHOP},
	{38, 38, SPECIES_GEODUDE},
	{40, 40, SPECIES_MACHOKE},
	{40, 40, SPECIES_GEODUDE},
	{42, 42, SPECIES_MACHOKE},
	{40, 40, SPECIES_GEODUDE},
	{42, 42, SPECIES_MACHOKE},
};

static const struct WildPokemonInfo s1_103_LandMonsInfo = {7, s1_103_LandMons};

static const struct WildPokemon s1_104_LandMons[] =
{
	{38, 38, SPECIES_GEODUDE},
	{36, 36, SPECIES_GEODUDE},
	{34, 34, SPECIES_GEODUDE},
	{40, 40, SPECIES_GEODUDE},
	{24, 24, SPECIES_SLUGMA},
	{26, 26, SPECIES_SLUGMA},
	{42, 42, SPECIES_GEODUDE},
	{28, 28, SPECIES_SLUGMA},
	{42, 42, SPECIES_GEODUDE},
	{30, 30, SPECIES_SLUGMA},
	{42, 42, SPECIES_GEODUDE},
	{30, 30, SPECIES_SLUGMA},
};

static const struct WildPokemonInfo s1_104_LandMonsInfo = {7, s1_104_LandMons};

static const struct WildPokemon s1_105_LandMons[] =
{
	{40, 40, SPECIES_GEODUDE},
	{26, 26, SPECIES_SLUGMA},
	{42, 42, SPECIES_GEODUDE},
	{24, 24, SPECIES_SLUGMA},
	{28, 28, SPECIES_SLUGMA},
	{30, 30, SPECIES_SLUGMA},
	{44, 44, SPECIES_GEODUDE},
	{32, 32, SPECIES_SLUGMA},
	{44, 44, SPECIES_GEODUDE},
	{22, 22, SPECIES_SLUGMA},
	{44, 44, SPECIES_GEODUDE},
	{22, 22, SPECIES_SLUGMA},
};

static const struct WildPokemonInfo s1_105_LandMonsInfo = {7, s1_105_LandMons};

static const struct WildPokemon s1_106_LandMons[] =
{
	{26, 26, SPECIES_SLUGMA},
	{28, 28, SPECIES_SLUGMA},
	{30, 30, SPECIES_SLUGMA},
	{32, 32, SPECIES_SLUGMA},
	{24, 24, SPECIES_SLUGMA},
	{22, 22, SPECIES_SLUGMA},
	{20, 20, SPECIES_SLUGMA},
	{34, 34, SPECIES_SLUGMA},
	{36, 36, SPECIES_SLUGMA},
	{18, 18, SPECIES_SLUGMA},
	{36, 36, SPECIES_SLUGMA},
	{18, 18, SPECIES_SLUGMA},
};

static const struct WildPokemonInfo s1_106_LandMonsInfo = {7, s1_106_LandMons};

static const struct WildPokemon s1_107_LandMons[] =
{
	{40, 40, SPECIES_GEODUDE},
	{26, 26, SPECIES_SLUGMA},
	{42, 42, SPECIES_GEODUDE},
	{24, 24, SPECIES_SLUGMA},
	{28, 28, SPECIES_SLUGMA},
	{30, 30, SPECIES_SLUGMA},
	{44, 44, SPECIES_GEODUDE},
	{32, 32, SPECIES_SLUGMA},
	{44, 44, SPECIES_GEODUDE},
	{22, 22, SPECIES_SLUGMA},
	{44, 44, SPECIES_GEODUDE},
	{22, 22, SPECIES_SLUGMA},
};

static const struct WildPokemonInfo s1_107_LandMonsInfo = {7, s1_107_LandMons};

static const struct WildPokemon s1_108_LandMons[] =
{
	{38, 38, SPECIES_GEODUDE},
	{36, 36, SPECIES_GEODUDE},
	{34, 34, SPECIES_GEODUDE},
	{40, 40, SPECIES_GEODUDE},
	{24, 24, SPECIES_SLUGMA},
	{26, 26, SPECIES_SLUGMA},
	{42, 42, SPECIES_GEODUDE},
	{28, 28, SPECIES_SLUGMA},
	{42, 42, SPECIES_GEODUDE},
	{30, 30, SPECIES_SLUGMA},
	{42, 42, SPECIES_GEODUDE},
	{30, 30, SPECIES_SLUGMA},
};

static const struct WildPokemonInfo s1_108_LandMonsInfo = {7, s1_108_LandMons};

static const struct WildPokemon s1_109_LandMons[] =
{
	{37, 37, SPECIES_PIDGEOTTO},
	{35, 35, SPECIES_GLOOM},
	{32, 32, SPECIES_PIDGEY},
	{35, 35, SPECIES_WEEPINBELL},
	{34, 34, SPECIES_VENONAT},
	{34, 34, SPECIES_DROWZEE},
	{35, 35, SPECIES_EXEGGCUTE},
	{33, 33, SPECIES_PSYDUCK},
	{33, 33, SPECIES_SLOWPOKE},
	{37, 37, SPECIES_HYPNO},
	{40, 40, SPECIES_VENOMOTH},
	{40, 40, SPECIES_HYPNO},
};

static const struct WildPokemonInfo s1_109_LandMonsInfo = {21, s1_109_LandMons};

static const struct WildPokemon s1_110_LandMons[] =
{
	{43, 43, SPECIES_SEEL},
	{45, 45, SPECIES_GOLBAT},
	{45, 45, SPECIES_SEEL},
	{47, 47, SPECIES_SEEL},
	{40, 40, SPECIES_ZUBAT},
	{49, 49, SPECIES_DEWGONG},
	{41, 41, SPECIES_SLOWPOKE},
	{41, 41, SPECIES_PSYDUCK},
	{48, 48, SPECIES_GOLBAT},
	{53, 53, SPECIES_DEWGONG},
	{48, 48, SPECIES_GOLBAT},
	{53, 53, SPECIES_DEWGONG},
};

static const struct WildPokemonInfo s1_110_LandMonsInfo = {7, s1_110_LandMons};

static const struct WildPokemon s1_111_LandMons[] =
{
	{25, 25, SPECIES_SWINUB},
	{45, 45, SPECIES_GOLBAT},
	{45, 45, SPECIES_SEEL},
	{27, 27, SPECIES_SWINUB},
	{40, 40, SPECIES_ZUBAT},
	{29, 29, SPECIES_SWINUB},
	{30, 30, SPECIES_DELIBIRD},
	{31, 31, SPECIES_SNEASEL},
	{48, 48, SPECIES_GOLBAT},
	{23, 23, SPECIES_SWINUB},
	{48, 48, SPECIES_GOLBAT},
	{23, 23, SPECIES_SWINUB},
};

static const struct WildPokemonInfo s1_111_LandMonsInfo = {7, s1_111_LandMons};

static const struct WildPokemon s1_112_LandMons[] =
{
	{25, 25, SPECIES_SWINUB},
	{45, 45, SPECIES_GOLBAT},
	{45, 45, SPECIES_SEEL},
	{27, 27, SPECIES_SWINUB},
	{40, 40, SPECIES_ZUBAT},
	{29, 29, SPECIES_SWINUB},
	{30, 30, SPECIES_DELIBIRD},
	{31, 31, SPECIES_SNEASEL},
	{48, 48, SPECIES_GOLBAT},
	{23, 23, SPECIES_SWINUB},
	{48, 48, SPECIES_GOLBAT},
	{23, 23, SPECIES_SWINUB},
};

static const struct WildPokemonInfo s1_112_LandMonsInfo = {7, s1_112_LandMons};

static const struct WildPokemon s1_113_LandMons[] =
{
	{43, 43, SPECIES_SEEL},
	{45, 45, SPECIES_GOLBAT},
	{45, 45, SPECIES_SEEL},
	{47, 47, SPECIES_SEEL},
	{40, 40, SPECIES_ZUBAT},
	{49, 49, SPECIES_DEWGONG},
	{41, 41, SPECIES_SLOWPOKE},
	{41, 41, SPECIES_PSYDUCK},
	{48, 48, SPECIES_GOLBAT},
	{53, 53, SPECIES_DEWGONG},
	{48, 48, SPECIES_GOLBAT},
	{53, 53, SPECIES_DEWGONG},
};

static const struct WildPokemonInfo s1_113_LandMonsInfo = {7, s1_113_LandMons};

static const struct WildPokemon s1_121_LandMons[] =
{
	{9, 9, SPECIES_SPINARAK},
	{9, 9, SPECIES_KAKUNA},
	{14, 14, SPECIES_LEDYBA},
	{6, 6, SPECIES_CATERPIE},
	{6, 6, SPECIES_WEEDLE},
	{15, 15, SPECIES_HERACROSS},
	{9, 9, SPECIES_METAPOD},
	{20, 20, SPECIES_HERACROSS},
	{9, 9, SPECIES_LEDYBA},
	{25, 25, SPECIES_HERACROSS},
	{14, 14, SPECIES_LEDYBA},
	{30, 30, SPECIES_HERACROSS},
};

static const struct WildPokemonInfo s1_121_LandMonsInfo = {21, s1_121_LandMons};

static const struct WildPokemon s2_13_LandMons[] =
{
	{40, 40, SPECIES_GASTLY},
	{37, 37, SPECIES_ZUBAT},
	{44, 44, SPECIES_HAUNTER},
	{46, 46, SPECIES_HAUNTER},
	{41, 41, SPECIES_GOLBAT},
	{43, 43, SPECIES_GOLBAT},
	{38, 38, SPECIES_GASTLY},
	{48, 48, SPECIES_HAUNTER},
	{22, 22, SPECIES_MISDREAVUS},
	{22, 22, SPECIES_MURKROW},
	{22, 22, SPECIES_MISDREAVUS},
	{22, 22, SPECIES_MURKROW},
};

static const struct WildPokemonInfo s2_13_LandMonsInfo = {1, s2_13_LandMons};

static const struct WildPokemon s2_14_LandMons[] =
{
	{40, 40, SPECIES_GASTLY},
	{37, 37, SPECIES_ZUBAT},
	{44, 44, SPECIES_HAUNTER},
	{46, 46, SPECIES_HAUNTER},
	{41, 41, SPECIES_GOLBAT},
	{43, 43, SPECIES_GOLBAT},
	{38, 38, SPECIES_GASTLY},
	{48, 48, SPECIES_HAUNTER},
	{22, 22, SPECIES_MISDREAVUS},
	{22, 22, SPECIES_MURKROW},
	{22, 22, SPECIES_MISDREAVUS},
	{22, 22, SPECIES_MURKROW},
};

static const struct WildPokemonInfo s2_14_LandMonsInfo = {2, s2_14_LandMons};

static const struct WildPokemon s2_15_LandMons[] =
{
	{40, 40, SPECIES_GASTLY},
	{37, 37, SPECIES_ZUBAT},
	{44, 44, SPECIES_HAUNTER},
	{46, 46, SPECIES_HAUNTER},
	{41, 41, SPECIES_GOLBAT},
	{43, 43, SPECIES_GOLBAT},
	{38, 38, SPECIES_GASTLY},
	{48, 48, SPECIES_HAUNTER},
	{22, 22, SPECIES_MISDREAVUS},
	{22, 22, SPECIES_MURKROW},
	{22, 22, SPECIES_MISDREAVUS},
	{22, 22, SPECIES_MURKROW},
};

static const struct WildPokemonInfo s2_15_LandMonsInfo = {3, s2_15_LandMons};

static const struct WildPokemon s2_16_LandMons[] =
{
	{40, 40, SPECIES_GASTLY},
	{37, 37, SPECIES_ZUBAT},
	{44, 44, SPECIES_HAUNTER},
	{46, 46, SPECIES_HAUNTER},
	{41, 41, SPECIES_GOLBAT},
	{43, 43, SPECIES_GOLBAT},
	{38, 38, SPECIES_GASTLY},
	{48, 48, SPECIES_HAUNTER},
	{22, 22, SPECIES_MISDREAVUS},
	{22, 22, SPECIES_MURKROW},
	{22, 22, SPECIES_MISDREAVUS},
	{22, 22, SPECIES_MURKROW},
};

static const struct WildPokemonInfo s2_16_LandMonsInfo = {4, s2_16_LandMons};

static const struct WildPokemon s2_17_LandMons[] =
{
	{40, 40, SPECIES_GASTLY},
	{37, 37, SPECIES_ZUBAT},
	{44, 44, SPECIES_HAUNTER},
	{46, 46, SPECIES_HAUNTER},
	{41, 41, SPECIES_GOLBAT},
	{43, 43, SPECIES_GOLBAT},
	{38, 38, SPECIES_GASTLY},
	{48, 48, SPECIES_HAUNTER},
	{22, 22, SPECIES_MISDREAVUS},
	{22, 22, SPECIES_MURKROW},
	{22, 22, SPECIES_MISDREAVUS},
	{22, 22, SPECIES_MURKROW},
};

static const struct WildPokemonInfo s2_17_LandMonsInfo = {5, s2_17_LandMons};

static const struct WildPokemon s2_18_LandMons[] =
{
	{40, 40, SPECIES_GASTLY},
	{37, 37, SPECIES_ZUBAT},
	{44, 44, SPECIES_HAUNTER},
	{46, 46, SPECIES_HAUNTER},
	{41, 41, SPECIES_GOLBAT},
	{43, 43, SPECIES_GOLBAT},
	{38, 38, SPECIES_GASTLY},
	{48, 48, SPECIES_HAUNTER},
	{22, 22, SPECIES_MISDREAVUS},
	{22, 22, SPECIES_MURKROW},
	{22, 22, SPECIES_MISDREAVUS},
	{22, 22, SPECIES_MURKROW},
};

static const struct WildPokemonInfo s2_18_LandMonsInfo = {6, s2_18_LandMons};

static const struct WildPokemon s2_19_LandMons[] =
{
	{40, 40, SPECIES_GASTLY},
	{37, 37, SPECIES_ZUBAT},
	{44, 44, SPECIES_HAUNTER},
	{46, 46, SPECIES_HAUNTER},
	{41, 41, SPECIES_GOLBAT},
	{43, 43, SPECIES_GOLBAT},
	{38, 38, SPECIES_GASTLY},
	{48, 48, SPECIES_HAUNTER},
	{22, 22, SPECIES_MISDREAVUS},
	{22, 22, SPECIES_MURKROW},
	{22, 22, SPECIES_MISDREAVUS},
	{22, 22, SPECIES_MURKROW},
};

static const struct WildPokemonInfo s2_19_LandMonsInfo = {7, s2_19_LandMons};

static const struct WildPokemon s2_20_LandMons[] =
{
	{40, 40, SPECIES_GASTLY},
	{37, 37, SPECIES_ZUBAT},
	{44, 44, SPECIES_HAUNTER},
	{46, 46, SPECIES_HAUNTER},
	{41, 41, SPECIES_GOLBAT},
	{43, 43, SPECIES_GOLBAT},
	{38, 38, SPECIES_GASTLY},
	{48, 48, SPECIES_HAUNTER},
	{22, 22, SPECIES_MISDREAVUS},
	{22, 22, SPECIES_MURKROW},
	{22, 22, SPECIES_MISDREAVUS},
	{22, 22, SPECIES_MURKROW},
};

static const struct WildPokemonInfo s2_20_LandMonsInfo = {8, s2_20_LandMons};

static const struct WildPokemon s2_21_LandMons[] =
{
	{40, 40, SPECIES_GASTLY},
	{37, 37, SPECIES_ZUBAT},
	{44, 44, SPECIES_HAUNTER},
	{46, 46, SPECIES_HAUNTER},
	{41, 41, SPECIES_GOLBAT},
	{43, 43, SPECIES_GOLBAT},
	{38, 38, SPECIES_GASTLY},
	{48, 48, SPECIES_HAUNTER},
	{22, 22, SPECIES_MISDREAVUS},
	{22, 22, SPECIES_MURKROW},
	{22, 22, SPECIES_MISDREAVUS},
	{22, 22, SPECIES_MURKROW},
};

static const struct WildPokemonInfo s2_21_LandMonsInfo = {9, s2_21_LandMons};

static const struct WildPokemon s2_22_LandMons[] =
{
	{40, 40, SPECIES_GASTLY},
	{37, 37, SPECIES_ZUBAT},
	{44, 44, SPECIES_HAUNTER},
	{46, 46, SPECIES_HAUNTER},
	{41, 41, SPECIES_GOLBAT},
	{43, 43, SPECIES_GOLBAT},
	{38, 38, SPECIES_GASTLY},
	{48, 48, SPECIES_HAUNTER},
	{22, 22, SPECIES_MISDREAVUS},
	{22, 22, SPECIES_MURKROW},
	{22, 22, SPECIES_MISDREAVUS},
	{22, 22, SPECIES_MURKROW},
};

static const struct WildPokemonInfo s2_22_LandMonsInfo = {10, s2_22_LandMons};

static const struct WildPokemon s2_23_LandMons[] =
{
	{40, 40, SPECIES_GASTLY},
	{37, 37, SPECIES_ZUBAT},
	{44, 44, SPECIES_HAUNTER},
	{46, 46, SPECIES_HAUNTER},
	{41, 41, SPECIES_GOLBAT},
	{15, 15, SPECIES_MURKROW},
	{20, 20, SPECIES_MURKROW},
	{48, 48, SPECIES_HAUNTER},
	{22, 22, SPECIES_MISDREAVUS},
	{22, 22, SPECIES_MURKROW},
	{22, 22, SPECIES_MISDREAVUS},
	{22, 22, SPECIES_MURKROW},
};

static const struct WildPokemonInfo s2_23_LandMonsInfo = {5, s2_23_LandMons};

static const struct WildPokemon s2_24_LandMons[] =
{
	{40, 40, SPECIES_GASTLY},
	{37, 37, SPECIES_ZUBAT},
	{44, 44, SPECIES_HAUNTER},
	{46, 46, SPECIES_HAUNTER},
	{41, 41, SPECIES_GOLBAT},
	{15, 15, SPECIES_MURKROW},
	{20, 20, SPECIES_MURKROW},
	{48, 48, SPECIES_HAUNTER},
	{22, 22, SPECIES_MISDREAVUS},
	{22, 22, SPECIES_MURKROW},
	{22, 22, SPECIES_MISDREAVUS},
	{22, 22, SPECIES_MURKROW},
};

static const struct WildPokemonInfo s2_24_LandMonsInfo = {5, s2_24_LandMons};

static const struct WildPokemon s2_25_LandMons[] =
{
	{40, 40, SPECIES_GASTLY},
	{37, 37, SPECIES_ZUBAT},
	{44, 44, SPECIES_HAUNTER},
	{46, 46, SPECIES_HAUNTER},
	{41, 41, SPECIES_GOLBAT},
	{15, 15, SPECIES_MURKROW},
	{20, 20, SPECIES_MURKROW},
	{48, 48, SPECIES_HAUNTER},
	{22, 22, SPECIES_MISDREAVUS},
	{22, 22, SPECIES_MURKROW},
	{22, 22, SPECIES_MISDREAVUS},
	{22, 22, SPECIES_MURKROW},
};

static const struct WildPokemonInfo s2_25_LandMonsInfo = {5, s2_25_LandMons};

static const struct WildPokemon s2_26_LandMons[] =
{
	{40, 40, SPECIES_GASTLY},
	{37, 37, SPECIES_ZUBAT},
	{44, 44, SPECIES_HAUNTER},
	{46, 46, SPECIES_HAUNTER},
	{41, 41, SPECIES_GOLBAT},
	{15, 15, SPECIES_MURKROW},
	{20, 20, SPECIES_MURKROW},
	{48, 48, SPECIES_HAUNTER},
	{22, 22, SPECIES_MISDREAVUS},
	{22, 22, SPECIES_MURKROW},
	{22, 22, SPECIES_MISDREAVUS},
	{22, 22, SPECIES_MURKROW},
};

static const struct WildPokemonInfo s2_26_LandMonsInfo = {5, s2_26_LandMons};

static const struct WildPokemon s3_45_LandMons[] =
{
	{32, 32, SPECIES_SPEAROW},
	{34, 34, SPECIES_PONYTA},
	{36, 36, SPECIES_FEAROW},
	{31, 31, SPECIES_PONYTA},
	{31, 31, SPECIES_GEODUDE},
	{31, 31, SPECIES_MEOWTH},
	{30, 30, SPECIES_SPEAROW},
	{34, 34, SPECIES_PSYDUCK},
	{37, 37, SPECIES_RAPIDASH},
	{37, 37, SPECIES_PERSIAN},
	{40, 40, SPECIES_RAPIDASH},
	{40, 40, SPECIES_PERSIAN},
};

static const struct WildPokemonInfo s3_45_LandMonsInfo = {21, s3_45_LandMons};

static const struct WildPokemon s3_46_LandMons[] =
{
	{32, 32, SPECIES_SPEAROW},
	{33, 33, SPECIES_TANGELA},
	{31, 31, SPECIES_SPEAROW},
	{35, 35, SPECIES_TANGELA},
	{36, 36, SPECIES_FEAROW},
	{31, 31, SPECIES_MEOWTH},
	{38, 38, SPECIES_FEAROW},
	{31, 31, SPECIES_SLOWPOKE},
	{40, 40, SPECIES_FEAROW},
	{37, 37, SPECIES_PERSIAN},
	{40, 40, SPECIES_FEAROW},
	{40, 40, SPECIES_PERSIAN},
};

static const struct WildPokemonInfo s3_46_LandMonsInfo = {21, s3_46_LandMons};

static const struct WildPokemon s3_47_LandMons[] =
{
	{31, 31, SPECIES_SPEAROW},
	{30, 32, SPECIES_ODDISH},
	{30, 32, SPECIES_BELLSPROUT},
	{36, 36, SPECIES_GLOOM},
	{36, 36, SPECIES_FEAROW},
	{31, 31, SPECIES_MEOWTH},
	{38, 38, SPECIES_WEEPINBELL},
	{31, 31, SPECIES_PSYDUCK},
	{31, 31, SPECIES_SLOWPOKE},
	{37, 37, SPECIES_PERSIAN},
	{40, 40, SPECIES_GOLDUCK},
	{40, 40, SPECIES_PERSIAN},
};

static const struct WildPokemonInfo s3_47_LandMonsInfo = {21, s3_47_LandMons};

static const struct WildPokemon s3_48_LandMons[] =
{
	{32, 32, SPECIES_PIDGEY},
	{31, 31, SPECIES_ODDISH},
	{29, 29, SPECIES_BELLSPROUT},
	{36, 36, SPECIES_GLOOM},
	{34, 34, SPECIES_PIDGEOTTO},
	{31, 31, SPECIES_MEOWTH},
	{34, 34, SPECIES_VENONAT},
	{31, 31, SPECIES_PSYDUCK},
	{37, 37, SPECIES_PIDGEOTTO},
	{37, 37, SPECIES_PERSIAN},
	{40, 40, SPECIES_PIDGEOTTO},
	{40, 40, SPECIES_PERSIAN},
};

static const struct WildPokemonInfo s3_48_LandMonsInfo = {21, s3_48_LandMons};

static const struct WildPokemon s3_49_LandMons[] =
{
	{15, 15, SPECIES_DUNSPARCE},
	{15, 15, SPECIES_DUNSPARCE},
	{10, 10, SPECIES_DUNSPARCE},
	{10, 10, SPECIES_DUNSPARCE},
	{20, 20, SPECIES_DUNSPARCE},
	{20, 20, SPECIES_DUNSPARCE},
	{25, 25, SPECIES_DUNSPARCE},
	{30, 30, SPECIES_DUNSPARCE},
	{25, 25, SPECIES_DUNSPARCE},
	{30, 30, SPECIES_DUNSPARCE},
	{5, 5, SPECIES_DUNSPARCE},
	{35, 35, SPECIES_DUNSPARCE},
};

static const struct WildPokemonInfo s3_49_LandMonsInfo = {1, s3_49_LandMons};

static const struct WildPokemon s3_56_LandMons[] =
{
	{44, 44, SPECIES_PIDGEY},
	{10, 10, SPECIES_SENTRET},
	{48, 48, SPECIES_PIDGEOTTO},
	{10, 10, SPECIES_HOPPIP},
	{15, 15, SPECIES_SENTRET},
	{41, 41, SPECIES_MEOWTH},
	{15, 15, SPECIES_HOPPIP},
	{41, 41, SPECIES_PSYDUCK},
	{41, 41, SPECIES_SLOWPOKE},
	{47, 47, SPECIES_PERSIAN},
	{50, 50, SPECIES_PIDGEOTTO},
	{50, 50, SPECIES_PERSIAN},
};

static const struct WildPokemonInfo s3_56_LandMonsInfo = {21, s3_56_LandMons};

static const struct WildPokemon s3_57_LandMons[] =
{
	{10, 10, SPECIES_HOPPIP},
	{12, 12, SPECIES_HOPPIP},
	{8, 8, SPECIES_HOPPIP},
	{14, 14, SPECIES_HOPPIP},
	{10, 10, SPECIES_HOPPIP},
	{12, 12, SPECIES_HOPPIP},
	{16, 16, SPECIES_HOPPIP},
	{6, 6, SPECIES_HOPPIP},
	{8, 8, SPECIES_HOPPIP},
	{14, 14, SPECIES_HOPPIP},
	{8, 8, SPECIES_HOPPIP},
	{14, 14, SPECIES_HOPPIP},
};

static const struct WildPokemonInfo s3_57_LandMonsInfo = {21, s3_57_LandMons};

static const struct WildPokemon s3_60_LandMons[] =
{
	{44, 44, SPECIES_SPEAROW},
	{10, 10, SPECIES_SENTRET},
	{44, 44, SPECIES_ODDISH},
	{48, 48, SPECIES_FEAROW},
	{15, 15, SPECIES_SENTRET},
	{41, 41, SPECIES_MEOWTH},
	{48, 48, SPECIES_GLOOM},
	{41, 41, SPECIES_PSYDUCK},
	{50, 50, SPECIES_FEAROW},
	{47, 47, SPECIES_PERSIAN},
	{50, 50, SPECIES_FEAROW},
	{50, 50, SPECIES_PERSIAN},
};

static const struct WildPokemonInfo s3_60_LandMonsInfo = {21, s3_60_LandMons};

static const struct WildPokemon s3_61_LandMons[] =
{
	{15, 15, SPECIES_NATU},
	{44, 44, SPECIES_SPEAROW},
	{18, 18, SPECIES_YANMA},
	{15, 15, SPECIES_WOOPER},
	{15, 15, SPECIES_MARILL},
	{43, 43, SPECIES_MEOWTH},
	{25, 25, SPECIES_WOBBUFFET},
	{41, 41, SPECIES_PSYDUCK},
	{20, 20, SPECIES_NATU},
	{49, 49, SPECIES_PERSIAN},
	{20, 20, SPECIES_NATU},
	{52, 52, SPECIES_PERSIAN},
};

static const struct WildPokemonInfo s3_61_LandMonsInfo = {21, s3_61_LandMons};

static const struct WildPokemon s3_63_LandMons[] =
{
	{44, 44, SPECIES_SPEAROW},
	{10, 10, SPECIES_SENTRET},
	{10, 10, SPECIES_PHANPY},
	{48, 48, SPECIES_FEAROW},
	{15, 15, SPECIES_SENTRET},
	{41, 41, SPECIES_MEOWTH},
	{50, 50, SPECIES_FEAROW},
	{41, 41, SPECIES_SLOWPOKE},
	{15, 15, SPECIES_PHANPY},
	{47, 47, SPECIES_PERSIAN},
	{15, 15, SPECIES_PHANPY},
	{50, 50, SPECIES_PERSIAN},
};

static const struct WildPokemonInfo s3_63_LandMonsInfo = {21, s3_63_LandMons};

static const struct WildPokemon s3_64_LandMons[] =
{
	{46, 46, SPECIES_GEODUDE},
	{15, 15, SPECIES_PHANPY},
	{46, 46, SPECIES_CUBONE},
	{50, 50, SPECIES_FEAROW},
	{52, 52, SPECIES_MAROWAK},
	{43, 43, SPECIES_MEOWTH},
	{54, 54, SPECIES_ONIX},
	{30, 30, SPECIES_SKARMORY},
	{15, 15, SPECIES_LARVITAR},
	{49, 49, SPECIES_PERSIAN},
	{20, 20, SPECIES_LARVITAR},
	{52, 52, SPECIES_PERSIAN},
};

static const struct WildPokemonInfo s3_64_LandMonsInfo = {21, s3_64_LandMons};

static const struct WildPokemon s3_19_LandMons[] =
{
	{4, 4, SPECIES_PIDGEY},
	{4, 4, SPECIES_RATTATA},
	{4, 4, SPECIES_PIDGEY},
	{4, 4, SPECIES_RATTATA},
	{3, 3, SPECIES_PIDGEY},
	{3, 3, SPECIES_RATTATA},
	{4, 4, SPECIES_PIDGEY},
	{4, 4, SPECIES_RATTATA},
	{5, 5, SPECIES_PIDGEY},
	{5, 5, SPECIES_RATTATA},
	{6, 6, SPECIES_PIDGEY},
	{5, 5, SPECIES_RATTATA},
};

static const struct WildPokemonInfo s3_19_LandMonsInfo = {21, s3_19_LandMons};

static const struct WildPokemon s3_20_LandMons[] =
{
	{4, 6, SPECIES_RATTATA},
	{4, 6, SPECIES_ODDISH},
	{4, 6, SPECIES_PIDGEY},
	{4, 6, SPECIES_PIDGEY},
	{4, 5, SPECIES_BELLSPROUT},
	{4, 5, SPECIES_BELLSPROUT},
	{5, 6, SPECIES_CATERPIE},
	{5, 6, SPECIES_WEEDLE},
	{4, 6, SPECIES_RATTATA},
	{4, 6, SPECIES_PIDGEY},
	{4, 6, SPECIES_CATERPIE},
	{4, 6, SPECIES_WEEDLE},
};

static const struct WildPokemonInfo s3_20_LandMonsInfo = {21, s3_20_LandMons};

static const struct WildPokemon s3_21_LandMons[] =
{
	{6, 6, SPECIES_SPEAROW},
	{6, 6, SPECIES_PIDGEY},
	{7, 7, SPECIES_SPEAROW},
	{7, 7, SPECIES_MANKEY},
	{6, 6, SPECIES_NIDORAN_M},
	{7, 7, SPECIES_PIDGEY},
	{8, 8, SPECIES_SPEAROW},
	{3, 3, SPECIES_JIGGLYPUFF},
	{7, 7, SPECIES_NIDORAN_M},
	{5, 5, SPECIES_JIGGLYPUFF},
	{6, 6, SPECIES_NIDORAN_F},
	{7, 7, SPECIES_JIGGLYPUFF},
};

static const struct WildPokemonInfo s3_21_LandMonsInfo = {21, s3_21_LandMons};

static const struct WildPokemon s3_22_LandMons[] =
{
	{10, 10, SPECIES_SPEAROW},
	{10, 10, SPECIES_RATTATA},
	{10, 10, SPECIES_SANDSHREW},
	{10, 10, SPECIES_EKANS},
	{8, 8, SPECIES_SPEAROW},
	{8, 8, SPECIES_RATTATA},
	{12, 12, SPECIES_SPEAROW},
	{12, 12, SPECIES_RATTATA},
	{10, 10, SPECIES_MANKEY},
	{8, 8, SPECIES_EKANS},
	{12, 12, SPECIES_MANKEY},
	{12, 12, SPECIES_SANDSHREW},
};

static const struct WildPokemonInfo s3_22_LandMonsInfo = {21, s3_22_LandMons};

static const struct WildPokemon s3_23_LandMons[] =
{
	{10, 10, SPECIES_MEOWTH},
	{13, 13, SPECIES_PIDGEY},
	{13, 13, SPECIES_ODDISH},
	{12, 12, SPECIES_MEOWTH},
	{15, 15, SPECIES_BELLSPROUT},
	{15, 15, SPECIES_PIDGEY},
	{16, 16, SPECIES_BELLSPROUT},
	{16, 16, SPECIES_PIDGEY},
	{15, 15, SPECIES_PIDGEY},
	{14, 14, SPECIES_MEOWTH},
	{15, 15, SPECIES_PIDGEY},
	{16, 16, SPECIES_MEOWTH},
};

static const struct WildPokemonInfo s3_23_LandMonsInfo = {21, s3_23_LandMons};

static const struct WildPokemon s3_24_LandMons[] =
{
	{10, 10, SPECIES_MEOWTH},
	{13, 13, SPECIES_PIDGEY},
	{13, 13, SPECIES_ODDISH},
	{12, 12, SPECIES_MEOWTH},
	{15, 15, SPECIES_BELLSPROUT},
	{15, 15, SPECIES_PIDGEY},
	{16, 16, SPECIES_BELLSPROUT},
	{16, 16, SPECIES_PIDGEY},
	{15, 15, SPECIES_PIDGEY},
	{14, 14, SPECIES_MEOWTH},
	{15, 15, SPECIES_PIDGEY},
	{16, 16, SPECIES_MEOWTH},
};

static const struct WildPokemonInfo s3_24_LandMonsInfo = {21, s3_24_LandMons};

static const struct WildPokemon s3_25_LandMons[] =
{
	{19, 19, SPECIES_PIDGEY},
	{17, 17, SPECIES_MEOWTH},
	{19, 19, SPECIES_ODDISH},
	{18, 18, SPECIES_MEOWTH},
	{22, 22, SPECIES_PIDGEY},
	{22, 22, SPECIES_BELLSPROUT},
	{18, 20, SPECIES_GROWLITHE},
	{18, 20, SPECIES_VULPIX},
	{17, 17, SPECIES_MEOWTH},
	{19, 19, SPECIES_MEOWTH},
	{17, 17, SPECIES_MEOWTH},
	{20, 20, SPECIES_MEOWTH},
};

static const struct WildPokemonInfo s3_25_LandMonsInfo = {21, s3_25_LandMons};

static const struct WildPokemon s3_26_LandMons[] =
{
	{18, 18, SPECIES_PIDGEY},
	{18, 18, SPECIES_MEOWTH},
	{16, 16, SPECIES_GROWLITHE},
	{20, 20, SPECIES_PIDGEY},
	{20, 20, SPECIES_MEOWTH},
	{17, 17, SPECIES_EKANS},
	{17, 17, SPECIES_VULPIX},
	{19, 19, SPECIES_SANDSHREW},
	{17, 17, SPECIES_SANDSHREW},
	{15, 15, SPECIES_GROWLITHE},
	{17, 17, SPECIES_EKANS},
	{18, 18, SPECIES_GROWLITHE},
};

static const struct WildPokemonInfo s3_26_LandMonsInfo = {21, s3_26_LandMons};

static const struct WildPokemon s3_27_LandMons[] =
{
	{16, 16, SPECIES_SPEAROW},
	{16, 16, SPECIES_RATTATA},
	{11, 11, SPECIES_EKANS},
	{15, 15, SPECIES_SANDSHREW},
	{13, 13, SPECIES_SPEAROW},
	{14, 14, SPECIES_RATTATA},
	{17, 17, SPECIES_SPEAROW},
	{17, 17, SPECIES_RATTATA},
	{14, 14, SPECIES_RATTATA},
	{13, 13, SPECIES_EKANS},
	{14, 14, SPECIES_RATTATA},
	{17, 17, SPECIES_SANDSHREW},
};

static const struct WildPokemonInfo s3_27_LandMonsInfo = {21, s3_27_LandMons};

static const struct WildPokemon s3_28_LandMons[] =
{
	{16, 16, SPECIES_SPEAROW},
	{16, 16, SPECIES_VOLTORB},
	{11, 11, SPECIES_EKANS},
	{15, 15, SPECIES_SANDSHREW},
	{13, 13, SPECIES_SPEAROW},
	{14, 14, SPECIES_VOLTORB},
	{17, 17, SPECIES_SPEAROW},
	{17, 17, SPECIES_VOLTORB},
	{14, 14, SPECIES_VOLTORB},
	{13, 13, SPECIES_EKANS},
	{14, 14, SPECIES_VOLTORB},
	{17, 17, SPECIES_SANDSHREW},
};

static const struct WildPokemonInfo s3_28_LandMonsInfo = {21, s3_28_LandMons};

static const struct WildPokemon s3_29_LandMons[] =
{
	{14, 14, SPECIES_EKANS},
	{15, 15, SPECIES_SPEAROW},
	{12, 12, SPECIES_SANDSHREW},
	{13, 13, SPECIES_SPEAROW},
	{11, 11, SPECIES_DROWZEE},
	{13, 13, SPECIES_DROWZEE},
	{15, 15, SPECIES_EKANS},
	{17, 17, SPECIES_SPEAROW},
	{12, 12, SPECIES_SANDSHREW},
	{15, 15, SPECIES_DROWZEE},
	{12, 12, SPECIES_EKANS},
	{15, 15, SPECIES_DROWZEE},
};

static const struct WildPokemonInfo s3_29_LandMonsInfo = {21, s3_29_LandMons};

static const struct WildPokemon s3_30_LandMons[] =
{
	{24, 24, SPECIES_ODDISH},
	{24, 24, SPECIES_VENONAT},
	{22, 22, SPECIES_BELLSPROUT},
	{23, 23, SPECIES_PIDGEY},
	{25, 25, SPECIES_PIDGEY},
	{26, 26, SPECIES_VENONAT},
	{26, 26, SPECIES_BELLSPROUT},
	{27, 27, SPECIES_PIDGEY},
	{23, 23, SPECIES_PIDGEY},
	{28, 28, SPECIES_GLOOM},
	{23, 23, SPECIES_PIDGEY},
	{30, 30, SPECIES_GLOOM},
};

static const struct WildPokemonInfo s3_30_LandMonsInfo = {21, s3_30_LandMons};

static const struct WildPokemon s3_31_LandMons[] =
{
	{24, 24, SPECIES_ODDISH},
	{24, 24, SPECIES_VENONAT},
	{22, 22, SPECIES_BELLSPROUT},
	{27, 27, SPECIES_PIDGEY},
	{25, 25, SPECIES_PIDGEY},
	{26, 26, SPECIES_VENONAT},
	{26, 26, SPECIES_BELLSPROUT},
	{25, 25, SPECIES_DITTO},
	{29, 29, SPECIES_PIDGEOTTO},
	{28, 28, SPECIES_GLOOM},
	{29, 29, SPECIES_PIDGEOTTO},
	{30, 30, SPECIES_GLOOM},
};

static const struct WildPokemonInfo s3_31_LandMonsInfo = {21, s3_31_LandMons};

static const struct WildPokemon s3_32_LandMons[] =
{
	{24, 24, SPECIES_ODDISH},
	{24, 24, SPECIES_VENONAT},
	{22, 22, SPECIES_BELLSPROUT},
	{23, 23, SPECIES_DITTO},
	{27, 27, SPECIES_PIDGEY},
	{26, 26, SPECIES_VENONAT},
	{26, 26, SPECIES_BELLSPROUT},
	{30, 30, SPECIES_GLOOM},
	{23, 23, SPECIES_DITTO},
	{29, 29, SPECIES_PIDGEOTTO},
	{23, 23, SPECIES_DITTO},
	{29, 29, SPECIES_PIDGEOTTO},
};

static const struct WildPokemonInfo s3_32_LandMonsInfo = {21, s3_32_LandMons};

static const struct WildPokemon s3_33_LandMons[] =
{
	{24, 24, SPECIES_ODDISH},
	{24, 24, SPECIES_VENONAT},
	{22, 22, SPECIES_BELLSPROUT},
	{27, 27, SPECIES_PIDGEY},
	{25, 25, SPECIES_PIDGEY},
	{26, 26, SPECIES_VENONAT},
	{26, 26, SPECIES_BELLSPROUT},
	{25, 25, SPECIES_DITTO},
	{29, 29, SPECIES_PIDGEOTTO},
	{28, 28, SPECIES_GLOOM},
	{29, 29, SPECIES_PIDGEOTTO},
	{30, 30, SPECIES_GLOOM},
};

static const struct WildPokemonInfo s3_33_LandMonsInfo = {21, s3_33_LandMons};

static const struct WildPokemon s3_34_LandMons[] =
{
	{20, 20, SPECIES_SPEAROW},
	{18, 18, SPECIES_DODUO},
	{18, 18, SPECIES_RATTATA},
	{20, 20, SPECIES_RATTATA},
	{22, 22, SPECIES_SPEAROW},
	{20, 20, SPECIES_DODUO},
	{22, 22, SPECIES_RATTATA},
	{22, 22, SPECIES_DODUO},
	{18, 18, SPECIES_RATTATA},
	{23, 23, SPECIES_RATICATE},
	{18, 18, SPECIES_RATTATA},
	{25, 25, SPECIES_RATICATE},
};

static const struct WildPokemonInfo s3_34_LandMonsInfo = {21, s3_34_LandMons};

static const struct WildPokemon s3_35_LandMons[] =
{
	{20, 20, SPECIES_SPEAROW},
	{24, 24, SPECIES_DODUO},
	{22, 22, SPECIES_SPEAROW},
	{26, 26, SPECIES_DODUO},
	{25, 25, SPECIES_RATICATE},
	{27, 27, SPECIES_RATICATE},
	{28, 28, SPECIES_DODUO},
	{29, 29, SPECIES_RATICATE},
	{22, 22, SPECIES_RATTATA},
	{25, 25, SPECIES_FEAROW},
	{22, 22, SPECIES_RATTATA},
	{27, 27, SPECIES_FEAROW},
};

static const struct WildPokemonInfo s3_35_LandMonsInfo = {21, s3_35_LandMons};

static const struct WildPokemon s3_36_LandMons[] =
{
	{20, 20, SPECIES_SPEAROW},
	{24, 24, SPECIES_DODUO},
	{22, 22, SPECIES_SPEAROW},
	{26, 26, SPECIES_DODUO},
	{25, 25, SPECIES_RATICATE},
	{25, 25, SPECIES_FEAROW},
	{28, 28, SPECIES_DODUO},
	{29, 29, SPECIES_RATICATE},
	{22, 22, SPECIES_RATTATA},
	{27, 27, SPECIES_FEAROW},
	{22, 22, SPECIES_RATTATA},
	{29, 29, SPECIES_FEAROW},
};

static const struct WildPokemonInfo s3_36_LandMonsInfo = {21, s3_36_LandMons};

static const struct WildPokemon s3_39_LandMons[] =
{
	{22, 22, SPECIES_TANGELA},
	{23, 23, SPECIES_TANGELA},
	{24, 24, SPECIES_TANGELA},
	{21, 21, SPECIES_TANGELA},
	{25, 25, SPECIES_TANGELA},
	{20, 20, SPECIES_TANGELA},
	{19, 19, SPECIES_TANGELA},
	{26, 26, SPECIES_TANGELA},
	{18, 18, SPECIES_TANGELA},
	{27, 27, SPECIES_TANGELA},
	{17, 17, SPECIES_TANGELA},
	{28, 28, SPECIES_TANGELA},
};

static const struct WildPokemonInfo s3_39_LandMonsInfo = {14, s3_39_LandMons};

static const struct WildPokemon s3_40_LandMons[] =
{
	{22, 22, SPECIES_TANGELA},
	{23, 23, SPECIES_TANGELA},
	{24, 24, SPECIES_TANGELA},
	{21, 21, SPECIES_TANGELA},
	{25, 25, SPECIES_TANGELA},
	{20, 20, SPECIES_TANGELA},
	{19, 19, SPECIES_TANGELA},
	{26, 26, SPECIES_TANGELA},
	{18, 18, SPECIES_TANGELA},
	{27, 27, SPECIES_TANGELA},
	{17, 17, SPECIES_TANGELA},
	{28, 28, SPECIES_TANGELA},
};

static const struct WildPokemonInfo s3_40_LandMonsInfo = {14, s3_40_LandMons};

static const struct WildPokemon s3_41_LandMons[] =
{
    {3, 3, SPECIES_RATTATA},
    {3, 3, SPECIES_MANKEY},
    {4, 4, SPECIES_RATTATA},
    {4, 4, SPECIES_MANKEY},
    {2, 2, SPECIES_RATTATA},
    {2, 2, SPECIES_MANKEY},
    {3, 3, SPECIES_SPEAROW},
    {5, 5, SPECIES_SPEAROW},
    {5, 5, SPECIES_RATTATA},
    {5, 5, SPECIES_MANKEY},
    {5, 5, SPECIES_RATTATA},
    {5, 5, SPECIES_MANKEY},
};

static const struct WildPokemonInfo s3_41_LandMonsInfo = {21, s3_41_LandMons};

static const struct WildPokemon s3_42_LandMons[] =
{
	{32, 32, SPECIES_MANKEY},
	{40, 40, SPECIES_FEAROW},
	{34, 34, SPECIES_MANKEY},
	{34, 34, SPECIES_SPEAROW},
	{32, 32, SPECIES_SANDSHREW},
	{34, 34, SPECIES_EKANS},
	{42, 42, SPECIES_PRIMEAPE},
	{44, 44, SPECIES_ARBOK},
	{32, 32, SPECIES_SPEAROW},
	{42, 42, SPECIES_FEAROW},
	{32, 32, SPECIES_SPEAROW},
	{44, 44, SPECIES_FEAROW},
};

static const struct WildPokemonInfo s3_42_LandMonsInfo = {21, s3_42_LandMons};

static const struct WildPokemon s3_43_LandMons[] =
{
	{7, 7, SPECIES_WEEDLE},
	{7, 7, SPECIES_CATERPIE},
	{11, 11, SPECIES_PIDGEY},
	{12, 12, SPECIES_ODDISH},
	{13, 13, SPECIES_BELLSPROUT},
	{10, 10, SPECIES_ABRA},
	{13, 13, SPECIES_PIDGEY},
	{14, 14, SPECIES_BELLSPROUT},
	{8, 8, SPECIES_KAKUNA},
	{8, 8, SPECIES_ABRA},
	{8, 8, SPECIES_METAPOD},
	{12, 12, SPECIES_ABRA},
};

static const struct WildPokemonInfo s3_43_LandMonsInfo = {21, s3_43_LandMons};

static const struct WildPokemon s3_44_LandMons[] =
{
	{8, 8, SPECIES_WEEDLE},
	{8, 8, SPECIES_CATERPIE},
	{13, 13, SPECIES_PIDGEY},
	{14, 14, SPECIES_ODDISH},
	{13, 13, SPECIES_BELLSPROUT},
	{11, 11, SPECIES_ABRA},
	{11, 11, SPECIES_PIDGEY},
	{12, 12, SPECIES_BELLSPROUT},
	{9, 9, SPECIES_KAKUNA},
	{9, 9, SPECIES_ABRA},
	{9, 9, SPECIES_METAPOD},
	{13, 13, SPECIES_ABRA},
};

static const struct WildPokemonInfo s3_44_LandMonsInfo = {21, s3_44_LandMons};

static const struct WildPokemon s1_122_LandMons[] =
{
	{22, 22, SPECIES_SMEARGLE},
	{24, 24, SPECIES_SMEARGLE},
	{20, 20, SPECIES_SMEARGLE},
	{26, 26, SPECIES_SMEARGLE},
	{22, 22, SPECIES_SMEARGLE},
	{24, 24, SPECIES_SMEARGLE},
	{28, 28, SPECIES_SMEARGLE},
	{18, 18, SPECIES_SMEARGLE},
	{20, 20, SPECIES_SMEARGLE},
	{26, 26, SPECIES_SMEARGLE},
	{20, 20, SPECIES_SMEARGLE},
	{26, 26, SPECIES_SMEARGLE},
};

static const struct WildPokemonInfo s1_122_LandMonsInfo = {5, s1_122_LandMons};

static const struct WildPokemon s1_4_WaterMons[] =
{
	{5, 10, SPECIES_TENTACOOL},
	{10, 20, SPECIES_TENTACOOL},
	{20, 30, SPECIES_TENTACOOL},
	{30, 35, SPECIES_TENTACOOL},
	{35, 40, SPECIES_TENTACOOL},
};

static const struct WildPokemonInfo s1_4_WaterMonsInfo = {1, s1_4_WaterMons};

static const struct WildPokemon s1_63_WaterMons[] =
{
	{20, 25, SPECIES_PSYDUCK},
	{20, 25, SPECIES_SLOWPOKE},
	{25, 30, SPECIES_SLOWPOKE},
	{30, 35, SPECIES_SLOWPOKE},
	{35, 40, SPECIES_SLOWPOKE},
};

static const struct WildPokemonInfo s1_63_WaterMonsInfo = {2, s1_63_WaterMons};

static const struct WildPokemon s1_64_WaterMons[] =
{
	{20, 25, SPECIES_SLOWPOKE},
	{20, 25, SPECIES_PSYDUCK},
	{25, 30, SPECIES_PSYDUCK},
	{30, 35, SPECIES_PSYDUCK},
	{35, 40, SPECIES_PSYDUCK},
};

static const struct WildPokemonInfo s1_64_WaterMonsInfo = {2, s1_64_WaterMons};

static const struct WildPokemon s1_65_WaterMons[] =
{
	{20, 25, SPECIES_PSYDUCK},
	{20, 25, SPECIES_SLOWPOKE},
	{25, 30, SPECIES_SLOWPOKE},
	{30, 35, SPECIES_SLOWPOKE},
	{35, 40, SPECIES_SLOWPOKE},
};

static const struct WildPokemonInfo s1_65_WaterMonsInfo = {2, s1_65_WaterMons};

static const struct WildPokemon s1_66_WaterMons[] =
{
	{20, 25, SPECIES_SLOWPOKE},
	{20, 25, SPECIES_PSYDUCK},
	{25, 30, SPECIES_PSYDUCK},
	{30, 35, SPECIES_PSYDUCK},
	{35, 40, SPECIES_PSYDUCK},
};

static const struct WildPokemonInfo s1_66_WaterMonsInfo = {2, s1_66_WaterMons};

static const struct WildPokemon s1_72_WaterMons[] =
{
	{30, 40, SPECIES_SLOWPOKE},
	{40, 50, SPECIES_GOLDUCK},
	{45, 55, SPECIES_GOLDUCK},
	{40, 50, SPECIES_PSYDUCK},
	{40, 50, SPECIES_PSYDUCK},
};

static const struct WildPokemonInfo s1_72_WaterMonsInfo = {2, s1_72_WaterMons};

static const struct WildPokemon s1_74_WaterMons[] =
{
	{40, 50, SPECIES_PSYDUCK},
	{50, 60, SPECIES_GOLDUCK},
	{55, 65, SPECIES_SLOWBRO},
	{50, 60, SPECIES_SLOWPOKE},
	{50, 60, SPECIES_SLOWPOKE},
};

static const struct WildPokemonInfo s1_74_WaterMonsInfo = {2, s1_74_WaterMons};

static const struct WildPokemon s1_86_WaterMons[] =
{
	{25, 35, SPECIES_SEEL},
	{25, 30, SPECIES_HORSEA},
	{35, 40, SPECIES_DEWGONG},
	{30, 40, SPECIES_PSYDUCK},
	{35, 40, SPECIES_GOLDUCK},
};

static const struct WildPokemonInfo s1_86_WaterMonsInfo = {2, s1_86_WaterMons};

static const struct WildPokemon s1_87_WaterMons[] =
{
	{25, 35, SPECIES_SEEL},
	{25, 30, SPECIES_HORSEA},
	{35, 40, SPECIES_DEWGONG},
	{30, 40, SPECIES_SLOWPOKE},
	{35, 40, SPECIES_SLOWBRO},
};

static const struct WildPokemonInfo s1_87_WaterMonsInfo = {2, s1_87_WaterMons};

static const struct WildPokemon s1_109_WaterMons[] =
{
	{5, 20, SPECIES_PSYDUCK},
	{20, 35, SPECIES_SLOWPOKE},
	{35, 40, SPECIES_SLOWPOKE},
	{35, 40, SPECIES_GOLDUCK},
	{35, 40, SPECIES_SLOWBRO},
};

static const struct WildPokemonInfo s1_109_WaterMonsInfo = {2, s1_109_WaterMons};

static const struct WildPokemon s1_110_WaterMons[] =
{
	{5, 35, SPECIES_SEEL},
	{5, 35, SPECIES_PSYDUCK},
	{35, 40, SPECIES_DEWGONG},
	{5, 15, SPECIES_WOOPER},
	{5, 15, SPECIES_MARILL},
};

static const struct WildPokemonInfo s1_110_WaterMonsInfo = {2, s1_110_WaterMons};

static const struct WildPokemon s1_113_WaterMons[] =
{
	{5, 20, SPECIES_TENTACOOL},
	{20, 35, SPECIES_TENTACOOL},
	{35, 45, SPECIES_TENTACOOL},
	{35, 45, SPECIES_TENTACRUEL},
	{30, 45, SPECIES_LAPRAS},
};

static const struct WildPokemonInfo s1_113_WaterMonsInfo = {2, s1_113_WaterMons};

static const struct WildPokemon s3_45_WaterMons[] =
{
	{5, 20, SPECIES_TENTACOOL},
	{20, 35, SPECIES_TENTACOOL},
	{35, 40, SPECIES_TENTACOOL},
	{35, 40, SPECIES_TENTACRUEL},
	{35, 40, SPECIES_TENTACRUEL},
};

static const struct WildPokemonInfo s3_45_WaterMonsInfo = {2, s3_45_WaterMons};

static const struct WildPokemon s3_46_WaterMons[] =
{
	{5, 20, SPECIES_TENTACOOL},
	{20, 35, SPECIES_TENTACOOL},
	{35, 40, SPECIES_TENTACOOL},
	{35, 40, SPECIES_TENTACRUEL},
	{35, 40, SPECIES_TENTACRUEL},
};

static const struct WildPokemonInfo s3_46_WaterMonsInfo = {2, s3_46_WaterMons};

static const struct WildPokemon s3_47_WaterMons[] =
{
	{5, 20, SPECIES_PSYDUCK},
	{20, 35, SPECIES_PSYDUCK},
	{35, 40, SPECIES_SLOWPOKE},
	{35, 40, SPECIES_GOLDUCK},
	{35, 40, SPECIES_SLOWBRO},
};

static const struct WildPokemonInfo s3_47_WaterMonsInfo = {2, s3_47_WaterMons};

static const struct WildPokemon s3_48_WaterMons[] =
{
	{5, 20, SPECIES_TENTACOOL},
	{20, 35, SPECIES_TENTACOOL},
	{35, 40, SPECIES_TENTACOOL},
	{35, 40, SPECIES_TENTACRUEL},
	{35, 40, SPECIES_TENTACRUEL},
};

static const struct WildPokemonInfo s3_48_WaterMonsInfo = {2, s3_48_WaterMons};

static const struct WildPokemon s3_54_WaterMons[] =
{
	{5, 35, SPECIES_TENTACOOL},
	{5, 15, SPECIES_HOPPIP},
	{35, 40, SPECIES_TENTACOOL},
	{35, 40, SPECIES_TENTACRUEL},
	{35, 40, SPECIES_TENTACRUEL},
};

static const struct WildPokemonInfo s3_54_WaterMonsInfo = {2, s3_54_WaterMons};

static const struct WildPokemon s3_55_WaterMons[] =
{
	{5, 35, SPECIES_TENTACOOL},
	{5, 15, SPECIES_HOPPIP},
	{35, 40, SPECIES_TENTACOOL},
	{35, 40, SPECIES_TENTACRUEL},
	{35, 40, SPECIES_TENTACRUEL},
};

static const struct WildPokemonInfo s3_55_WaterMonsInfo = {2, s3_55_WaterMons};

static const struct WildPokemon s3_56_WaterMons[] =
{
	{5, 35, SPECIES_TENTACOOL},
	{5, 15, SPECIES_HOPPIP},
	{35, 40, SPECIES_TENTACOOL},
	{35, 40, SPECIES_TENTACRUEL},
	{35, 40, SPECIES_TENTACRUEL},
};

static const struct WildPokemonInfo s3_56_WaterMonsInfo = {2, s3_56_WaterMons};

static const struct WildPokemon s3_57_WaterMons[] =
{
	{5, 35, SPECIES_TENTACOOL},
	{5, 15, SPECIES_HOPPIP},
	{35, 40, SPECIES_TENTACOOL},
	{35, 40, SPECIES_TENTACRUEL},
	{35, 40, SPECIES_TENTACRUEL},
};

static const struct WildPokemonInfo s3_57_WaterMonsInfo = {2, s3_57_WaterMons};

static const struct WildPokemon s3_58_WaterMons[] =
{
	{5, 20, SPECIES_TENTACOOL},
	{20, 35, SPECIES_TENTACOOL},
	{35, 40, SPECIES_TENTACOOL},
	{35, 40, SPECIES_TENTACRUEL},
	{35, 40, SPECIES_TENTACRUEL},
};

static const struct WildPokemonInfo s3_58_WaterMonsInfo = {2, s3_58_WaterMons};

static const struct WildPokemon s3_59_WaterMons[] =
{
	{5, 20, SPECIES_TENTACOOL},
	{20, 35, SPECIES_TENTACOOL},
	{35, 40, SPECIES_TENTACOOL},
	{35, 40, SPECIES_TENTACRUEL},
	{35, 40, SPECIES_TENTACRUEL},
};

static const struct WildPokemonInfo s3_59_WaterMonsInfo = {2, s3_59_WaterMons};

static const struct WildPokemon s3_60_WaterMons[] =
{
	{5, 20, SPECIES_TENTACOOL},
	{20, 35, SPECIES_TENTACOOL},
	{35, 40, SPECIES_TENTACOOL},
	{35, 40, SPECIES_TENTACRUEL},
	{35, 40, SPECIES_TENTACRUEL},
};

static const struct WildPokemonInfo s3_60_WaterMonsInfo = {2, s3_60_WaterMons};

static const struct WildPokemon s3_61_WaterMons[] =
{
	{5, 23, SPECIES_WOOPER},
	{10, 20, SPECIES_MARILL},
	{15, 25, SPECIES_MARILL},
	{20, 25, SPECIES_MARILL},
	{20, 25, SPECIES_MARILL},
};

static const struct WildPokemonInfo s3_61_WaterMonsInfo = {2, s3_61_WaterMons};

static const struct WildPokemon s3_62_WaterMons[] =
{
	{5, 20, SPECIES_TENTACOOL},
	{20, 35, SPECIES_TENTACOOL},
	{35, 40, SPECIES_MANTINE},
	{35, 40, SPECIES_TENTACRUEL},
	{35, 40, SPECIES_TENTACRUEL},
};

static const struct WildPokemonInfo s3_62_WaterMonsInfo = {2, s3_62_WaterMons};

static const struct WildPokemon s3_65_WaterMons[] =
{
	{5, 20, SPECIES_TENTACOOL},
	{20, 35, SPECIES_TENTACOOL},
	{35, 40, SPECIES_MANTINE},
	{35, 40, SPECIES_TENTACRUEL},
	{35, 40, SPECIES_TENTACRUEL},
};

static const struct WildPokemonInfo s3_65_WaterMonsInfo = {2, s3_65_WaterMons};

static const struct WildPokemon s3_22_WaterMons[] =
{
	{5, 10, SPECIES_TENTACOOL},
	{10, 20, SPECIES_TENTACOOL},
	{20, 30, SPECIES_TENTACOOL},
	{30, 35, SPECIES_TENTACOOL},
	{35, 40, SPECIES_TENTACOOL},
};

static const struct WildPokemonInfo s3_22_WaterMonsInfo = {2, s3_22_WaterMons};

static const struct WildPokemon s3_24_WaterMons[] =
{
	{20, 25, SPECIES_PSYDUCK},
	{20, 25, SPECIES_PSYDUCK},
	{25, 30, SPECIES_PSYDUCK},
	{30, 35, SPECIES_PSYDUCK},
	{35, 40, SPECIES_PSYDUCK},
};

static const struct WildPokemonInfo s3_24_WaterMonsInfo = {2, s3_24_WaterMons};

static const struct WildPokemon s3_28_WaterMons[] =
{
	{5, 10, SPECIES_TENTACOOL},
	{10, 20, SPECIES_TENTACOOL},
	{20, 30, SPECIES_TENTACOOL},
	{30, 35, SPECIES_SLOWPOKE},
	{35, 40, SPECIES_SLOWPOKE},
};

static const struct WildPokemonInfo s3_28_WaterMonsInfo = {2, s3_28_WaterMons};

static const struct WildPokemon s3_29_WaterMons[] =
{
	{5, 10, SPECIES_TENTACOOL},
	{10, 20, SPECIES_TENTACOOL},
	{20, 30, SPECIES_TENTACOOL},
	{30, 35, SPECIES_TENTACOOL},
	{35, 40, SPECIES_TENTACOOL},
};

static const struct WildPokemonInfo s3_29_WaterMonsInfo = {2, s3_29_WaterMons};

static const struct WildPokemon s3_30_WaterMons[] =
{
	{5, 10, SPECIES_TENTACOOL},
	{10, 20, SPECIES_TENTACOOL},
	{20, 30, SPECIES_TENTACOOL},
	{30, 35, SPECIES_TENTACOOL},
	{35, 40, SPECIES_TENTACOOL},
};

static const struct WildPokemonInfo s3_30_WaterMonsInfo = {2, s3_30_WaterMons};

static const struct WildPokemon s3_31_WaterMons[] =
{
	{5, 10, SPECIES_TENTACOOL},
	{10, 20, SPECIES_TENTACOOL},
	{20, 30, SPECIES_TENTACOOL},
	{30, 35, SPECIES_TENTACOOL},
	{35, 40, SPECIES_TENTACOOL},
};

static const struct WildPokemonInfo s3_31_WaterMonsInfo = {2, s3_31_WaterMons};

static const struct WildPokemon s3_37_WaterMons[] =
{
	{5, 10, SPECIES_TENTACOOL},
	{10, 20, SPECIES_TENTACOOL},
	{20, 30, SPECIES_TENTACOOL},
	{30, 35, SPECIES_TENTACOOL},
	{35, 40, SPECIES_TENTACOOL},
};

static const struct WildPokemonInfo s3_37_WaterMonsInfo = {2, s3_37_WaterMons};

static const struct WildPokemon s3_38_WaterMons[] =
{
	{5, 10, SPECIES_TENTACOOL},
	{10, 20, SPECIES_TENTACOOL},
	{20, 30, SPECIES_TENTACOOL},
	{30, 35, SPECIES_TENTACOOL},
	{35, 40, SPECIES_TENTACOOL},
};

static const struct WildPokemonInfo s3_38_WaterMonsInfo = {2, s3_38_WaterMons};

static const struct WildPokemon s3_39_WaterMons[] =
{
	{5, 10, SPECIES_TENTACOOL},
	{10, 20, SPECIES_TENTACOOL},
	{20, 30, SPECIES_TENTACOOL},
	{30, 35, SPECIES_TENTACOOL},
	{35, 40, SPECIES_TENTACOOL},
};

static const struct WildPokemonInfo s3_39_WaterMonsInfo = {2, s3_39_WaterMons};

static const struct WildPokemon s3_40_WaterMons[] =
{
	{5, 10, SPECIES_TENTACOOL},
	{10, 20, SPECIES_TENTACOOL},
	{20, 30, SPECIES_TENTACOOL},
	{30, 35, SPECIES_TENTACOOL},
	{35, 40, SPECIES_TENTACOOL},
};

static const struct WildPokemonInfo s3_40_WaterMonsInfo = {2, s3_40_WaterMons};

static const struct WildPokemon s3_41_WaterMons[] =
{
	{20, 25, SPECIES_PSYDUCK},
	{20, 25, SPECIES_SLOWPOKE},
	{25, 30, SPECIES_PSYDUCK},
	{30, 35, SPECIES_PSYDUCK},
	{35, 40, SPECIES_PSYDUCK},
};

static const struct WildPokemonInfo s3_41_WaterMonsInfo = {2, s3_41_WaterMons};

static const struct WildPokemon s3_42_WaterMons[] =
{
	{20, 25, SPECIES_PSYDUCK},
	{20, 25, SPECIES_SLOWPOKE},
	{25, 30, SPECIES_PSYDUCK},
	{30, 35, SPECIES_PSYDUCK},
	{35, 40, SPECIES_PSYDUCK},
};

static const struct WildPokemonInfo s3_42_WaterMonsInfo = {2, s3_42_WaterMons};

static const struct WildPokemon s3_43_WaterMons[] =
{
	{5, 10, SPECIES_TENTACOOL},
	{10, 20, SPECIES_TENTACOOL},
	{20, 30, SPECIES_TENTACOOL},
	{30, 35, SPECIES_TENTACOOL},
	{35, 40, SPECIES_TENTACOOL},
};

static const struct WildPokemonInfo s3_43_WaterMonsInfo = {2, s3_43_WaterMons};

static const struct WildPokemon s3_44_WaterMons[] =
{
	{20, 25, SPECIES_PSYDUCK},
	{20, 25, SPECIES_SLOWPOKE},
	{25, 30, SPECIES_PSYDUCK},
	{30, 35, SPECIES_PSYDUCK},
	{35, 40, SPECIES_PSYDUCK},
};

static const struct WildPokemonInfo s3_44_WaterMonsInfo = {2, s3_44_WaterMons};

static const struct WildPokemon s3_0_WaterMons[] =
{
	{5, 10, SPECIES_TENTACOOL},
	{10, 20, SPECIES_TENTACOOL},
	{20, 30, SPECIES_TENTACOOL},
	{30, 35, SPECIES_TENTACOOL},
	{35, 40, SPECIES_TENTACOOL},
};

static const struct WildPokemonInfo s3_0_WaterMonsInfo = {1, s3_0_WaterMons};

static const struct WildPokemon s3_1_WaterMons[] =
{
	{20, 25, SPECIES_PSYDUCK},
	{20, 25, SPECIES_SLOWPOKE},
	{25, 30, SPECIES_PSYDUCK},
	{30, 35, SPECIES_PSYDUCK},
	{35, 40, SPECIES_PSYDUCK},
};

static const struct WildPokemonInfo s3_1_WaterMonsInfo = {1, s3_1_WaterMons};

static const struct WildPokemon s3_3_WaterMons[] =
{
	{5, 10, SPECIES_TENTACOOL},
	{10, 20, SPECIES_TENTACOOL},
	{20, 30, SPECIES_TENTACOOL},
	{30, 35, SPECIES_TENTACOOL},
	{35, 40, SPECIES_TENTACOOL},
};

static const struct WildPokemonInfo s3_3_WaterMonsInfo = {1, s3_3_WaterMons};

static const struct WildPokemon s3_5_WaterMons[] =
{
	{5, 10, SPECIES_TENTACOOL},
	{10, 20, SPECIES_TENTACOOL},
	{20, 30, SPECIES_TENTACOOL},
	{30, 35, SPECIES_TENTACOOL},
	{35, 40, SPECIES_TENTACOOL},
};

static const struct WildPokemonInfo s3_5_WaterMonsInfo = {1, s3_5_WaterMons};

static const struct WildPokemon s3_6_WaterMons[] =
{
	{5, 10, SPECIES_PSYDUCK},
	{10, 20, SPECIES_SLOWPOKE},
	{20, 30, SPECIES_PSYDUCK},
	{30, 40, SPECIES_PSYDUCK},
	{30, 40, SPECIES_KOFFING},
};

static const struct WildPokemonInfo s3_6_WaterMonsInfo = {1, s3_6_WaterMons};

static const struct WildPokemon s3_7_WaterMons[] =
{
	{20, 25, SPECIES_PSYDUCK},
	{20, 25, SPECIES_SLOWPOKE},
	{25, 30, SPECIES_PSYDUCK},
	{30, 35, SPECIES_PSYDUCK},
	{35, 40, SPECIES_PSYDUCK},
};

static const struct WildPokemonInfo s3_7_WaterMonsInfo = {1, s3_7_WaterMons};

static const struct WildPokemon s3_8_WaterMons[] =
{
	{5, 10, SPECIES_TENTACOOL},
	{10, 20, SPECIES_TENTACOOL},
	{20, 30, SPECIES_TENTACOOL},
	{30, 35, SPECIES_TENTACOOL},
	{35, 40, SPECIES_TENTACOOL},
};

static const struct WildPokemonInfo s3_8_WaterMonsInfo = {1, s3_8_WaterMons};

static const struct WildPokemon s3_12_WaterMons[] =
{
	{5, 20, SPECIES_TENTACOOL},
	{20, 35, SPECIES_TENTACOOL},
	{35, 40, SPECIES_TENTACOOL},
	{35, 40, SPECIES_TENTACRUEL},
	{35, 40, SPECIES_TENTACRUEL},
};

static const struct WildPokemonInfo s3_12_WaterMonsInfo = {1, s3_12_WaterMons};

static const struct WildPokemon s3_15_WaterMons[] =
{
	{5, 15, SPECIES_WOOPER},
	{5, 35, SPECIES_PSYDUCK},
	{15, 25, SPECIES_MARILL},
	{15, 25, SPECIES_WOOPER},
	{15, 25, SPECIES_WOOPER},
};

static const struct WildPokemonInfo s3_15_WaterMonsInfo = {2, s3_15_WaterMons};

static const struct WildPokemon s3_16_WaterMons[] =
{
	{5, 35, SPECIES_TENTACOOL},
	{5, 15, SPECIES_HOPPIP},
	{35, 40, SPECIES_TENTACOOL},
	{35, 40, SPECIES_TENTACRUEL},
	{35, 40, SPECIES_TENTACRUEL},
};

static const struct WildPokemonInfo s3_16_WaterMonsInfo = {1, s3_16_WaterMons};

static const struct WildPokemon s1_72_RockSmashMons[] =
{
	{30, 40, SPECIES_GEODUDE},
	{40, 50, SPECIES_GRAVELER},
	{45, 55, SPECIES_GRAVELER},
	{40, 50, SPECIES_GEODUDE},
	{40, 50, SPECIES_GEODUDE},
};

static const struct WildPokemonInfo s1_72_RockSmashMonsInfo = {50, s1_72_RockSmashMons};

static const struct WildPokemon s1_73_RockSmashMons[] =
{
	{35, 45, SPECIES_GEODUDE},
	{45, 55, SPECIES_GRAVELER},
	{50, 60, SPECIES_GRAVELER},
	{45, 55, SPECIES_GEODUDE},
	{45, 55, SPECIES_GEODUDE},
};

static const struct WildPokemonInfo s1_73_RockSmashMonsInfo = {50, s1_73_RockSmashMons};

static const struct WildPokemon s1_74_RockSmashMons[] =
{
	{40, 50, SPECIES_GEODUDE},
	{50, 60, SPECIES_GRAVELER},
	{55, 65, SPECIES_GRAVELER},
	{50, 60, SPECIES_GEODUDE},
	{50, 60, SPECIES_GEODUDE},
};

static const struct WildPokemonInfo s1_74_RockSmashMonsInfo = {50, s1_74_RockSmashMons};

static const struct WildPokemon s1_82_RockSmashMons[] =
{
	{5, 20, SPECIES_GEODUDE},
	{10, 20, SPECIES_GEODUDE},
	{15, 30, SPECIES_GEODUDE},
	{25, 40, SPECIES_GRAVELER},
	{30, 40, SPECIES_GRAVELER},
};

static const struct WildPokemonInfo s1_82_RockSmashMonsInfo = {50, s1_82_RockSmashMons};

static const struct WildPokemon s1_97_RockSmashMons[] =
{
	{5, 20, SPECIES_GEODUDE},
	{10, 20, SPECIES_GEODUDE},
	{15, 30, SPECIES_GEODUDE},
	{25, 40, SPECIES_GRAVELER},
	{30, 40, SPECIES_GRAVELER},
};

static const struct WildPokemonInfo s1_97_RockSmashMonsInfo = {50, s1_97_RockSmashMons};

static const struct WildPokemon s1_99_RockSmashMons[] =
{
	{5, 20, SPECIES_GEODUDE},
	{10, 20, SPECIES_GEODUDE},
	{15, 30, SPECIES_GEODUDE},
	{25, 40, SPECIES_GRAVELER},
	{30, 40, SPECIES_GRAVELER},
};

static const struct WildPokemonInfo s1_99_RockSmashMonsInfo = {50, s1_99_RockSmashMons};

static const struct WildPokemon s1_103_RockSmashMons[] =
{
	{25, 35, SPECIES_GEODUDE},
	{30, 45, SPECIES_GRAVELER},
	{35, 50, SPECIES_GRAVELER},
	{30, 40, SPECIES_GEODUDE},
	{30, 40, SPECIES_GEODUDE},
};

static const struct WildPokemonInfo s1_103_RockSmashMonsInfo = {50, s1_103_RockSmashMons};

static const struct WildPokemon s1_104_RockSmashMons[] =
{
	{25, 35, SPECIES_GEODUDE},
	{30, 45, SPECIES_GRAVELER},
	{35, 50, SPECIES_GRAVELER},
	{30, 40, SPECIES_GEODUDE},
	{30, 40, SPECIES_GEODUDE},
};

static const struct WildPokemonInfo s1_104_RockSmashMonsInfo = {50, s1_104_RockSmashMons};

static const struct WildPokemon s1_105_RockSmashMons[] =
{
	{25, 35, SPECIES_GEODUDE},
	{30, 45, SPECIES_GRAVELER},
	{35, 50, SPECIES_GRAVELER},
	{30, 40, SPECIES_GEODUDE},
	{30, 40, SPECIES_GEODUDE},
};

static const struct WildPokemonInfo s1_105_RockSmashMonsInfo = {50, s1_105_RockSmashMons};

static const struct WildPokemon s1_106_RockSmashMons[] =
{
	{15, 25, SPECIES_SLUGMA},
	{25, 35, SPECIES_SLUGMA},
	{40, 45, SPECIES_MAGCARGO},
	{35, 45, SPECIES_MAGCARGO},
	{25, 35, SPECIES_MAGCARGO},
};

static const struct WildPokemonInfo s1_106_RockSmashMonsInfo = {50, s1_106_RockSmashMons};

static const struct WildPokemon s1_107_RockSmashMons[] =
{
	{25, 35, SPECIES_GEODUDE},
	{30, 45, SPECIES_GRAVELER},
	{35, 50, SPECIES_GRAVELER},
	{30, 40, SPECIES_GEODUDE},
	{30, 40, SPECIES_GEODUDE},
};

static const struct WildPokemonInfo s1_107_RockSmashMonsInfo = {50, s1_107_RockSmashMons};

static const struct WildPokemon s1_108_RockSmashMons[] =
{
	{25, 35, SPECIES_GEODUDE},
	{30, 45, SPECIES_GRAVELER},
	{35, 50, SPECIES_GRAVELER},
	{30, 40, SPECIES_GEODUDE},
	{30, 40, SPECIES_GEODUDE},
};

static const struct WildPokemonInfo s1_108_RockSmashMonsInfo = {50, s1_108_RockSmashMons};

static const struct WildPokemon s3_45_RockSmashMons[] =
{
	{5, 20, SPECIES_GEODUDE},
	{10, 20, SPECIES_GEODUDE},
	{15, 30, SPECIES_GEODUDE},
	{25, 40, SPECIES_GRAVELER},
	{30, 40, SPECIES_GRAVELER},
};

static const struct WildPokemonInfo s3_45_RockSmashMonsInfo = {25, s3_45_RockSmashMons};

static const struct WildPokemon s3_64_RockSmashMons[] =
{
	{25, 35, SPECIES_GEODUDE},
	{30, 45, SPECIES_GRAVELER},
	{35, 50, SPECIES_GRAVELER},
	{30, 40, SPECIES_GEODUDE},
	{30, 40, SPECIES_GEODUDE},
};

static const struct WildPokemonInfo s3_64_RockSmashMonsInfo = {25, s3_64_RockSmashMons};

static const struct WildPokemon s1_4_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_MAGIKARP},
	{5, 15, SPECIES_HORSEA},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_KRABBY},
	{15, 25, SPECIES_STARYU},
	{15, 25, SPECIES_SHELLDER},
	{15, 25, SPECIES_GYARADOS},
	{25, 35, SPECIES_STARYU},
	{25, 35, SPECIES_PSYDUCK},
};

static const struct WildPokemonInfo s1_4_FishingMonsInfo = {10, s1_4_FishingMons};

static const struct WildPokemon s1_63_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_MAGIKARP},
	{5, 15, SPECIES_GOLDEEN},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_POLIWAG},
	{15, 25, SPECIES_GOLDEEN},
	{20, 30, SPECIES_SEAKING},
	{15, 25, SPECIES_DRATINI},
	{15, 35, SPECIES_PSYDUCK},
	{25, 35, SPECIES_DRAGONAIR},
};

static const struct WildPokemonInfo s1_63_FishingMonsInfo = {20, s1_63_FishingMons};

static const struct WildPokemon s1_64_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_MAGIKARP},
	{5, 15, SPECIES_GOLDEEN},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_POLIWAG},
	{15, 25, SPECIES_GOLDEEN},
	{20, 30, SPECIES_SEAKING},
	{15, 25, SPECIES_DRATINI},
	{15, 35, SPECIES_SLOWPOKE},
	{25, 35, SPECIES_DRAGONAIR},
};

static const struct WildPokemonInfo s1_64_FishingMonsInfo = {20, s1_64_FishingMons};

static const struct WildPokemon s1_65_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_MAGIKARP},
	{5, 15, SPECIES_GOLDEEN},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_POLIWAG},
	{15, 25, SPECIES_GOLDEEN},
	{20, 30, SPECIES_SEAKING},
	{15, 25, SPECIES_DRATINI},
	{15, 35, SPECIES_SLOWPOKE},
	{25, 35, SPECIES_DRAGONAIR},
};

static const struct WildPokemonInfo s1_65_FishingMonsInfo = {20, s1_65_FishingMons};

static const struct WildPokemon s1_66_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_MAGIKARP},
	{5, 15, SPECIES_GOLDEEN},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_POLIWAG},
	{15, 25, SPECIES_GOLDEEN},
	{20, 30, SPECIES_SEAKING},
	{15, 25, SPECIES_DRATINI},
	{15, 35, SPECIES_PSYDUCK},
	{25, 35, SPECIES_DRAGONAIR},
};

static const struct WildPokemonInfo s1_66_FishingMonsInfo = {20, s1_66_FishingMons};

static const struct WildPokemon s1_72_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_MAGIKARP},
	{5, 15, SPECIES_POLIWAG},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_GOLDEEN},
	{15, 25, SPECIES_POLIWAG},
	{20, 30, SPECIES_POLIWHIRL},
	{15, 25, SPECIES_GYARADOS},
	{15, 25, SPECIES_SLOWPOKE},
	{25, 35, SPECIES_PSYDUCK},
};

static const struct WildPokemonInfo s1_72_FishingMonsInfo = {20, s1_72_FishingMons};

static const struct WildPokemon s1_74_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_MAGIKARP},
	{5, 15, SPECIES_POLIWAG},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_GOLDEEN},
	{15, 25, SPECIES_POLIWAG},
	{20, 30, SPECIES_POLIWHIRL},
	{15, 25, SPECIES_GYARADOS},
	{15, 25, SPECIES_SLOWPOKE},
	{25, 35, SPECIES_GYARADOS},
};

static const struct WildPokemonInfo s1_74_FishingMonsInfo = {20, s1_74_FishingMons};

static const struct WildPokemon s1_86_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_MAGIKARP},
	{5, 26, SPECIES_HORSEA},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_KRABBY},
	{15, 25, SPECIES_STARYU},
	{20, 30, SPECIES_STARYU},
	{15, 25, SPECIES_GYARADOS},
	{15, 25, SPECIES_SLOWPOKE},
	{25, 35, SPECIES_GYARADOS},
};

static const struct WildPokemonInfo s1_86_FishingMonsInfo = {20, s1_86_FishingMons};

static const struct WildPokemon s1_87_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_MAGIKARP},
	{5, 26, SPECIES_HORSEA},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_KRABBY},
	{15, 25, SPECIES_STARYU},
	{20, 30, SPECIES_STARYU},
	{15, 25, SPECIES_GYARADOS},
	{15, 25, SPECIES_PSYDUCK},
	{25, 35, SPECIES_GYARADOS},
};

static const struct WildPokemonInfo s1_87_FishingMonsInfo = {20, s1_87_FishingMons};

static const struct WildPokemon s1_109_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_MAGIKARP},
	{5, 15, SPECIES_GOLDEEN},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_POLIWAG},
	{15, 25, SPECIES_GOLDEEN},
	{20, 30, SPECIES_SEAKING},
	{15, 25, SPECIES_GYARADOS},
	{15, 25, SPECIES_SLOWPOKE},
	{25, 35, SPECIES_PSYDUCK},
};

static const struct WildPokemonInfo s1_109_FishingMonsInfo = {20, s1_109_FishingMons};

static const struct WildPokemon s1_110_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_MAGIKARP},
	{5, 15, SPECIES_POLIWAG},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_GOLDEEN},
	{15, 25, SPECIES_POLIWAG},
	{20, 30, SPECIES_POLIWHIRL},
	{15, 25, SPECIES_GYARADOS},
	{15, 25, SPECIES_SLOWPOKE},
	{25, 35, SPECIES_PSYDUCK},
};

static const struct WildPokemonInfo s1_110_FishingMonsInfo = {20, s1_110_FishingMons};

static const struct WildPokemon s1_113_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_MAGIKARP},
	{5, 26, SPECIES_HORSEA},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_STARYU},
	{15, 25, SPECIES_STARYU},
	{15, 25, SPECIES_SHELLDER},
	{15, 25, SPECIES_GYARADOS},
	{25, 35, SPECIES_SEADRA},
	{25, 35, SPECIES_PSYDUCK},
};

static const struct WildPokemonInfo s1_113_FishingMonsInfo = {20, s1_113_FishingMons};

static const struct WildPokemon s3_45_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_MAGIKARP},
	{5, 26, SPECIES_HORSEA},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_HORSEA},
	{15, 25, SPECIES_KRABBY},
	{15, 25, SPECIES_KRABBY},
	{15, 25, SPECIES_GYARADOS},
	{25, 35, SPECIES_SEADRA},
	{25, 35, SPECIES_PSYDUCK},
};

static const struct WildPokemonInfo s3_45_FishingMonsInfo = {20, s3_45_FishingMons};

static const struct WildPokemon s3_46_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_MAGIKARP},
	{5, 15, SPECIES_HORSEA},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_KRABBY},
	{15, 25, SPECIES_KRABBY},
	{15, 25, SPECIES_HORSEA},
	{15, 25, SPECIES_GYARADOS},
	{25, 35, SPECIES_SEADRA},
	{25, 35, SPECIES_PSYDUCK},
};

static const struct WildPokemonInfo s3_46_FishingMonsInfo = {20, s3_46_FishingMons};

static const struct WildPokemon s3_47_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_MAGIKARP},
	{5, 15, SPECIES_POLIWAG},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_GOLDEEN},
	{15, 25, SPECIES_POLIWAG},
	{20, 30, SPECIES_POLIWHIRL},
	{15, 25, SPECIES_GYARADOS},
	{15, 25, SPECIES_PSYDUCK},
	{25, 35, SPECIES_PSYDUCK},
};

static const struct WildPokemonInfo s3_47_FishingMonsInfo = {20, s3_47_FishingMons};

static const struct WildPokemon s3_48_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_MAGIKARP},
	{5, 15, SPECIES_HORSEA},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_HORSEA},
	{15, 25, SPECIES_KRABBY},
	{15, 25, SPECIES_KRABBY},
	{15, 25, SPECIES_GYARADOS},
	{25, 35, SPECIES_SEADRA},
	{25, 35, SPECIES_PSYDUCK},
};

static const struct WildPokemonInfo s3_48_FishingMonsInfo = {20, s3_48_FishingMons};

static const struct WildPokemon s3_54_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_MAGIKARP},
	{5, 15, SPECIES_HORSEA},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_KRABBY},
	{15, 25, SPECIES_KRABBY},
	{15, 25, SPECIES_QWILFISH},
	{15, 25, SPECIES_REMORAID},
	{25, 35, SPECIES_SEADRA},
	{25, 35, SPECIES_PSYDUCK},
};

static const struct WildPokemonInfo s3_54_FishingMonsInfo = {20, s3_54_FishingMons};

static const struct WildPokemon s3_55_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_MAGIKARP},
	{5, 15, SPECIES_HORSEA},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_HORSEA},
	{15, 25, SPECIES_HORSEA},
	{15, 25, SPECIES_QWILFISH},
	{15, 25, SPECIES_REMORAID},
	{25, 35, SPECIES_SEADRA},
	{25, 35, SPECIES_PSYDUCK},
};

static const struct WildPokemonInfo s3_55_FishingMonsInfo = {20, s3_55_FishingMons};

static const struct WildPokemon s3_56_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_MAGIKARP},
	{5, 15, SPECIES_HORSEA},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_HORSEA},
	{15, 25, SPECIES_HORSEA},
	{15, 25, SPECIES_QWILFISH},
	{15, 25, SPECIES_REMORAID},
	{25, 35, SPECIES_SEADRA},
	{25, 35, SPECIES_PSYDUCK},
};

static const struct WildPokemonInfo s3_56_FishingMonsInfo = {20, s3_56_FishingMons};

static const struct WildPokemon s3_57_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_MAGIKARP},
	{5, 15, SPECIES_HORSEA},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_HORSEA},
	{15, 25, SPECIES_HORSEA},
	{15, 25, SPECIES_QWILFISH},
	{15, 25, SPECIES_REMORAID},
	{25, 35, SPECIES_SEADRA},
	{25, 35, SPECIES_PSYDUCK},
};

static const struct WildPokemonInfo s3_57_FishingMonsInfo = {20, s3_57_FishingMons};

static const struct WildPokemon s3_58_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_MAGIKARP},
	{5, 15, SPECIES_HORSEA},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_HORSEA},
	{15, 25, SPECIES_HORSEA},
	{15, 25, SPECIES_QWILFISH},
	{15, 25, SPECIES_REMORAID},
	{25, 35, SPECIES_SEADRA},
	{25, 35, SPECIES_PSYDUCK},
};

static const struct WildPokemonInfo s3_58_FishingMonsInfo = {20, s3_58_FishingMons};

static const struct WildPokemon s3_59_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_MAGIKARP},
	{5, 15, SPECIES_HORSEA},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_HORSEA},
	{15, 25, SPECIES_HORSEA},
	{15, 25, SPECIES_QWILFISH},
	{15, 25, SPECIES_REMORAID},
	{25, 35, SPECIES_SEADRA},
	{25, 35, SPECIES_PSYDUCK},
};

static const struct WildPokemonInfo s3_59_FishingMonsInfo = {20, s3_59_FishingMons};

static const struct WildPokemon s3_60_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_MAGIKARP},
	{5, 15, SPECIES_HORSEA},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_HORSEA},
	{15, 25, SPECIES_HORSEA},
	{15, 25, SPECIES_QWILFISH},
	{15, 25, SPECIES_REMORAID},
	{25, 35, SPECIES_SEADRA},
	{25, 35, SPECIES_PSYDUCK},
};

static const struct WildPokemonInfo s3_60_FishingMonsInfo = {20, s3_60_FishingMons};

static const struct WildPokemon s3_61_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_MAGIKARP},
	{5, 15, SPECIES_POLIWAG},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_GOLDEEN},
	{15, 25, SPECIES_POLIWAG},
	{20, 30, SPECIES_POLIWHIRL},
	{15, 25, SPECIES_GYARADOS},
	{15, 25, SPECIES_PSYDUCK},
	{25, 35, SPECIES_PSYDUCK},
};

static const struct WildPokemonInfo s3_61_FishingMonsInfo = {20, s3_61_FishingMons};

static const struct WildPokemon s3_62_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_MAGIKARP},
	{5, 15, SPECIES_HORSEA},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_HORSEA},
	{15, 25, SPECIES_HORSEA},
	{15, 25, SPECIES_QWILFISH},
	{15, 25, SPECIES_REMORAID},
	{25, 35, SPECIES_SEADRA},
	{25, 35, SPECIES_PSYDUCK},
};

static const struct WildPokemonInfo s3_62_FishingMonsInfo = {20, s3_62_FishingMons};

static const struct WildPokemon s3_65_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_MAGIKARP},
	{5, 15, SPECIES_HORSEA},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_HORSEA},
	{15, 25, SPECIES_HORSEA},
	{15, 25, SPECIES_QWILFISH},
	{15, 25, SPECIES_REMORAID},
	{25, 35, SPECIES_SEADRA},
	{25, 35, SPECIES_PSYDUCK},
};

static const struct WildPokemonInfo s3_65_FishingMonsInfo = {20, s3_65_FishingMons};

static const struct WildPokemon s3_22_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_MAGIKARP},
	{5, 15, SPECIES_HORSEA},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_KRABBY},
	{15, 25, SPECIES_HORSEA},
	{15, 25, SPECIES_HORSEA},
	{15, 25, SPECIES_GYARADOS},
	{25, 35, SPECIES_HORSEA},
	{25, 35, SPECIES_PSYDUCK},
};

static const struct WildPokemonInfo s3_22_FishingMonsInfo = {20, s3_22_FishingMons};

static const struct WildPokemon s3_24_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_MAGIKARP},
	{5, 15, SPECIES_POLIWAG},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_GOLDEEN},
	{15, 25, SPECIES_POLIWAG},
	{20, 30, SPECIES_POLIWHIRL},
	{15, 25, SPECIES_GYARADOS},
	{15, 25, SPECIES_PSYDUCK},
	{25, 35, SPECIES_PSYDUCK},
};

static const struct WildPokemonInfo s3_24_FishingMonsInfo = {20, s3_24_FishingMons};

static const struct WildPokemon s3_28_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_MAGIKARP},
	{5, 15, SPECIES_HORSEA},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_KRABBY},
	{15, 25, SPECIES_HORSEA},
	{15, 25, SPECIES_HORSEA},
	{15, 25, SPECIES_GYARADOS},
	{25, 35, SPECIES_HORSEA},
	{25, 35, SPECIES_PSYDUCK},
};

static const struct WildPokemonInfo s3_28_FishingMonsInfo = {20, s3_28_FishingMons};

static const struct WildPokemon s3_29_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_MAGIKARP},
	{5, 15, SPECIES_HORSEA},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_KRABBY},
	{15, 25, SPECIES_HORSEA},
	{15, 25, SPECIES_HORSEA},
	{15, 25, SPECIES_GYARADOS},
	{25, 35, SPECIES_HORSEA},
	{25, 35, SPECIES_PSYDUCK},
};

static const struct WildPokemonInfo s3_29_FishingMonsInfo = {20, s3_29_FishingMons};

static const struct WildPokemon s3_30_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_MAGIKARP},
	{5, 15, SPECIES_HORSEA},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_KRABBY},
	{15, 25, SPECIES_HORSEA},
	{15, 25, SPECIES_HORSEA},
	{15, 25, SPECIES_GYARADOS},
	{25, 35, SPECIES_HORSEA},
	{25, 35, SPECIES_PSYDUCK},
};

static const struct WildPokemonInfo s3_30_FishingMonsInfo = {60, s3_30_FishingMons};

static const struct WildPokemon s3_31_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_MAGIKARP},
	{5, 15, SPECIES_HORSEA},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_KRABBY},
	{15, 25, SPECIES_HORSEA},
	{15, 25, SPECIES_HORSEA},
	{15, 25, SPECIES_GYARADOS},
	{25, 35, SPECIES_HORSEA},
	{25, 35, SPECIES_PSYDUCK},
};

static const struct WildPokemonInfo s3_31_FishingMonsInfo = {20, s3_31_FishingMons};

static const struct WildPokemon s3_37_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_MAGIKARP},
	{5, 15, SPECIES_HORSEA},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_KRABBY},
	{15, 25, SPECIES_HORSEA},
	{15, 25, SPECIES_HORSEA},
	{15, 25, SPECIES_GYARADOS},
	{25, 35, SPECIES_SEADRA},
	{25, 35, SPECIES_PSYDUCK},
};

static const struct WildPokemonInfo s3_37_FishingMonsInfo = {20, s3_37_FishingMons};

static const struct WildPokemon s3_38_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_MAGIKARP},
	{5, 15, SPECIES_HORSEA},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_KRABBY},
	{15, 25, SPECIES_HORSEA},
	{15, 25, SPECIES_HORSEA},
	{15, 25, SPECIES_GYARADOS},
	{25, 35, SPECIES_SEADRA},
	{25, 35, SPECIES_PSYDUCK},
};

static const struct WildPokemonInfo s3_38_FishingMonsInfo = {20, s3_38_FishingMons};

static const struct WildPokemon s3_39_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_MAGIKARP},
	{5, 15, SPECIES_HORSEA},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_KRABBY},
	{15, 25, SPECIES_HORSEA},
	{15, 25, SPECIES_HORSEA},
	{15, 25, SPECIES_GYARADOS},
	{25, 35, SPECIES_SEADRA},
	{25, 35, SPECIES_PSYDUCK},
};

static const struct WildPokemonInfo s3_39_FishingMonsInfo = {20, s3_39_FishingMons};

static const struct WildPokemon s3_40_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_MAGIKARP},
	{5, 15, SPECIES_HORSEA},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_KRABBY},
	{15, 25, SPECIES_HORSEA},
	{15, 25, SPECIES_HORSEA},
	{15, 25, SPECIES_GYARADOS},
	{25, 35, SPECIES_SEADRA},
	{25, 35, SPECIES_PSYDUCK},
};

static const struct WildPokemonInfo s3_40_FishingMonsInfo = {20, s3_40_FishingMons};

static const struct WildPokemon s3_41_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_MAGIKARP},
	{5, 15, SPECIES_POLIWAG},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_GOLDEEN},
	{15, 25, SPECIES_POLIWAG},
	{20, 30, SPECIES_POLIWHIRL},
	{15, 25, SPECIES_GYARADOS},
	{15, 25, SPECIES_SLOWPOKE},
	{25, 35, SPECIES_PSYDUCK},
};

static const struct WildPokemonInfo s3_41_FishingMonsInfo = {20, s3_41_FishingMons};

static const struct WildPokemon s3_42_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_MAGIKARP},
	{5, 15, SPECIES_POLIWAG},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_GOLDEEN},
	{15, 25, SPECIES_POLIWAG},
	{20, 30, SPECIES_POLIWHIRL},
	{15, 25, SPECIES_GYARADOS},
	{15, 25, SPECIES_PSYDUCK},
	{25, 35, SPECIES_SLOWPOKE},
};

static const struct WildPokemonInfo s3_42_FishingMonsInfo = {20, s3_42_FishingMons};

static const struct WildPokemon s3_43_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_MAGIKARP},
	{5, 15, SPECIES_HORSEA},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_KRABBY},
	{15, 25, SPECIES_HORSEA},
	{15, 25, SPECIES_HORSEA},
	{15, 25, SPECIES_GYARADOS},
	{25, 35, SPECIES_HORSEA},
	{25, 35, SPECIES_PSYDUCK},
};

static const struct WildPokemonInfo s3_43_FishingMonsInfo = {20, s3_43_FishingMons};

static const struct WildPokemon s3_44_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_MAGIKARP},
	{5, 15, SPECIES_POLIWAG},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_GOLDEEN},
	{15, 25, SPECIES_POLIWAG},
	{20, 30, SPECIES_POLIWHIRL},
	{15, 25, SPECIES_GYARADOS},
	{15, 25, SPECIES_PSYDUCK},
	{25, 35, SPECIES_SLOWPOKE},
};

static const struct WildPokemonInfo s3_44_FishingMonsInfo = {20, s3_44_FishingMons};

static const struct WildPokemon s3_0_FishingMons[] =
{
	{5, 10, SPECIES_MAGIKARP},
	{5, 10, SPECIES_MAGIKARP},
	{5, 15, SPECIES_HORSEA},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_KRABBY},
	{15, 25, SPECIES_HORSEA},
	{15, 25, SPECIES_SHELLDER},
	{15, 25, SPECIES_GYARADOS},
	{25, 35, SPECIES_SEADRA},
	{25, 35, SPECIES_KINGLER},
};

static const struct WildPokemonInfo s3_0_FishingMonsInfo = {10, s3_0_FishingMons};

static const struct WildPokemon s3_1_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_MAGIKARP},
	{5, 15, SPECIES_POLIWAG},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_GOLDEEN},
	{15, 25, SPECIES_POLIWAG},
	{20, 30, SPECIES_POLIWHIRL},
	{15, 25, SPECIES_GYARADOS},
	{15, 25, SPECIES_PSYDUCK},
	{25, 35, SPECIES_SLOWPOKE},
};

static const struct WildPokemonInfo s3_1_FishingMonsInfo = {10, s3_1_FishingMons};

static const struct WildPokemon s3_3_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_MAGIKARP},
	{5, 15, SPECIES_HORSEA},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_KRABBY},
	{15, 25, SPECIES_HORSEA},
	{15, 25, SPECIES_HORSEA},
	{15, 25, SPECIES_GYARADOS},
	{25, 35, SPECIES_HORSEA},
	{25, 35, SPECIES_PSYDUCK},
};

static const struct WildPokemonInfo s3_3_FishingMonsInfo = {10, s3_3_FishingMons};

static const struct WildPokemon s3_5_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_MAGIKARP},
	{5, 15, SPECIES_HORSEA},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_KRABBY},
	{15, 25, SPECIES_HORSEA},
	{15, 25, SPECIES_SHELLDER},
	{15, 25, SPECIES_GYARADOS},
	{25, 35, SPECIES_HORSEA},
	{25, 35, SPECIES_PSYDUCK},
};

static const struct WildPokemonInfo s3_5_FishingMonsInfo = {10, s3_5_FishingMons};

static const struct WildPokemon s3_6_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_MAGIKARP},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_MAGIKARP},
	{15, 25, SPECIES_MAGIKARP},
	{15, 25, SPECIES_MAGIKARP},
	{15, 25, SPECIES_MAGIKARP},
	{25, 35, SPECIES_MAGIKARP},
	{30, 40, SPECIES_GRIMER},
};

static const struct WildPokemonInfo s3_6_FishingMonsInfo = {10, s3_6_FishingMons};

static const struct WildPokemon s3_7_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_MAGIKARP},
	{5, 15, SPECIES_GOLDEEN},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_POLIWAG},
	{15, 25, SPECIES_GOLDEEN},
	{20, 30, SPECIES_SEAKING},
	{15, 25, SPECIES_GYARADOS},
	{15, 25, SPECIES_PSYDUCK},
	{25, 35, SPECIES_PSYDUCK},
};

static const struct WildPokemonInfo s3_7_FishingMonsInfo = {10, s3_7_FishingMons};

static const struct WildPokemon s3_8_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_MAGIKARP},
	{5, 15, SPECIES_HORSEA},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_KRABBY},
	{15, 25, SPECIES_HORSEA},
	{15, 25, SPECIES_SHELLDER},
	{15, 25, SPECIES_GYARADOS},
	{25, 35, SPECIES_SEADRA},
	{25, 35, SPECIES_KINGLER},
};

static const struct WildPokemonInfo s3_8_FishingMonsInfo = {10, s3_8_FishingMons};

static const struct WildPokemon s3_12_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_MAGIKARP},
	{5, 15, SPECIES_HORSEA},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_HORSEA},
	{15, 25, SPECIES_HORSEA},
	{15, 25, SPECIES_SHELLDER},
	{15, 25, SPECIES_GYARADOS},
	{25, 35, SPECIES_SEADRA},
	{25, 35, SPECIES_KINGLER},
};

static const struct WildPokemonInfo s3_12_FishingMonsInfo = {10, s3_12_FishingMons};

static const struct WildPokemon s3_15_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_MAGIKARP},
	{5, 15, SPECIES_POLIWAG},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_GOLDEEN},
	{15, 25, SPECIES_POLIWAG},
	{20, 30, SPECIES_POLIWHIRL},
	{15, 25, SPECIES_GYARADOS},
	{15, 25, SPECIES_PSYDUCK},
	{25, 35, SPECIES_PSYDUCK},
};

static const struct WildPokemonInfo s3_15_FishingMonsInfo = {20, s3_15_FishingMons};

static const struct WildPokemon s3_16_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_MAGIKARP},
	{5, 15, SPECIES_HORSEA},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_HORSEA},
	{15, 25, SPECIES_HORSEA},
	{15, 25, SPECIES_SHELLDER},
	{15, 25, SPECIES_GYARADOS},
	{25, 35, SPECIES_SEADRA},
	{25, 35, SPECIES_KINGLER},
};

static const struct WildPokemonInfo s3_16_FishingMonsInfo = {10, s3_16_FishingMons};

const struct WildPokemonHeader gWildMonHeadersNew[] =
{
	{
		.mapGroup = 0x2,
		.mapNum = 0x1b,
		.landMonsInfo = &s2_27_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x2,
		.mapNum = 0x1c,
		.landMonsInfo = &s2_28_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x2,
		.mapNum = 0x1d,
		.landMonsInfo = &s2_29_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x2,
		.mapNum = 0x1e,
		.landMonsInfo = &s2_30_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x2,
		.mapNum = 0x1f,
		.landMonsInfo = &s2_31_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x2,
		.mapNum = 0x20,
		.landMonsInfo = &s2_32_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x2,
		.mapNum = 0x21,
		.landMonsInfo = &s2_33_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x0,
		.landMonsInfo = &s1_0_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x1,
		.landMonsInfo = &s1_1_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x2,
		.landMonsInfo = &s1_2_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x3,
		.landMonsInfo = &s1_3_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x4,
		.landMonsInfo = NULL,
		.waterMonsInfo = &s1_4_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s1_4_FishingMonsInfo
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x25,
		.landMonsInfo = &s1_37_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x27,
		.landMonsInfo = &s1_39_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x28,
		.landMonsInfo = &s1_40_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x29,
		.landMonsInfo = &s1_41_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x3b,
		.landMonsInfo = &s1_59_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x3c,
		.landMonsInfo = &s1_60_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x3d,
		.landMonsInfo = &s1_61_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x3e,
		.landMonsInfo = &s1_62_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x3f,
		.landMonsInfo = &s1_63_LandMonsInfo,
		.waterMonsInfo = &s1_63_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s1_63_FishingMonsInfo
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x40,
		.landMonsInfo = &s1_64_LandMonsInfo,
		.waterMonsInfo = &s1_64_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s1_64_FishingMonsInfo
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x41,
		.landMonsInfo = &s1_65_LandMonsInfo,
		.waterMonsInfo = &s1_65_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s1_65_FishingMonsInfo
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x42,
		.landMonsInfo = &s1_66_LandMonsInfo,
		.waterMonsInfo = &s1_66_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s1_66_FishingMonsInfo
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x48,
		.landMonsInfo = &s1_72_LandMonsInfo,
		.waterMonsInfo = &s1_72_WaterMonsInfo,
		.rockSmashMonsInfo = &s1_72_RockSmashMonsInfo,
		.fishingMonsInfo = &s1_72_FishingMonsInfo
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x49,
		.landMonsInfo = &s1_73_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = &s1_73_RockSmashMonsInfo,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x4a,
		.landMonsInfo = &s1_74_LandMonsInfo,
		.waterMonsInfo = &s1_74_WaterMonsInfo,
		.rockSmashMonsInfo = &s1_74_RockSmashMonsInfo,
		.fishingMonsInfo = &s1_74_FishingMonsInfo
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x51,
		.landMonsInfo = &s1_81_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x52,
		.landMonsInfo = &s1_82_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = &s1_82_RockSmashMonsInfo,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x53,
		.landMonsInfo = &s1_83_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x54,
		.landMonsInfo = &s1_84_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x55,
		.landMonsInfo = &s1_85_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x56,
		.landMonsInfo = &s1_86_LandMonsInfo,
		.waterMonsInfo = &s1_86_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s1_86_FishingMonsInfo
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x57,
		.landMonsInfo = &s1_87_LandMonsInfo,
		.waterMonsInfo = &s1_87_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s1_87_FishingMonsInfo
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x5a,
		.landMonsInfo = &s1_90_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x5b,
		.landMonsInfo = &s1_91_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x5c,
		.landMonsInfo = &s1_92_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x5d,
		.landMonsInfo = &s1_93_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x5e,
		.landMonsInfo = &s1_94_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x5f,
		.landMonsInfo = &s1_95_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x61,
		.landMonsInfo = &s1_97_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = &s1_97_RockSmashMonsInfo,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x62,
		.landMonsInfo = &s1_98_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x63,
		.landMonsInfo = &s1_99_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = &s1_99_RockSmashMonsInfo,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x64,
		.landMonsInfo = &s1_100_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x67,
		.landMonsInfo = &s1_103_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = &s1_103_RockSmashMonsInfo,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x68,
		.landMonsInfo = &s1_104_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = &s1_104_RockSmashMonsInfo,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x69,
		.landMonsInfo = &s1_105_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = &s1_105_RockSmashMonsInfo,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x6a,
		.landMonsInfo = &s1_106_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = &s1_106_RockSmashMonsInfo,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x6b,
		.landMonsInfo = &s1_107_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = &s1_107_RockSmashMonsInfo,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x6c,
		.landMonsInfo = &s1_108_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = &s1_108_RockSmashMonsInfo,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x6d,
		.landMonsInfo = &s1_109_LandMonsInfo,
		.waterMonsInfo = &s1_109_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s1_109_FishingMonsInfo
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x6e,
		.landMonsInfo = &s1_110_LandMonsInfo,
		.waterMonsInfo = &s1_110_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s1_110_FishingMonsInfo
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x6f,
		.landMonsInfo = &s1_111_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x70,
		.landMonsInfo = &s1_112_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x71,
		.landMonsInfo = &s1_113_LandMonsInfo,
		.waterMonsInfo = &s1_113_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s1_113_FishingMonsInfo
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x79,
		.landMonsInfo = &s1_121_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x2,
		.mapNum = 0xd,
		.landMonsInfo = &s2_13_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x2,
		.mapNum = 0xe,
		.landMonsInfo = &s2_14_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x2,
		.mapNum = 0xf,
		.landMonsInfo = &s2_15_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x2,
		.mapNum = 0x10,
		.landMonsInfo = &s2_16_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x2,
		.mapNum = 0x11,
		.landMonsInfo = &s2_17_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x2,
		.mapNum = 0x12,
		.landMonsInfo = &s2_18_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x2,
		.mapNum = 0x13,
		.landMonsInfo = &s2_19_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x2,
		.mapNum = 0x14,
		.landMonsInfo = &s2_20_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x2,
		.mapNum = 0x15,
		.landMonsInfo = &s2_21_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x2,
		.mapNum = 0x16,
		.landMonsInfo = &s2_22_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x2,
		.mapNum = 0x17,
		.landMonsInfo = &s2_23_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x2,
		.mapNum = 0x18,
		.landMonsInfo = &s2_24_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x2,
		.mapNum = 0x19,
		.landMonsInfo = &s2_25_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x2,
		.mapNum = 0x1a,
		.landMonsInfo = &s2_26_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x2d,
		.landMonsInfo = &s3_45_LandMonsInfo,
		.waterMonsInfo = &s3_45_WaterMonsInfo,
		.rockSmashMonsInfo = &s3_45_RockSmashMonsInfo,
		.fishingMonsInfo = &s3_45_FishingMonsInfo
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x2e,
		.landMonsInfo = &s3_46_LandMonsInfo,
		.waterMonsInfo = &s3_46_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s3_46_FishingMonsInfo
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x2f,
		.landMonsInfo = &s3_47_LandMonsInfo,
		.waterMonsInfo = &s3_47_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s3_47_FishingMonsInfo
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x30,
		.landMonsInfo = &s3_48_LandMonsInfo,
		.waterMonsInfo = &s3_48_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s3_48_FishingMonsInfo
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x31,
		.landMonsInfo = &s3_49_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x36,
		.landMonsInfo = NULL,
		.waterMonsInfo = &s3_54_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s3_54_FishingMonsInfo
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x37,
		.landMonsInfo = NULL,
		.waterMonsInfo = &s3_55_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s3_55_FishingMonsInfo
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x38,
		.landMonsInfo = &s3_56_LandMonsInfo,
		.waterMonsInfo = &s3_56_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s3_56_FishingMonsInfo
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x39,
		.landMonsInfo = &s3_57_LandMonsInfo,
		.waterMonsInfo = &s3_57_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s3_57_FishingMonsInfo
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x3a,
		.landMonsInfo = NULL,
		.waterMonsInfo = &s3_58_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s3_58_FishingMonsInfo
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x3b,
		.landMonsInfo = NULL,
		.waterMonsInfo = &s3_59_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s3_59_FishingMonsInfo
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x3c,
		.landMonsInfo = &s3_60_LandMonsInfo,
		.waterMonsInfo = &s3_60_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s3_60_FishingMonsInfo
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x3d,
		.landMonsInfo = &s3_61_LandMonsInfo,
		.waterMonsInfo = &s3_61_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s3_61_FishingMonsInfo
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x3e,
		.landMonsInfo = NULL,
		.waterMonsInfo = &s3_62_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s3_62_FishingMonsInfo
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x3f,
		.landMonsInfo = &s3_63_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x40,
		.landMonsInfo = &s3_64_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = &s3_64_RockSmashMonsInfo,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x41,
		.landMonsInfo = NULL,
		.waterMonsInfo = &s3_65_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s3_65_FishingMonsInfo
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x13,
		.landMonsInfo = &s3_19_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x14,
		.landMonsInfo = &s3_20_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x15,
		.landMonsInfo = &s3_21_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x16,
		.landMonsInfo = &s3_22_LandMonsInfo,
		.waterMonsInfo = &s3_22_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s3_22_FishingMonsInfo
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x17,
		.landMonsInfo = &s3_23_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x18,
		.landMonsInfo = &s3_24_LandMonsInfo,
		.waterMonsInfo = &s3_24_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s3_24_FishingMonsInfo
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x19,
		.landMonsInfo = &s3_25_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x1a,
		.landMonsInfo = &s3_26_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x1b,
		.landMonsInfo = &s3_27_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x1c,
		.landMonsInfo = &s3_28_LandMonsInfo,
		.waterMonsInfo = &s3_28_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s3_28_FishingMonsInfo
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x1d,
		.landMonsInfo = &s3_29_LandMonsInfo,
		.waterMonsInfo = &s3_29_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s3_29_FishingMonsInfo
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x1e,
		.landMonsInfo = &s3_30_LandMonsInfo,
		.waterMonsInfo = &s3_30_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s3_30_FishingMonsInfo
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x1f,
		.landMonsInfo = &s3_31_LandMonsInfo,
		.waterMonsInfo = &s3_31_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s3_31_FishingMonsInfo
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x20,
		.landMonsInfo = &s3_32_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x21,
		.landMonsInfo = &s3_33_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x22,
		.landMonsInfo = &s3_34_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x23,
		.landMonsInfo = &s3_35_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x24,
		.landMonsInfo = &s3_36_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x25,
		.landMonsInfo = NULL,
		.waterMonsInfo = &s3_37_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s3_37_FishingMonsInfo
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x26,
		.landMonsInfo = NULL,
		.waterMonsInfo = &s3_38_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s3_38_FishingMonsInfo
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x27,
		.landMonsInfo = &s3_39_LandMonsInfo,
		.waterMonsInfo = &s3_39_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s3_39_FishingMonsInfo
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x28,
		.landMonsInfo = &s3_40_LandMonsInfo,
		.waterMonsInfo = &s3_40_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s3_40_FishingMonsInfo
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x29,
		.landMonsInfo = &s3_41_LandMonsInfo,
		.waterMonsInfo = &s3_41_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s3_41_FishingMonsInfo
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x2a,
		.landMonsInfo = &s3_42_LandMonsInfo,
		.waterMonsInfo = &s3_42_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s3_42_FishingMonsInfo
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x2b,
		.landMonsInfo = &s3_43_LandMonsInfo,
		.waterMonsInfo = &s3_43_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s3_43_FishingMonsInfo
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x2c,
		.landMonsInfo = &s3_44_LandMonsInfo,
		.waterMonsInfo = &s3_44_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s3_44_FishingMonsInfo
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x0,
		.landMonsInfo = NULL,
		.waterMonsInfo = &s3_0_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s3_0_FishingMonsInfo
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x1,
		.landMonsInfo = NULL,
		.waterMonsInfo = &s3_1_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s3_1_FishingMonsInfo
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x3,
		.landMonsInfo = NULL,
		.waterMonsInfo = &s3_3_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s3_3_FishingMonsInfo
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x5,
		.landMonsInfo = NULL,
		.waterMonsInfo = &s3_5_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s3_5_FishingMonsInfo
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x6,
		.landMonsInfo = NULL,
		.waterMonsInfo = &s3_6_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s3_6_FishingMonsInfo
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x7,
		.landMonsInfo = NULL,
		.waterMonsInfo = &s3_7_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s3_7_FishingMonsInfo
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x8,
		.landMonsInfo = NULL,
		.waterMonsInfo = &s3_8_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s3_8_FishingMonsInfo
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0xc,
		.landMonsInfo = NULL,
		.waterMonsInfo = &s3_12_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s3_12_FishingMonsInfo
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0xf,
		.landMonsInfo = NULL,
		.waterMonsInfo = &s3_15_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s3_15_FishingMonsInfo
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x10,
		.landMonsInfo = NULL,
		.waterMonsInfo = &s3_16_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s3_16_FishingMonsInfo
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x7a,
		.landMonsInfo = &s1_122_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	}
};
*/


static const struct WildPokemon s2_27_LandMons[] =
{
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
};

static const struct WildPokemonInfo s2_27_LandMonsInfo = {7, s2_27_LandMons};

static const struct WildPokemon s2_28_LandMons[] =
{
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
};

static const struct WildPokemonInfo s2_28_LandMonsInfo = {7, s2_28_LandMons};

static const struct WildPokemon s2_29_LandMons[] =
{
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
};

static const struct WildPokemonInfo s2_29_LandMonsInfo = {7, s2_29_LandMons};

static const struct WildPokemon s2_30_LandMons[] =
{
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
};

static const struct WildPokemonInfo s2_30_LandMonsInfo = {7, s2_30_LandMons};

static const struct WildPokemon s2_31_LandMons[] =
{
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
};

static const struct WildPokemonInfo s2_31_LandMonsInfo = {7, s2_31_LandMons};

static const struct WildPokemon s2_32_LandMons[] =
{
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
};

static const struct WildPokemonInfo s2_32_LandMonsInfo = {7, s2_32_LandMons};

static const struct WildPokemon s2_33_LandMons[] =
{
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
	{25, 25, SPECIES_UNOWN},
};

static const struct WildPokemonInfo s2_33_LandMonsInfo = {7, s2_33_LandMons};

static const struct WildPokemon s1_0_LandMons[] =
{
	{5, 7, SPECIES_CATERPIE},
	{5, 6, SPECIES_WEEDLE},
	{5, 6, SPECIES_COMBEE},
	{5, 6, SPECIES_SCATTERBUG},
	{6, 7, SPECIES_NINCADA},
	{5, 7, SPECIES_LEDYBA},
	{5, 7, SPECIES_PIKACHU},
	{5, 5, SPECIES_SURSKIT},
	{5, 6, SPECIES_GRUBBIN},
	{6, 6, SPECIES_SHROOMISH},
	{6, 6, SPECIES_JOLTIK},
	{7, 7, SPECIES_JOLTIK},
};

static const struct WildPokemonInfo s1_0_LandMonsInfo = {14, s1_0_LandMons};

static const struct WildPokemon s1_1_LandMons[] =
{
	{9, 10, SPECIES_GEODUDE},
	{8, 11, SPECIES_ZUBAT},
	{8, 10, SPECIES_ROCKRUFF},
	{9, 9, SPECIES_TIMBURR},
	{10, 10, SPECIES_WOOBAT},
	{10, 10, SPECIES_CHEWTLE},
	{9, 11, SPECIES_MAKUHITA},
	{8, 10, SPECIES_MAKUHITA},
	{8, 11, SPECIES_TYROGUE},
	{8, 11, SPECIES_CLEFAIRY},
	{8, 11, SPECIES_TRAPINCH},
	{8, 11, SPECIES_TRAPINCH},
};

static const struct WildPokemonInfo s1_1_LandMonsInfo = {7, s1_1_LandMons};

static const struct WildPokemon s1_2_LandMons[] =
{
	{10, 10, SPECIES_PARAS},
	{11, 11, SPECIES_PARAS},
	{12, 12, SPECIES_SLUGMA},
	{10, 10, SPECIES_WOOBAT},
	{10, 10, SPECIES_PARAS},
	{10, 10, SPECIES_TEDDIURSA},
	{9, 9, SPECIES_DUNSPARCE},
	{8, 8, SPECIES_BALTOY},
	{7, 8, SPECIES_SHUPPET},
	{7, 9, SPECIES_SHUPPET},
	{9, 9, SPECIES_CUFANT},
	{10, 10, SPECIES_CUFANT},
};

static const struct WildPokemonInfo s1_2_LandMonsInfo = {4, s1_2_LandMons};

static const struct WildPokemon s1_3_LandMons[] =
{
	{12, 14, SPECIES_GEODUDE},
	{12, 14, SPECIES_ZUBAT},
	{13, 14, SPECIES_DRILBUR},
	{12, 14, SPECIES_ROCKRUFF},
	{12, 14, SPECIES_WOOBAT},
	{12, 14, SPECIES_NUMEL},
	{14, 14, SPECIES_WHISMUR},
	{12, 12, SPECIES_SMOOCHUM},
	{13, 13, SPECIES_SMOOCHUM},
	{13, 13, SPECIES_CLEFAIRY},
	{14, 14, SPECIES_ONIX},
	{12, 15, SPECIES_ONIX},
};

static const struct WildPokemonInfo s1_3_LandMonsInfo = {4, s1_3_LandMons};

static const struct WildPokemon s1_37_LandMons[] =
{
	{22, 24, SPECIES_DIGLETT},
	{22, 24, SPECIES_DIGLETT},
	{22, 24, SPECIES_SILICOBRA},
	{22, 24, SPECIES_STUNFISK},
	{22, 25, SPECIES_WOOPER},
	{22, 25, SPECIES_SANDILE},
	{22, 25, SPECIES_DRILBUR},
	{24, 26, SPECIES_GLIGAR},
	{24, 25, SPECIES_DUGTRIO},
	{24, 25, SPECIES_DUGTRIO},
	{24, 24, SPECIES_HIPPOPOTAS},
	{24, 25, SPECIES_HIPPOPOTAS},
};

static const struct WildPokemonInfo s1_37_LandMonsInfo = {4, s1_37_LandMons};

static const struct WildPokemon s1_39_LandMons[] =
{
	{75, 77, SPECIES_MACHAMP},
	{75, 77, SPECIES_GOLEM},
	{75, 78, SPECIES_STEELIX},
	{79, 79, SPECIES_AUDINO},
	{79, 79, SPECIES_AUDINO},
	{80, 80, SPECIES_GOLBAT},
	{79, 80, SPECIES_ARBOK},
	{79, 80, SPECIES_GOLBAT},
	{79, 80, SPECIES_MAROWAK},
	{79, 80, SPECIES_MACHAMP},
	{79, 80, SPECIES_MACHAMP},
	{79, 80, SPECIES_MAROWAK},
};

static const struct WildPokemonInfo s1_39_LandMonsInfo = {7, s1_39_LandMons};

static const struct WildPokemon s1_40_LandMons[] =
{
	{77, 78, SPECIES_AUDINO},
	{76, 78, SPECIES_GOLEM},
	{76, 79, SPECIES_PRIMEAPE},
	{80, 80, SPECIES_AUDINO},
	{79, 80, SPECIES_AUDINO},
	{79, 80, SPECIES_GOLBAT},
	{79, 80, SPECIES_ARBOK},
	{79, 80, SPECIES_GOLBAT},
	{77, 80, SPECIES_MAROWAK},
	{77, 78, SPECIES_MACHAMP},
	{77, 79, SPECIES_MACHAMP},
	{80, 83, SPECIES_MAROWAK},
};

static const struct WildPokemonInfo s1_40_LandMonsInfo = {7, s1_40_LandMons};

static const struct WildPokemon s1_41_LandMons[] =
{
	{79, 82, SPECIES_PALOSSAND},
	{80, 82, SPECIES_AUDINO},
	{82, 83, SPECIES_AUDINO},
	{82, 83, SPECIES_AUDINO},
	{82, 82, SPECIES_PALOSSAND},
	{81, 82, SPECIES_GOLBAT},
	{80, 82, SPECIES_ARBOK},
	{80, 82, SPECIES_GOLBAT},
	{81, 81, SPECIES_MAROWAK},
	{79, 82, SPECIES_MACHAMP},
	{79, 82, SPECIES_MACHAMP},
	{80, 80, SPECIES_MAROWAK},
};

static const struct WildPokemonInfo s1_41_LandMonsInfo = {7, s1_41_LandMons};

static const struct WildPokemon s1_59_LandMons[] =
{
	{62, 65, SPECIES_RATICATE},
	{68, 68, SPECIES_AUDINO},
	{62, 64, SPECIES_MUK},
	{63, 63, SPECIES_MUK},
	{65, 65, SPECIES_WEEZING},
	{64, 66, SPECIES_LIEPARD},
	{64, 64, SPECIES_ARCANINE},
	{64, 64, SPECIES_ARCANINE},
	{65, 65, SPECIES_SABLEYE},
	{65, 65, SPECIES_SABLEYE},
	{65, 65, SPECIES_CHIMECHO},
	{65, 65, SPECIES_CHIMECHO},
};

static const struct WildPokemonInfo s1_59_LandMonsInfo = {7, s1_59_LandMons};

static const struct WildPokemon s1_60_LandMons[] =
{
	{64, 66, SPECIES_GUMSHOOS},
	{64, 66, SPECIES_GARBODOR},
	{63, 65, SPECIES_KOFFING},
	{63, 65, SPECIES_SWALOT},
	{64, 65, SPECIES_HEATMOR},
	{64, 65, SPECIES_MIGHTYENA},
	{64, 65, SPECIES_HOUNDOOM},
	{64, 65, SPECIES_HOUNDOOM},
	{64, 66, SPECIES_BANETTE},
	{64, 66, SPECIES_BANETTE},
	{65, 65, SPECIES_CHIMECHO},
	{65, 65, SPECIES_CHIMECHO},
};

static const struct WildPokemonInfo s1_60_LandMonsInfo = {7, s1_60_LandMons};

static const struct WildPokemon s1_61_LandMons[] =
{
	{64, 66, SPECIES_BEWEAR},
	{63, 65, SPECIES_SEVIPER},
	{64, 66, SPECIES_ARIADOS},
	{65, 65, SPECIES_ARIADOS},
	{64, 64, SPECIES_RAPIDASH},
	{64, 64, SPECIES_SKUNTANK},
	{64, 64, SPECIES_CHANDELURE},
	{65, 66, SPECIES_CHANDELURE},
	{65, 66, SPECIES_KROOKODILE},
	{65, 66, SPECIES_KROOKODILE},
	{65, 65, SPECIES_CHIMECHO},
	{65, 65, SPECIES_CHIMECHO},
};

static const struct WildPokemonInfo s1_61_LandMonsInfo = {7, s1_61_LandMons};

static const struct WildPokemon s1_62_LandMons[] =
{
	{64, 66, SPECIES_RATICATE},
	{64, 66, SPECIES_GARBODOR},
	{64, 66, SPECIES_ARIADOS},
	{64, 64, SPECIES_ARIADOS},
	{65, 65, SPECIES_MAGMAR},
	{64, 66, SPECIES_MIGHTYENA},
	{64, 65, SPECIES_ARCANINE},
	{64, 65, SPECIES_ARCANINE},
	{64, 66, SPECIES_BANETTE},
	{64, 66, SPECIES_BANETTE},
	{65, 65, SPECIES_CHIMECHO},
	{65, 65, SPECIES_CHIMECHO},
};

static const struct WildPokemonInfo s1_62_LandMonsInfo = {5, s1_62_LandMons};

static const struct WildPokemon s1_63_LandMons[] =
{
	{50, 52, SPECIES_KECLEON},
	{50, 53, SPECIES_SPINDA},
	{50, 52, SPECIES_ABSOL},
	{50, 52, SPECIES_ABSOL},
	{49, 51, SPECIES_MELTAN},
	{50, 50, SPECIES_MELTAN},
	{49, 51, SPECIES_PORYGON},
	{49, 50, SPECIES_PORYGON},
	{49, 49, SPECIES_SCYTHER},
	{49, 49, SPECIES_SCYTHER},
	{45, 45, SPECIES_CHANSEY},
	{45, 45, SPECIES_CHANSEY},
};

static const struct WildPokemonInfo s1_63_LandMonsInfo = {21, s1_63_LandMons};

static const struct WildPokemon s1_64_LandMons[] =
{
	{50, 52, SPECIES_HAWLUCHA},
	{50, 53, SPECIES_CASTFORM},
	{50, 52, SPECIES_BOUFFALANT},
	{50, 52, SPECIES_BOUFFALANT},
	{49, 51, SPECIES_WOBBUFFET},
	{52, 52, SPECIES_WOBBUFFET},
	{49, 51, SPECIES_ZORUA},
	{48, 48, SPECIES_ZORUA},
	{49, 50, SPECIES_PINSIR},
	{49, 50, SPECIES_PINSIR},
	{45, 45, SPECIES_KANGASKHAN},
	{45, 45, SPECIES_KANGASKHAN},
};

static const struct WildPokemonInfo s1_64_LandMonsInfo = {21, s1_64_LandMons};

static const struct WildPokemon s1_65_LandMons[] =
{
	{50, 52, SPECIES_KLEFKI},
	{50, 53, SPECIES_KLEFKI},
	{50, 52, SPECIES_SAWK},
	{49, 51, SPECIES_SAWK},
	{52, 52, SPECIES_BISHARP},
	{52, 52, SPECIES_BISHARP},
	{49, 51, SPECIES_SKARMORY},
	{50, 50, SPECIES_SKARMORY},
	{48, 49, SPECIES_BINACLE},
	{49, 49, SPECIES_BINACLE},
	{45, 45, SPECIES_AXEW},
	{45, 45, SPECIES_AXEW},
};

static const struct WildPokemonInfo s1_65_LandMonsInfo = {21, s1_65_LandMons};

static const struct WildPokemon s1_66_LandMons[] =
{
	{50, 52, SPECIES_DRUDDIGON},
	{50, 53, SPECIES_DRUDDIGON},
	{50, 52, SPECIES_VESPIQUEN},
	{50, 51, SPECIES_VESPIQUEN},
	{50, 53, SPECIES_HIPPOWDON},
	{50, 52, SPECIES_HIPPOWDON},
	{49, 51, SPECIES_YANMA},
	{49, 51, SPECIES_YANMA},
	{49, 52, SPECIES_CRABOMINABLE},
	{49, 51, SPECIES_CRABOMINABLE},
	{49, 49, SPECIES_SMEARGLE},
	{49, 49, SPECIES_SMEARGLE},
};

static const struct WildPokemonInfo s1_66_LandMonsInfo = {21, s1_66_LandMons};

static const struct WildPokemon s1_72_LandMons[] =
{
	{68, 71, SPECIES_GOLBAT},
	{68, 71, SPECIES_PARASECT},
	{67, 67, SPECIES_MACHAMP},
	{67, 69, SPECIES_MACHAMP},
	{69, 70, SPECIES_MAGNETON},
	{69, 70, SPECIES_MAGNETON},
	{69, 72, SPECIES_SEISMITOAD},
	{66, 69, SPECIES_SEISMITOAD},
	{64, 64, SPECIES_DURALUDON},
	{64, 64, SPECIES_DURALUDON},
	{67, 67, SPECIES_TYPE_NULL},
	{67, 67, SPECIES_TYPE_NULL},
};

static const struct WildPokemonInfo s1_72_LandMonsInfo = {7, s1_72_LandMons};

static const struct WildPokemon s1_73_LandMons[] =
{
	{69, 71, SPECIES_AMOONGUSS},
	{69, 71, SPECIES_SWOOBAT},
	{68, 68, SPECIES_PRIMEAPE},
	{69, 69, SPECIES_PRIMEAPE},
	{75, 75, SPECIES_AUDINO},
	{75, 75, SPECIES_AUDINO},
	{69, 70, SPECIES_ALAKAZAM},
	{68, 70, SPECIES_ALAKAZAM},
	{64, 64, SPECIES_DURALUDON},
	{64, 64, SPECIES_DURALUDON},
	{68, 68, SPECIES_TYPE_NULL},
	{68, 68, SPECIES_TYPE_NULL},
};

static const struct WildPokemonInfo s1_73_LandMonsInfo = {7, s1_73_LandMons};

static const struct WildPokemon s1_74_LandMons[] =
{
	{69, 71, SPECIES_SHIINOTIC},
	{69, 71, SPECIES_NOIVERN},
	{69, 70, SPECIES_MEDICHAM},
	{69, 70, SPECIES_MEDICHAM},
	{69, 71, SPECIES_LOPUNNY},
	{69, 71, SPECIES_GARDEVOIR},
	{69, 71, SPECIES_LOPUNNY},
	{70, 72, SPECIES_GARDEVOIR},
	{70, 72, SPECIES_EXCADRILL},
	{70, 72, SPECIES_EXCADRILL},
	{69, 69, SPECIES_TYPE_NULL},
	{69, 69, SPECIES_TYPE_NULL},
};

static const struct WildPokemonInfo s1_74_LandMonsInfo = {7, s1_74_LandMons};

static const struct WildPokemon s1_81_LandMons[] =
{
	{28, 31, SPECIES_GRAVELER},
	{28, 31, SPECIES_ARON},
	{27, 31, SPECIES_SHUCKLE},
	{28, 31, SPECIES_SOLROCK},
	{27, 31, SPECIES_ZUBAT},
	{28, 31, SPECIES_CARBINK},
	{27, 31, SPECIES_MINIOR_SHIELD},
	{27, 31, SPECIES_FERROSEED},
	{30, 31, SPECIES_STONJOURNER},
	{30, 31, SPECIES_HEATMOR},
	{28, 28, SPECIES_DURANT},
	{28, 28, SPECIES_DURANT},
};

static const struct WildPokemonInfo s1_81_LandMonsInfo = {5, s1_81_LandMons};

static const struct WildPokemon s1_82_LandMons[] =
{
	{28, 32, SPECIES_SANDSLASH},
	{28, 31, SPECIES_BOLDORE},
	{28, 31, SPECIES_SWINUB},
	{27, 32, SPECIES_SNORUNT},
	{27, 32, SPECIES_BONSLY},
	{28, 32, SPECIES_BRONZOR},
	{30, 32, SPECIES_CARKOL},
	{30, 32, SPECIES_CARKOL},
	{30, 31, SPECIES_CUBCHOO},
	{30, 31, SPECIES_CUBCHOO},
	{28, 28, SPECIES_KLINK},
	{28, 28, SPECIES_KLINK},
};

static const struct WildPokemonInfo s1_82_LandMonsInfo = {5, s1_82_LandMons};

static const struct WildPokemon s1_83_LandMons[] =
{
	{62, 64, SPECIES_PILOSWINE},
	{65, 65, SPECIES_SNORUNT},
	{63, 63, SPECIES_BEARTIC},
	{63, 63, SPECIES_BEARTIC},
	{62, 64, SPECIES_SLOWBRO},
	{62, 64, SPECIES_SLOWBRO},
	{65, 65, SPECIES_GOLBAT},
	{65, 65, SPECIES_GOLBAT},
	{63, 63, SPECIES_AVALUGG},
	{63, 63, SPECIES_AVALUGG},
	{64, 64, SPECIES_JYNX},
	{64, 64, SPECIES_JYNX},
};

static const struct WildPokemonInfo s1_83_LandMonsInfo = {7, s1_83_LandMons};

static const struct WildPokemon s1_84_LandMons[] =
{
	{62, 64, SPECIES_PILOSWINE},
	{65, 65, SPECIES_DARMANITAN_G},
	{62, 64, SPECIES_VANILLUXE},
	{62, 64, SPECIES_VANILLUXE},
	{63, 64, SPECIES_SLOWKING},
	{63, 63, SPECIES_SLOWKING},
	{65, 65, SPECIES_GOLBAT},
	{65, 65, SPECIES_GOLBAT},
	{64, 64, SPECIES_CRYOGONAL},
	{64, 64, SPECIES_CRYOGONAL},
	{62, 62, SPECIES_DELIBIRD},
	{62, 62, SPECIES_DELIBIRD},
};

static const struct WildPokemonInfo s1_84_LandMonsInfo = {7, s1_84_LandMons};

static const struct WildPokemon s1_85_LandMons[] =
{
	{62, 64, SPECIES_ABOMASNOW},
	{64, 66, SPECIES_SNOVER},
	{63, 63, SPECIES_NINETALES_A},
	{63, 63, SPECIES_NINETALES_A},
	{62, 64, SPECIES_CRAWDAUNT},
	{62, 64, SPECIES_CRAWDAUNT},
	{64, 64, SPECIES_GOLBAT},
	{64, 64, SPECIES_GOLBAT},
	{63, 63, SPECIES_SNEASEL},
	{63, 63, SPECIES_SNEASEL},
	{64, 64, SPECIES_DELIBIRD},
	{64, 64, SPECIES_DELIBIRD},
};

static const struct WildPokemonInfo s1_85_LandMonsInfo = {7, s1_85_LandMons};

static const struct WildPokemon s1_86_LandMons[] =
{
	{62, 64, SPECIES_PILOSWINE},
	{62, 64, SPECIES_DARMANITAN_G},
	{63, 63, SPECIES_NINETALES_A},
	{63, 63, SPECIES_NINETALES_A},
	{62, 64, SPECIES_DEWGONG},
	{62, 64, SPECIES_DEWGONG},
	{63, 63, SPECIES_GOLBAT},
	{63, 63, SPECIES_GOLBAT},
	{62, 62, SPECIES_FROSMOTH},
	{63, 63, SPECIES_FROSMOTH},
	{62, 62, SPECIES_JYNX},
	{63, 63, SPECIES_JYNX},
};

static const struct WildPokemonInfo s1_86_LandMonsInfo = {7, s1_86_LandMons};

static const struct WildPokemon s1_87_LandMons[] =
{
	{62, 64, SPECIES_PILOSWINE},
	{62, 64, SPECIES_ABOMASNOW},
	{63, 63, SPECIES_NINETALES_A},
	{63, 65, SPECIES_NINETALES_A},
	{63, 65, SPECIES_DEWGONG},
	{63, 65, SPECIES_DEWGONG},
	{62, 64, SPECIES_CRAWDAUNT},
	{62, 64, SPECIES_CRAWDAUNT},
	{65, 65, SPECIES_GOLBAT},
	{65, 65, SPECIES_GOLBAT},
	{64, 64, SPECIES_JYNX},
	{64, 64, SPECIES_JYNX},
};

static const struct WildPokemonInfo s1_87_LandMonsInfo = {7, s1_87_LandMons};

static const struct WildPokemon s1_90_LandMons[] =
{
	{41, 43, SPECIES_HAUNTER},
	{41, 43, SPECIES_COFAGRIGUS},
	{41, 43, SPECIES_DUSCLOPS},
	{41, 42, SPECIES_MISMAGIUS},
	{41, 42, SPECIES_MISMAGIUS},
	{44, 45, SPECIES_CUBONE_A},
	{44, 45, SPECIES_SABLEYE},
	{44, 45, SPECIES_SPIRITOMB},
	{42, 43, SPECIES_POLTEAGEIST},
	{43, 44, SPECIES_POLTEAGEIST},
	{44, 44, SPECIES_LAMPENT},
	{44, 44, SPECIES_LAMPENT},
};

static const struct WildPokemonInfo s1_90_LandMonsInfo = {2, s1_90_LandMons};

static const struct WildPokemon s1_91_LandMons[] =
{
	{42, 44, SPECIES_HAUNTER},
	{42, 44, SPECIES_COFAGRIGUS},
	{42, 44, SPECIES_DUSCLOPS},
	{41, 44, SPECIES_MISMAGIUS},
	{41, 44, SPECIES_MISMAGIUS},
	{44, 45, SPECIES_CUBONE_A},
	{44, 45, SPECIES_SABLEYE},
	{44, 44, SPECIES_SPIRITOMB},
	{44, 45, SPECIES_POLTEAGEIST},
	{44, 45, SPECIES_POLTEAGEIST},
	{44, 44, SPECIES_LAMPENT},
	{44, 44, SPECIES_LAMPENT},
};

static const struct WildPokemonInfo s1_91_LandMonsInfo = {2, s1_91_LandMons};

static const struct WildPokemon s1_92_LandMons[] =
{
	{43, 45, SPECIES_HAUNTER},
	{43, 45, SPECIES_COFAGRIGUS},
	{42, 44, SPECIES_DUSCLOPS},
	{43, 44, SPECIES_MISMAGIUS},
	{43, 44, SPECIES_MISMAGIUS},
	{45, 45, SPECIES_CUBONE_A},
	{44, 44, SPECIES_SABLEYE},
	{46, 46, SPECIES_SPIRITOMB},
	{44, 45, SPECIES_POLTEAGEIST},
	{44, 45, SPECIES_POLTEAGEIST},
	{44, 44, SPECIES_LAMPENT},
	{45, 45, SPECIES_LAMPENT},
};

static const struct WildPokemonInfo s1_92_LandMonsInfo = {4, s1_92_LandMons};

static const struct WildPokemon s1_93_LandMons[] =
{
	{43, 45, SPECIES_HAUNTER},
	{42, 44, SPECIES_COFAGRIGUS},
	{43, 44, SPECIES_DUSCLOPS},
	{45, 46, SPECIES_CUBONE_A},
	{44, 44, SPECIES_MISMAGIUS},
	{43, 44, SPECIES_MISMAGIUS},
	{44, 45, SPECIES_SPIRITOMB},
	{44, 45, SPECIES_SABLEYE},
	{45, 46, SPECIES_POLTEAGEIST},
	{45, 45, SPECIES_POLTEAGEIST},
	{45, 45, SPECIES_LAMPENT},
	{45, 45, SPECIES_LAMPENT},
};

static const struct WildPokemonInfo s1_93_LandMonsInfo = {6, s1_93_LandMons};

static const struct WildPokemon s1_94_LandMons[] =
{
	{45, 47, SPECIES_HAUNTER},
	{44, 46, SPECIES_COFAGRIGUS},
	{44, 46, SPECIES_DUSCLOPS},
	{44, 45, SPECIES_MISMAGIUS},
	{44, 45, SPECIES_MISMAGIUS},
	{47, 47, SPECIES_CUBONE_A},
	{48, 48, SPECIES_SPIRITOMB},
	{47, 47, SPECIES_SABLEYE},
	{47, 48, SPECIES_POLTEAGEIST},
	{47, 48, SPECIES_POLTEAGEIST},
	{46, 46, SPECIES_LAMPENT},
	{46, 46, SPECIES_LAMPENT},
};

static const struct WildPokemonInfo s1_94_LandMonsInfo = {8, s1_94_LandMons};

static const struct WildPokemon s1_95_LandMons[] =
{
	{62, 64, SPECIES_MAGNETON},
	{63, 63, SPECIES_ELECTRODE},
	{62, 64, SPECIES_ZEBSTRIKA},
	{63, 63, SPECIES_EELEKTROSS},
	{63, 63, SPECIES_AMPHAROS},
	{62, 65, SPECIES_AMPHAROS},
	{62, 64, SPECIES_DEDENNE},
	{62, 64, SPECIES_DEDENNE},
	{63, 63, SPECIES_ELECTABUZZ},
	{64, 64, SPECIES_ELECTABUZZ},
	{65, 65, SPECIES_PIKACHU},
	{66, 66, SPECIES_ELECTABUZZ},
};

static const struct WildPokemonInfo s1_95_LandMonsInfo = {7, s1_95_LandMons};

static const struct WildPokemon s1_97_LandMons[] =
{
	{30, 30, SPECIES_PONYTA},
	{38, 38, SPECIES_FEAROW},
	{33, 33, SPECIES_PONYTA},
	{32, 32, SPECIES_SPEAROW},
	{35, 35, SPECIES_MACHOP},
	{33, 33, SPECIES_GEODUDE},
	{36, 36, SPECIES_PONYTA},
	{40, 40, SPECIES_FEAROW},
	{30, 30, SPECIES_SPEAROW},
	{39, 39, SPECIES_RAPIDASH},
	{30, 30, SPECIES_SPEAROW},
	{42, 42, SPECIES_RAPIDASH},
};

static const struct WildPokemonInfo s1_97_LandMonsInfo = {21, s1_97_LandMons};

static const struct WildPokemon s1_98_LandMons[] =
{
	{33, 33, SPECIES_GEODUDE},
	{35, 35, SPECIES_MACHOP},
	{29, 29, SPECIES_GEODUDE},
	{31, 31, SPECIES_GEODUDE},
	{31, 31, SPECIES_MACHOP},
	{33, 33, SPECIES_MACHOP},
	{35, 35, SPECIES_GEODUDE},
	{37, 37, SPECIES_MACHOP},
	{37, 37, SPECIES_GEODUDE},
	{39, 39, SPECIES_MACHOP},
	{37, 37, SPECIES_GEODUDE},
	{39, 39, SPECIES_MACHOP},
};

static const struct WildPokemonInfo s1_98_LandMonsInfo = {7, s1_98_LandMons};

static const struct WildPokemon s1_99_LandMons[] =
{
	{34, 34, SPECIES_GEODUDE},
	{36, 36, SPECIES_MACHOP},
	{30, 30, SPECIES_GEODUDE},
	{32, 32, SPECIES_GEODUDE},
	{32, 32, SPECIES_MACHOP},
	{34, 34, SPECIES_MACHOP},
	{38, 38, SPECIES_MACHOKE},
	{38, 38, SPECIES_MACHOKE},
	{40, 40, SPECIES_MACHOKE},
	{40, 40, SPECIES_MACHOKE},
	{40, 40, SPECIES_MACHOKE},
	{40, 40, SPECIES_MACHOKE},
};

static const struct WildPokemonInfo s1_99_LandMonsInfo = {7, s1_99_LandMons};

static const struct WildPokemon s1_100_LandMons[] =
{
	{33, 33, SPECIES_GEODUDE},
	{35, 35, SPECIES_MACHOP},
	{29, 29, SPECIES_GEODUDE},
	{31, 31, SPECIES_GEODUDE},
	{31, 31, SPECIES_MACHOP},
	{33, 33, SPECIES_MACHOP},
	{35, 35, SPECIES_GEODUDE},
	{37, 37, SPECIES_MACHOP},
	{37, 37, SPECIES_GEODUDE},
	{39, 39, SPECIES_MACHOP},
	{37, 37, SPECIES_GEODUDE},
	{39, 39, SPECIES_MACHOP},
};

static const struct WildPokemonInfo s1_100_LandMonsInfo = {7, s1_100_LandMons};

static const struct WildPokemon s1_103_LandMons[] =
{
	{36, 36, SPECIES_GEODUDE},
	{38, 38, SPECIES_MACHOP},
	{32, 32, SPECIES_GEODUDE},
	{34, 34, SPECIES_GEODUDE},
	{34, 34, SPECIES_MACHOP},
	{36, 36, SPECIES_MACHOP},
	{38, 38, SPECIES_GEODUDE},
	{40, 40, SPECIES_MACHOKE},
	{40, 40, SPECIES_GEODUDE},
	{42, 42, SPECIES_MACHOKE},
	{40, 40, SPECIES_GEODUDE},
	{42, 42, SPECIES_MACHOKE},
};

static const struct WildPokemonInfo s1_103_LandMonsInfo = {7, s1_103_LandMons};

static const struct WildPokemon s1_104_LandMons[] =
{
	{38, 38, SPECIES_GEODUDE},
	{36, 36, SPECIES_GEODUDE},
	{34, 34, SPECIES_GEODUDE},
	{40, 40, SPECIES_GEODUDE},
	{24, 24, SPECIES_SLUGMA},
	{26, 26, SPECIES_SLUGMA},
	{42, 42, SPECIES_GEODUDE},
	{28, 28, SPECIES_SLUGMA},
	{42, 42, SPECIES_GEODUDE},
	{30, 30, SPECIES_SLUGMA},
	{42, 42, SPECIES_GEODUDE},
	{30, 30, SPECIES_SLUGMA},
};

static const struct WildPokemonInfo s1_104_LandMonsInfo = {7, s1_104_LandMons};

static const struct WildPokemon s1_105_LandMons[] =
{
	{40, 40, SPECIES_GEODUDE},
	{26, 26, SPECIES_SLUGMA},
	{42, 42, SPECIES_GEODUDE},
	{24, 24, SPECIES_SLUGMA},
	{28, 28, SPECIES_SLUGMA},
	{30, 30, SPECIES_SLUGMA},
	{44, 44, SPECIES_GEODUDE},
	{32, 32, SPECIES_SLUGMA},
	{44, 44, SPECIES_GEODUDE},
	{22, 22, SPECIES_SLUGMA},
	{44, 44, SPECIES_GEODUDE},
	{22, 22, SPECIES_SLUGMA},
};

static const struct WildPokemonInfo s1_105_LandMonsInfo = {7, s1_105_LandMons};

static const struct WildPokemon s1_106_LandMons[] =
{
	{26, 26, SPECIES_SLUGMA},
	{28, 28, SPECIES_SLUGMA},
	{30, 30, SPECIES_SLUGMA},
	{32, 32, SPECIES_SLUGMA},
	{24, 24, SPECIES_SLUGMA},
	{22, 22, SPECIES_SLUGMA},
	{20, 20, SPECIES_SLUGMA},
	{34, 34, SPECIES_SLUGMA},
	{36, 36, SPECIES_SLUGMA},
	{18, 18, SPECIES_SLUGMA},
	{36, 36, SPECIES_SLUGMA},
	{18, 18, SPECIES_SLUGMA},
};

static const struct WildPokemonInfo s1_106_LandMonsInfo = {7, s1_106_LandMons};

static const struct WildPokemon s1_107_LandMons[] =
{
	{40, 40, SPECIES_GEODUDE},
	{26, 26, SPECIES_SLUGMA},
	{42, 42, SPECIES_GEODUDE},
	{24, 24, SPECIES_SLUGMA},
	{28, 28, SPECIES_SLUGMA},
	{30, 30, SPECIES_SLUGMA},
	{44, 44, SPECIES_GEODUDE},
	{32, 32, SPECIES_SLUGMA},
	{44, 44, SPECIES_GEODUDE},
	{22, 22, SPECIES_SLUGMA},
	{44, 44, SPECIES_GEODUDE},
	{22, 22, SPECIES_SLUGMA},
};

static const struct WildPokemonInfo s1_107_LandMonsInfo = {7, s1_107_LandMons};

static const struct WildPokemon s1_108_LandMons[] =
{
	{38, 38, SPECIES_GEODUDE},
	{36, 36, SPECIES_GEODUDE},
	{34, 34, SPECIES_GEODUDE},
	{40, 40, SPECIES_GEODUDE},
	{24, 24, SPECIES_SLUGMA},
	{26, 26, SPECIES_SLUGMA},
	{42, 42, SPECIES_GEODUDE},
	{28, 28, SPECIES_SLUGMA},
	{42, 42, SPECIES_GEODUDE},
	{30, 30, SPECIES_SLUGMA},
	{42, 42, SPECIES_GEODUDE},
	{30, 30, SPECIES_SLUGMA},
};

static const struct WildPokemonInfo s1_108_LandMonsInfo = {7, s1_108_LandMons};

static const struct WildPokemon s1_109_LandMons[] =
{
	{37, 37, SPECIES_PIDGEOTTO},
	{35, 35, SPECIES_GLOOM},
	{32, 32, SPECIES_PIDGEY},
	{30, 30, SPECIES_ODDISH},
	{34, 34, SPECIES_VENONAT},
	{34, 34, SPECIES_DROWZEE},
	{35, 35, SPECIES_EXEGGCUTE},
	{31, 31, SPECIES_PSYDUCK},
	{37, 37, SPECIES_VENOMOTH},
	{37, 37, SPECIES_HYPNO},
	{40, 40, SPECIES_VENOMOTH},
	{40, 40, SPECIES_HYPNO},
};

static const struct WildPokemonInfo s1_109_LandMonsInfo = {21, s1_109_LandMons};

static const struct WildPokemon s1_110_LandMons[] =
{
	{43, 43, SPECIES_SEEL},
	{45, 45, SPECIES_GOLBAT},
	{45, 45, SPECIES_SEEL},
	{47, 47, SPECIES_SEEL},
	{40, 40, SPECIES_ZUBAT},
	{49, 49, SPECIES_DEWGONG},
	{51, 51, SPECIES_DEWGONG},
	{41, 41, SPECIES_PSYDUCK},
	{48, 48, SPECIES_GOLBAT},
	{53, 53, SPECIES_DEWGONG},
	{48, 48, SPECIES_GOLBAT},
	{53, 53, SPECIES_DEWGONG},
};

static const struct WildPokemonInfo s1_110_LandMonsInfo = {7, s1_110_LandMons};

static const struct WildPokemon s1_111_LandMons[] =
{
	{25, 25, SPECIES_SWINUB},
	{45, 45, SPECIES_GOLBAT},
	{45, 45, SPECIES_SEEL},
	{27, 27, SPECIES_SWINUB},
	{40, 40, SPECIES_ZUBAT},
	{29, 29, SPECIES_SWINUB},
	{30, 30, SPECIES_DELIBIRD},
	{31, 31, SPECIES_SWINUB},
	{48, 48, SPECIES_GOLBAT},
	{23, 23, SPECIES_SWINUB},
	{48, 48, SPECIES_GOLBAT},
	{23, 23, SPECIES_SWINUB},
};

static const struct WildPokemonInfo s1_111_LandMonsInfo = {7, s1_111_LandMons};

static const struct WildPokemon s1_112_LandMons[] =
{
	{25, 25, SPECIES_SWINUB},
	{45, 45, SPECIES_GOLBAT},
	{45, 45, SPECIES_SEEL},
	{27, 27, SPECIES_SWINUB},
	{40, 40, SPECIES_ZUBAT},
	{29, 29, SPECIES_SWINUB},
	{30, 30, SPECIES_DELIBIRD},
	{31, 31, SPECIES_SWINUB},
	{48, 48, SPECIES_GOLBAT},
	{23, 23, SPECIES_SWINUB},
	{48, 48, SPECIES_GOLBAT},
	{23, 23, SPECIES_SWINUB},
};

static const struct WildPokemonInfo s1_112_LandMonsInfo = {7, s1_112_LandMons};

static const struct WildPokemon s1_113_LandMons[] =
{
	{43, 43, SPECIES_SEEL},
	{45, 45, SPECIES_GOLBAT},
	{45, 45, SPECIES_SEEL},
	{47, 47, SPECIES_SEEL},
	{40, 40, SPECIES_ZUBAT},
	{49, 49, SPECIES_DEWGONG},
	{51, 51, SPECIES_DEWGONG},
	{41, 41, SPECIES_PSYDUCK},
	{48, 48, SPECIES_GOLBAT},
	{53, 53, SPECIES_DEWGONG},
	{48, 48, SPECIES_GOLBAT},
	{53, 53, SPECIES_DEWGONG},
};

static const struct WildPokemonInfo s1_113_LandMonsInfo = {7, s1_113_LandMons};

static const struct WildPokemon s1_121_LandMons[] =
{
	{9, 9, SPECIES_SPINARAK},
	{9, 9, SPECIES_KAKUNA},
	{14, 14, SPECIES_SPINARAK},
	{6, 6, SPECIES_CATERPIE},
	{6, 6, SPECIES_WEEDLE},
	{15, 15, SPECIES_HERACROSS},
	{9, 9, SPECIES_METAPOD},
	{20, 20, SPECIES_HERACROSS},
	{9, 9, SPECIES_LEDYBA},
	{25, 25, SPECIES_HERACROSS},
	{14, 14, SPECIES_LEDYBA},
	{30, 30, SPECIES_HERACROSS},
};

static const struct WildPokemonInfo s1_121_LandMonsInfo = {21, s1_121_LandMons};

static const struct WildPokemon s2_13_LandMons[] =
{
	{40, 40, SPECIES_GASTLY},
	{37, 37, SPECIES_ZUBAT},
	{44, 44, SPECIES_HAUNTER},
	{46, 46, SPECIES_HAUNTER},
	{41, 41, SPECIES_GOLBAT},
	{43, 43, SPECIES_GOLBAT},
	{38, 38, SPECIES_GASTLY},
	{48, 48, SPECIES_HAUNTER},
	{50, 50, SPECIES_HAUNTER},
	{22, 22, SPECIES_MURKROW},
	{52, 52, SPECIES_HAUNTER},
	{22, 22, SPECIES_MURKROW},
};

static const struct WildPokemonInfo s2_13_LandMonsInfo = {1, s2_13_LandMons};

static const struct WildPokemon s2_14_LandMons[] =
{
	{40, 40, SPECIES_GASTLY},
	{37, 37, SPECIES_ZUBAT},
	{44, 44, SPECIES_HAUNTER},
	{46, 46, SPECIES_HAUNTER},
	{41, 41, SPECIES_GOLBAT},
	{43, 43, SPECIES_GOLBAT},
	{38, 38, SPECIES_GASTLY},
	{48, 48, SPECIES_HAUNTER},
	{50, 50, SPECIES_HAUNTER},
	{22, 22, SPECIES_MURKROW},
	{52, 52, SPECIES_HAUNTER},
	{22, 22, SPECIES_MURKROW},
};

static const struct WildPokemonInfo s2_14_LandMonsInfo = {2, s2_14_LandMons};

static const struct WildPokemon s2_15_LandMons[] =
{
	{40, 40, SPECIES_GASTLY},
	{37, 37, SPECIES_ZUBAT},
	{44, 44, SPECIES_HAUNTER},
	{46, 46, SPECIES_HAUNTER},
	{41, 41, SPECIES_GOLBAT},
	{43, 43, SPECIES_GOLBAT},
	{38, 38, SPECIES_GASTLY},
	{48, 48, SPECIES_HAUNTER},
	{50, 50, SPECIES_HAUNTER},
	{22, 22, SPECIES_MURKROW},
	{52, 52, SPECIES_HAUNTER},
	{22, 22, SPECIES_MURKROW},
};

static const struct WildPokemonInfo s2_15_LandMonsInfo = {3, s2_15_LandMons};

static const struct WildPokemon s2_16_LandMons[] =
{
	{40, 40, SPECIES_GASTLY},
	{37, 37, SPECIES_ZUBAT},
	{44, 44, SPECIES_HAUNTER},
	{46, 46, SPECIES_HAUNTER},
	{41, 41, SPECIES_GOLBAT},
	{43, 43, SPECIES_GOLBAT},
	{38, 38, SPECIES_GASTLY},
	{48, 48, SPECIES_HAUNTER},
	{50, 50, SPECIES_HAUNTER},
	{22, 22, SPECIES_MURKROW},
	{52, 52, SPECIES_HAUNTER},
	{22, 22, SPECIES_MURKROW},
};

static const struct WildPokemonInfo s2_16_LandMonsInfo = {4, s2_16_LandMons};

static const struct WildPokemon s2_17_LandMons[] =
{
	{40, 40, SPECIES_GASTLY},
	{37, 37, SPECIES_ZUBAT},
	{44, 44, SPECIES_HAUNTER},
	{46, 46, SPECIES_HAUNTER},
	{41, 41, SPECIES_GOLBAT},
	{43, 43, SPECIES_GOLBAT},
	{38, 38, SPECIES_GASTLY},
	{48, 48, SPECIES_HAUNTER},
	{50, 50, SPECIES_HAUNTER},
	{22, 22, SPECIES_MURKROW},
	{52, 52, SPECIES_HAUNTER},
	{22, 22, SPECIES_MURKROW},
};

static const struct WildPokemonInfo s2_17_LandMonsInfo = {5, s2_17_LandMons};

static const struct WildPokemon s2_18_LandMons[] =
{
	{40, 40, SPECIES_GASTLY},
	{37, 37, SPECIES_ZUBAT},
	{44, 44, SPECIES_HAUNTER},
	{46, 46, SPECIES_HAUNTER},
	{41, 41, SPECIES_GOLBAT},
	{43, 43, SPECIES_GOLBAT},
	{38, 38, SPECIES_GASTLY},
	{48, 48, SPECIES_HAUNTER},
	{50, 50, SPECIES_HAUNTER},
	{22, 22, SPECIES_MURKROW},
	{52, 52, SPECIES_HAUNTER},
	{22, 22, SPECIES_MURKROW},
};

static const struct WildPokemonInfo s2_18_LandMonsInfo = {6, s2_18_LandMons};

static const struct WildPokemon s2_19_LandMons[] =
{
	{40, 40, SPECIES_GASTLY},
	{37, 37, SPECIES_ZUBAT},
	{44, 44, SPECIES_HAUNTER},
	{46, 46, SPECIES_HAUNTER},
	{41, 41, SPECIES_GOLBAT},
	{43, 43, SPECIES_GOLBAT},
	{38, 38, SPECIES_GASTLY},
	{48, 48, SPECIES_HAUNTER},
	{50, 50, SPECIES_HAUNTER},
	{22, 22, SPECIES_MURKROW},
	{52, 52, SPECIES_HAUNTER},
	{22, 22, SPECIES_MURKROW},
};

static const struct WildPokemonInfo s2_19_LandMonsInfo = {7, s2_19_LandMons};

static const struct WildPokemon s2_20_LandMons[] =
{
	{40, 40, SPECIES_GASTLY},
	{37, 37, SPECIES_ZUBAT},
	{44, 44, SPECIES_HAUNTER},
	{46, 46, SPECIES_HAUNTER},
	{41, 41, SPECIES_GOLBAT},
	{43, 43, SPECIES_GOLBAT},
	{38, 38, SPECIES_GASTLY},
	{48, 48, SPECIES_HAUNTER},
	{50, 50, SPECIES_HAUNTER},
	{22, 22, SPECIES_MURKROW},
	{52, 52, SPECIES_HAUNTER},
	{22, 22, SPECIES_MURKROW},
};

static const struct WildPokemonInfo s2_20_LandMonsInfo = {8, s2_20_LandMons};

static const struct WildPokemon s2_21_LandMons[] =
{
	{40, 40, SPECIES_GASTLY},
	{37, 37, SPECIES_ZUBAT},
	{44, 44, SPECIES_HAUNTER},
	{46, 46, SPECIES_HAUNTER},
	{41, 41, SPECIES_GOLBAT},
	{43, 43, SPECIES_GOLBAT},
	{38, 38, SPECIES_GASTLY},
	{48, 48, SPECIES_HAUNTER},
	{50, 50, SPECIES_HAUNTER},
	{22, 22, SPECIES_MURKROW},
	{52, 52, SPECIES_HAUNTER},
	{22, 22, SPECIES_MURKROW},
};

static const struct WildPokemonInfo s2_21_LandMonsInfo = {9, s2_21_LandMons};

static const struct WildPokemon s2_22_LandMons[] =
{
	{40, 40, SPECIES_GASTLY},
	{37, 37, SPECIES_ZUBAT},
	{44, 44, SPECIES_HAUNTER},
	{46, 46, SPECIES_HAUNTER},
	{41, 41, SPECIES_GOLBAT},
	{43, 43, SPECIES_GOLBAT},
	{38, 38, SPECIES_GASTLY},
	{48, 48, SPECIES_HAUNTER},
	{50, 50, SPECIES_HAUNTER},
	{22, 22, SPECIES_MURKROW},
	{52, 52, SPECIES_HAUNTER},
	{22, 22, SPECIES_MURKROW},
};

static const struct WildPokemonInfo s2_22_LandMonsInfo = {10, s2_22_LandMons};

static const struct WildPokemon s2_23_LandMons[] =
{
	{40, 40, SPECIES_GASTLY},
	{37, 37, SPECIES_ZUBAT},
	{44, 44, SPECIES_HAUNTER},
	{46, 46, SPECIES_HAUNTER},
	{41, 41, SPECIES_GOLBAT},
	{15, 15, SPECIES_MURKROW},
	{20, 20, SPECIES_MURKROW},
	{48, 48, SPECIES_HAUNTER},
	{50, 50, SPECIES_HAUNTER},
	{22, 22, SPECIES_MURKROW},
	{52, 52, SPECIES_HAUNTER},
	{22, 22, SPECIES_MURKROW},
};

static const struct WildPokemonInfo s2_23_LandMonsInfo = {5, s2_23_LandMons};

static const struct WildPokemon s2_24_LandMons[] =
{
	{40, 40, SPECIES_GASTLY},
	{37, 37, SPECIES_ZUBAT},
	{44, 44, SPECIES_HAUNTER},
	{46, 46, SPECIES_HAUNTER},
	{41, 41, SPECIES_GOLBAT},
	{15, 15, SPECIES_MURKROW},
	{20, 20, SPECIES_MURKROW},
	{48, 48, SPECIES_HAUNTER},
	{50, 50, SPECIES_HAUNTER},
	{22, 22, SPECIES_MURKROW},
	{52, 52, SPECIES_HAUNTER},
	{22, 22, SPECIES_MURKROW},
};

static const struct WildPokemonInfo s2_24_LandMonsInfo = {5, s2_24_LandMons};

static const struct WildPokemon s2_25_LandMons[] =
{
	{40, 40, SPECIES_GASTLY},
	{37, 37, SPECIES_ZUBAT},
	{44, 44, SPECIES_HAUNTER},
	{46, 46, SPECIES_HAUNTER},
	{41, 41, SPECIES_GOLBAT},
	{15, 15, SPECIES_MURKROW},
	{20, 20, SPECIES_MURKROW},
	{48, 48, SPECIES_HAUNTER},
	{50, 50, SPECIES_HAUNTER},
	{22, 22, SPECIES_MURKROW},
	{52, 52, SPECIES_HAUNTER},
	{22, 22, SPECIES_MURKROW},
};

static const struct WildPokemonInfo s2_25_LandMonsInfo = {5, s2_25_LandMons};

static const struct WildPokemon s2_26_LandMons[] =
{
	{40, 40, SPECIES_GASTLY},
	{37, 37, SPECIES_ZUBAT},
	{44, 44, SPECIES_HAUNTER},
	{46, 46, SPECIES_HAUNTER},
	{41, 41, SPECIES_GOLBAT},
	{15, 15, SPECIES_MURKROW},
	{20, 20, SPECIES_MURKROW},
	{48, 48, SPECIES_HAUNTER},
	{50, 50, SPECIES_HAUNTER},
	{22, 22, SPECIES_MURKROW},
	{52, 52, SPECIES_HAUNTER},
	{22, 22, SPECIES_MURKROW},
};

static const struct WildPokemonInfo s2_26_LandMonsInfo = {5, s2_26_LandMons};

static const struct WildPokemon s3_45_LandMons[] =
{
	{70, 72, SPECIES_DURANT},
	{71, 72, SPECIES_PYROAR},
	{71, 72, SPECIES_PYROAR},
	{70, 73, SPECIES_CENTISKORCH},
	{70, 73, SPECIES_CENTISKORCH},
	{70, 71, SPECIES_CRABOMINABLE},
	{72, 72, SPECIES_CHINGLING},
	{72, 72, SPECIES_CHINGLING},
	{71, 72, SPECIES_DURALUDON},
	{71, 72, SPECIES_DURALUDON},
	{71, 72, SPECIES_CRABOMINABLE},
	{72, 72, SPECIES_CRABOMINABLE},
};

static const struct WildPokemonInfo s3_45_LandMonsInfo = {21, s3_45_LandMons};

static const struct WildPokemon s3_46_LandMons[] =
{
	{32, 32, SPECIES_TROPIUS},
	{33, 33, SPECIES_HEATMOR},
	{31, 31, SPECIES_TROPIUS},
	{35, 35, SPECIES_HEATMOR},
	{36, 36, SPECIES_INDEEDEE},
	{31, 31, SPECIES_INDEEDEE},
	{38, 38, SPECIES_EKANS},
	{31, 31, SPECIES_PSYDUCK},
	{40, 40, SPECIES_FEAROW},
	{37, 37, SPECIES_PERSIAN},
	{40, 40, SPECIES_FEAROW},
	{40, 40, SPECIES_PERSIAN},
};

static const struct WildPokemonInfo s3_46_LandMonsInfo = {21, s3_46_LandMons};

static const struct WildPokemon s3_47_LandMons[] =
{
	{31, 31, SPECIES_SPEAROW},
	{30, 30, SPECIES_ODDISH},
	{32, 32, SPECIES_ODDISH},
	{36, 36, SPECIES_GLOOM},
	{36, 36, SPECIES_FEAROW},
	{31, 31, SPECIES_MEOWTH},
	{38, 38, SPECIES_GLOOM},
	{31, 31, SPECIES_PSYDUCK},
	{37, 37, SPECIES_GOLDUCK},
	{37, 37, SPECIES_PERSIAN},
	{40, 40, SPECIES_GOLDUCK},
	{40, 40, SPECIES_PERSIAN},
};

static const struct WildPokemonInfo s3_47_LandMonsInfo = {21, s3_47_LandMons};

static const struct WildPokemon s3_48_LandMons[] =
{
	{32, 32, SPECIES_PIDGEY},
	{31, 31, SPECIES_ODDISH},
	{29, 29, SPECIES_PIDGEY},
	{36, 36, SPECIES_GLOOM},
	{34, 34, SPECIES_PIDGEOTTO},
	{31, 31, SPECIES_MEOWTH},
	{34, 34, SPECIES_VENONAT},
	{31, 31, SPECIES_PSYDUCK},
	{37, 37, SPECIES_PIDGEOTTO},
	{37, 37, SPECIES_PERSIAN},
	{40, 40, SPECIES_PIDGEOTTO},
	{40, 40, SPECIES_PERSIAN},
};

static const struct WildPokemonInfo s3_48_LandMonsInfo = {21, s3_48_LandMons};

static const struct WildPokemon s3_49_LandMons[] =
{
	{15, 15, SPECIES_DUNSPARCE},
	{15, 15, SPECIES_DUNSPARCE},
	{10, 10, SPECIES_DUNSPARCE},
	{10, 10, SPECIES_DUNSPARCE},
	{20, 20, SPECIES_DUNSPARCE},
	{20, 20, SPECIES_DUNSPARCE},
	{25, 25, SPECIES_DUNSPARCE},
	{30, 30, SPECIES_DUNSPARCE},
	{25, 25, SPECIES_DUNSPARCE},
	{30, 30, SPECIES_DUNSPARCE},
	{5, 5, SPECIES_DUNSPARCE},
	{35, 35, SPECIES_DUNSPARCE},
};

static const struct WildPokemonInfo s3_49_LandMonsInfo = {1, s3_49_LandMons};

static const struct WildPokemon s3_56_LandMons[] =
{
	{44, 44, SPECIES_PIDGEY},
	{10, 10, SPECIES_SENTRET},
	{48, 48, SPECIES_PIDGEOTTO},
	{10, 10, SPECIES_HOPPIP},
	{15, 15, SPECIES_SENTRET},
	{41, 41, SPECIES_MEOWTH},
	{15, 15, SPECIES_HOPPIP},
	{41, 41, SPECIES_PSYDUCK},
	{50, 50, SPECIES_PIDGEOTTO},
	{47, 47, SPECIES_PERSIAN},
	{50, 50, SPECIES_PIDGEOTTO},
	{50, 50, SPECIES_PERSIAN},
};

static const struct WildPokemonInfo s3_56_LandMonsInfo = {21, s3_56_LandMons};

static const struct WildPokemon s3_57_LandMons[] =
{
	{10, 10, SPECIES_HOPPIP},
	{12, 12, SPECIES_HOPPIP},
	{8, 8, SPECIES_HOPPIP},
	{14, 14, SPECIES_HOPPIP},
	{10, 10, SPECIES_HOPPIP},
	{12, 12, SPECIES_HOPPIP},
	{16, 16, SPECIES_HOPPIP},
	{6, 6, SPECIES_HOPPIP},
	{8, 8, SPECIES_HOPPIP},
	{14, 14, SPECIES_HOPPIP},
	{8, 8, SPECIES_HOPPIP},
	{14, 14, SPECIES_HOPPIP},
};

static const struct WildPokemonInfo s3_57_LandMonsInfo = {21, s3_57_LandMons};

static const struct WildPokemon s3_60_LandMons[] =
{
	{44, 44, SPECIES_SPEAROW},
	{10, 10, SPECIES_SENTRET},
	{44, 44, SPECIES_ODDISH},
	{48, 48, SPECIES_FEAROW},
	{15, 15, SPECIES_SENTRET},
	{41, 41, SPECIES_MEOWTH},
	{48, 48, SPECIES_GLOOM},
	{41, 41, SPECIES_PSYDUCK},
	{50, 50, SPECIES_FEAROW},
	{47, 47, SPECIES_PERSIAN},
	{50, 50, SPECIES_FEAROW},
	{50, 50, SPECIES_PERSIAN},
};

static const struct WildPokemonInfo s3_60_LandMonsInfo = {21, s3_60_LandMons};

static const struct WildPokemon s3_61_LandMons[] =
{
	{15, 15, SPECIES_NATU},
	{44, 44, SPECIES_SPEAROW},
	{18, 18, SPECIES_YANMA},
	{15, 15, SPECIES_WOOPER},
	{49, 49, SPECIES_FEAROW},
	{43, 43, SPECIES_MEOWTH},
	{25, 25, SPECIES_WOBBUFFET},
	{41, 41, SPECIES_PSYDUCK},
	{20, 20, SPECIES_NATU},
	{49, 49, SPECIES_PERSIAN},
	{20, 20, SPECIES_NATU},
	{52, 52, SPECIES_PERSIAN},
};

static const struct WildPokemonInfo s3_61_LandMonsInfo = {21, s3_61_LandMons};

static const struct WildPokemon s3_63_LandMons[] =
{
	{44, 44, SPECIES_SPEAROW},
	{10, 10, SPECIES_SENTRET},
	{10, 10, SPECIES_PHANPY},
	{48, 48, SPECIES_FEAROW},
	{15, 15, SPECIES_SENTRET},
	{41, 41, SPECIES_MEOWTH},
	{50, 50, SPECIES_FEAROW},
	{41, 41, SPECIES_PSYDUCK},
	{15, 15, SPECIES_PHANPY},
	{47, 47, SPECIES_PERSIAN},
	{15, 15, SPECIES_PHANPY},
	{50, 50, SPECIES_PERSIAN},
};

static const struct WildPokemonInfo s3_63_LandMonsInfo = {21, s3_63_LandMons};

static const struct WildPokemon s3_64_LandMons[] =
{
	{46, 46, SPECIES_GEODUDE},
	{15, 15, SPECIES_PHANPY},
	{46, 46, SPECIES_CUBONE},
	{50, 50, SPECIES_FEAROW},
	{52, 52, SPECIES_MAROWAK},
	{43, 43, SPECIES_MEOWTH},
	{54, 54, SPECIES_ONIX},
	{30, 30, SPECIES_SKARMORY},
	{15, 15, SPECIES_LARVITAR},
	{49, 49, SPECIES_PERSIAN},
	{20, 20, SPECIES_LARVITAR},
	{52, 52, SPECIES_PERSIAN},
};

static const struct WildPokemonInfo s3_64_LandMonsInfo = {21, s3_64_LandMons};

static const struct WildPokemon s3_19_LandMons[] =
{
	{2, 2, SPECIES_RATTATA},
	{2, 2, SPECIES_PIDGEY},
	{3, 3, SPECIES_BIDOOF},
	{3, 3, SPECIES_ZIGZAGOON},
	{2, 2, SPECIES_SENTRET},
	{2, 2, SPECIES_BUDEW},
	{3, 3, SPECIES_LILLIPUP},
	{3, 3, SPECIES_LILLIPUP},
	{4, 4, SPECIES_POOCHYENA},
	{4, 4, SPECIES_POOCHYENA},
	{5, 5, SPECIES_PANPOUR},
	{4, 4, SPECIES_PANPOUR},
};

static const struct WildPokemonInfo s3_19_LandMonsInfo = {21, s3_19_LandMons};

static const struct WildPokemon s3_20_LandMons[] =
{
	{4, 4, SPECIES_POOCHYENA},
	{4, 4, SPECIES_WINGULL},
	{4, 5, SPECIES_SHINX},
	{4, 5, SPECIES_MAREEP},
	{4, 5, SPECIES_HOPPIP},
	{4, 4, SPECIES_LITLEO},
	{5, 5, SPECIES_PIDOVE},
	{5, 5, SPECIES_LILLIPUP},
	{4, 5, SPECIES_PATRAT},
	{4, 5, SPECIES_SKWOVET},
	{5, 5, SPECIES_PANSAGE},
	{5, 5, SPECIES_PANSAGE},
};

static const struct WildPokemonInfo s3_20_LandMonsInfo = {21, s3_20_LandMons};

static const struct WildPokemon s3_21_LandMons[] =
{
	{8, 8, SPECIES_GLAMEOW},
	{8, 8, SPECIES_EKANS},
	{8, 9, SPECIES_SPEAROW},
	{9, 9, SPECIES_NIDORAN_F},
	{8, 9, SPECIES_FLABEBE},
	{8, 8, SPECIES_NIDORAN_M},
	{10, 10, SPECIES_MEOWTH},
	{8, 9, SPECIES_SKIDDO},
	{10, 10, SPECIES_SKIDDO},
	{9, 9, SPECIES_STUNKY},
	{7, 7, SPECIES_JIGGLYPUFF},
	{7, 7, SPECIES_JIGGLYPUFF},
};

static const struct WildPokemonInfo s3_21_LandMonsInfo = {21, s3_21_LandMons};

static const struct WildPokemon s3_22_LandMons[] =
{
	{15, 15, SPECIES_PHANPY},
	{14, 15, SPECIES_BELLSPROUT},
	{14, 15, SPECIES_SHINX},
	{14, 15, SPECIES_PACHIRISU},
	{14, 16, SPECIES_GLAMEOW},
	{14, 15, SPECIES_BUNEARY},
	{14, 16, SPECIES_PUMPKABOO},
	{14, 14, SPECIES_FLABEBE},
	{15, 15, SPECIES_SKIDDO},
	{14, 17, SPECIES_SKIDDO},
	{15, 15, SPECIES_YANMA},
	{15, 15, SPECIES_YANMA},
};

static const struct WildPokemonInfo s3_22_LandMonsInfo = {21, s3_22_LandMons};

static const struct WildPokemon s3_23_LandMons[] =
{
	{18, 19, SPECIES_MEOWTH},
	{18, 20, SPECIES_HATENNA},
	{19, 20, SPECIES_SOLOSIS},
	{19, 20, SPECIES_GROWLITHE},
	{19, 21, SPECIES_SWIRLIX},
	{19, 21, SPECIES_MORELULL},
	{19, 21, SPECIES_VULPIX},
	{18, 20, SPECIES_SOLOSIS},
	{18, 20, SPECIES_GRIMER},
	{18, 20, SPECIES_GRIMER},
	{18, 21, SPECIES_DRIFLOON},
	{18, 18, SPECIES_DRIFLOON},
};

static const struct WildPokemonInfo s3_23_LandMonsInfo = {21, s3_23_LandMons};

static const struct WildPokemon s3_24_LandMons[] =
{
	{19, 21, SPECIES_SUNKERN},
	{19, 21, SPECIES_CHERUBI},
	{19, 21, SPECIES_GULPIN},
	{19, 21, SPECIES_FURFROU},
	{19, 21, SPECIES_SIZZLIPEDE},
	{18, 20, SPECIES_DEDENNE},
	{18, 20, SPECIES_LICKITUNG},
	{18, 21, SPECIES_LICKITUNG},
	{18, 21, SPECIES_MEDITITE},
	{18, 21, SPECIES_MEDITITE},
	{18, 18, SPECIES_TOGEPI},
	{18, 18, SPECIES_TOGEPI},
};

static const struct WildPokemonInfo s3_24_LandMonsInfo = {21, s3_24_LandMons};

static const struct WildPokemon s3_25_LandMons[] =
{
	{33, 37, SPECIES_DEERLING},
	{34, 38, SPECIES_INKAY},
	{38, 39, SPECIES_RUFFLET},
	{35, 37, SPECIES_RUFFLET},
	{33, 37, SPECIES_CUTIEFLY},
	{35, 39, SPECIES_APPLIN},
	{36, 38, SPECIES_PASSIMIAN},
	{36, 38, SPECIES_PASSIMIAN},
	{35, 38, SPECIES_MIENFOO},
	{34, 39, SPECIES_MIENFOO},
	{35, 35, SPECIES_PORYGON},
	{35, 35, SPECIES_PORYGON},
};

static const struct WildPokemonInfo s3_25_LandMonsInfo = {21, s3_25_LandMons};

static const struct WildPokemon s3_26_LandMons[] =
{
	{33, 35, SPECIES_LOMBRE},
	{33, 35, SPECIES_MINCCINO},
	{34, 34, SPECIES_VULPIX},
	{34, 34, SPECIES_KIRLIA},
	{35, 35, SPECIES_VENIPEDE},
	{33, 35, SPECIES_VENIPEDE},
	{34, 34, SPECIES_COMFEY},
	{34, 34, SPECIES_COMFEY},
	{35, 35, SPECIES_STANTLER},
	{35, 35, SPECIES_STANTLER},
	{36, 36, SPECIES_MILTANK},
	{36, 36, SPECIES_MILTANK},
};

static const struct WildPokemonInfo s3_26_LandMonsInfo = {21, s3_26_LandMons};

static const struct WildPokemon s3_27_LandMons[] =
{
	{24, 27, SPECIES_SHELMET},
	{25, 27, SPECIES_EXEGGCUTE},
	{25, 28, SPECIES_DARUMAKA},
	{25, 28, SPECIES_DEWPIDER},
	{24, 27, SPECIES_INDEEDEE},
	{25, 28, SPECIES_CORVISQUIRE},
	{24, 27, SPECIES_MIME_JR},
	{27, 27, SPECIES_MIME_JR},
	{25, 26, SPECIES_TROPIUS},
	{24, 26, SPECIES_TROPIUS},
	{24, 26, SPECIES_SKORUPI},
	{24, 26, SPECIES_SKORUPI},
};

static const struct WildPokemonInfo s3_27_LandMonsInfo = {21, s3_27_LandMons};

static const struct WildPokemon s3_28_LandMons[] =
{
	{25, 28, SPECIES_VOLTORB},
	{25, 28, SPECIES_HELIOPTILE},
	{26, 29, SPECIES_HELIOPTILE},
	{25, 30, SPECIES_PINCURCHIN},
	{25, 30, SPECIES_PLUSLE},
	{25, 30, SPECIES_SKITTY},
	{25, 30, SPECIES_EMOLGA},
	{26, 30, SPECIES_EMOLGA},
	{25, 28, SPECIES_MAGNEMITE},
	{25, 28, SPECIES_MAGNEMITE},
	{25, 29, SPECIES_CROAGUNK},
	{25, 29, SPECIES_CROAGUNK},
};

static const struct WildPokemonInfo s3_28_LandMonsInfo = {21, s3_28_LandMons};

static const struct WildPokemon s3_29_LandMons[] =
{
	{22, 24, SPECIES_STUFFUL},
	{22, 24, SPECIES_DUCKLETT},
	{20, 23, SPECIES_DROWZEE},
	{23, 24, SPECIES_BALTOY},
	{23, 25, SPECIES_MARACTUS},
	{23, 25, SPECIES_BUNNELBY},
	{23, 25, SPECIES_SCRAGGY},
	{24, 26, SPECIES_SCRAGGY},
	{23, 25, SPECIES_SANDYGAST},
	{23, 25, SPECIES_SANDYGAST},
	{23, 25, SPECIES_SIGILYPH},
	{23, 25, SPECIES_SIGILYPH},
};

static const struct WildPokemonInfo s3_29_LandMonsInfo = {21, s3_29_LandMons};

static const struct WildPokemon s3_30_LandMons[] =
{
	{47, 49, SPECIES_MUNNA},
	{46, 48, SPECIES_PIDGEOT},
	{47, 49, SPECIES_SWIRLIX},
	{47, 48, SPECIES_CAMERUPT},
	{47, 48, SPECIES_PANSEAR},
	{48, 48, SPECIES_ORICORIO_S},
	{47, 47, SPECIES_RAPIDASH},
	{46, 47, SPECIES_RAPIDASH},
	{47, 48, SPECIES_DRIFLOON},
	{47, 48, SPECIES_DRIFLOON},
	{40, 40, SPECIES_BULBASAUR},
	{40, 40, SPECIES_BULBASAUR},
};

static const struct WildPokemonInfo s3_30_LandMonsInfo = {21, s3_30_LandMons};

static const struct WildPokemon s3_31_LandMons[] =
{
	{50, 53, SPECIES_TANGROWTH},
	{50, 52, SPECIES_VANILLUXE},
	{49, 51, SPECIES_ROSELIA},
	{49, 50, SPECIES_LURANTIS},
	{50, 50, SPECIES_PANSAGE},
	{47, 49, SPECIES_ORICORIO_P},
	{50, 51, SPECIES_MILTANK},
	{48, 48, SPECIES_MILTANK},
	{47, 47, SPECIES_ZANGOOSE},
	{49, 49, SPECIES_ZANGOOSE},
	{45, 45, SPECIES_CHARMANDER},
	{45, 45, SPECIES_CHARMANDER},
};

static const struct WildPokemonInfo s3_31_LandMonsInfo = {21, s3_31_LandMons};

static const struct WildPokemon s3_32_LandMons[] =
{
	{50, 50, SPECIES_PELIPPER},
	{51, 53, SPECIES_SWADLOON},
	{50, 50, SPECIES_TORKOAL},
	{49, 49, SPECIES_TORKOAL},
	{50, 53, SPECIES_WHIRLIPEDE},
	{49, 49, SPECIES_WHIRLIPEDE},
	{48, 50, SPECIES_WHIRLIPEDE},
	{49, 51, SPECIES_WHIRLIPEDE},
	{48, 48, SPECIES_DURANT},
	{48, 48, SPECIES_DURANT},
	{45, 45, SPECIES_GOLISOPOD},
	{45, 45, SPECIES_GOLISOPOD},
};

static const struct WildPokemonInfo s3_32_LandMonsInfo = {21, s3_32_LandMons};

static const struct WildPokemon s3_33_LandMons[] =
{
	{50, 52, SPECIES_AMOONGUSS},
	{49, 53, SPECIES_AMBIPOM},
	{50, 53, SPECIES_BEEDRILL},
	{50, 52, SPECIES_GALVANTULA},
	{50, 53, SPECIES_PANPOUR},
	{50, 54, SPECIES_ORICORIO},
	{50, 52, SPECIES_SIGILYPH},
	{50, 53, SPECIES_SIGILYPH},
	{50, 52, SPECIES_FERROTHORN},
	{50, 52, SPECIES_FERROTHORN},
	{48, 48, SPECIES_DITTO},
	{48, 48, SPECIES_DITTO},
};

static const struct WildPokemonInfo s3_33_LandMonsInfo = {21, s3_33_LandMons};

static const struct WildPokemon s3_34_LandMons[] =
{
	{34, 38, SPECIES_MUDBRAY},
	{34, 38, SPECIES_DUOSION},
	{35, 38, SPECIES_DODRIO},
	{34, 36, SPECIES_FALINKS},
	{35, 35, SPECIES_GULPIN},
	{34, 37, SPECIES_TOGEDEMARU},
	{35, 35, SPECIES_AUDINO},
	{34, 36, SPECIES_TOGEDEMARU},
	{34, 37, SPECIES_ELGYEM},
	{35, 36, SPECIES_ELGYEM},
	{38, 38, SPECIES_HAWLUCHA},
	{38, 38, SPECIES_HAWLUCHA},
};

static const struct WildPokemonInfo s3_34_LandMonsInfo = {21, s3_34_LandMons};

static const struct WildPokemon s3_35_LandMons[] =
{
	{47, 49, SPECIES_WEEZING},
	{46, 49, SPECIES_ZEBSTRIKA},
	{47, 49, SPECIES_MUK},
	{47, 50, SPECIES_HYPNO},
	{46, 48, SPECIES_GRUMPIG},
	{47, 49, SPECIES_TORKOAL},
	{43, 43, SPECIES_AUDINO},
	{43, 43, SPECIES_AUDINO},
	{47, 49, SPECIES_DRAMPA},
	{46, 46, SPECIES_DRAMPA},
	{45, 45, SPECIES_SKARMORY},
	{45, 45, SPECIES_SKARMORY},
};

static const struct WildPokemonInfo s3_35_LandMonsInfo = {21, s3_35_LandMons};

static const struct WildPokemon s3_36_LandMons[] =
{
	{50, 53, SPECIES_XATU},
	{50, 53, SPECIES_VIGOROTH},
	{50, 52, SPECIES_LEAVANNY},
	{49, 51, SPECIES_ABOMASNOW},
	{50, 50, SPECIES_ALTARIA},
	{52, 52, SPECIES_ORICORIO},
	{49, 51, SPECIES_TOXICROAK},
	{50, 50, SPECIES_TOXICROAK},
	{48, 48, SPECIES_BISHARP},
	{49, 49, SPECIES_BISHARP},
	{45, 45, SPECIES_EEVEE},
	{45, 45, SPECIES_EEVEE},
};

static const struct WildPokemonInfo s3_36_LandMonsInfo = {21, s3_36_LandMons};

static const struct WildPokemon s3_39_LandMons[] =
{
	{50, 52, SPECIES_KINGLER},
	{50, 53, SPECIES_KINGLER},
	{50, 52, SPECIES_WEEPINBELL},
	{50, 52, SPECIES_WEEPINBELL},
	{49, 51, SPECIES_NIDORINO},
	{49, 51, SPECIES_NIDORINO},
	{48, 48, SPECIES_KRICKETUNE},
	{48, 48, SPECIES_KRICKETUNE},
	{48, 49, SPECIES_ARIADOS},
	{49, 49, SPECIES_ARIADOS},
	{45, 45, SPECIES_VICTREEBEL},
	{45, 45, SPECIES_VICTREEBEL},
};

static const struct WildPokemonInfo s3_39_LandMonsInfo = {14, s3_39_LandMons};

static const struct WildPokemon s3_40_LandMons[] =
{
	{22, 22, SPECIES_TANGELA},
	{23, 23, SPECIES_TANGELA},
	{24, 24, SPECIES_TANGELA},
	{21, 21, SPECIES_TANGELA},
	{25, 25, SPECIES_TANGELA},
	{20, 20, SPECIES_TANGELA},
	{19, 19, SPECIES_TANGELA},
	{26, 26, SPECIES_TANGELA},
	{18, 18, SPECIES_TANGELA},
	{27, 27, SPECIES_TANGELA},
	{17, 17, SPECIES_TANGELA},
	{28, 28, SPECIES_TANGELA},
};

static const struct WildPokemonInfo s3_40_LandMonsInfo = {14, s3_40_LandMons};

static const struct WildPokemon s3_41_LandMons[] =
{
	{3, 3, SPECIES_WOOLOO},
	{3, 3, SPECIES_MANKEY},
	{4, 4, SPECIES_SPEAROW},
	{4, 4, SPECIES_STARLY},
	{2, 2, SPECIES_BUDEW},
	{2, 2, SPECIES_YUNGOOS},
	{3, 3, SPECIES_WOOLOO},
	{5, 5, SPECIES_PIKIPEK},
	{5, 5, SPECIES_PIKIPEK},
	{5, 5, SPECIES_ROCKRUFF},
	{5, 5, SPECIES_PANSEAR},
	{5, 5, SPECIES_PANSEAR},
};

static const struct WildPokemonInfo s3_41_LandMonsInfo = {21, s3_41_LandMons};

static const struct WildPokemon s3_42_LandMons[] =
{
	{32, 32, SPECIES_PRIMEAPE},
	{40, 40, SPECIES_FEAROW},
	{34, 34, SPECIES_SIMISAGE},
	{34, 34, SPECIES_SIMISEAR},
	{32, 32, SPECIES_SIMIPOUR},
	{34, 34, SPECIES_SEVIPER},
	{42, 42, SPECIES_PRIMEAPE},
	{44, 44, SPECIES_SEVIPER},
	{32, 32, SPECIES_GOLBAT},
	{42, 42, SPECIES_GOLBAT},
	{37, 37, SPECIES_STARAPTOR},
	{44, 44, SPECIES_STARAPTOR},
};

static const struct WildPokemonInfo s3_42_LandMonsInfo = {21, s3_42_LandMons};

static const struct WildPokemon s3_43_LandMons[] =
{
	{15, 16, SPECIES_SNUBBULL},
	{15, 16, SPECIES_PETILIL},
	{14, 16, SPECIES_WHISMUR},
	{16, 16, SPECIES_KARRABLAST},
	{14, 14, SPECIES_ABRA},
	{14, 16, SPECIES_VOLBEAT},
	{15, 16, SPECIES_ELEKID},
	{15, 15, SPECIES_FARFETCHD},
	{15, 16, SPECIES_RALTS},
	{15, 16, SPECIES_RALTS},
	{15, 16, SPECIES_PONYTA},
	{15, 15, SPECIES_PONYTA},
};

static const struct WildPokemonInfo s3_43_LandMonsInfo = {21, s3_43_LandMons};

static const struct WildPokemon s3_44_LandMons[] =
{
	{17, 18, SPECIES_SWABLU},
	{16, 18, SPECIES_TAILLOW},
	{16, 18, SPECIES_PINECO},
	{16, 18, SPECIES_POLIWAG},
	{16, 19, SPECIES_MARILL},
	{15, 19, SPECIES_DODUO},
	{16, 17, SPECIES_AUDINO},
	{16, 17, SPECIES_YAMPER},
	{15, 17, SPECIES_AIPOM},
	{15, 17, SPECIES_AIPOM},
	{18, 18, SPECIES_ZANGOOSE},
	{18, 18, SPECIES_ZANGOOSE},
};

static const struct WildPokemonInfo s3_44_LandMonsInfo = {21, s3_44_LandMons};

static const struct WildPokemon s1_122_LandMons[] =
{
	{22, 22, SPECIES_SMEARGLE},
	{24, 24, SPECIES_SMEARGLE},
	{20, 20, SPECIES_SMEARGLE},
	{26, 26, SPECIES_SMEARGLE},
	{22, 22, SPECIES_SMEARGLE},
	{24, 24, SPECIES_SMEARGLE},
	{28, 28, SPECIES_SMEARGLE},
	{18, 18, SPECIES_SMEARGLE},
	{20, 20, SPECIES_SMEARGLE},
	{26, 26, SPECIES_SMEARGLE},
	{20, 20, SPECIES_SMEARGLE},
	{26, 26, SPECIES_SMEARGLE},
};

static const struct WildPokemonInfo s1_122_LandMonsInfo = {5, s1_122_LandMons};

static const struct WildPokemon s1_4_WaterMons[] =
{
	{5, 10, SPECIES_TENTACOOL},
	{10, 20, SPECIES_TENTACOOL},
	{20, 30, SPECIES_TENTACOOL},
	{30, 35, SPECIES_TENTACOOL},
	{35, 40, SPECIES_TENTACOOL},
};

static const struct WildPokemonInfo s1_4_WaterMonsInfo = {1, s1_4_WaterMons};

static const struct WildPokemon s1_63_WaterMons[] =
{
	{35, 40, SPECIES_FRILLISH},
	{35, 40, SPECIES_GOLDUCK},
	{35, 40, SPECIES_JELLICENT},
	{30, 35, SPECIES_GOLDUCK},
	{35, 40, SPECIES_GOLDUCK},
};

static const struct WildPokemonInfo s1_63_WaterMonsInfo = {2, s1_63_WaterMons};

static const struct WildPokemon s1_64_WaterMons[] =
{
	{35, 40, SPECIES_WIMPOD},
	{35, 40, SPECIES_LANTURN},
	{35, 40, SPECIES_ARAQUANID},
	{35, 40, SPECIES_SEISMITOAD},
	{35, 40, SPECIES_SEISMITOAD},
};

static const struct WildPokemonInfo s1_64_WaterMonsInfo = {2, s1_64_WaterMons};

static const struct WildPokemon s1_65_WaterMons[] =
{
	{35, 40, SPECIES_DEWPIDER},
	{35, 40, SPECIES_TOXAPEX},
	{35, 40, SPECIES_GOLISOPOD},
	{35, 40, SPECIES_GOLISOPOD},
	{35, 40, SPECIES_GOLISOPOD},
};

static const struct WildPokemonInfo s1_65_WaterMonsInfo = {2, s1_65_WaterMons};

static const struct WildPokemon s1_66_WaterMons[] =
{
	{35, 40, SPECIES_LUMINEON},
	{35, 40, SPECIES_FLOATZEL},
	{35, 40, SPECIES_RELICANTH},
	{35, 40, SPECIES_PSYDUCK},
	{35, 40, SPECIES_MILOTIC},
};

static const struct WildPokemonInfo s1_66_WaterMonsInfo = {2, s1_66_WaterMons};

static const struct WildPokemon s1_72_WaterMons[] =
{
	{66, 68, SPECIES_SEISMITOAD},
	{66, 68, SPECIES_GOLDUCK},
	{66, 68, SPECIES_CRAWDAUNT},
	{66, 68, SPECIES_KINGLER},
	{66, 68, SPECIES_KINGLER},
};

static const struct WildPokemonInfo s1_72_WaterMonsInfo = {2, s1_72_WaterMons};

static const struct WildPokemon s1_74_WaterMons[] =
{
	{69, 70, SPECIES_SHARPEDO},
	{69, 70, SPECIES_SLOWBRO},
	{69, 71, SPECIES_TOXAPEX},
	{69, 71, SPECIES_TOXAPEX},
	{69, 71, SPECIES_MILOTIC},
};

static const struct WildPokemonInfo s1_74_WaterMonsInfo = {2, s1_74_WaterMons};

static const struct WildPokemon s1_86_WaterMons[] =
{
	{62, 65, SPECIES_DEWGONG},
	{62, 65, SPECIES_WALREIN},
	{62, 65, SPECIES_CRAWDAUNT},
	{62, 65, SPECIES_CRAWDAUNT},
	{62, 65, SPECIES_CRAWDAUNT},
};

static const struct WildPokemonInfo s1_86_WaterMonsInfo = {2, s1_86_WaterMons};

static const struct WildPokemon s1_87_WaterMons[] =
{
	{62, 65, SPECIES_GOLDUCK},
	{62, 65, SPECIES_SLOWBRO},
	{62, 65, SPECIES_SHARPEDO},
	{62, 65, SPECIES_SHARPEDO},
	{62, 65, SPECIES_SHARPEDO},
};

static const struct WildPokemonInfo s1_87_WaterMonsInfo = {2, s1_87_WaterMons};

static const struct WildPokemon s1_109_WaterMons[] =
{
	{5, 20, SPECIES_PSYDUCK},
	{20, 35, SPECIES_PSYDUCK},
	{35, 40, SPECIES_PSYDUCK},
	{35, 40, SPECIES_GOLDUCK},
	{35, 40, SPECIES_GOLDUCK},
};

static const struct WildPokemonInfo s1_109_WaterMonsInfo = {2, s1_109_WaterMons};

static const struct WildPokemon s1_110_WaterMons[] =
{
	{5, 35, SPECIES_SEEL},
	{5, 35, SPECIES_PSYDUCK},
	{35, 40, SPECIES_DEWGONG},
	{5, 15, SPECIES_WOOPER},
	{5, 15, SPECIES_WOOPER},
};

static const struct WildPokemonInfo s1_110_WaterMonsInfo = {2, s1_110_WaterMons};

static const struct WildPokemon s1_113_WaterMons[] =
{
	{5, 20, SPECIES_TENTACOOL},
	{20, 35, SPECIES_TENTACOOL},
	{35, 45, SPECIES_TENTACOOL},
	{35, 45, SPECIES_TENTACRUEL},
	{30, 45, SPECIES_LAPRAS},
};

static const struct WildPokemonInfo s1_113_WaterMonsInfo = {2, s1_113_WaterMons};

static const struct WildPokemon s3_45_WaterMons[] =
{
	{5, 20, SPECIES_TENTACOOL},
	{20, 35, SPECIES_TENTACOOL},
	{35, 40, SPECIES_TENTACOOL},
	{35, 40, SPECIES_TENTACRUEL},
	{35, 40, SPECIES_TENTACRUEL},
};

static const struct WildPokemonInfo s3_45_WaterMonsInfo = {2, s3_45_WaterMons};

static const struct WildPokemon s3_46_WaterMons[] =
{
	{5, 20, SPECIES_TENTACOOL},
	{20, 35, SPECIES_TENTACOOL},
	{35, 40, SPECIES_TENTACOOL},
	{35, 40, SPECIES_TENTACRUEL},
	{35, 40, SPECIES_TENTACRUEL},
};

static const struct WildPokemonInfo s3_46_WaterMonsInfo = {2, s3_46_WaterMons};

static const struct WildPokemon s3_47_WaterMons[] =
{
	{5, 20, SPECIES_PSYDUCK},
	{20, 35, SPECIES_PSYDUCK},
	{35, 40, SPECIES_PSYDUCK},
	{35, 40, SPECIES_GOLDUCK},
	{35, 40, SPECIES_GOLDUCK},
};

static const struct WildPokemonInfo s3_47_WaterMonsInfo = {2, s3_47_WaterMons};

static const struct WildPokemon s3_48_WaterMons[] =
{
	{5, 20, SPECIES_TENTACOOL},
	{20, 35, SPECIES_TENTACOOL},
	{35, 40, SPECIES_TENTACOOL},
	{35, 40, SPECIES_TENTACRUEL},
	{35, 40, SPECIES_TENTACRUEL},
};

static const struct WildPokemonInfo s3_48_WaterMonsInfo = {2, s3_48_WaterMons};

static const struct WildPokemon s3_54_WaterMons[] =
{
	{5, 35, SPECIES_TENTACOOL},
	{5, 15, SPECIES_HOPPIP},
	{35, 40, SPECIES_TENTACOOL},
	{35, 40, SPECIES_TENTACRUEL},
	{35, 40, SPECIES_TENTACRUEL},
};

static const struct WildPokemonInfo s3_54_WaterMonsInfo = {2, s3_54_WaterMons};

static const struct WildPokemon s3_55_WaterMons[] =
{
	{5, 20, SPECIES_TENTACOOL},
	{5, 15, SPECIES_HOPPIP},
	{35, 40, SPECIES_TENTACOOL},
	{35, 40, SPECIES_TENTACRUEL},
	{35, 40, SPECIES_TENTACRUEL},
};

static const struct WildPokemonInfo s3_55_WaterMonsInfo = {2, s3_55_WaterMons};

static const struct WildPokemon s3_56_WaterMons[] =
{
	{5, 35, SPECIES_TENTACOOL},
	{5, 15, SPECIES_HOPPIP},
	{35, 40, SPECIES_TENTACOOL},
	{35, 40, SPECIES_TENTACRUEL},
	{35, 40, SPECIES_TENTACRUEL},
};

static const struct WildPokemonInfo s3_56_WaterMonsInfo = {2, s3_56_WaterMons};

static const struct WildPokemon s3_57_WaterMons[] =
{
	{5, 35, SPECIES_TENTACOOL},
	{5, 15, SPECIES_HOPPIP},
	{35, 40, SPECIES_TENTACOOL},
	{35, 40, SPECIES_TENTACRUEL},
	{35, 40, SPECIES_TENTACRUEL},
};

static const struct WildPokemonInfo s3_57_WaterMonsInfo = {2, s3_57_WaterMons};

static const struct WildPokemon s3_58_WaterMons[] =
{
	{5, 20, SPECIES_TENTACOOL},
	{20, 35, SPECIES_TENTACOOL},
	{35, 40, SPECIES_TENTACOOL},
	{35, 40, SPECIES_TENTACRUEL},
	{35, 40, SPECIES_TENTACRUEL},
};

static const struct WildPokemonInfo s3_58_WaterMonsInfo = {2, s3_58_WaterMons};

static const struct WildPokemon s3_59_WaterMons[] =
{
	{5, 20, SPECIES_TENTACOOL},
	{20, 35, SPECIES_TENTACOOL},
	{35, 40, SPECIES_TENTACOOL},
	{35, 40, SPECIES_TENTACRUEL},
	{35, 40, SPECIES_TENTACRUEL},
};

static const struct WildPokemonInfo s3_59_WaterMonsInfo = {2, s3_59_WaterMons};

static const struct WildPokemon s3_60_WaterMons[] =
{
	{5, 20, SPECIES_TENTACOOL},
	{20, 35, SPECIES_TENTACOOL},
	{35, 40, SPECIES_TENTACOOL},
	{35, 40, SPECIES_TENTACRUEL},
	{35, 40, SPECIES_TENTACRUEL},
};

static const struct WildPokemonInfo s3_60_WaterMonsInfo = {2, s3_60_WaterMons};

static const struct WildPokemon s3_61_WaterMons[] =
{
	{5, 20, SPECIES_WOOPER},
	{10, 20, SPECIES_WOOPER},
	{15, 25, SPECIES_WOOPER},
	{20, 25, SPECIES_WOOPER},
	{20, 25, SPECIES_WOOPER},
};

static const struct WildPokemonInfo s3_61_WaterMonsInfo = {2, s3_61_WaterMons};

static const struct WildPokemon s3_62_WaterMons[] =
{
	{5, 20, SPECIES_TENTACOOL},
	{20, 35, SPECIES_TENTACOOL},
	{35, 40, SPECIES_TENTACOOL},
	{35, 40, SPECIES_TENTACRUEL},
	{35, 40, SPECIES_TENTACRUEL},
};

static const struct WildPokemonInfo s3_62_WaterMonsInfo = {2, s3_62_WaterMons};

static const struct WildPokemon s3_65_WaterMons[] =
{
	{5, 20, SPECIES_TENTACOOL},
	{20, 35, SPECIES_TENTACOOL},
	{35, 40, SPECIES_TENTACOOL},
	{35, 40, SPECIES_TENTACRUEL},
	{35, 40, SPECIES_TENTACRUEL},
};

static const struct WildPokemonInfo s3_65_WaterMonsInfo = {2, s3_65_WaterMons};

static const struct WildPokemon s3_22_WaterMons[] =
{
	{35, 40, SPECIES_GOLDUCK},
	{35, 40, SPECIES_GOLDUCK},
	{40, 40, SPECIES_GOLDUCK},
	{35, 40, SPECIES_GOLDUCK},
	{35, 40, SPECIES_GOLDUCK},
};

static const struct WildPokemonInfo s3_22_WaterMonsInfo = {2, s3_22_WaterMons};

static const struct WildPokemon s3_24_WaterMons[] =
{
	{20, 25, SPECIES_PSYDUCK},
	{20, 25, SPECIES_PSYDUCK},
	{25, 30, SPECIES_PSYDUCK},
	{30, 35, SPECIES_PSYDUCK},
	{35, 40, SPECIES_PSYDUCK},
};

static const struct WildPokemonInfo s3_24_WaterMonsInfo = {2, s3_24_WaterMons};

static const struct WildPokemon s3_28_WaterMons[] =
{
	{5, 10, SPECIES_TENTACOOL},
	{10, 20, SPECIES_TENTACOOL},
	{20, 30, SPECIES_TENTACOOL},
	{30, 35, SPECIES_WINGULL},
	{35, 40, SPECIES_WINGULL},
};

static const struct WildPokemonInfo s3_28_WaterMonsInfo = {2, s3_28_WaterMons};

static const struct WildPokemon s3_29_WaterMons[] =
{
	{5, 10, SPECIES_TENTACOOL},
	{10, 20, SPECIES_TENTACOOL},
	{20, 30, SPECIES_TENTACOOL},
	{30, 35, SPECIES_TENTACOOL},
	{35, 40, SPECIES_TENTACOOL},
};

static const struct WildPokemonInfo s3_29_WaterMonsInfo = {2, s3_29_WaterMons};

static const struct WildPokemon s3_30_WaterMons[] =
{
	{5, 10, SPECIES_TENTACOOL},
	{10, 20, SPECIES_TENTACOOL},
	{20, 30, SPECIES_TENTACOOL},
	{30, 35, SPECIES_FINNEON},
	{35, 40, SPECIES_FINNEON},
};

static const struct WildPokemonInfo s3_30_WaterMonsInfo = {2, s3_30_WaterMons};

static const struct WildPokemon s3_31_WaterMons[] =
{
	{5, 10, SPECIES_TENTACOOL},
	{10, 20, SPECIES_TENTACOOL},
	{20, 30, SPECIES_BUIZEL},
	{30, 35, SPECIES_BUIZEL},
	{35, 40, SPECIES_BUIZEL},
};

static const struct WildPokemonInfo s3_31_WaterMonsInfo = {2, s3_31_WaterMons};

static const struct WildPokemon s3_37_WaterMons[] =
{
	{55, 65, SPECIES_LUMINEON},
	{55, 65, SPECIES_JELLICENT},
	{55, 65, SPECIES_BASCULIN_RED},
	{55, 60, SPECIES_CLAWITZER},
	{55, 60, SPECIES_CLAWITZER},
};

static const struct WildPokemonInfo s3_37_WaterMonsInfo = {2, s3_37_WaterMons};

static const struct WildPokemon s3_38_WaterMons[] =
{
	{55, 58, SPECIES_TENTACRUEL},
	{50, 55, SPECIES_SHARPEDO},
	{50, 55, SPECIES_WAILORD},
	{50, 60, SPECIES_LANTURN},
	{50, 60, SPECIES_LANTURN},
};

static const struct WildPokemonInfo s3_38_WaterMonsInfo = {2, s3_38_WaterMons};

static const struct WildPokemon s3_39_WaterMons[] =
{
	{55, 65, SPECIES_TENTACRUEL},
	{55, 60, SPECIES_BARRASKEWDA},
	{55, 64, SPECIES_LUMINEON},
	{55, 63, SPECIES_PELIPPER},
	{55, 63, SPECIES_CRAMORANT},
};

static const struct WildPokemonInfo s3_39_WaterMonsInfo = {2, s3_39_WaterMons};

static const struct WildPokemon s3_40_WaterMons[] =
{
	{50, 55, SPECIES_TENTACRUEL},
	{50, 55, SPECIES_MANTINE},
	{50, 55, SPECIES_MANTINE},
	{50, 55, SPECIES_JELLICENT},
	{50, 55, SPECIES_JELLICENT},
};

static const struct WildPokemonInfo s3_40_WaterMonsInfo = {2, s3_40_WaterMons};

static const struct WildPokemon s3_41_WaterMons[] =
{
	{20, 25, SPECIES_PSYDUCK},
	{20, 25, SPECIES_PSYDUCK},
	{25, 30, SPECIES_PSYDUCK},
	{30, 35, SPECIES_PSYDUCK},
	{35, 40, SPECIES_PSYDUCK},
};

static const struct WildPokemonInfo s3_41_WaterMonsInfo = {2, s3_41_WaterMons};

static const struct WildPokemon s3_42_WaterMons[] =
{
	{20, 25, SPECIES_PSYDUCK},
	{20, 25, SPECIES_PSYDUCK},
	{25, 30, SPECIES_PSYDUCK},
	{30, 35, SPECIES_PSYDUCK},
	{35, 40, SPECIES_PSYDUCK},
};

static const struct WildPokemonInfo s3_42_WaterMonsInfo = {2, s3_42_WaterMons};

static const struct WildPokemon s3_43_WaterMons[] =
{
	{40, 40, SPECIES_GOLDUCK},
	{35, 40, SPECIES_GOLDUCK},
	{35, 40, SPECIES_GOLDUCK},
	{35, 40, SPECIES_GOLDUCK},
	{35, 40, SPECIES_GOLDUCK},
};

static const struct WildPokemonInfo s3_43_WaterMonsInfo = {8, s3_43_WaterMons};

static const struct WildPokemon s3_44_WaterMons[] =
{
	{20, 25, SPECIES_PSYDUCK},
	{20, 25, SPECIES_PSYDUCK},
	{25, 30, SPECIES_PSYDUCK},
	{30, 35, SPECIES_PSYDUCK},
	{35, 40, SPECIES_PSYDUCK},
};

static const struct WildPokemonInfo s3_44_WaterMonsInfo = {2, s3_44_WaterMons};

static const struct WildPokemon s3_0_WaterMons[] =
{
	{5, 10, SPECIES_TENTACOOL},
	{10, 20, SPECIES_TENTACOOL},
	{20, 30, SPECIES_TENTACRUEL},
	{30, 35, SPECIES_TENTACRUEL},
	{35, 40, SPECIES_TENTACRUEL},
};

static const struct WildPokemonInfo s3_0_WaterMonsInfo = {1, s3_0_WaterMons};

static const struct WildPokemon s3_1_WaterMons[] =
{
	{40, 40, SPECIES_LANTURN},
	{30, 35, SPECIES_LANTURN},
	{30, 40, SPECIES_LANTURN},
	{40, 50, SPECIES_LANTURN},
	{35, 40, SPECIES_LANTURN},
};

static const struct WildPokemonInfo s3_1_WaterMonsInfo = {12, s3_1_WaterMons};

static const struct WildPokemon s3_3_WaterMons[] =
{
	{35, 40, SPECIES_GOLDUCK},
	{35, 40, SPECIES_GOLDUCK},
	{35, 40, SPECIES_GOLDUCK},
	{35, 40, SPECIES_GOLDUCK},
	{35, 40, SPECIES_GOLDUCK},
};

static const struct WildPokemonInfo s3_3_WaterMonsInfo = {8, s3_3_WaterMons};

static const struct WildPokemon s3_5_WaterMons[] =
{
	{30, 40, SPECIES_TENTACOOL},
	{35, 40, SPECIES_PELIPPER},
	{35, 40, SPECIES_TENTACRUEL},
	{35, 40, SPECIES_SQUIRTLE},
	{25, 25, SPECIES_SQUIRTLE},
};

static const struct WildPokemonInfo s3_5_WaterMonsInfo = {2, s3_5_WaterMons};

static const struct WildPokemon s3_6_WaterMons[] =
{
	{25, 25, SPECIES_POLIWHIRL},
	{25, 30, SPECIES_POLIWHIRL},
	{25, 30, SPECIES_POLIWHIRL},
	{30, 40, SPECIES_POLIWHIRL},
	{40, 40, SPECIES_POLIWHIRL},
};

static const struct WildPokemonInfo s3_6_WaterMonsInfo = {12, s3_6_WaterMons};

static const struct WildPokemon s3_7_WaterMons[] =
{
	{20, 25, SPECIES_PSYDUCK},
	{20, 25, SPECIES_PSYDUCK},
	{25, 30, SPECIES_PSYDUCK},
	{30, 35, SPECIES_PSYDUCK},
	{35, 40, SPECIES_PSYDUCK},
};

static const struct WildPokemonInfo s3_7_WaterMonsInfo = {1, s3_7_WaterMons};

static const struct WildPokemon s3_8_WaterMons[] =
{
	{62, 65, SPECIES_TENTACRUEL},
	{62, 65, SPECIES_MANTINE},
	{62, 65, SPECIES_MANTINE},
	{62, 65, SPECIES_CRAMORANT},
	{62, 65, SPECIES_CRAMORANT},
};

static const struct WildPokemonInfo s3_8_WaterMonsInfo = {1, s3_8_WaterMons};

static const struct WildPokemon s3_12_WaterMons[] =
{
	{5, 20, SPECIES_TENTACOOL},
	{20, 35, SPECIES_TENTACOOL},
	{35, 40, SPECIES_TENTACOOL},
	{35, 40, SPECIES_TENTACRUEL},
	{35, 40, SPECIES_TENTACRUEL},
};

static const struct WildPokemonInfo s3_12_WaterMonsInfo = {1, s3_12_WaterMons};

static const struct WildPokemon s3_15_WaterMons[] =
{
	{5, 15, SPECIES_WOOPER},
	{5, 35, SPECIES_PSYDUCK},
	{15, 25, SPECIES_WOOPER},
	{15, 25, SPECIES_WOOPER},
	{15, 25, SPECIES_WOOPER},
};

static const struct WildPokemonInfo s3_15_WaterMonsInfo = {2, s3_15_WaterMons};

static const struct WildPokemon s3_16_WaterMons[] =
{
	{5, 35, SPECIES_TENTACOOL},
	{5, 15, SPECIES_HOPPIP},
	{35, 40, SPECIES_TENTACOOL},
	{35, 40, SPECIES_TENTACRUEL},
	{35, 40, SPECIES_TENTACRUEL},
};

static const struct WildPokemonInfo s3_16_WaterMonsInfo = {1, s3_16_WaterMons};

static const struct WildPokemon s1_72_RockSmashMons[] =
{
	{30, 40, SPECIES_GEODUDE},
	{40, 50, SPECIES_GRAVELER},
	{45, 55, SPECIES_GRAVELER},
	{40, 50, SPECIES_GEODUDE},
	{40, 50, SPECIES_GEODUDE},
};

static const struct WildPokemonInfo s1_72_RockSmashMonsInfo = {50, s1_72_RockSmashMons};

static const struct WildPokemon s1_73_RockSmashMons[] =
{
	{35, 45, SPECIES_GEODUDE},
	{45, 55, SPECIES_GRAVELER},
	{50, 60, SPECIES_GRAVELER},
	{45, 55, SPECIES_GEODUDE},
	{45, 55, SPECIES_GEODUDE},
};

static const struct WildPokemonInfo s1_73_RockSmashMonsInfo = {50, s1_73_RockSmashMons};

static const struct WildPokemon s1_74_RockSmashMons[] =
{
	{40, 50, SPECIES_GEODUDE},
	{50, 60, SPECIES_GRAVELER},
	{55, 65, SPECIES_GRAVELER},
	{50, 60, SPECIES_GEODUDE},
	{50, 60, SPECIES_GEODUDE},
};

static const struct WildPokemonInfo s1_74_RockSmashMonsInfo = {50, s1_74_RockSmashMons};

static const struct WildPokemon s1_82_RockSmashMons[] =
{
	{5, 20, SPECIES_GEODUDE},
	{10, 20, SPECIES_GEODUDE},
	{15, 30, SPECIES_NOSEPASS},
	{25, 40, SPECIES_NOSEPASS},
	{30, 40, SPECIES_NOSEPASS},
};

static const struct WildPokemonInfo s1_82_RockSmashMonsInfo = {50, s1_82_RockSmashMons};

static const struct WildPokemon s1_97_RockSmashMons[] =
{
	{5, 20, SPECIES_GEODUDE},
	{10, 20, SPECIES_GEODUDE},
	{15, 30, SPECIES_GEODUDE},
	{25, 40, SPECIES_GRAVELER},
	{30, 40, SPECIES_GRAVELER},
};

static const struct WildPokemonInfo s1_97_RockSmashMonsInfo = {50, s1_97_RockSmashMons};

static const struct WildPokemon s1_99_RockSmashMons[] =
{
	{5, 20, SPECIES_GEODUDE},
	{10, 20, SPECIES_GEODUDE},
	{15, 30, SPECIES_GEODUDE},
	{25, 40, SPECIES_GRAVELER},
	{30, 40, SPECIES_GRAVELER},
};

static const struct WildPokemonInfo s1_99_RockSmashMonsInfo = {50, s1_99_RockSmashMons};

static const struct WildPokemon s1_103_RockSmashMons[] =
{
	{25, 35, SPECIES_GEODUDE},
	{30, 45, SPECIES_GRAVELER},
	{35, 50, SPECIES_GRAVELER},
	{30, 40, SPECIES_GEODUDE},
	{30, 40, SPECIES_GEODUDE},
};

static const struct WildPokemonInfo s1_103_RockSmashMonsInfo = {50, s1_103_RockSmashMons};

static const struct WildPokemon s1_104_RockSmashMons[] =
{
	{25, 35, SPECIES_GEODUDE},
	{30, 45, SPECIES_GRAVELER},
	{35, 50, SPECIES_GRAVELER},
	{30, 40, SPECIES_GEODUDE},
	{30, 40, SPECIES_GEODUDE},
};

static const struct WildPokemonInfo s1_104_RockSmashMonsInfo = {50, s1_104_RockSmashMons};

static const struct WildPokemon s1_105_RockSmashMons[] =
{
	{25, 35, SPECIES_GEODUDE},
	{30, 45, SPECIES_GRAVELER},
	{35, 50, SPECIES_GRAVELER},
	{30, 40, SPECIES_GEODUDE},
	{30, 40, SPECIES_GEODUDE},
};

static const struct WildPokemonInfo s1_105_RockSmashMonsInfo = {50, s1_105_RockSmashMons};

static const struct WildPokemon s1_106_RockSmashMons[] =
{
	{15, 25, SPECIES_SLUGMA},
	{25, 35, SPECIES_SLUGMA},
	{40, 45, SPECIES_MAGCARGO},
	{35, 45, SPECIES_MAGCARGO},
	{25, 35, SPECIES_MAGCARGO},
};

static const struct WildPokemonInfo s1_106_RockSmashMonsInfo = {50, s1_106_RockSmashMons};

static const struct WildPokemon s1_107_RockSmashMons[] =
{
	{25, 35, SPECIES_GEODUDE},
	{30, 45, SPECIES_GRAVELER},
	{35, 50, SPECIES_GRAVELER},
	{30, 40, SPECIES_GEODUDE},
	{30, 40, SPECIES_GEODUDE},
};

static const struct WildPokemonInfo s1_107_RockSmashMonsInfo = {50, s1_107_RockSmashMons};

static const struct WildPokemon s1_108_RockSmashMons[] =
{
	{25, 35, SPECIES_GEODUDE},
	{30, 45, SPECIES_GRAVELER},
	{35, 50, SPECIES_GRAVELER},
	{30, 40, SPECIES_GEODUDE},
	{30, 40, SPECIES_GEODUDE},
};

static const struct WildPokemonInfo s1_108_RockSmashMonsInfo = {50, s1_108_RockSmashMons};

static const struct WildPokemon s3_45_RockSmashMons[] =
{
	{5, 20, SPECIES_GEODUDE},
	{10, 20, SPECIES_GEODUDE},
	{15, 30, SPECIES_GEODUDE},
	{25, 40, SPECIES_GRAVELER},
	{30, 40, SPECIES_GRAVELER},
};

static const struct WildPokemonInfo s3_45_RockSmashMonsInfo = {25, s3_45_RockSmashMons};

static const struct WildPokemon s3_64_RockSmashMons[] =
{
	{25, 35, SPECIES_GEODUDE},
	{30, 45, SPECIES_GRAVELER},
	{35, 50, SPECIES_GRAVELER},
	{30, 40, SPECIES_GEODUDE},
	{30, 40, SPECIES_GEODUDE},
};

static const struct WildPokemonInfo s3_64_RockSmashMonsInfo = {25, s3_64_RockSmashMons};

static const struct WildPokemon s1_4_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_MAGIKARP},
	{5, 15, SPECIES_HORSEA},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_KRABBY},
	{15, 25, SPECIES_HORSEA},
	{15, 25, SPECIES_SHELLDER},
	{15, 25, SPECIES_GYARADOS},
	{25, 35, SPECIES_HORSEA},
	{25, 35, SPECIES_PSYDUCK},
};

static const struct WildPokemonInfo s1_4_FishingMonsInfo = {10, s1_4_FishingMons};

static const struct WildPokemon s1_63_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_MAGIKARP},
	{15, 15, SPECIES_QWILFISH},
	{5, 15, SPECIES_MAREANIE},
	{5, 15, SPECIES_MANTYKE},
	{15, 25, SPECIES_ALOMOMOLA},
	{20, 30, SPECIES_BASCULIN_RED},
	{30, 25, SPECIES_SHARPEDO},
	{15, 35, SPECIES_FEEBAS},
	{25, 35, SPECIES_FEEBAS},
};

static const struct WildPokemonInfo s1_63_FishingMonsInfo = {20, s1_63_FishingMons};

static const struct WildPokemon s1_64_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_ARROKUDA},
	{5, 15, SPECIES_CORSOLA},
	{5, 15, SPECIES_SEADRA},
	{5, 15, SPECIES_REMORAID},
	{15, 25, SPECIES_GOREBYSS},
	{20, 30, SPECIES_HUNTAIL},
	{15, 25, SPECIES_STARMIE},
	{15, 35, SPECIES_DHELMISE},
	{25, 35, SPECIES_DHELMISE},
};

static const struct WildPokemonInfo s1_64_FishingMonsInfo = {20, s1_64_FishingMons};

static const struct WildPokemon s1_65_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_POLIWAG},
	{5, 15, SPECIES_PYUKUMUKU},
	{5, 15, SPECIES_KRABBY},
	{5, 15, SPECIES_WAILMER},
	{35, 40, SPECIES_KINGLER},
	{20, 30, SPECIES_BRUXISH},
	{15, 25, SPECIES_SKRELP},
	{15, 35, SPECIES_SKRELP},
	{25, 35, SPECIES_SKRELP},
};

static const struct WildPokemonInfo s1_65_FishingMonsInfo = {20, s1_65_FishingMons};

static const struct WildPokemon s1_66_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_HORSEA},
	{5, 15, SPECIES_QWILFISH},
	{5, 15, SPECIES_SEADRA},
	{5, 15, SPECIES_WAILMER},
	{35, 40, SPECIES_CRAWDAUNT},
	{30, 40, SPECIES_SEAKING},
	{15, 25, SPECIES_BASCULIN_RED},
	{15, 35, SPECIES_RELICANTH},
	{25, 35, SPECIES_RELICANTH},
};

static const struct WildPokemonInfo s1_66_FishingMonsInfo = {20, s1_66_FishingMons};

static const struct WildPokemon s1_72_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_STARYU},
	{5, 15, SPECIES_CARVANHA},
	{5, 15, SPECIES_PYUKUMUKU},
	{5, 15, SPECIES_KRABBY},
	{40, 45, SPECIES_SEISMITOAD},
	{35, 40, SPECIES_POLIWHIRL},
	{15, 25, SPECIES_CRAWDAUNT},
	{15, 25, SPECIES_CRAWDAUNT},
	{25, 35, SPECIES_CRAWDAUNT},
};

static const struct WildPokemonInfo s1_72_FishingMonsInfo = {20, s1_72_FishingMons};

static const struct WildPokemon s1_74_FishingMons[] =
{
	{5, 5, SPECIES_FEEBAS},
	{5, 5, SPECIES_MAREANIE},
	{5, 15, SPECIES_CORPHISH},
	{5, 15, SPECIES_KRABBY},
	{5, 15, SPECIES_MAREANIE},
	{35, 40, SPECIES_POLIWRATH},
	{35, 40, SPECIES_CRAWDAUNT},
	{35, 40, SPECIES_SHARPEDO},
	{25, 25, SPECIES_GYARADOS},
	{25, 35, SPECIES_GYARADOS},
};

static const struct WildPokemonInfo s1_74_FishingMonsInfo = {20, s1_74_FishingMons};

static const struct WildPokemon s1_86_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_GOLDEEN},
	{5, 15, SPECIES_SPHEAL},
	{5, 15, SPECIES_MAREANIE},
	{5, 15, SPECIES_KRABBY},
	{35, 40, SPECIES_SEADRA},
	{35, 40, SPECIES_SEADRA},
	{15, 25, SPECIES_GYARADOS},
	{25, 35, SPECIES_CRAWDAUNT},
	{25, 35, SPECIES_CRAWDAUNT},
};

static const struct WildPokemonInfo s1_86_FishingMonsInfo = {20, s1_86_FishingMons};

static const struct WildPokemon s1_87_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_REMORAID},
	{5, 15, SPECIES_SPHEAL},
	{5, 15, SPECIES_SHELLDER},
	{5, 15, SPECIES_CARVANHA},
	{15, 25, SPECIES_SEADRA},
	{20, 30, SPECIES_SEADRA},
	{15, 25, SPECIES_GYARADOS},
	{25, 35, SPECIES_CRAWDAUNT},
	{25, 35, SPECIES_CRAWDAUNT},
};

static const struct WildPokemonInfo s1_87_FishingMonsInfo = {20, s1_87_FishingMons};

static const struct WildPokemon s1_109_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_MAGIKARP},
	{5, 15, SPECIES_GOLDEEN},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_POLIWAG},
	{15, 25, SPECIES_GOLDEEN},
	{20, 30, SPECIES_SEAKING},
	{15, 25, SPECIES_GYARADOS},
	{15, 25, SPECIES_PSYDUCK},
	{25, 35, SPECIES_PSYDUCK},
};

static const struct WildPokemonInfo s1_109_FishingMonsInfo = {20, s1_109_FishingMons};

static const struct WildPokemon s1_110_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_MAGIKARP},
	{5, 15, SPECIES_POLIWAG},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_GOLDEEN},
	{15, 25, SPECIES_POLIWAG},
	{20, 30, SPECIES_POLIWHIRL},
	{15, 25, SPECIES_GYARADOS},
	{15, 25, SPECIES_PSYDUCK},
	{25, 35, SPECIES_PSYDUCK},
};

static const struct WildPokemonInfo s1_110_FishingMonsInfo = {20, s1_110_FishingMons};

static const struct WildPokemon s1_113_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_MAGIKARP},
	{5, 15, SPECIES_HORSEA},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_HORSEA},
	{15, 25, SPECIES_HORSEA},
	{15, 25, SPECIES_SHELLDER},
	{15, 25, SPECIES_GYARADOS},
	{25, 35, SPECIES_SEADRA},
	{25, 35, SPECIES_PSYDUCK},
};

static const struct WildPokemonInfo s1_113_FishingMonsInfo = {20, s1_113_FishingMons};

static const struct WildPokemon s3_45_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_MAGIKARP},
	{5, 15, SPECIES_HORSEA},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_CLOBBOPUS},
	{15, 25, SPECIES_HORSEA},
	{15, 25, SPECIES_CLOBBOPUS},
	{15, 25, SPECIES_CLOBBOPUS},
	{25, 35, SPECIES_SEADRA},
	{25, 35, SPECIES_PSYDUCK},
};

static const struct WildPokemonInfo s3_45_FishingMonsInfo = {20, s3_45_FishingMons};

static const struct WildPokemon s3_46_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_MAGIKARP},
	{5, 15, SPECIES_HORSEA},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_HORSEA},
	{15, 25, SPECIES_HORSEA},
	{15, 25, SPECIES_HORSEA},
	{15, 25, SPECIES_GYARADOS},
	{25, 35, SPECIES_SEADRA},
	{25, 35, SPECIES_PSYDUCK},
};

static const struct WildPokemonInfo s3_46_FishingMonsInfo = {20, s3_46_FishingMons};

static const struct WildPokemon s3_47_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_MAGIKARP},
	{5, 15, SPECIES_POLIWAG},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_GOLDEEN},
	{15, 25, SPECIES_POLIWAG},
	{20, 30, SPECIES_POLIWHIRL},
	{15, 25, SPECIES_GYARADOS},
	{15, 25, SPECIES_PSYDUCK},
	{25, 35, SPECIES_PSYDUCK},
};

static const struct WildPokemonInfo s3_47_FishingMonsInfo = {20, s3_47_FishingMons};

static const struct WildPokemon s3_48_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_MAGIKARP},
	{5, 15, SPECIES_HORSEA},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_HORSEA},
	{15, 25, SPECIES_HORSEA},
	{15, 25, SPECIES_HORSEA},
	{15, 25, SPECIES_GYARADOS},
	{25, 35, SPECIES_SEADRA},
	{25, 35, SPECIES_PSYDUCK},
};

static const struct WildPokemonInfo s3_48_FishingMonsInfo = {20, s3_48_FishingMons};

static const struct WildPokemon s3_54_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_MAGIKARP},
	{5, 15, SPECIES_HORSEA},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_HORSEA},
	{15, 25, SPECIES_HORSEA},
	{15, 25, SPECIES_QWILFISH},
	{15, 25, SPECIES_GYARADOS},
	{25, 35, SPECIES_SEADRA},
	{25, 35, SPECIES_PSYDUCK},
};

static const struct WildPokemonInfo s3_54_FishingMonsInfo = {20, s3_54_FishingMons};

static const struct WildPokemon s3_55_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_MAGIKARP},
	{5, 15, SPECIES_HORSEA},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_HORSEA},
	{15, 25, SPECIES_HORSEA},
	{15, 25, SPECIES_QWILFISH},
	{15, 25, SPECIES_GYARADOS},
	{25, 35, SPECIES_SEADRA},
	{25, 35, SPECIES_PSYDUCK},
};

static const struct WildPokemonInfo s3_55_FishingMonsInfo = {20, s3_55_FishingMons};

static const struct WildPokemon s3_56_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_MAGIKARP},
	{5, 15, SPECIES_HORSEA},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_HORSEA},
	{15, 25, SPECIES_HORSEA},
	{15, 25, SPECIES_QWILFISH},
	{15, 25, SPECIES_GYARADOS},
	{25, 35, SPECIES_SEADRA},
	{25, 35, SPECIES_PSYDUCK},
};

static const struct WildPokemonInfo s3_56_FishingMonsInfo = {20, s3_56_FishingMons};

static const struct WildPokemon s3_57_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_MAGIKARP},
	{5, 15, SPECIES_HORSEA},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_HORSEA},
	{15, 25, SPECIES_HORSEA},
	{15, 25, SPECIES_QWILFISH},
	{15, 25, SPECIES_GYARADOS},
	{25, 35, SPECIES_SEADRA},
	{25, 35, SPECIES_PSYDUCK},
};

static const struct WildPokemonInfo s3_57_FishingMonsInfo = {20, s3_57_FishingMons};

static const struct WildPokemon s3_58_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_MAGIKARP},
	{5, 15, SPECIES_HORSEA},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_HORSEA},
	{15, 25, SPECIES_HORSEA},
	{15, 25, SPECIES_QWILFISH},
	{15, 25, SPECIES_GYARADOS},
	{25, 35, SPECIES_SEADRA},
	{25, 35, SPECIES_PSYDUCK},
};

static const struct WildPokemonInfo s3_58_FishingMonsInfo = {20, s3_58_FishingMons};

static const struct WildPokemon s3_59_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_MAGIKARP},
	{5, 15, SPECIES_HORSEA},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_HORSEA},
	{15, 25, SPECIES_HORSEA},
	{15, 25, SPECIES_QWILFISH},
	{15, 25, SPECIES_GYARADOS},
	{25, 35, SPECIES_SEADRA},
	{25, 35, SPECIES_PSYDUCK},
};

static const struct WildPokemonInfo s3_59_FishingMonsInfo = {20, s3_59_FishingMons};

static const struct WildPokemon s3_60_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_MAGIKARP},
	{5, 15, SPECIES_HORSEA},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_HORSEA},
	{15, 25, SPECIES_HORSEA},
	{15, 25, SPECIES_QWILFISH},
	{15, 25, SPECIES_GYARADOS},
	{25, 35, SPECIES_SEADRA},
	{25, 35, SPECIES_PSYDUCK},
};

static const struct WildPokemonInfo s3_60_FishingMonsInfo = {20, s3_60_FishingMons};

static const struct WildPokemon s3_61_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_MAGIKARP},
	{5, 15, SPECIES_POLIWAG},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_GOLDEEN},
	{15, 25, SPECIES_POLIWAG},
	{20, 30, SPECIES_POLIWHIRL},
	{15, 25, SPECIES_GYARADOS},
	{15, 25, SPECIES_PSYDUCK},
	{25, 35, SPECIES_PSYDUCK},
};

static const struct WildPokemonInfo s3_61_FishingMonsInfo = {20, s3_61_FishingMons};

static const struct WildPokemon s3_62_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_MAGIKARP},
	{5, 15, SPECIES_HORSEA},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_HORSEA},
	{15, 25, SPECIES_HORSEA},
	{15, 25, SPECIES_QWILFISH},
	{15, 25, SPECIES_GYARADOS},
	{25, 35, SPECIES_SEADRA},
	{25, 35, SPECIES_PSYDUCK},
};

static const struct WildPokemonInfo s3_62_FishingMonsInfo = {20, s3_62_FishingMons};

static const struct WildPokemon s3_65_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_MAGIKARP},
	{5, 15, SPECIES_HORSEA},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_HORSEA},
	{15, 25, SPECIES_HORSEA},
	{15, 25, SPECIES_QWILFISH},
	{15, 25, SPECIES_GYARADOS},
	{25, 35, SPECIES_SEADRA},
	{25, 35, SPECIES_PSYDUCK},
};

static const struct WildPokemonInfo s3_65_FishingMonsInfo = {20, s3_65_FishingMons};

static const struct WildPokemon s3_22_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_MAGIKARP},
	{5, 15, SPECIES_HORSEA},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_KRABBY},
	{15, 25, SPECIES_HORSEA},
	{15, 25, SPECIES_HORSEA},
	{15, 25, SPECIES_GYARADOS},
	{25, 35, SPECIES_HORSEA},
	{25, 35, SPECIES_PSYDUCK},
};

static const struct WildPokemonInfo s3_22_FishingMonsInfo = {20, s3_22_FishingMons};

static const struct WildPokemon s3_24_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_SHELLDER},
	{5, 15, SPECIES_SHELLDER},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_QWILFISH},
	{25, 30, SPECIES_SLOWPOKE},
	{20, 30, SPECIES_POLIWHIRL},
	{15, 25, SPECIES_GYARADOS},
	{15, 25, SPECIES_PSYDUCK},
	{25, 35, SPECIES_PSYDUCK},
};

static const struct WildPokemonInfo s3_24_FishingMonsInfo = {20, s3_24_FishingMons};

static const struct WildPokemon s3_28_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_REMORAID},
	{5, 15, SPECIES_BARBOACH},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_CORSOLA_G},
	{15, 25, SPECIES_WHISCASH},
	{35, 40, SPECIES_WHISCASH},
	{35, 40, SPECIES_BASCULIN_RED},
	{25, 35, SPECIES_SEADRA},
	{25, 35, SPECIES_SEADRA},
};

static const struct WildPokemonInfo s3_28_FishingMonsInfo = {20, s3_28_FishingMons};

static const struct WildPokemon s3_29_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_MAGIKARP},
	{5, 15, SPECIES_HORSEA},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_KRABBY},
	{15, 25, SPECIES_HORSEA},
	{15, 25, SPECIES_HORSEA},
	{15, 25, SPECIES_GYARADOS},
	{25, 35, SPECIES_HORSEA},
	{25, 35, SPECIES_PSYDUCK},
};

static const struct WildPokemonInfo s3_29_FishingMonsInfo = {20, s3_29_FishingMons};

static const struct WildPokemon s3_30_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_KRABBY},
	{5, 15, SPECIES_REMORAID},
	{15, 30, SPECIES_WIMPOD},
	{5, 15, SPECIES_KRABBY},
	{35, 40, SPECIES_SEADRA},
	{35, 40, SPECIES_SEADRA},
	{15, 25, SPECIES_GYARADOS},
	{25, 35, SPECIES_BRUXISH},
	{25, 35, SPECIES_GOLDUCK},
};

static const struct WildPokemonInfo s3_30_FishingMonsInfo = {60, s3_30_FishingMons};

static const struct WildPokemon s3_31_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_POLIWAG},
	{5, 15, SPECIES_MAREANIE},
	{5, 15, SPECIES_DEWPIDER},
	{5, 15, SPECIES_CARVANHA},
	{15, 25, SPECIES_CLAMPERL},
	{15, 25, SPECIES_CRAWDAUNT},
	{15, 25, SPECIES_MANTYKE},
	{25, 35, SPECIES_MANTYKE},
	{25, 35, SPECIES_MANTYKE},
};

static const struct WildPokemonInfo s3_31_FishingMonsInfo = {20, s3_31_FishingMons};

static const struct WildPokemon s3_37_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_HORSEA},
	{5, 15, SPECIES_REMORAID},
	{5, 15, SPECIES_SLOWPOKE},
	{5, 15, SPECIES_SLOWPOKE},
	{35, 40, SPECIES_WHISCASH},
	{15, 25, SPECIES_CLAMPERL},
	{35, 40, SPECIES_CRAWDAUNT},
	{25, 35, SPECIES_MANTINE},
	{25, 35, SPECIES_MANTINE},
};

static const struct WildPokemonInfo s3_37_FishingMonsInfo = {20, s3_37_FishingMons};

static const struct WildPokemon s3_38_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_CHINCHOU},
	{5, 15, SPECIES_WAILMER},
	{5, 15, SPECIES_QWILFISH},
	{5, 15, SPECIES_CORSOLA},
	{15, 25, SPECIES_SEADRA},
	{15, 25, SPECIES_BASCULIN_RED},
	{40, 45, SPECIES_CLAWITZER},
	{25, 35, SPECIES_BRUXISH},
	{25, 35, SPECIES_BRUXISH},
};

static const struct WildPokemonInfo s3_38_FishingMonsInfo = {20, s3_38_FishingMons};

static const struct WildPokemon s3_39_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_SHELLDER},
	{5, 15, SPECIES_KRABBY},
	{5, 15, SPECIES_QWILFISH},
	{5, 15, SPECIES_CORSOLA_G},
	{15, 25, SPECIES_OCTILLERY},
	{15, 25, SPECIES_LUMINEON},
	{40, 45, SPECIES_KINGLER},
	{25, 35, SPECIES_RELICANTH},
	{25, 35, SPECIES_RELICANTH},
};

static const struct WildPokemonInfo s3_39_FishingMonsInfo = {20, s3_39_FishingMons};

static const struct WildPokemon s3_40_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_SHELLDER},
	{5, 15, SPECIES_KRABBY},
	{5, 15, SPECIES_QWILFISH},
	{5, 15, SPECIES_CORSOLA},
	{30, 35, SPECIES_OCTILLERY},
	{30, 35, SPECIES_LUMINEON},
	{40, 45, SPECIES_SHARPEDO},
	{25, 35, SPECIES_RELICANTH},
	{25, 35, SPECIES_RELICANTH},
};

static const struct WildPokemonInfo s3_40_FishingMonsInfo = {20, s3_40_FishingMons};

static const struct WildPokemon s3_41_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 15, SPECIES_ARROKUDA},
	{5, 15, SPECIES_CORPHISH},
	{5, 15, SPECIES_MANTYKE},
	{5, 15, SPECIES_MAREANIE},
	{15, 25, SPECIES_LUVDISC},
	{20, 30, SPECIES_LUVDISC},
	{15, 25, SPECIES_BASCULIN_RED},
	{15, 25, SPECIES_WAILORD},
	{25, 35, SPECIES_WAILORD},
};

static const struct WildPokemonInfo s3_41_FishingMonsInfo = {20, s3_41_FishingMons};

static const struct WildPokemon s3_42_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_MAGIKARP},
	{5, 15, SPECIES_POLIWAG},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_GOLDEEN},
	{15, 25, SPECIES_POLIWAG},
	{20, 30, SPECIES_POLIWHIRL},
	{15, 25, SPECIES_GYARADOS},
	{15, 25, SPECIES_PSYDUCK},
	{25, 35, SPECIES_PSYDUCK},
};

static const struct WildPokemonInfo s3_42_FishingMonsInfo = {20, s3_42_FishingMons};

static const struct WildPokemon s3_43_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_HORSEA},
	{5, 15, SPECIES_WISHIWASHI},
	{5, 15, SPECIES_WAILMER},
	{5, 15, SPECIES_WAILMER},
	{15, 25, SPECIES_LUVDISC},
	{15, 25, SPECIES_LUVDISC},
	{15, 25, SPECIES_SHARPEDO},
	{25, 35, SPECIES_OCTILLERY},
	{25, 35, SPECIES_OCTILLERY},
};

static const struct WildPokemonInfo s3_43_FishingMonsInfo = {20, s3_43_FishingMons};

static const struct WildPokemon s3_44_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_CHINCHOU},
	{5, 15, SPECIES_DEWPIDER},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_GOLDEEN},
	{15, 25, SPECIES_POLIWAG},
	{20, 30, SPECIES_POLIWHIRL},
	{15, 25, SPECIES_GYARADOS},
	{15, 25, SPECIES_PSYDUCK},
	{25, 35, SPECIES_PSYDUCK},
};

static const struct WildPokemonInfo s3_44_FishingMonsInfo = {45, s3_44_FishingMons};

static const struct WildPokemon s3_0_FishingMons[] =
{
	{5, 10, SPECIES_MAGIKARP},
	{5, 10, SPECIES_REMORAID},
	{5, 15, SPECIES_BARBOACH},
	{5, 15, SPECIES_CARVANHA},
	{5, 15, SPECIES_QWILFISH},
	{15, 25, SPECIES_LUVDISC},
	{15, 25, SPECIES_LUVDISC},
	{15, 25, SPECIES_CLAMPERL},
	{45, 45, SPECIES_WHISCASH},
	{45, 50, SPECIES_WHISCASH},
};

static const struct WildPokemonInfo s3_0_FishingMonsInfo = {10, s3_0_FishingMons};

static const struct WildPokemon s3_1_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_KRABBY},
	{5, 15, SPECIES_CLAUNCHER},
	{5, 15, SPECIES_REMORAID},
	{5, 15, SPECIES_CORSOLA_G},
	{15, 25, SPECIES_LUVDISC},
	{20, 30, SPECIES_LUVDISC},
	{35, 40, SPECIES_BRUXISH},
	{45, 50, SPECIES_CLAWITZER},
	{45, 50, SPECIES_CLAWITZER},
};

static const struct WildPokemonInfo s3_1_FishingMonsInfo = {10, s3_1_FishingMons};

static const struct WildPokemon s3_3_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_POLIWAG},
	{5, 15, SPECIES_WISHIWASHI},
	{5, 15, SPECIES_WAILMER},
	{5, 15, SPECIES_WAILMER},
	{15, 25, SPECIES_LUVDISC},
	{15, 25, SPECIES_LUVDISC},
	{35, 40, SPECIES_SHARPEDO},
	{35, 40, SPECIES_OCTILLERY},
	{35, 40, SPECIES_OCTILLERY},
};

static const struct WildPokemonInfo s3_3_FishingMonsInfo = {10, s3_3_FishingMons};

static const struct WildPokemon s3_5_FishingMons[] =
{
	{15, 15, SPECIES_MAGIKARP},
	{15, 15, SPECIES_GOLDEEN},
	{25, 30, SPECIES_HORSEA},
	{25, 30, SPECIES_SHELLDER},
	{24, 30, SPECIES_KRABBY},
	{15, 25, SPECIES_LUVDISC},
	{15, 25, SPECIES_LUVDISC},
	{15, 25, SPECIES_ALOMOMOLA},
	{25, 35, SPECIES_SEADRA},
	{25, 35, SPECIES_GYARADOS},
};

static const struct WildPokemonInfo s3_5_FishingMonsInfo = {10, s3_5_FishingMons};

static const struct WildPokemon s3_6_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_ARROKUDA},
	{5, 15, SPECIES_POLIWAG},
	{5, 15, SPECIES_SLOWPOKE_G},
	{5, 15, SPECIES_SLOWPOKE_G},
	{15, 25, SPECIES_PSYDUCK},
	{15, 25, SPECIES_MAREANIE},
	{15, 25, SPECIES_MAREANIE},
	{25, 35, SPECIES_MUK},
	{30, 40, SPECIES_MUK_A},
};

static const struct WildPokemonInfo s3_6_FishingMonsInfo = {10, s3_6_FishingMons};

static const struct WildPokemon s3_7_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_MAGIKARP},
	{5, 15, SPECIES_GOLDEEN},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_POLIWAG},
	{15, 25, SPECIES_GOLDEEN},
	{20, 30, SPECIES_SEAKING},
	{15, 25, SPECIES_GYARADOS},
	{15, 25, SPECIES_PSYDUCK},
	{25, 35, SPECIES_PSYDUCK},
};

static const struct WildPokemonInfo s3_7_FishingMonsInfo = {10, s3_7_FishingMons};

static const struct WildPokemon s3_8_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_SHELLDER},
	{5, 15, SPECIES_KRABBY},
	{5, 15, SPECIES_QWILFISH},
	{5, 15, SPECIES_CORSOLA},
	{35, 40, SPECIES_OCTILLERY},
	{35, 40, SPECIES_LUMINEON},
	{20, 25, SPECIES_SHARPEDO},
	{25, 35, SPECIES_RELICANTH},
	{25, 35, SPECIES_RELICANTH},
};

static const struct WildPokemonInfo s3_8_FishingMonsInfo = {10, s3_8_FishingMons};

static const struct WildPokemon s3_12_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_MAGIKARP},
	{5, 15, SPECIES_HORSEA},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_HORSEA},
	{15, 25, SPECIES_HORSEA},
	{15, 25, SPECIES_SHELLDER},
	{15, 25, SPECIES_GYARADOS},
	{25, 35, SPECIES_SEADRA},
	{25, 35, SPECIES_PSYDUCK},
};

static const struct WildPokemonInfo s3_12_FishingMonsInfo = {10, s3_12_FishingMons};

static const struct WildPokemon s3_15_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_MAGIKARP},
	{5, 15, SPECIES_POLIWAG},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_GOLDEEN},
	{15, 25, SPECIES_POLIWAG},
	{20, 30, SPECIES_POLIWHIRL},
	{15, 25, SPECIES_GYARADOS},
	{15, 25, SPECIES_PSYDUCK},
	{25, 35, SPECIES_PSYDUCK},
};

static const struct WildPokemonInfo s3_15_FishingMonsInfo = {20, s3_15_FishingMons};

static const struct WildPokemon s3_16_FishingMons[] =
{
	{5, 5, SPECIES_MAGIKARP},
	{5, 5, SPECIES_MAGIKARP},
	{5, 15, SPECIES_HORSEA},
	{5, 15, SPECIES_MAGIKARP},
	{5, 15, SPECIES_HORSEA},
	{15, 25, SPECIES_HORSEA},
	{15, 25, SPECIES_SHELLDER},
	{15, 25, SPECIES_GYARADOS},
	{25, 35, SPECIES_SEADRA},
	{25, 35, SPECIES_PSYDUCK},
};

static const struct WildPokemonInfo s3_16_FishingMonsInfo = {10, s3_16_FishingMons};

const struct WildPokemonHeader gWildMonHeadersNew[] =
{
	{
		.mapGroup = 0x2,
		.mapNum = 0x1b,
		.landMonsInfo = &s2_27_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x2,
		.mapNum = 0x1c,
		.landMonsInfo = &s2_28_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x2,
		.mapNum = 0x1d,
		.landMonsInfo = &s2_29_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x2,
		.mapNum = 0x1e,
		.landMonsInfo = &s2_30_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x2,
		.mapNum = 0x1f,
		.landMonsInfo = &s2_31_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x2,
		.mapNum = 0x20,
		.landMonsInfo = &s2_32_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x2,
		.mapNum = 0x21,
		.landMonsInfo = &s2_33_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x0,
		.landMonsInfo = &s1_0_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x1,
		.landMonsInfo = &s1_1_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x2,
		.landMonsInfo = &s1_2_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x3,
		.landMonsInfo = &s1_3_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x4,
		.landMonsInfo = NULL,
		.waterMonsInfo = &s1_4_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s1_4_FishingMonsInfo
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x25,
		.landMonsInfo = &s1_37_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x27,
		.landMonsInfo = &s1_39_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x28,
		.landMonsInfo = &s1_40_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x29,
		.landMonsInfo = &s1_41_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x3b,
		.landMonsInfo = &s1_59_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x3c,
		.landMonsInfo = &s1_60_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x3d,
		.landMonsInfo = &s1_61_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x3e,
		.landMonsInfo = &s1_62_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x3f,
		.landMonsInfo = &s1_63_LandMonsInfo,
		.waterMonsInfo = &s1_63_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s1_63_FishingMonsInfo
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x40,
		.landMonsInfo = &s1_64_LandMonsInfo,
		.waterMonsInfo = &s1_64_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s1_64_FishingMonsInfo
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x41,
		.landMonsInfo = &s1_65_LandMonsInfo,
		.waterMonsInfo = &s1_65_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s1_65_FishingMonsInfo
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x42,
		.landMonsInfo = &s1_66_LandMonsInfo,
		.waterMonsInfo = &s1_66_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s1_66_FishingMonsInfo
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x48,
		.landMonsInfo = &s1_72_LandMonsInfo,
		.waterMonsInfo = &s1_72_WaterMonsInfo,
		.rockSmashMonsInfo = &s1_72_RockSmashMonsInfo,
		.fishingMonsInfo = &s1_72_FishingMonsInfo
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x49,
		.landMonsInfo = &s1_73_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = &s1_73_RockSmashMonsInfo,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x4a,
		.landMonsInfo = &s1_74_LandMonsInfo,
		.waterMonsInfo = &s1_74_WaterMonsInfo,
		.rockSmashMonsInfo = &s1_74_RockSmashMonsInfo,
		.fishingMonsInfo = &s1_74_FishingMonsInfo
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x51,
		.landMonsInfo = &s1_81_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x52,
		.landMonsInfo = &s1_82_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = &s1_82_RockSmashMonsInfo,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x53,
		.landMonsInfo = &s1_83_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x54,
		.landMonsInfo = &s1_84_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x55,
		.landMonsInfo = &s1_85_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x56,
		.landMonsInfo = &s1_86_LandMonsInfo,
		.waterMonsInfo = &s1_86_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s1_86_FishingMonsInfo
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x57,
		.landMonsInfo = &s1_87_LandMonsInfo,
		.waterMonsInfo = &s1_87_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s1_87_FishingMonsInfo
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x5a,
		.landMonsInfo = &s1_90_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x5b,
		.landMonsInfo = &s1_91_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x5c,
		.landMonsInfo = &s1_92_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x5d,
		.landMonsInfo = &s1_93_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x5e,
		.landMonsInfo = &s1_94_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x5f,
		.landMonsInfo = &s1_95_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x61,
		.landMonsInfo = &s1_97_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = &s1_97_RockSmashMonsInfo,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x62,
		.landMonsInfo = &s1_98_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x63,
		.landMonsInfo = &s1_99_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = &s1_99_RockSmashMonsInfo,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x64,
		.landMonsInfo = &s1_100_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x67,
		.landMonsInfo = &s1_103_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = &s1_103_RockSmashMonsInfo,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x68,
		.landMonsInfo = &s1_104_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = &s1_104_RockSmashMonsInfo,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x69,
		.landMonsInfo = &s1_105_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = &s1_105_RockSmashMonsInfo,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x6a,
		.landMonsInfo = &s1_106_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = &s1_106_RockSmashMonsInfo,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x6b,
		.landMonsInfo = &s1_107_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = &s1_107_RockSmashMonsInfo,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x6c,
		.landMonsInfo = &s1_108_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = &s1_108_RockSmashMonsInfo,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x6d,
		.landMonsInfo = &s1_109_LandMonsInfo,
		.waterMonsInfo = &s1_109_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s1_109_FishingMonsInfo
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x6e,
		.landMonsInfo = &s1_110_LandMonsInfo,
		.waterMonsInfo = &s1_110_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s1_110_FishingMonsInfo
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x6f,
		.landMonsInfo = &s1_111_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x70,
		.landMonsInfo = &s1_112_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x71,
		.landMonsInfo = &s1_113_LandMonsInfo,
		.waterMonsInfo = &s1_113_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s1_113_FishingMonsInfo
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x79,
		.landMonsInfo = &s1_121_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x2,
		.mapNum = 0xd,
		.landMonsInfo = &s2_13_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x2,
		.mapNum = 0xe,
		.landMonsInfo = &s2_14_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x2,
		.mapNum = 0xf,
		.landMonsInfo = &s2_15_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x2,
		.mapNum = 0x10,
		.landMonsInfo = &s2_16_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x2,
		.mapNum = 0x11,
		.landMonsInfo = &s2_17_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x2,
		.mapNum = 0x12,
		.landMonsInfo = &s2_18_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x2,
		.mapNum = 0x13,
		.landMonsInfo = &s2_19_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x2,
		.mapNum = 0x14,
		.landMonsInfo = &s2_20_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x2,
		.mapNum = 0x15,
		.landMonsInfo = &s2_21_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x2,
		.mapNum = 0x16,
		.landMonsInfo = &s2_22_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x2,
		.mapNum = 0x17,
		.landMonsInfo = &s2_23_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x2,
		.mapNum = 0x18,
		.landMonsInfo = &s2_24_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x2,
		.mapNum = 0x19,
		.landMonsInfo = &s2_25_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x2,
		.mapNum = 0x1a,
		.landMonsInfo = &s2_26_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x2d,
		.landMonsInfo = &s3_45_LandMonsInfo,
		.waterMonsInfo = &s3_45_WaterMonsInfo,
		.rockSmashMonsInfo = &s3_45_RockSmashMonsInfo,
		.fishingMonsInfo = &s3_45_FishingMonsInfo
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x2e,
		.landMonsInfo = &s3_46_LandMonsInfo,
		.waterMonsInfo = &s3_46_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s3_46_FishingMonsInfo
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x2f,
		.landMonsInfo = &s3_47_LandMonsInfo,
		.waterMonsInfo = &s3_47_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s3_47_FishingMonsInfo
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x30,
		.landMonsInfo = &s3_48_LandMonsInfo,
		.waterMonsInfo = &s3_48_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s3_48_FishingMonsInfo
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x31,
		.landMonsInfo = &s3_49_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x36,
		.landMonsInfo = NULL,
		.waterMonsInfo = &s3_54_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s3_54_FishingMonsInfo
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x37,
		.landMonsInfo = NULL,
		.waterMonsInfo = &s3_55_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s3_55_FishingMonsInfo
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x38,
		.landMonsInfo = &s3_56_LandMonsInfo,
		.waterMonsInfo = &s3_56_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s3_56_FishingMonsInfo
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x39,
		.landMonsInfo = &s3_57_LandMonsInfo,
		.waterMonsInfo = &s3_57_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s3_57_FishingMonsInfo
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x3a,
		.landMonsInfo = NULL,
		.waterMonsInfo = &s3_58_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s3_58_FishingMonsInfo
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x3b,
		.landMonsInfo = NULL,
		.waterMonsInfo = &s3_59_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s3_59_FishingMonsInfo
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x3c,
		.landMonsInfo = &s3_60_LandMonsInfo,
		.waterMonsInfo = &s3_60_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s3_60_FishingMonsInfo
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x3d,
		.landMonsInfo = &s3_61_LandMonsInfo,
		.waterMonsInfo = &s3_61_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s3_61_FishingMonsInfo
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x3e,
		.landMonsInfo = NULL,
		.waterMonsInfo = &s3_62_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s3_62_FishingMonsInfo
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x3f,
		.landMonsInfo = &s3_63_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x40,
		.landMonsInfo = &s3_64_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = &s3_64_RockSmashMonsInfo,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x41,
		.landMonsInfo = NULL,
		.waterMonsInfo = &s3_65_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s3_65_FishingMonsInfo
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x13,
		.landMonsInfo = &s3_19_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x14,
		.landMonsInfo = &s3_20_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x15,
		.landMonsInfo = &s3_21_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x16,
		.landMonsInfo = &s3_22_LandMonsInfo,
		.waterMonsInfo = &s3_22_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s3_22_FishingMonsInfo
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x17,
		.landMonsInfo = &s3_23_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x18,
		.landMonsInfo = &s3_24_LandMonsInfo,
		.waterMonsInfo = &s3_24_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s3_24_FishingMonsInfo
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x19,
		.landMonsInfo = &s3_25_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x1a,
		.landMonsInfo = &s3_26_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x1b,
		.landMonsInfo = &s3_27_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x1c,
		.landMonsInfo = &s3_28_LandMonsInfo,
		.waterMonsInfo = &s3_28_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s3_28_FishingMonsInfo
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x1d,
		.landMonsInfo = &s3_29_LandMonsInfo,
		.waterMonsInfo = &s3_29_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s3_29_FishingMonsInfo
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x1e,
		.landMonsInfo = &s3_30_LandMonsInfo,
		.waterMonsInfo = &s3_30_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s3_30_FishingMonsInfo
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x1f,
		.landMonsInfo = &s3_31_LandMonsInfo,
		.waterMonsInfo = &s3_31_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s3_31_FishingMonsInfo
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x20,
		.landMonsInfo = &s3_32_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x21,
		.landMonsInfo = &s3_33_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x22,
		.landMonsInfo = &s3_34_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x23,
		.landMonsInfo = &s3_35_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x24,
		.landMonsInfo = &s3_36_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x25,
		.landMonsInfo = NULL,
		.waterMonsInfo = &s3_37_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s3_37_FishingMonsInfo
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x26,
		.landMonsInfo = NULL,
		.waterMonsInfo = &s3_38_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s3_38_FishingMonsInfo
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x27,
		.landMonsInfo = &s3_39_LandMonsInfo,
		.waterMonsInfo = &s3_39_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s3_39_FishingMonsInfo
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x28,
		.landMonsInfo = &s3_40_LandMonsInfo,
		.waterMonsInfo = &s3_40_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s3_40_FishingMonsInfo
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x29,
		.landMonsInfo = &s3_41_LandMonsInfo,
		.waterMonsInfo = &s3_41_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s3_41_FishingMonsInfo
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x2a,
		.landMonsInfo = &s3_42_LandMonsInfo,
		.waterMonsInfo = &s3_42_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s3_42_FishingMonsInfo
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x2b,
		.landMonsInfo = &s3_43_LandMonsInfo,
		.waterMonsInfo = &s3_43_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s3_43_FishingMonsInfo
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x2c,
		.landMonsInfo = &s3_44_LandMonsInfo,
		.waterMonsInfo = &s3_44_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s3_44_FishingMonsInfo
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x0,
		.landMonsInfo = NULL,
		.waterMonsInfo = &s3_0_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s3_0_FishingMonsInfo
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x1,
		.landMonsInfo = NULL,
		.waterMonsInfo = &s3_1_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s3_1_FishingMonsInfo
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x3,
		.landMonsInfo = NULL,
		.waterMonsInfo = &s3_3_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s3_3_FishingMonsInfo
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x5,
		.landMonsInfo = NULL,
		.waterMonsInfo = &s3_5_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s3_5_FishingMonsInfo
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x6,
		.landMonsInfo = NULL,
		.waterMonsInfo = &s3_6_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s3_6_FishingMonsInfo
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x7,
		.landMonsInfo = NULL,
		.waterMonsInfo = &s3_7_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s3_7_FishingMonsInfo
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x8,
		.landMonsInfo = NULL,
		.waterMonsInfo = &s3_8_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s3_8_FishingMonsInfo
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0xc,
		.landMonsInfo = NULL,
		.waterMonsInfo = &s3_12_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s3_12_FishingMonsInfo
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0xf,
		.landMonsInfo = NULL,
		.waterMonsInfo = &s3_15_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s3_15_FishingMonsInfo
	},
	{
		.mapGroup = 0x3,
		.mapNum = 0x10,
		.landMonsInfo = NULL,
		.waterMonsInfo = &s3_16_WaterMonsInfo,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &s3_16_FishingMonsInfo
	},
	{
		.mapGroup = 0x1,
		.mapNum = 0x7a,
		.landMonsInfo = &s1_122_LandMonsInfo,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL
	}
};





#else //Below is for Pokemon Unbound. Feel free to remove.

static const struct WildPokemon sRoute2_LandMonsNight[] =
{
	{9, 11, SPECIES_HOOTHOOT},
	{9, 11, SPECIES_RATTATA},
	{9, 11, SPECIES_RATTATA},
	{9, 11, SPECIES_HOOTHOOT},
	{9, 11, SPECIES_ELECTRIKE},
	{9, 11, SPECIES_AZURILL},
	{9, 11, SPECIES_STUFFUL},
	{9, 11, SPECIES_STUFFUL},
	{10, 11, SPECIES_SCRAGGY},
	{10, 11, SPECIES_RIOLU},
	{11, 11, SPECIES_SCRAGGY},
	{11, 11, SPECIES_RIOLU},
};

static const struct WildPokemonInfo sRoute2_LandMonsInfoNight = {20, sRoute2_LandMonsNight};

static const struct WildPokemon sRoute3_LandMonsNight[] =
{
	{10, 12, SPECIES_WINGULL},
	{10, 12, SPECIES_SENTRET},
	{10, 12, SPECIES_BIDOOF},
	{10, 12, SPECIES_BIDOOF},
	{10, 12, SPECIES_BUIZEL},
	{10, 12, SPECIES_SHELLOS},
	{10, 12, SPECIES_SURSKIT},
	{10, 12, SPECIES_KRABBY},
	{11, 12, SPECIES_KRABBY},
	{11, 12, SPECIES_KRABBY},
	{12, 12, SPECIES_KRABBY},
	{12, 12, SPECIES_KRABBY},
};

static const struct WildPokemonInfo sRoute3_LandMonsInfoNight = {20, sRoute3_LandMonsNight};

static const struct WildPokemon sRoute4_LandMonsNight[] =
{
	{15, 17, SPECIES_HOOTHOOT},
	{15, 17, SPECIES_HOOTHOOT},
	{15, 17, SPECIES_LILLIPUP},
	{15, 17, SPECIES_LILLIPUP},
	{15, 17, SPECIES_EKANS},
	{15, 17, SPECIES_NUMEL},
	{15, 17, SPECIES_MANKEY},
	{15, 17, SPECIES_MANKEY},
	{15, 17, SPECIES_NUMEL},
	{15, 17, SPECIES_RALTS},
	{17, 17, SPECIES_NUMEL},
	{17, 17, SPECIES_RALTS},
};

static const struct WildPokemonInfo sRoute4_LandMonsInfoNight = {20, sRoute4_LandMonsNight};

static const struct WildPokemon sGrimWoods_LandMonsNight[] =
{
	{13, 16, SPECIES_WEEDLE},
	{14, 16, SPECIES_SEEDOT},
	{14, 16, SPECIES_PUMPKABOO},
	{14, 16, SPECIES_PUMPKABOO_M},
	{14, 16, SPECIES_PUMPKABOO_L},
	{14, 16, SPECIES_PUMPKABOO_XL},
	{15, 16, SPECIES_GASTLY},
	{15, 16, SPECIES_SHUPPET},
	{15, 16, SPECIES_DUSKULL},
	{15, 16, SPECIES_PHANTUMP},
	{16, 16, SPECIES_DUSKULL},
	{16, 16, SPECIES_PHANTUMP},
};

static const struct WildPokemonInfo sGrimWoods_LandMonsInfoNight = {20, sGrimWoods_LandMonsNight};

static const struct WildPokemon sRoute5_LandMonsNight[] =
{
	{15, 18, SPECIES_MURKROW},
	{15, 18, SPECIES_ZUBAT},
	{15, 18, SPECIES_NIDORAN_M},
	{15, 18, SPECIES_NIDORAN_F},
	{16, 19, SPECIES_HOUNDOUR},
	{15, 18, SPECIES_ZUBAT},
	{15, 18, SPECIES_NIDORAN_M},
	{15, 18, SPECIES_NIDORAN_F},
	{17, 19, SPECIES_MURKROW},
	{17, 19, SPECIES_DEDENNE},
	{19, 19, SPECIES_NIDORINA},
	{19, 19, SPECIES_NIDORINO},
};

static const struct WildPokemonInfo sRoute5_LandMonsInfoNight = {20, sRoute5_LandMonsNight};

static const struct WildPokemon sRoute6_LandMonsMorning[] =
{
	{20, 22, SPECIES_ZIGZAGOON},
	{20, 22, SPECIES_LEDYBA},
	{20, 22, SPECIES_SHINX},
	{20, 22, SPECIES_DEERLING},
	{20, 22, SPECIES_ZIGZAGOON},
	{20, 22, SPECIES_KRICKETOT},
	{21, 22, SPECIES_KRICKETOT},
	{21, 22, SPECIES_KRICKETOT},
	{21, 22, SPECIES_DEERLING},
	{21, 22, SPECIES_KRICKETOT},
	{22, 22, SPECIES_LEDIAN},
	{22, 22, SPECIES_LUXIO},
};

static const struct WildPokemonInfo sRoute6_LandMonsInfoMorning = {20, sRoute6_LandMonsMorning};

static const struct WildPokemon sRoute6_LandMonsNight[] =
{
	{20, 22, SPECIES_ZIGZAGOON},
	{20, 22, SPECIES_SPINARAK},
	{20, 22, SPECIES_SHINX},
	{20, 22, SPECIES_DEERLING},
	{20, 22, SPECIES_ZIGZAGOON},
	{20, 22, SPECIES_KRICKETOT},
	{21, 22, SPECIES_KRICKETOT},
	{21, 22, SPECIES_KRICKETOT},
	{21, 22, SPECIES_DEERLING},
	{21, 22, SPECIES_KRICKETOT},
	{22, 22, SPECIES_ARIADOS},
	{22, 22, SPECIES_LUXIO},
};

static const struct WildPokemonInfo sRoute6_LandMonsInfoNight = {20, sRoute6_LandMonsNight};

static const struct WildPokemon sRoute7_LandMonsNight[] =
{
	{21, 23, SPECIES_RATTATA_A},
	{21, 23, SPECIES_HOOTHOOT},
	{21, 23, SPECIES_BUNEARY},
	{21, 23, SPECIES_DROWZEE},
	{21, 23, SPECIES_ABRA},
	{21, 23, SPECIES_MAREEP},
	{21, 23, SPECIES_SHINX},
	{21, 23, SPECIES_SHINX},
	{22, 23, SPECIES_RATTATA_A},
	{22, 23, SPECIES_BUNEARY},
	{23, 23, SPECIES_LUXIO},
	{23, 23, SPECIES_RATICATE_A},
};

static const struct WildPokemonInfo sRoute7_LandMonsInfoNight = {20, sRoute7_LandMonsNight};

static const struct WildPokemon sRoute8_LandMonsNight[] =
{
	{22, 25, SPECIES_SNOVER},
	{22, 25, SPECIES_SNORUNT},
	{22, 25, SPECIES_SNEASEL},
	{22, 25, SPECIES_SNORUNT},
	{22, 25, SPECIES_CUBCHOO},
	{22, 25, SPECIES_DEERLING_WINTER},
	{22, 25, SPECIES_FURRET},
	{22, 25, SPECIES_FLAAFFY},
	{23, 25, SPECIES_SNOVER},
	{23, 25, SPECIES_SNORUNT},
	{23, 25, SPECIES_MINIOR_SHIELD},
	{23, 25, SPECIES_MINIOR_SHIELD},
};

static const struct WildPokemonInfo sRoute8_LandMonsInfoNight = {20, sRoute8_LandMonsNight};

static const struct WildPokemon sFrozenForest_LandMonsNight[] =
{
	{23, 26, SPECIES_SNOVER},
	{23, 26, SPECIES_SNOVER},
	{23, 26, SPECIES_SNEASEL},
	{23, 26, SPECIES_CUBCHOO},
	{23, 26, SPECIES_CUBCHOO},
	{23, 26, SPECIES_CUBCHOO},
	{23, 26, SPECIES_SNOVER},
	{23, 26, SPECIES_SNEASEL},
	{23, 26, SPECIES_CUBCHOO},
	{23, 26, SPECIES_CUBCHOO},
	{26, 26, SPECIES_CUBCHOO},
	{26, 26, SPECIES_CUBCHOO},
};

static const struct WildPokemonInfo sFrozenForest_LandMonsInfoNight = {20, sFrozenForest_LandMonsNight};

static const struct WildPokemon sRoute11_LandMonsNight[] =
{
	{26, 29, SPECIES_EXEGGCUTE},
	{26, 29, SPECIES_MEOWTH},
	{26, 29, SPECIES_VENONAT},
	{26, 29, SPECIES_VENONAT},
	{26, 29, SPECIES_SPOINK},
	{26, 29, SPECIES_MEDITITE},
	{27, 29, SPECIES_SPOINK},
	{27, 29, SPECIES_MEDITITE},
	{29, 29, SPECIES_PERSIAN},
	{29, 29, SPECIES_ABSOL},
	{29, 29, SPECIES_PERSIAN},
	{29, 29, SPECIES_ABSOL},
};

static const struct WildPokemonInfo sRoute11_LandMonsInfoNight = {20, sRoute11_LandMonsNight};

static const struct WildPokemon sRoute12_LandMonsNight[] =
{
	{29, 32, SPECIES_HOOTHOOT},
	{33, 36, SPECIES_ROCKRUFF},
	{33, 36, SPECIES_INKAY},
	{33, 36, SPECIES_MIENFOO},
	{33, 36, SPECIES_PONYTA},
	{33, 36, SPECIES_SNUBBULL},
	{34, 36, SPECIES_INKAY},
	{34, 36, SPECIES_MIENFOO},
	{34, 36, SPECIES_NOCTOWL},
	{33, 36, SPECIES_TOGEDEMARU},
	{34, 36, SPECIES_NOCTOWL},
	{35, 36, SPECIES_TOGEDEMARU},
};

static const struct WildPokemonInfo sRoute12_LandMonsInfoNight = {20, sRoute12_LandMonsNight};

static const struct WildPokemon sRoute14_LandMonsNight[] =
{
	{37, 40, SPECIES_PELIPPER},
	{37, 40, SPECIES_BIBAREL},
	{37, 40, SPECIES_GOLDUCK},
	{37, 40, SPECIES_GASTRODON},
	{37, 40, SPECIES_FLOATZEL},
	{36, 40, SPECIES_SLOWPOKE},
	{37, 40, SPECIES_GLOOM},
	{37, 40, SPECIES_GLOOM},
	{38, 40, SPECIES_FLOATZEL},
	{37, 40, SPECIES_SLOWPOKE},
	{25, 30, SPECIES_ODDISH},
	{25, 30, SPECIES_ODDISH},
};

static const struct WildPokemonInfo sRoute14_LandMonsInfoNight = {20, sRoute14_LandMonsNight};

static const struct WildPokemon sVivillWoods_LandMonsNight[] =
{
	{30, 35, SPECIES_WEEDLE},
	{30, 35, SPECIES_WURMPLE},
	{30, 35, SPECIES_SCATTERBUG},
	{38, 41, SPECIES_COTTONEE},
	{39, 41, SPECIES_SWADLOON},
	{38, 41, SPECIES_PETILIL},
	{39, 41, SPECIES_SPEWPA},
	{39, 41, SPECIES_KAKUNA},
	{39, 41, SPECIES_SILCOON},
	{39, 41, SPECIES_CASCOON},
	{39, 41, SPECIES_SILCOON},
	{39, 41, SPECIES_CASCOON},
};

static const struct WildPokemonInfo sVivillWoods_LandMonsInfoNight = {20, sVivillWoods_LandMonsNight};

static const struct WildPokemon sRoute17_LandMonsNight[] =
{
	{47, 50, SPECIES_NOCTOWL},
	{47, 50, SPECIES_PELIPPER},
	{47, 50, SPECIES_NOCTOWL},
	{47, 50, SPECIES_PELIPPER},
	{47, 50, SPECIES_NOCTOWL},
	{47, 50, SPECIES_NOCTOWL},
	{47, 50, SPECIES_NOCTOWL},
	{47, 50, SPECIES_NOCTOWL},
	{48, 50, SPECIES_ZANGOOSE},
	{48, 50, SPECIES_SEVIPER},
	{40, 45, SPECIES_BAGON},
	{40, 45, SPECIES_BAGON},
};

static const struct WildPokemonInfo sRoute17_LandMonsInfoNight = {20, sRoute17_LandMonsNight};

static const struct WildPokemon sCootesBog_LandMonsNight[] =
{
	{48, 52, SPECIES_CROAGUNK},
	{49, 52, SPECIES_QUAGSIRE},
	{48, 52, SPECIES_CROAGUNK},
	{50, 52, SPECIES_SLIGGOO},
	{50, 52, SPECIES_SLIGGOO},
	{51, 52, SPECIES_DRAPION},
	{49, 52, SPECIES_CARNIVINE},
	{49, 52, SPECIES_GLOOM},
	{49, 52, SPECIES_GLOOM},
	{52, 52, SPECIES_TOXICROAK},
	{49, 52, SPECIES_GLOOM},
	{52, 52, SPECIES_TOXICROAK},
};

static const struct WildPokemonInfo sCootesBog_LandMonsInfoNight = {20, sCootesBog_LandMonsNight};

static const struct WildPokemon sRoute18_LandMonsNight[] =
{
	{53, 57, SPECIES_NOCTOWL},
	{53, 57, SPECIES_SKUNTANK},
	{53, 57, SPECIES_NOCTOWL},
	{53, 57, SPECIES_SKUNTANK},
	{53, 57, SPECIES_BOUFFALANT},
	{53, 57, SPECIES_BOUFFALANT},
	{53, 57, SPECIES_NOCTOWL},
	{53, 57, SPECIES_SKUNTANK},
	{53, 57, SPECIES_SUDOWOODO},
	{53, 57, SPECIES_AUDINO},
	{53, 57, SPECIES_SUDOWOODO},
	{53, 57, SPECIES_AUDINO},
};

static const struct WildPokemonInfo sRoute18_LandMonsInfoNight = {20, sRoute18_LandMonsNight};

const struct WildPokemonHeader gWildMonMorningHeaders[] =
{
	{
		.mapGroup = MAP_GROUP(ROUTE_6),
		.mapNum = MAP_NUM(ROUTE_6),
		.landMonsInfo = &sRoute6_LandMonsInfoMorning,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = 0xFF,
		.mapNum = 0xFF,
		.landMonsInfo = NULL,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	}
};

const struct WildPokemonHeader gWildMonEveningHeaders[] =
{
	{
		.mapGroup = 0xFF,
		.mapNum = 0xFF,
		.landMonsInfo = NULL,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	}
};

const struct WildPokemonHeader gWildMonNightHeaders[] =
{
	{
		.mapGroup = MAP_GROUP(ROUTE_2),
		.mapNum = MAP_NUM(ROUTE_2),
		.landMonsInfo = &sRoute2_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_3),
		.mapNum = MAP_NUM(ROUTE_3),
		.landMonsInfo = &sRoute3_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_4),
		.mapNum = MAP_NUM(ROUTE_4),
		.landMonsInfo = &sRoute4_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(GRIM_WOODS),
		.mapNum = MAP_NUM(GRIM_WOODS),
		.landMonsInfo = &sGrimWoods_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_5),
		.mapNum = MAP_NUM(ROUTE_5),
		.landMonsInfo = &sRoute5_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_6),
		.mapNum = MAP_NUM(ROUTE_6),
		.landMonsInfo = &sRoute6_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_7),
		.mapNum = MAP_NUM(ROUTE_7),
		.landMonsInfo = &sRoute7_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_8),
		.mapNum = MAP_NUM(ROUTE_8),
		.landMonsInfo = &sRoute8_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(FROZEN_FOREST),
		.mapNum = MAP_NUM(FROZEN_FOREST),
		.landMonsInfo = &sFrozenForest_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_11),
		.mapNum = MAP_NUM(ROUTE_11),
		.landMonsInfo = &sRoute11_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_12),
		.mapNum = MAP_NUM(ROUTE_12),
		.landMonsInfo = &sRoute12_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_14_B),
		.mapNum = MAP_NUM(ROUTE_14_B),
		.landMonsInfo = &sRoute14_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_14_C),
		.mapNum = MAP_NUM(ROUTE_14_C),
		.landMonsInfo = &sRoute14_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(VIVILL_WOODS),
		.mapNum = MAP_NUM(VIVILL_WOODS),
		.landMonsInfo = &sVivillWoods_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_17),
		.mapNum = MAP_NUM(ROUTE_17),
		.landMonsInfo = &sRoute17_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(COOTES_BOG),
		.mapNum = MAP_NUM(COOTES_BOG),
		.landMonsInfo = &sCootesBog_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_18_B),
		.mapNum = MAP_NUM(ROUTE_18_B),
		.landMonsInfo = &sRoute18_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = 0xFF,
		.mapNum = 0xFF,
		.landMonsInfo = NULL,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	}
};

const struct SwarmData gSwarmTable[] =
{
	{
		.mapName = MAPSEC_ROUTE_1,
		.species = SPECIES_SNEASEL,
	},
	{
		.mapName = MAPSEC_ROUTE_2,
		.species = SPECIES_BURMY,
	},
	{
		.mapName = MAPSEC_FLOWER_PARADISE,
		.species = SPECIES_CHERUBI,
	},
	{
		.mapName = MAPSEC_GRIM_WOODS,
		.species = SPECIES_NINCADA,
	},
	{
		.mapName = MAPSEC_ROUTE_4,
		.species = SPECIES_LITLEO,
	},
	{
		.mapName = MAPSEC_CINDER_VOLCANO,
		.species = SPECIES_VULPIX,
	},
	{
		.mapName = MAPSEC_ROUTE_5,
		.species = SPECIES_PURRLOIN,
	},
	{
		.mapName = MAPSEC_ROUTE_5,
		.species = SPECIES_ELGYEM,
	},
	{
		.mapName = MAPSEC_VALLEY_CAVE,
		.species = SPECIES_DUNSPARCE,
	},
	{
		.mapName = MAPSEC_ROUTE_6,
		.species = SPECIES_SMEARGLE,
	},
	{
		.mapName = MAPSEC_ROUTE_7,
		.species = SPECIES_MR_MIME,
	},
	{
		.mapName = MAPSEC_ROUTE_8,
		.species = SPECIES_STANTLER,
	},
	{
		.mapName = MAPSEC_ROUTE_9,
		.species = SPECIES_KARRABLAST,
	},
	{
		.mapName = MAPSEC_ROUTE_10,
		.species = SPECIES_SHELMET,
	},
	{
		.mapName = MAPSEC_ROUTE_11,
		.species = SPECIES_GLAMEOW,
	},
	{
		.mapName = MAPSEC_THUNDERCAP_MOUNTAIN,
		.species = SPECIES_JOLTIK,
	},
	{
		.mapName = MAPSEC_THUNDERCAP_MOUNTAIN,
		.species = SPECIES_FERROSEED,
	},
	{
		.mapName = MAPSEC_ROUTE_12,
		.species = SPECIES_SWIRLIX,
	},
	{
		.mapName = MAPSEC_ROUTE_12,
		.species = SPECIES_SPRITZEE,
	},
	{
		.mapName = MAPSEC_VIVILL_WOODS,
		.species = SPECIES_PIKACHU,
	},
	{
		.mapName = MAPSEC_ROUTE_16,
		.species = SPECIES_GOTHORITA,
	},
	{
		.mapName = MAPSEC_ROUTE_16,
		.species = SPECIES_DUOSION,
	},
	{
		.mapName = MAPSEC_ROUTE_17,
		.species = SPECIES_VOLBEAT,
	},
	{
		.mapName = MAPSEC_ROUTE_17,
		.species = SPECIES_ILLUMISE,
	},
	{
		.mapName = MAPSEC_COOTES_BOG,
		.species = SPECIES_CROCONAW,
	},
	{
		.mapName = MAPSEC_ROUTE_18,
		.species = SPECIES_BAYLEEF,
	}
};

#endif

const u16 gSwarmTableLength = NELEMS(gSwarmTable);
