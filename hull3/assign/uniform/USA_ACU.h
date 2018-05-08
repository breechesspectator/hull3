class USA_ACU {
    class Rifleman {
        headGear = "rhsusf_ach_helmet_ucp";
        goggles = "";
        uniform = "rhs_uniform_cu_ucp_1stcav";
        vest = "rhsusf_iotv_ucp_Rifleman";
        backpack = "rhsusf_assault_eagleaiii_ucp";
    };

    class Leader : Rifleman {
        uniform = "rhs_uniform_cu_ucp_1stcav";
        vest = "rhsusf_iotv_ucp_Teamleader";
    };

    class Officer : Leader {
    };

    class Crew : Rifleman {
        headGear = "rhsusf_cvc_green_helmet";
        uniform = "rhs_uniform_cu_ucp_1stcav";
        vest = "rhsusf_iotv_ucp";
        backpack = "rhsusf_falconii";
    };

    class CO : Officer {
        vest = "rhsusf_iotv_ucp_Squadleader";
    };

    class XO : CO {
        vest = "rhsusf_iotv_ucp_Squadleader";
    };

    class SL : Officer {
        vest = "rhsusf_iotv_ucp_Squadleader";
    };

    class Medic : Rifleman {
        backpack = "B_Carryall_oli";
        uniform = "rhs_uniform_cu_ucp_1stcav";
        vest = "rhsusf_iotv_ucp_Medic";
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
        uniform = "rhs_uniform_cu_ucp_1stcav";
        vest = "rhsusf_iotv_ucp_SAW";
    };

    class AAR : Rifleman {
        backpack = "B_Carryall_oli";
        vest = "rhsusf_iotv_ucp_SAW";
    };

    class RAT : Rifleman {
    };

    class MMGG : AR {
        backpack = "B_Carryall_oli";
    };

    class MMGAG : AAR {
    };

    class HMGG : AR {
    };

    class HMGAG : AAR {
    };

    class HMGAC : AAR {
    };

    class MATG : RAT {
        backpack = "B_Carryall_oli";
    };

    class MATAG : AAR {
    };

    class MATAC : MATAG {
    };

    class HATG : RAT {
        backpack = "B_Carryall_oli";
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
        uniform = "rhs_uniform_cu_ucp_1stcav";
        vest = "rhsusf_iotv_ucp_Rifleman";
        backpack = "B_Carryall_oli";
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
        headGear = "rhs_Booniehat_ucp";
        goggles = "rhsusf_shemagh_od";
        uniform = "rhs_uniform_cu_ucp_1stcav";
        vest = "rhsusf_iotv_ucp_Rifleman";
        backpack = "rhsusf_assault_eagleaiii_ucp";
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
        headGear = "rhsusf_hgu56p_visor_green";
        uniform = "U_B_HeliPilotCoveralls";
        vest = "V_TacVest_oli";
    };

    class PCM : P {
    };
};
