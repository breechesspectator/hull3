class BAF_MTP {
    class Rifleman {
        headGear = "UK3CB_BAF_H_Mk7_Camo_B";
        goggles = "";
        uniform = "UK3CB_BAF_U_CombatUniform_MTP";
        vest = "UK3CB_BAF_V_Osprey_Rifleman_A";
        backpack = "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_A";
    };

    class Leader : Rifleman {
        headGear = "UK3CB_BAF_H_Mk7_Camo_A";
        vest = "UK3CB_BAF_V_Osprey_SL_C";
        backpack = "UK3CB_BAF_B_Bergen_MTP_SL_L_A";
    };

    class Officer : Leader {
        vest = "UK3CB_BAF_V_Osprey_SL_D";
        backpack = "UK3CB_BAF_B_Bergen_MTP_SL_H_A";
    };

    class Crew : Rifleman {
        headGear = "UK3CB_BAF_H_CrewHelmet_A";
        uniform = "UK3CB_BAF_U_CombatUniform_MTP_ShortSleeve";
        vest = "UK3CB_BAF_V_Osprey_Lite";
    };

    class CO : Officer {
    };

    class XO : CO {
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        headGear = "UK3CB_BAF_H_Mk7_Camo_A";
        vest = "UK3CB_BAF_V_Osprey_Medic_D";
        backpack = "UK3CB_BAF_B_Bergen_MTP_Medic_L_B";
    };

    class FTL : Leader {
        vest = "UK3CB_BAF_V_Osprey_SL_C";
        backpack = "UK3CB_BAF_B_Bergen_MTP_SL_H_A";
    };

    class AR : Rifleman {
        vest = "UK3CB_BAF_V_Osprey_MG_B";
        backpack = "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_D";
    };

    class AAR : Rifleman {
        uniform = "UK3CB_BAF_U_CombatUniform_MTP_ShortSleeve";
    };

    class RAT : Rifleman {
    };

    class MMGG : AR {
        vest = "UK3CB_BAF_V_Osprey_MG_B";
        backpack = "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_D";
    };

    class MMGAG : AAR {
        vest = "UK3CB_BAF_V_Osprey_MG_B";
        backpack = "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_D";
    };

    class HMGG : AR {
        vest = "UK3CB_BAF_V_Osprey_MG_B";
        backpack = "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_D";
    };

    class HMGAG : AAR {
        vest = "UK3CB_BAF_V_Osprey_MG_B";
        backpack = "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_D";
    };

    class HMGAC : AAR {
    };

    class MATG : RAT {
    };

    class MATAG : AAR {
    };

    class MATAC : MATAG {
    };

    class HATG : RAT {
    };

    class HATAG : AAR {
    };

    class HATAC : HATAG {
    };
    
    class DHATG : AR {
    };

    class DHATAG : AAR {
    };

    class DHATAC : AAR {
    };

    class SAMG : AR {
    };

    class SAMAG : AAR {
    };

    class SAMAC : AAR {
    };

    class GMGG : AR {
    };

    class GMGAG : AAR {
    };

    class GMGAC : AAR {
    };

    class MTRG : AR {
    };

    class MTRAG : AAR {
    };

    class MTRAC : AAR {
    };

    class ENG : Rifleman {
        vest = "UK3CB_BAF_V_Osprey_Rifleman_C";
        backpack = "UK3CB_BAF_B_Bergen_MTP_Engineer_H_A";
    };

    class ENGA : ENG {
        backpack = "UK3CB_BAF_B_Bergen_MTP_Sapper_H_A";
    };

    class SN : Rifleman {
        vest = "UK3CB_BAF_V_Osprey_Marksman_A";
        backpack = "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_B";
    };

    class SP : SN {
    };

    class VC : Crew {
    };

    class VG : Crew {
    };

    class VD : Crew {
    };

    class P : Crew {
        headGear = "H_HelmetCrew_B";
        goggles = "";
        uniform = "UK3CB_BAF_U_HeliPilotCoveralls_Army";
        vest = "UK3CB_BAF_V_Pilot_A";
        backpack = "";
    };

    class PCM : P {
    };
};