class L85A2 {
    class Rifleman {
        primaryWeapon = "UK3CB_BAF_L85A2";
        primaryWeaponItems[] = {"UK3CB_BAF_Eotech"};
        secondaryWeapon = "";
        secondaryWeaponItems[] = {};
        handgunWeapon = "";
        handgunItems[] = {};
        uniformWeapons[] = {};
        vestWeapons[] = {};
        backpackWeapons[] = {};
        uniformMagazines[] = {
            {"ACE_Chemlight_HiRed", 2},
            {"SmokeShell", 1}
        };
        vestMagazines[] = {
            {"HandGrenade", 1},
            {"UK3CB_BAF_556_30Rnd", 6},
            {"UK3CB_BAF_556_30Rnd_T", 2}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"UK3CB_BAF_556_30Rnd", 4},
            {"UK3CB_BAF_556_30Rnd_T", 2}
        };
        basicAssignItems[] = {"ItemMap", "ItemCompass", "ItemWatch"};
        assignItems[] = {};
        binocular = "";
        uniformItems[] = {{"ACE_Flashlight_KSF1", 1}};
        vestItems[] = {};
        backpackItems[] = {};
        uniformRadios[] = {"ACRE_PRC343"};
        vestRadios[] = {};
        backpackRadios[] = {};
        uniformMedicalItems[] = {{"ACE_fieldDressing", 10}};
        vestMedicalItems[] = {};
        backpackMedicalItems[] = {};
        code = "";
        headGear = "";
        uniform = "";
        goggles = "";
        vest = "";
        backpack = "";
    };

    class Leader : Rifleman {
        primaryWeapon = "UK3CB_BAF_L85A2_UGL";
        primaryWeaponItems[] = {"UK3CB_BAF_Eotech"};
        handgunWeapon = "UK3CB_BAF_L131A1";
        vestMagazines[] = {
            {"UK3CB_BAF_556_30Rnd", 6},
            {"UK3CB_BAF_1Rnd_HE_Grenade_Shell", 4},
            {"UK3CB_BAF_1Rnd_Smoke_Grenade_shell", 2},
            {"UK3CB_BAF_1Rnd_SmokeRed_Grenade_shell", 2},
            {"UK3CB_BAF_556_30Rnd_T", 2},
            {"UK3CB_BAF_9_17Rnd", 3}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"UK3CB_BAF_556_30Rnd", 4},
            {"UK3CB_BAF_556_30Rnd_T", 2},
            {"UK3CB_BAF_1Rnd_Smoke_Grenade_shell", 2},
            {"UK3CB_BAF_1Rnd_SmokeRed_Grenade_shell", 2},
            {"UK3CB_BAF_UGL_FlareWhite_F", 2}
        };
        assignItems[] = {"ItemGPS"};
        binocular = "Binocular";
    };

    class Officer : Leader {
        assignItems[] = {"ItemGPS"};
        binocular = "ACE_VectorDay";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class Crew : Rifleman {
        primaryWeapon = "UK3CB_BAF_L22";
        primaryWeaponItems[] = {""};
        handgunWeapon = "UK3CB_BAF_L131A1";
        uniformMagazines[] = {
            {"ACE_Chemlight_HiRed", 2},
            {"SmokeShell", 1}
        };
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        vestMagazines[] = {
			{"UK3CB_BAF_556_30Rnd", 4},
			{"UK3CB_BAF_9_17Rnd", 3}
		};
        backpackMagazines[] = {};
        assignItems[] = {"ItemGPS", "ACE_NVG_Wide"};
    };

    class CO : Officer {
    };

    class XO : CO {
        backpackMagazines[] = {
            {"UK3CB_BAF_1Rnd_Smoke_Grenade_shell", 8},
            {"UK3CB_BAF_1Rnd_SmokeRed_Grenade_shell", 8}
        };
        backpackRadios[] = {"ACRE_PRC117F"};
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        primaryWeapon = "UK3CB_BAF_L85A2";
        primaryWeaponItems[] = {"UK3CB_BAF_Eotech"};
        vestMagazines[] = {
            {"UK3CB_BAF_556_30Rnd", 6},
            {"UK3CB_BAF_556_30Rnd_T", 2},
            {"SmokeShell", 4}
        };
        backpackMagazines[] = {
            {"SmokeShellBlue", 4},
            {"UK3CB_BAF_556_30Rnd", 2}
        };
        assignItems[] = {"ItemGPS"};
        binocular = "Binocular";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        backpackMedicalItems[] = {
            {"ACE_fieldDressing", 30},
            {"ACE_morphine", 30},
            {"ACE_epinephrine", 30},
            {"ACE_bloodIV", 12}
        };
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
        primaryWeapon = "UK3CB_BAF_L110A2";
        primaryWeaponItems[] = {};
        vestMagazines[] = {{"UK3CB_BAF_556_200Rnd", 1}};
        backpackMagazines[] = {
            {"UK3CB_BAF_556_200Rnd", 2},
            {"UK3CB_BAF_556_200Rnd_T", 2}
        };
    };

    class AAR : Rifleman {
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"UK3CB_BAF_556_200Rnd", 2},
            {"UK3CB_BAF_556_30Rnd_T", 2}
        };
        binocular = "Binocular";
    };

    class RAT : Rifleman {
        primaryWeapon = "UK3CB_BAF_L85A2";
        primaryWeaponItems[] = {"UK3CB_BAF_Eotech"};
        secondaryWeapon = "UK3CB_BAF_AT4_CS_AP_Launcher";
        vestMagazines[] = {
            {"UK3CB_BAF_556_30Rnd", 6},
            {"UK3CB_BAF_556_30Rnd_T", 2}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"UK3CB_BAF_556_30Rnd", 4},
            {"UK3CB_BAF_556_30Rnd_T", 2}
        };
    };

    class MMGG : Rifleman {
        primaryWeapon = "UK3CB_BAF_L7A2";
        primaryWeaponItems[] = {};
        vestMagazines[] = {{"UK3CB_BAF_762_100Rnd", 1}};
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"UK3CB_BAF_762_100Rnd", 4}
        };
    };

    class MMGAG : Rifleman {
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"UK3CB_BAF_762_100Rnd", 4}
        };
        binocular = "ACE_VectorDay";
        assignItems[] = {"ItemGPS"};
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class HMGG : Rifleman {
        primaryWeapon = "UK3CB_BAF_L85A2";
		secondaryWeapon = "UK3CB_BAF_L111A1";
        backpackMagazines[] = {"UK3CB_BAF_127_100Rnd", 1};
        backpackMedicalItems[] = {};
    };

    class HMGAG : HMGG {
        secondaryWeapon = "UK3CB_BAF_Tripod";
		backpackMagazines[] = {"UK3CB_BAF_127_100Rnd", 1};
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        binocular = "ACE_VectorDay";
        assignItems[] = {"ItemGPS"};
    };

    class HMGAC : Rifleman {
		backpackMagazines[] = {"UK3CB_BAF_127_100Rnd", 1};
    };

    class MATG : RAT {
        secondaryWeapon = "UK3CB_BAF_NLAW_Launcher";
        secondaryWeaponItems[] = {};
        backpackMagazines[] = {
            {"UK3CB_BAF_NLAW_Mag", 1},
            {"UK3CB_BAF_NLAW_Mag", 1}
        };
    };

    class MATAG : Rifleman {
        backpackMagazines[] = {
            {"UK3CB_BAF_NLAW_Mag", 1},
            {"UK3CB_BAF_NLAW_Mag", 1}
        };
        binocular = "ACE_VectorDay";
        assignItems[] = {"ItemGPS"};
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class MATAC : MATAG {
        assignItems[] = {};
        binocular = "Binocular";
        uniformRadios[] = {"ACRE_PRC343"};
    };

    class HATG : MATG {
        secondaryWeapon = "rhs_weap_fgm148";
        secondaryWeaponItems[] = {"rhs_fgm148_magazine_AT"};
        backpackMagazines[] = {{"rhs_fgm148_magazine_AT", 1}};
    };

    class HATAG : MATAG {
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"rhs_fgm148_magazine_AT", 1}
        };
    };

    class HATAC : HATAG {
        assignItems[] = {};
        binocular = "Binocular";
        uniformRadios[] = {"ACRE_PRC343"};
    };

    class DHATG : Rifleman {
        primaryWeapon = "UK3CB_BAF_L85A2";
        backpack = "rhs_Tow_Gun_Bag";
        backpackMagazines[] = {};
        backpackMedicalItems[] = {};
    };

    class DHATAG : HMGG {
        backpack = "rhs_TOW_Tripod_Bag";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        uniformMagazines[] = {
            {"ACE_Chemlight_HiRed", 2},
            {"SmokeShell", 1}
        };
        binocular = "ACE_VectorDay";
        assignItems[] = {"ItemGPS"};
    };

    class DHATAC : Rifleman {
    };

    class SAMG : Rifleman {
        primaryWeapon = "UK3CB_BAF_L85A2";
        secondaryWeapon = "rhs_weap_fim92";
        secondaryWeaponItems[] = {"rhs_fim92_mag"};
        backpackMagazines[] = {{"rhs_fim92_mag", 1}};
    };

    class SAMAG : Rifleman {
        primaryWeapon = "UK3CB_BAF_L85A2";
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"rhs_fim92_mag", 1}
        };
        uniformMagazines[] = {
            {"ACE_Chemlight_HiRed", 2},
            {"SmokeShell", 1}
        };
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        binocular = "ACE_VectorDay";
        assignItems[] = {"ItemGPS"};
    };

    class SAMAC : SAMAG {
        uniformRadios[] = {"ACRE_PRC343"};
        binocular = "Binocular";
        assignItems[] = {};
    };

    class GMGG : Rifleman {
        primaryWeapon = "UK3CB_BAF_L85A2";
        secondaryWeapon = "UK3CB_BAF_L134A1";
        backpackMagazines[] = {
            {"UK3CB_BAF_32Rnd_40mm_G_Box", 1}
        };
        backpackMedicalItems[] = {};
    };

    class GMGAG : HMGG {
        secondaryWeapon = "UK3CB_BAF_Tripod";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        uniformMagazines[] = {
            {"ACE_Chemlight_HiRed", 2},
            {"SmokeShell", 1}
        };
        backpackMagazines[] = {
            {"UK3CB_BAF_32Rnd_40mm_G_Box", 1}
        };
        binocular = "ACE_VectorDay";
        assignItems[] = {"ItemGPS"};
    };

    class GMGAC : Rifleman {
        backpackMagazines[] = {
            {"UK3CB_BAF_32Rnd_40mm_G_Box", 1}
        };
    };

    class MTRG : Rifleman {
        primaryWeapon = "UK3CB_BAF_L85A2";
        secondaryWeapon = "UK3CB_BAF_L16";
        backpackMagazines[] = {};
        backpackMedicalItems[] = {};
    };

    class MTRAG : MTRG {
        secondaryWeapon = "UK3CB_BAF_Tripod";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        uniformMagazines[] = {
            {"ACE_Chemlight_HiRed", 2},
            {"SmokeShell", 1}
        };
        binocular = "ACE_VectorDay";
        assignItems[] = {"ItemGPS"};
    };

    class MTRAC : Rifleman {
    };

    class ENG : Rifleman {
        primaryWeapon = "UK3CB_BAF_L85A2";
        primaryWeaponItems[] = {"RH_compM2", "RH_SFM952V"};
        vestMagazines[] = {
            {"UK3CB_BAF_556_30Rnd", 6},
            {"UK3CB_BAF_556_30Rnd_T", 2}
        };
        backpackMagazines[] = {
            {"Toolkit", 1},
            {"DemoCharge_Remote_Mag", 3},
            {"SLAMDirectionalMine_Wire_Mag", 2}
        };
        assignItems[] = {"ItemGPS"};
        vestItems[] = {
            {"ACE_DefusalKit", 1},
            {"ACE_M26_Clacker", 1}
        };
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class ENGA : ENG {
        uniformRadios[] = {"ACRE_PRC343"};
    };

    class SN : Rifleman {
        primaryWeapon = "UK3CB_BAF_L129A1";
        handgunWeapon = "UK3CB_BAF_L131A1";
        primaryWeaponItems[] = {"UK3CB_BAF_TA648_308", "UK3CB_underbarrel_acc_bipod"};
        vestMagazines[] = {
            {"UK3CB_BAF_762_L42A1_20Rnd", 4},
            {"UK3CB_BAF_9_17Rnd", 3}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"UK3CB_BAF_762_L42A1_20Rnd", 3}
        };
        assignItems[] = {"ItemGPS"};
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class SP : Rifleman {
        binocular = "ACE_VectorDay";
    };

    class VC : Crew {
        binocular = "ACE_VectorDay";
    };

    class VG : Crew {
    };

    class VD : Crew {
    };

    class P : Crew {
    };

    class PCM : P {
    };

    class Vehicle {
        weapons[] = {
            {"UK3CB_BAF_L22", 2},
            {"UK3CB_BAF_AT4_CS_AP_Launcher", 5},
            {"UK3CB_BAF_L85A2", 2}
        };
        magazines[] = {
            {"UK3CB_BAF_556_30Rnd", 15},
            {"UK3CB_BAF_556_30Rnd_T", 15},
            {"UK3CB_BAF_556_200Rnd", 10},
            {"UK3CB_BAF_1Rnd_HE_Grenade_Shell", 5},
            {"UK3CB_BAF_1Rnd_Smoke_Grenade_shell", 5},
            {"UK3CB_BAF_1Rnd_SmokeRed_Grenade_shell", 5},
            {"ACE_HandFlare_White", 5},
            {"HandGrenade", 5},
            {"SmokeShell", 5}
        };
        items[] = {
            {"Toolkit", 1},
            {"ItemGPS", 1}
        };
        radios[] = {
            {"ACRE_PRC343", 2},
            {"ACRE_PRC152", 2}
        };
        medicalItems[] = {{"ACE_fieldDressing", 6}};
    };

    class Car : Vehicle {
    };

    class Truck : Vehicle {
        weapons[] = {
            {"UK3CB_BAF_L22", 2},
            {"UK3CB_BAF_AT4_CS_AP_Launcher", 10},
            {"UK3CB_BAF_L85A2", 2}
        };
        magazines[] = {
            {"UK3CB_BAF_556_30Rnd", 40},
            {"UK3CB_BAF_556_30Rnd_T", 20},
            {"UK3CB_BAF_556_200Rnd", 20},
            {"UK3CB_BAF_762_100Rnd", 10},
            {"UK3CB_BAF_1Rnd_HE_Grenade_Shell", 10},
            {"UK3CB_BAF_1Rnd_Smoke_Grenade_shell", 10},
            {"SatchelCharge_Remote_Mag", 5},
            {"ACE_HandFlare_White", 10},
            {"UK3CB_BAF_NLAW_Mag", 5},
            {"rhs_fgm148_magazine_AT", 5},
            {"HandGrenade", 10},
            {"SmokeShell", 10}
        };
        items[] = {
            {"ACE_M26_Clacker", 1},
            {"Toolkit", 1},
            {"ItemGPS", 1}
        };
        radios[] = {
            {"ACRE_PRC343", 2},
            {"ACRE_PRC152", 2}
        };
        medicalItems[] = {{"ACE_fieldDressing", 6}};
    };

    class Armored : Truck {
        weapons[] = {{"UK3CB_BAF_AT4_CS_AP_Launcher", 10}};
        magazines[] = {
            {"UK3CB_BAF_556_30Rnd", 40},
            {"UK3CB_BAF_556_30Rnd_T", 20},
            {"UK3CB_BAF_556_200Rnd", 20},
            {"UK3CB_BAF_762_100Rnd", 10},
            {"SatchelCharge_Remote_Mag", 10},
            {"UK3CB_BAF_UGL_FlareWhite_F", 10},
            {"UK3CB_BAF_NLAW_Mag", 5},
            {"SatchelCharge_Remote_Mag", 5},
            {"ACE_HandFlare_White", 10},
            {"HandGrenade", 10},
            {"SmokeShell", 10}
        };
        items[] = {
            {"ACE_M26_Clacker", 1},
            {"Toolkit", 1},
            {"ItemGPS", 1}
        };
        radios[] = {
            {"ACRE_PRC343", 2},
            {"ACRE_PRC152", 2}
        };
        medicalItems[] = {{"ACE_fieldDressing", 6}};
    };

};