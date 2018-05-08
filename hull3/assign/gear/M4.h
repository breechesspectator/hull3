class M4 {
    class Rifleman {
        primaryWeapon = "rhs_weap_m4_carryhandle_grip3";
        primaryWeaponItems[] = {"rhsusf_acc_compm4", "rhsusf_acc_anpeq15side_bk", "rhsusf_acc_grip3"};
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
            {"rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer", 6},
            {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", 2}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer", 4},
            {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", 2}
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
        primaryWeapon = "rhs_weap_m4_m320";
        primaryWeaponItems[] = {"rhsusf_acc_compm4", "rhsusf_acc_anpeq15_bk_top"};
        handgunWeapon = "rhsusf_weap_m9";
        vestMagazines[] = {
            {"rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer", 6},
            {"rhs_mag_M441_HE", 4},
            {"rhs_mag_m714_White", 2},
            {"rhs_mag_m713_Red", 2},
            {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", 2},
            {"rhsusf_mag_15Rnd_9x19_FMJ", 3}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer", 4},
            {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", 2},
            {"rhs_mag_m714_White", 2},
            {"rhs_mag_m713_Red", 2},
            {"rhs_mag_M585_white", 2}
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
        primaryWeapon = "rhs_weap_m4";
        primaryWeaponItems[] = {"rhsusf_acc_compm4"};
        handgunWeapon = "rhsusf_weap_m9";
        uniformMagazines[] = {
            {"ACE_Chemlight_HiRed", 2},
            {"SmokeShell", 1}
        };
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        vestMagazines[] = {
			{"rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer", 4},
			{"rhsusf_mag_15Rnd_9x19_FMJ", 3}
		};
        backpackMagazines[] = {};
        assignItems[] = {"ItemGPS", "ACE_NVG_Wide"};
    };

    class CO : Officer {
    };

    class XO : CO {
        backpackMagazines[] = {
            {"rhs_mag_m714_White", 8},
            {"rhs_mag_m713_Red", 8}
        };
        backpackRadios[] = {"ACRE_PRC117F"};
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        primaryWeapon = "rhs_weap_m4_carryhandle_grip3";
        primaryWeaponItems[] = {"rhsusf_acc_compm4", "rhsusf_acc_anpeq15side_bk", "rhsusf_acc_grip3"};
        vestMagazines[] = {
            {"rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer", 6},
            {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", 2},
            {"SmokeShell", 4}
        };
        backpackMagazines[] = {
            {"SmokeShellBlue", 4},
            {"rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer", 2}
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
        primaryWeapon = "rhs_weap_m249_pip_S";
        primaryWeaponItems[] = {};
        vestMagazines[] = {{"rhs_200rnd_556x45_B_SAW", 1}};
        backpackMagazines[] = {
            {"rhs_200rnd_556x45_B_SAW", 2},
            {"rhs_200rnd_556x45_B_SAW", 2}
        };
    };

    class AAR : Rifleman {
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"rhs_200rnd_556x45_B_SAW", 2},
            {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", 2}
        };
        binocular = "Binocular";
    };

    class RAT : Rifleman {
        primaryWeapon = "rhs_weap_m4_carryhandle_grip3";
        primaryWeaponItems[] = {"rhsusf_acc_compm4", "rhsusf_acc_anpeq15side_bk", "rhsusf_acc_grip3"};
        secondaryWeapon = "rhs_weap_M136";
        vestMagazines[] = {
            {"rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer", 6},
            {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", 2}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer", 4},
            {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", 2}
        };
    };

    class MMGG : Rifleman {
        primaryWeapon = "rhs_weap_m240B";
        primaryWeaponItems[] = {};
        vestMagazines[] = {{"rhsusf_100Rnd_762x51", 1}};
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"rhsusf_100Rnd_762x51", 4}
        };
    };

    class MMGAG : Rifleman {
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"rhsusf_100Rnd_762x51", 4}
        };
        binocular = "ACE_VectorDay";
        assignItems[] = {"ItemGPS"};
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class HMGG : Rifleman {
        primaryWeapon = "rhs_weap_m4_carryhandle";
        backpack = "RHS_M2_Gun_Bag";
        backpackMagazines[] = {};
        backpackMedicalItems[] = {};
    };

    class HMGAG : HMGG {
        backpack = "RHS_M2_MiniTripod_Bag";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        binocular = "ACE_VectorDay";
        assignItems[] = {"ItemGPS"};
    };

    class HMGAC : Rifleman {
    };

    class MATG : RAT {
        secondaryWeapon = "rhs_weap_maaws";
        secondaryWeaponItems[] = {"rhs_mag_maaws_HEAT", "rhs_optic_maaws"};
        backpackMagazines[] = {
            {"rhs_mag_maaws_HEAT", 1},
            {"rhs_mag_maaws_HE", 1}
        };
    };

    class MATAG : Rifleman {
        backpackMagazines[] = {
            {"rhs_mag_maaws_HEAT", 1},
            {"rhs_mag_maaws_HE", 1}
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
        primaryWeapon = "rhs_weap_m4_carryhandle";
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
        primaryWeapon = "rhs_weap_m4_carryhandle";
        secondaryWeapon = "rhs_weap_fim92";
        secondaryWeaponItems[] = {"rhs_fim92_mag"};
        backpackMagazines[] = {{"rhs_fim92_mag", 1}};
    };

    class SAMAG : Rifleman {
        primaryWeapon = "rhs_weap_m4_carryhandle";
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
        primaryWeapon = "rhs_weap_m4_carryhandle";
        backpack = "RHS_Mk19_Gun_Bag";
        backpackMagazines[] = {};
        backpackMedicalItems[] = {};
    };

    class GMGAG : HMGG {
        backpack = "RHS_Mk19_Tripod_Bag";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        uniformMagazines[] = {
            {"ACE_Chemlight_HiRed", 2},
            {"SmokeShell", 1}
        };
        binocular = "ACE_VectorDay";
        assignItems[] = {"ItemGPS"};
    };

    class GMGAC : Rifleman {
    };

    class MTRG : Rifleman {
        primaryWeapon = "rhs_weap_m4_carryhandle";
        backpack = "rhs_M252_Gun_Bag";
        backpackMagazines[] = {};
        backpackMedicalItems[] = {};
    };

    class MTRAG : MTRG {
        backpack = "rhs_M252_Bipod_Bag";
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
        primaryWeapon = "rhs_weap_m4_carryhandle";
        primaryWeaponItems[] = {"RH_compM2", "RH_SFM952V"};
        vestMagazines[] = {
            {"rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer", 6},
            {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", 2}
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
        primaryWeapon = "rhs_weap_m14ebrri";
        handgunWeapon = "rhsusf_weap_m9";
        primaryWeaponItems[] = {"rhsusf_acc_LEUPOLDMK4", "rhsusf_acc_harris_bipod"};
        vestMagazines[] = {
            {"rhsusf_20Rnd_762x51_m118_special_Mag", 4},
            {"rhsusf_mag_15Rnd_9x19_FMJ", 3}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"rhsusf_20Rnd_762x51_m118_special_Mag", 3}
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
            {"rhs_weap_m16a4_carryhandle", 2},
            {"rhs_weap_m72a7", 5},
            {"rhs_weap_m4_carryhandle", 2}
        };
        magazines[] = {
            {"rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer", 15},
            {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", 15},
            {"rhs_200rnd_556x45_B_SAW", 10},
            {"rhs_mag_M441_HE", 5},
            {"rhs_mag_m714_White", 5},
            {"rhs_mag_m713_Red", 5},
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
            {"rhs_weap_m16a4_carryhandle", 2},
            {"rhs_weap_m72a7", 10},
            {"rhs_weap_m4_carryhandle", 2}
        };
        magazines[] = {
            {"rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer", 40},
            {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", 20},
            {"rhs_200rnd_556x45_B_SAW", 20},
            {"rhsusf_100Rnd_762x51", 10},
            {"rhs_mag_M441_HE", 10},
            {"rhs_mag_m714_White", 10},
            {"SatchelCharge_Remote_Mag", 5},
            {"ACE_HandFlare_White", 10},
            {"rhs_mag_maaws_HEAT", 5},
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
        weapons[] = {{"rhs_weap_m72a7", 10}};
        magazines[] = {
            {"rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer", 40},
            {"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", 20},
            {"rhs_200rnd_556x45_B_SAW", 20},
            {"rhsusf_100Rnd_762x51", 10},
            {"SatchelCharge_Remote_Mag", 10},
            {"rhs_mag_M585_white", 10},
            {"rhs_mag_maaws_HEAT", 5},
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