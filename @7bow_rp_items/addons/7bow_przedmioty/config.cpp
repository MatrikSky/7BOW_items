#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class 7bow_przedmioty
	{
		name = "Clan [7BOW] RP Items ©";
		author = "MatrikSky, Wojtek885";
		requiredVersion = 1;
		units[] = {"7bow_przedmioty"};
		weapons[] = {};
		requiredAddons[] = {"a3_structures_f","a3_weapons_f"};
	};
};

class cfgMagazines
{
	class CA_Magazine;
	class ACE_morphine;
	class ACE_personalAidKit;
	class ACE_Cellphone;
	class 7bow_pryncypalki: CA_Magazine
	{
		author = "MatrikSky, Wojtek885";
		descriptionShort = "Kakaowe Pryncypalki.";
		displayName = "Pryncypalki";
		mass = 1;
		//model="";
		picture = "\7bow_przedmioty\data\pryncypalki.paa";
		scope = 2;
	};
	class 7bow_gotowka: CA_Magazine
	{
		author = "MatrikSky, Wojtek885";
		descriptionShort = "Trochę Gotowki.";
		displayName = "Gotowka";
		mass = 1;
		model = "\A3\structures_f\Items\Valuables\Money_F";
		picture = "\7bow_przedmioty\data\gotowka.paa";
		scope = 2;
	};
	class 7bow_aceton: CA_Magazine
	{
		author = "MatrikSky, Wojtek885";
		descriptionShort = "";
		displayName = "Pojemnik Acetonu";
		mass = 1;
		//model = "\A3\structures_f\Items\Valuables\Money_F";
		picture = "\7bow_przedmioty\data\aceton.paa";
		scope = 2;
	};
	class 7bow_biblia: CA_Magazine
	{
		author = "MatrikSky, Wojtek885";
		descriptionShort = "";
		displayName = "Biblia";
		mass = 1;
		//model = "\A3\structures_f\Items\Valuables\Money_F";
		picture = "\7bow_przedmioty\data\biblia.paa";
		scope = 2;
	};
	class 7bow_dowod_pl: CA_Magazine
	{
		author = "MatrikSky, Wojtek885";
		descriptionShort = "Polski Dowod Osobisty.";
		displayName = "Dowod Osobisty [Polski]";
		mass = 1;
		//model="";
		picture = "\7bow_przedmioty\data\dowod_pl.paa";
		scope = 2;
	};
	class 7bow_prawojazdy_pl: CA_Magazine
	{
		author = "MatrikSky, Wojtek885";
		descriptionShort = "Polskie Prawo Jazdy.";
		displayName = "Prawo Jazdy [Polskie]";
		mass = 1;
		//model="";
		picture = "\7bow_przedmioty\data\prawojazdy_pl.paa";
		scope = 2;
	};
	class 7bow_prawojazdy: CA_Magazine
	{
		author = "MatrikSky, Wojtek885";
		descriptionShort = "";
		displayName = "Prawo Jazdy";
		mass = 1;
		//model="";
		picture = "\7bow_przedmioty\data\prawojazdy.paa";
		scope = 2;
	};
	class 7bow_karta_debetowa: CA_Magazine
	{
		author = "MatrikSky, Wojtek885";
		descriptionShort = "";
		displayName = "Karta Debetowa";
		mass = 1;
		//model="";
		picture = "\7bow_przedmioty\data\karta_debetowa.paa";
		scope = 2;
	};
	class 7bow_paszport_pl: CA_Magazine
	{
		author = "MatrikSky, Wojtek885";
		descriptionShort = "Paszport Rzeczpospolitej Polskiej.";
		displayName = "Paszport [Polski]";
		mass = 1;
		//model="";
		picture = "\7bow_przedmioty\data\paszport_pl.paa";
		scope = 2;
	};
	class 7bow_paszport_polsatu: CA_Magazine
	{
		author = "MatrikSky, Wojtek885";
		descriptionShort = "";
		displayName = "Paszport Polsatu";
		mass = 1;
		//model="";
		picture = "\7bow_przedmioty\data\paszport_polsat.paa";
		scope = 2;
	};
	class 7bow_jablko: CA_Magazine
	{
		author = "MatrikSky, Wojtek885";
		descriptionShort = "";
		displayName = "Jablko";
		mass = 1;
		//model="";
		picture = "\7bow_przedmioty\data\jablko.paa";
		scope = 2;
	};
	class 7bow_pomarancza: CA_Magazine
	{
		author = "MatrikSky, Wojtek885";
		descriptionShort = "";
		displayName = "Pomarancza";
		mass = 1;
		//model="";
		picture = "\7bow_przedmioty\data\pomarancza.paa";
		scope = 2;
	};
	class 7bow_ziemniak: CA_Magazine
	{
		author = "MatrikSky, Wojtek885";
		descriptionShort = "";
		displayName = "Ziemniak";
		mass = 1;
		//model="";
		picture = "\7bow_przedmioty\data\ziemniak.paa";
		scope = 2;
	};
	class 7bow_paszport: CA_Magazine
	{
		author = "MatrikSky, Wojtek885";
		descriptionShort = "";
		displayName = "Paszport";
		mass = 1;
		//model="";
		picture = "\7bow_przedmioty\data\paszport.paa";
		scope = 2;
	};
	class 7bow_dowod: CA_Magazine
	{
		author = "MatrikSky, Wojtek885";
		descriptionShort = "";
		displayName = "Dowod Osobisty";
		mass = 1;
		//model="";
		picture = "\7bow_przedmioty\data\dowod.paa";
		scope = 2;
	};
	class 7bow_dur: CA_Magazine
	{
		author = "MatrikSky, Wojtek885";
		descriptionShort = "";
		displayName = "Paczka Durex";
		mass = 1;
		//model="";
		picture = "\7bow_przedmioty\data\dur.paa";
		scope = 2;
	};
	class 7bow_apteczka: CA_Magazine
	{
		author = "MatrikSky, Wojtek885";
		descriptionShort = "";
		displayName = "Apteczka Cywilna";
		mass = 1;
		//model="\A3\structures_f_epa\Items\medical\Defibrillator_F";
		picture = "\7bow_przedmioty\data\apteczka.paa";
		scope = 2;
	};
	class 7bow_ibuprofen: CA_Magazine
	{
		author = "MatrikSky, Wojtek885";
		descriptionShort = "";
		displayName = "Ibuprofen";
		mass = 1;
		model="\A3\structures_f_epa\Items\medical\VitaminBottle_F";
		picture = "\7bow_przedmioty\data\ibuprofen.paa";
		scope = 2;
	};
	class 7bow_bestia: CA_Magazine
	{
		author = "MatrikSky, Wojtek885";
		descriptionShort = "";
		displayName = "Obrazek z Papiezem";
		mass = 1;
		//model="";
		picture = "\7bow_przedmioty\data\bestia.paa";
		scope = 2;
	};
	class 7bow_tablet_mil: CA_Magazine
	{
		author = "MatrikSky, Wojtek885";
		descriptionShort = "";
		displayName = "Wojskowy Tablet";
		mass = 1;
		//model="";
		picture = "\7bow_przedmioty\data\tablet_mil.paa";
		scope = 2;
	};
	class 7bow_karta_sd: CA_Magazine
	{
		author = "MatrikSky, Wojtek885";
		descriptionShort = "";
		displayName = "Karta SD";
		mass = 1;
		//model="";
		picture = "\7bow_przedmioty\data\karta_sd.paa";
		scope = 2;
	};
	class 7bow_zestaw_mcd: CA_Magazine
	{
		author = "MatrikSky, Wojtek885";
		descriptionShort = "";
		displayName = "Zestaw MCDonald's";
		mass = 1;
		//model="";
		picture = "\7bow_przedmioty\data\zestaw_mcd.paa";
		scope = 2;
	};
	class 7bow_dlugopis: CA_Magazine
	{
		author = "MatrikSky, Wojtek885";
		descriptionShort = "";
		displayName = "Dlugopis";
		mass = 1;
		model="\A3\structures_f\Items\Stationery\PenBlack_F";
		picture = "\7bow_przedmioty\data\dlugopis.paa";
		scope = 2;
	};
	class 7bow_hdd: CA_Magazine
	{
		author = "MatrikSky, Wojtek885";
		descriptionShort = "";
		displayName = "Dysk Twardy";
		mass = 1;
		//model="";
		picture = "\7bow_przedmioty\data\hdd.paa";
		scope = 2;
	};
	class 7bow_heineken: CA_Magazine
	{
		author = "MatrikSky, Wojtek885";
		descriptionShort = "";
		displayName = "Heineken";
		mass = 1;
		//model="";
		picture = "\7bow_przedmioty\data\heineken.paa";
		scope = 2;
	};
	class 7bow_herbata: CA_Magazine
	{
		author = "MatrikSky, Wojtek885";
		descriptionShort = "";
		displayName = "Herabata";
		mass = 1;
		//model="";
		picture = "\7bow_przedmioty\data\herbata.paa";
		scope = 2;
	};
	class 7bow_heroina: CA_Magazine
	{
		author = "MatrikSky, Wojtek885";
		descriptionShort = "";
		displayName = "Heroina";
		mass = 1;
		//model="";
		picture = "\7bow_przedmioty\data\heroina.paa";
		scope = 2;
	};
	class 7bow_kawa: CA_Magazine
	{
		author = "MatrikSky, Wojtek885";
		descriptionShort = "";
		displayName = "Kawa";
		mass = 1;
		//model="";
		picture = "\7bow_przedmioty\data\kawa.paa";
		scope = 2;
	};
	class 7bow_lustrzanka: CA_Magazine
	{
		author = "MatrikSky, Wojtek885";
		descriptionShort = "";
		displayName = "Lustrzanka";
		mass = 1;
		model="\A3\structures_f\Items\Electronics\HandyCam_F";
		picture = "\7bow_przedmioty\data\lustrzanka.paa";
		scope = 2;
	};
	class 7bow_malboro: CA_Magazine
	{
		author = "MatrikSky, Wojtek885";
		descriptionShort = "";
		displayName = "Papierosy";
		mass = 1;
		//model="";
		picture = "\7bow_przedmioty\data\malboro.paa";
		scope = 2;
	};
	class 7bow_pendrak_mil: CA_Magazine
	{
		author = "MatrikSky, Wojtek885";
		descriptionShort = "";
		displayName = "Wojskowy PenDrive";
		mass = 1;
		//model="";
		picture = "\7bow_przedmioty\data\pendrak_mil.paa";
		scope = 2;
	};
	class 7bow_tablet: CA_Magazine
	{
		author = "MatrikSky, Wojtek885";
		descriptionShort = "";
		displayName = "Tablet";
		mass = 1;
		//model="";
		picture = "\7bow_przedmioty\data\tablet.paa";
		scope = 2;
	};
	class 7bow_portfel: CA_Magazine
	{
		author = "MatrikSky, Wojtek885";
		descriptionShort = "";
		displayName = "Portfel";
		mass = 1;
		//model="";
		picture = "\7bow_przedmioty\data\portfel.paa";
		scope = 2;
	};
	class 7bow_telefon: CA_Magazine
	{
		author = "MatrikSky, Wojtek885";
		descriptionShort = "";
		displayName = "Smartfon";
		mass = 1;
		model="\A3\structures_f\Items\Electronics\MobilePhone_smart_F";
		picture = "\7bow_przedmioty\data\telefon.paa";
		scope = 2;
	};
	class 7bow_pc: CA_Magazine
	{
		author = "MatrikSky, Wojtek885";
		descriptionShort = "";
		displayName = "Komputer";
		mass = 1;
		//model="";
		picture = "\7bow_przedmioty\data\pc.paa";
		scope = 2;
	};
	class 7bow_klawiatura: CA_Magazine
	{
		author = "MatrikSky, Wojtek885";
		descriptionShort = "";
		displayName = "Klawiatura";
		mass = 1;
		//model="";
		picture = "\7bow_przedmioty\data\klawiatura.paa";
		scope = 2;
	};
	class 7bow_myszka: CA_Magazine
	{
		author = "MatrikSky, Wojtek885";
		descriptionShort = "";
		displayName = "Myszka";
		mass = 1;
		//model="";
		picture = "\7bow_przedmioty\data\myszka.paa";
		scope = 2;
	};
	class 7bow_kostka_ziola: CA_Magazine
	{
		author = "MatrikSky, Wojtek885";
		descriptionShort = "";
		displayName = "Kostka Marihuany";
		mass = 1;
		//model="";
		picture = "\7bow_przedmioty\data\kostka_ziola.paa";
		scope = 2;
	};
	class 7bow_kostka_kokainy: CA_Magazine
	{
		author = "MatrikSky, Wojtek885";
		descriptionShort = "";
		displayName = "Kostka Kokainy";
		mass = 1;
		//model="";
		picture = "\7bow_przedmioty\data\kostka_kokainy.paa";
		scope = 2;
	};
	class 7bow_worek_ziola: CA_Magazine
	{
		author = "MatrikSky, Wojtek885";
		descriptionShort = "";
		displayName = "Woreczek Marihuany";
		mass = 1;
		//model="";
		picture = "\7bow_przedmioty\data\worek_ziola.paa";
		scope = 2;
	};
	class 7bow_worek_kokainy: CA_Magazine
	{
		author = "MatrikSky, Wojtek885";
		descriptionShort = "";
		displayName = "Woreczek Kokainy";
		mass = 1;
		//model="";
		picture = "\7bow_przedmioty\data\worek_kokainy.paa";
		scope = 2;
	};
	class 7bow_worek_mdma: CA_Magazine
	{
		author = "MatrikSky, Wojtek885";
		descriptionShort = "";
		displayName = "Woreczek MDMA";
		mass = 1;
		//model="";
		picture = "\7bow_przedmioty\data\worek_mdma.paa";
		scope = 2;
	};
	class 7bow_worek_mety: CA_Magazine
	{
		author = "MatrikSky, Wojtek885";
		descriptionShort = "";
		displayName = "Woreczek Metamfetaminy";
		mass = 1;
		//model="";
		picture = "\7bow_przedmioty\data\worek_mety.paa";
		scope = 2;
	};
	class 7bow_mocarz: CA_Magazine
	{
		author = "MatrikSky, Wojtek885";
		descriptionShort = "";
		displayName = "Mocarz";
		mass = 1;
		//model="";
		picture = "\7bow_przedmioty\data\mocarz.paa";
		scope = 2;
	};
	class 7bow_chujnia: CA_Magazine
	{
		author = "MatrikSky, Wojtek885";
		descriptionShort = "";
		displayName = "Chujnia";
		mass = 1;
		//model="";
		picture = "\7bow_przedmioty\data\chujnia.paa";
		scope = 2;
	};
	class 7bow_pendrak: CA_Magazine
	{
		author = "MatrikSky, Wojtek885";
		descriptionShort = "";
		displayName = "PenDrive";
		mass = 1;
		//model="";
		picture = "\7bow_przedmioty\data\pendrak.paa";
		scope = 2;
	};
	class 7bow_ogurek: CA_Magazine
	{
		author = "MatrikSky, Wojtek885";
		descriptionShort = "";
		displayName = "Ogurek";
		mass = 1;
		//model="";
		picture = "\7bow_przedmioty\data\ogurek.paa";
		scope = 2;
	};
	class 7bow_warka1: CA_Magazine
	{
		author = "MatrikSky, Wojtek885";
		descriptionShort = "";
		displayName = "Warka";
		mass = 1;
		//model="";
		picture = "\7bow_przedmioty\data\warka1.paa";
		scope = 2;
	};
	class 7bow_warka2: CA_Magazine
	{
		author = "MatrikSky, Wojtek885";
		descriptionShort = "";
		displayName = "Warka";
		mass = 1;
		//model="";
		picture = "\7bow_przedmioty\data\warka2.paa";
		scope = 2;
	};
	class 7bow_harnas1: CA_Magazine
	{
		author = "MatrikSky, Wojtek885";
		descriptionShort = "";
		displayName = "Harnas";
		mass = 1;
		//model="";
		picture = "\7bow_przedmioty\data\harnas1.paa";
		scope = 2;
	};
	class 7bow_harnas2: CA_Magazine
	{
		author = "MatrikSky, Wojtek885";
		descriptionShort = "";
		displayName = "Harnas";
		mass = 1;
		//model="";
		picture = "\7bow_przedmioty\data\harnas2.paa";
		scope = 2;
	};
	class 7bow_laptop: CA_Magazine
	{
		author = "MatrikSky, Wojtek885";
		descriptionShort = "";
		displayName = "Laptop";
		mass = 1;
		model="\A3\structures_f\Items\Electronics\Laptop_unfolded_F";
		picture = "\7bow_przedmioty\data\laptop.paa";
		scope = 2;
	};
	class 7bow_ledy: CA_Magazine
	{
		author = "MatrikSky, Wojtek885";
		descriptionShort = "";
		displayName = "Pasek LED RGB";
		mass = 1;
		//model="";
		picture = "\7bow_przedmioty\data\ledy.paa";
		scope = 2;
	};
	class 7bow_ksiazeczka_wojskowa: CA_Magazine
	{
		author = "MatrikSky, Wojtek885";
		descriptionShort = "";
		displayName = "Ksiazeczka Wojskowa";
		mass = 1;
		//model="";
		picture = "\7bow_przedmioty\data\ksiazeczka_wojskowa.paa";
		scope = 2;
	};
	class 7bow_cebula: CA_Magazine
	{
		author = "MatrikSky, Wojtek885";
		descriptionShort = "";
		displayName = "Cebula";
		mass = 1;
		//model="";
		picture = "\7bow_przedmioty\data\cebula.paa";
		scope = 2;
	};
	class 7bow_cebula: CA_Magazine
	{
		author = "MatrikSky, Wojtek885";
		descriptionShort = "";
		displayName = "Cebula";
		mass = 1;
		//model="";
		picture = "\7bow_przedmioty\data\cebula.paa";
		scope = 2;
	};
	class 7bow_chalwa: CA_Magazine
	{
		author = "MatrikSky, Wojtek885";
		descriptionShort = "";
		displayName = "Chalwa";
		mass = 1;
		//model="";
		picture = "\7bow_przedmioty\data\chalwa.paa";
		scope = 2;
	};
	class 7bow_smiec: CA_Magazine
	{
		author = "MatrikSky, Wojtek885";
		descriptionShort = "";
		displayName = "Maskotka George'a Floyda";
		mass = 1;
		//model="";
		picture = "\7bow_przedmioty\data\smiec.paa";
		scope = 2;
	};
	class 7bow_smiec: CA_Magazine
	{
		author = "MatrikSky, Wojtek885";
		descriptionShort = "";
		displayName = "Maskotka George'a Floyda";
		mass = 1;
		//model="";
		picture = "\7bow_przedmioty\data\smiec.paa";
		scope = 2;
	};
	class 7bow_cukier: CA_Magazine
	{
		author = "MatrikSky, Wojtek885";
		descriptionShort = "";
		displayName = "Cukier";
		mass = 1;
		//model="";
		picture = "\7bow_przedmioty\data\cukier.paa";
		scope = 2;
	};
	class 7bow_czaszka: CA_Magazine
	{
		author = "MatrikSky, Wojtek885";
		descriptionShort = "";
		displayName = "Ludzka Czaszka";
		mass = 1;
		//model="";
		picture = "\7bow_przedmioty\data\czaszka.paa";
		scope = 2;
	};
	class 7bow_czaszka_dziecka: CA_Magazine
	{
		author = "MatrikSky, Wojtek885";
		descriptionShort = "";
		displayName = "Dziecięca Czaszka";
		mass = 1;
		//model="";
		picture = "\7bow_przedmioty\data\czaszka_dziecka.paa";
		scope = 2;
	};
	class 7bow_fajerwerki: CA_Magazine
	{
		author = "MatrikSky, Wojtek885";
		descriptionShort = "";
		displayName = "Fajerwerki";
		mass = 1;
		//model="";
		picture = "\7bow_przedmioty\data\fajerwerki.paa";
		scope = 2;
	};
	class 7bow_gowno: CA_Magazine
	{
		author = "MatrikSky, Wojtek885";
		descriptionShort = "";
		displayName = "Gowno";
		mass = 1;
		//model="";
		picture = "\7bow_przedmioty\data\gowno.paa";
		scope = 2;
	};
	class 7bow_kapusta: CA_Magazine
	{
		author = "MatrikSky, Wojtek885";
		descriptionShort = "";
		displayName = "Kapusta";
		mass = 1;
		//model="";
		picture = "\7bow_przedmioty\data\kapusta.paa";
		scope = 2;
	};
	class 7bow_klatka: CA_Magazine
	{
		author = "MatrikSky, Wojtek885";
		descriptionShort = "";
		displayName = "Klatka";
		mass = 1;
		//model="";
		picture = "\7bow_przedmioty\data\klatka.paa";
		scope = 2;
	};
	class 7bow_klatka: CA_Magazine
	{
		author = "MatrikSky, Wojtek885";
		descriptionShort = "";
		displayName = "Klatka";
		mass = 1;
		//model="";
		picture = "\7bow_przedmioty\data\klatka.paa";
		scope = 2;
	};
	class 7bow_konserwa: CA_Magazine
	{
		author = "MatrikSky, Wojtek885";
		descriptionShort = "";
		displayName = "Konserwa";
		mass = 1;
		//model="";
		picture = "\7bow_przedmioty\data\konserwa.paa";
		scope = 2;
	};
	class 7bow_kosc_ludzka: CA_Magazine
	{
		author = "MatrikSky, Wojtek885";
		descriptionShort = "";
		displayName = "Kosc Ludzka";
		mass = 1;
		//model="";
		picture = "\7bow_przedmioty\data\kosc_ludzka.paa";
		scope = 2;
	};
	class 7bow_kosc_zwierzeca: CA_Magazine
	{
		author = "MatrikSky, Wojtek885";
		descriptionShort = "";
		displayName = "Kosc Zwierzeca";
		mass = 1;
		//model="";
		picture = "\7bow_przedmioty\data\kosc_zwierzeca.paa";
		scope = 2;
	};
	class 7bow_kremowka: CA_Magazine
	{
		author = "MatrikSky, Wojtek885";
		descriptionShort = "";
		displayName = "Kremowka";
		mass = 1;
		//model="";
		picture = "\7bow_przedmioty\data\kremowka.paa";
		scope = 2;
	};
	class 7bow_leg_broni: CA_Magazine
	{
		author = "MatrikSky, Wojtek885";
		descriptionShort = "";
		displayName = "Legitymacja Osoby Dopuszczonej Do Posiadania Broni";
		mass = 1;
		//model="";
		picture = "\7bow_przedmioty\data\leg_broni.paa";
		scope = 2;
	};
	class 7bow_legitymacja_szkolna: CA_Magazine
	{
		author = "MatrikSky, Wojtek885";
		descriptionShort = "";
		displayName = "Legitymacja Szkolna";
		mass = 1;
		//model="";
		picture = "\7bow_przedmioty\data\legitymacja_szkolna.paa";
		scope = 2;
	};
	class 7bow_legitymacja_szkolna: CA_Magazine
	{
		author = "MatrikSky, Wojtek885";
		descriptionShort = "";
		displayName = "Legitymacja Szkolna";
		mass = 1;
		//model="";
		picture = "\7bow_przedmioty\data\legitymacja_szkolna.paa";
		scope = 2;
	};
	class 7bow_lopata: CA_Magazine
	{
		author = "MatrikSky, Wojtek885";
		descriptionShort = "";
		displayName = "Lopata";
		mass = 1;
		//model="";
		picture = "\7bow_przedmioty\data\lopata.paa";
		scope = 2;
	};
	class 7bow_mieso: CA_Magazine
	{
		author = "MatrikSky, Wojtek885";
		descriptionShort = "";
		displayName = "Surowe Mieso";
		mass = 1;
		//model="";
		picture = "\7bow_przedmioty\data\mieso.paa";
		scope = 2;
	};
	class 7bow_pantofle: CA_Magazine
	{
		author = "MatrikSky, Wojtek885";
		descriptionShort = "";
		displayName = "Pantofle";
		mass = 1;
		//model="";
		picture = "\7bow_przedmioty\data\pantofle.paa";
		scope = 2;
	};
};

class cfgVehicles
{
	class NATO_Box_Base;
	class 7bow_food: NATO_Box_Base
	{
		scope = 2;
		vehicleClass = "Ammo";
		displayName = "7BOW RP Items [Food]";
		model = "\A3\weapons_f\Ammoboxes\Ammobox_F";
		icon = "iconCrateWpns";
		transportMaxMagazines = 100000;
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems
		{
			class 7bow_pryncypalki		{name = "7bow_pryncypalki"; count = 100;};
			class 7bow_chalwa			{name = "7bow_chalwa"; count = 100;};
			class 7bow_kremowk			{name = "7bow_kremowk"; count = 100;};
			class 7bow_zestaw_mcd		{name = "7bow_zestaw_mcd"; count = 100;};
			class 7bow_jablko			{name = "7bow_jablko"; count = 100;};
			class ACE_Banana			{name = "ACE_Banana"; count = 100;};
			class 7bow_pomarancz		{name = "7bow_pomarancz"; count = 100;};
			class 7bow_kapusta			{name = "7bow_kapusta"; count = 100;};
			class 7bow_mieso			{name = "7bow_mieso"; count = 100;};
			class 7bow_ziemniak			{name = "7bow_ziemniak"; count = 100;};
			class 7bow_ogurek			{name = "7bow_ogurek"; count = 100;}
			class 7bow_konserwa			{name = "7bow_konserwa"; count = 100;}
			class 7bow_herbata			{name = "7bow_herbata"; count = 100;};
			class 7bow_kawa				{name = "7bow_kawa"; count = 100;};
			class 7bow_cebula			{name = "7bow_cebula"; count = 100;};
			class 7bow_cukier			{name = "7bow_cukier"; count = 100;};
			class 7bow_heineken			{name = "7bow_heineken"; count = 100;};
			class 7bow_warka2			{name = "7bow_warka2"; count = 100;};
			class 7bow_warka1			{name = "7bow_warka1"; count = 100;};
			class 7bow_harnas2			{name = "7bow_harnas2"; count = 100;};
			class 7bow_harnas1			{name = "7bow_harnas1"; count = 100;};
		};
	};

	class 7bow_id: NATO_Box_Base
	{
		scope = 2;
		vehicleClass = "Ammo";
		displayName = "7BOW RP Items [ID]";
		model = "\A3\weapons_f\Ammoboxes\Ammobox_F";
		icon = "iconCrateWpns";
		transportMaxMagazines = 100000;
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems
		{
			class 7bow_dowod_pl					{name = "7bow_dowod_pl"; count = 100;};
			class 7bow_dowod					{name = "7bow_dowod"; count = 100;};
			class 7bow_legitymacja_szkolna		{name = "7bow_legitymacja_szkolna"; count = 100;};
			class 7bow_prawojazdy_pl			{name = "7bow_prawojazdy_pl"; count = 100;};
			class 7bow_prawojazdy				{name = "7bow_prawojazdy"; count = 100;};
			class 7bow_leg_broni				{name = "7bow_leg_broni"; count = 100;};
			class 7bow_ksiazeczka_wojskowa		{name = "7bow_ksiazeczka_wojskowa"; count = 100;};
			class 7bow_paszport_pl				{name = "7bow_paszport_pl"; count = 100;};
			class 7bow_paszport					{name = "7bow_paszport"; count = 100;}
			class 7bow_paszport_polsatu			{name = "7bow_paszport_polsatu"; count = 100;};
			class 7bow_karta_debetowa			{name = "7bow_karta_debetowa"; count = 100;};
		};
	};

	class 7bow_ele: NATO_Box_Base
	{
		scope = 2;
		vehicleClass = "Ammo";
		displayName = "7BOW RP Items [Electronics]";
		model = "\A3\weapons_f\Ammoboxes\Ammobox_F";
		icon = "iconCrateWpns";
		transportMaxMagazines = 100000;
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems
		{
			class 7bow_telefon				{name = "7bow_telefon"; count = 100;};
			class ACE_Cellphone				{name = "ACE_Cellphone"; count = 100;};
			class 7bow_tablet				{name = "7bow_tablet"; count = 100;};
			class 7bow_tablet_mil			{name = "7bow_tablet_mil"; count = 100;};
			class 7bow_laptop				{name = "7bow_laptop"; count = 100;};
			class 7bow_pc					{name = "7bow_pc"; count = 100;};
			class 7bow_klawiatura			{name = "7bow_klawiatura"; count = 100;};
			class 7bow_myszka				{name = "7bow_myszka"; count = 100;};
			class 7bow_karta_sd				{name = "7bow_karta_sd"; count = 100;};
			class 7bow_hdd					{name = "7bow_hdd"; count = 100;};
			class 7bow_lustrzanka			{name = "7bow_lustrzanka"; count = 100;};
			class 7bow_pendrak				{name = "7bow_pendrak"; count = 100;};
			class 7bow_pendrak_mil			{name = "7bow_pendrak_mil"; count = 100;};
		};
	};

	class 7bow_medical: NATO_Box_Base
	{
		scope = 2;
		vehicleClass = "Ammo";
		displayName = "7BOW Medical Crate";
		model = "\A3\weapons_f\Ammoboxes\Ammobox_F";
		icon = "iconCrateWpns";
		transportMaxMagazines = 100000;
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems
		{
			class ACE_fieldDressing				{name = "ACE_fieldDressing"; count = 100;};
			class ACE_elasticBandage			{name = "ACE_elasticBandage"; count = 100;};
			class ACE_quikclot					{name = "ACE_quikclot"; count = 100;};
			class ACE_packingBandage			{name = "ACE_packingBandage"; count = 100;};
			class 7bow_ibuprofen				{name = "7bow_ibuprofen"; count = 30;};
			class ACE_morphine					{name = "ACE_morphine"; count = 50;};
			class ACE_epinephrine				{name = "ACE_epinephrine"; count = 50;};
			class ACE_atropine					{name = "ACE_atropine"; count = 50;};
			class ACE_personalAidKit			{name = "ACE_personalAidKit"; count = 5;};
			class 7bow_apteczka					{name = "7bow_apteczka"; count = 5;};
			class ACE_surgicalKit				{name = "ACE_surgicalKit"; count = 5;};
			class ACE_bloodIV					{name = "ACE_bloodIV"; count = 15;};
			class ACE_bloodIV_500				{name = "ACE_bloodIV_500"; count = 30;};
			class ACE_bloodIV_250				{name = "ACE_bloodIV_250"; count = 30;};
			class ACE_plasmaIV					{name = "ACE_plasmaIV"; count = 10;};
			class ACE_plasmaIV_500				{name = "ACE_plasmaIV_500"; count = 20;};
			class ACE_plasmaIV_250				{name = "ACE_plasmaIV_250"; count = 20;};
			class ACE_salineIV					{name = "ACE_salineIV"; count = 10;};
			class ACE_salineIV_500				{name = "ACE_salineIV_500"; count = 20;};
			class ACE_salineIV_250				{name = "ACE_salineIV_250"; count = 20;};
			class ACE_tourniquet				{name = "ACE_tourniquet"; count = 50;};
			class ACE_bodyBag					{name = "ACE_bodyBag"; count = 100;};
		};
	};

	class 7bow_misc: NATO_Box_Base
	{
		scope = 2;
		vehicleClass = "Ammo";
		displayName = "7BOW RP Items [Miscellaneous]";
		model = "\A3\weapons_f\Ammoboxes\Ammobox_F";
		icon = "iconCrateWpns";
		transportMaxMagazines = 100000;
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems
		{
			class 7bow_portfel					{name = "7bow_portfel"; count = 100;};
			class 7bow_gotowka					{name = "7bow_gotowka"; count = 100;};
			class 7bow_malboro					{name = "7bow_malboro"; count = 100;};
			class 7bow_bestia					{name = "7bow_bestia"; count = 100;};
			class 7bow_dur						{name = "7bow_dur"; count = 100;};
			class 7bow_dlugopis					{name = "7bow_dlugopis"; count = 100;};
			class 7bow_ledy						{name = "7bow_ledy"; count = 100;};
			class 7bow_aceton					{name = "7bow_aceton"; count = 100;};
			class 7bow_biblia					{name = "7bow_biblia"; count = 100;};
			class 7bow_fajerwerki				{name = "7bow_fajerwerki"; count = 100;};
			class 7bow_gowno					{name = "7bow_gowno"; count = 100;};
			class 7bow_czaszka					{name = "7bow_czaszka"; count = 100;};
			class 7bow_czaszka_dziecka			{name = "7bow_czaszka_dziecka"; count = 100;};
			class 7bow_klatka					{name = "7bow_klatka"; count = 100;};
			class 7bow_kosc_ludzka				{name = "7bow_kosc_ludzka"; count = 100;};
			class 7bow_kosc_zwierzeca			{name = "7bow_kosc_zwierzeca"; count = 100;};
			class 7bow_lopata					{name = "7bow_lopata"; count = 100;};
			class 7bow_pantofle					{name = "7bow_pantofle"; count = 100;};
		};
	};

	class 7bow_drugs: NATO_Box_Base
	{
		scope = 2;
		vehicleClass = "Ammo";
		displayName = "7BOW RP Items [Drugs]";
		model = "\A3\weapons_f\Ammoboxes\Ammobox_F";
		icon = "iconCrateWpns";
		transportMaxMagazines = 100000;
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems
		{
			class 7bow_heroina					{name = "7bow_heroina"; count = 100;};
			class 7bow_worek_mety				{name = "7bow_worek_mety"; count = 100;};
			class 7bow_worek_mdma				{name = "7bow_worek_mdma"; count = 100;};
			class 7bow_worek_ziola				{name = "7bow_worek_ziola"; count = 100;};
			class 7bow_worek_kokainy			{name = "7bow_worek_kokainy"; count = 100;};
			class 7bow_kostka_ziola				{name = "7bow_kostka_ziola"; count = 100;};
			class 7bow_kostka_kokainy			{name = "7bow_kostka_kokainy"; count = 100;};
			class 7bow_mocarz					{name = "7bow_mocarz"; count = 100;};
			class 7bow_chujnia					{name = "7bow_chujnia"; count = 100;};
		};
	};
};
};