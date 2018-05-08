class Faction {
    class Default {
        gear = "Default";
        uniform = "Default";
        name = "Default";
        description = "No gear and uniform.";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {};
        rolePrefix = "Default";
        vehicleClassnames[] = {
            {"CO", "C_Kart_01_F"},
            {"SL", "C_Kart_01_F"},
            {"FT", "C_Kart_01_F"},
            {"ATTCH", "C_Kart_01_F"},
            {"ENG", "C_Kart_01_F"},
            {"APC", "C_Kart_01_F"},
            {"IFV", "C_Kart_01_F"},
            {"SPAAG", "C_Kart_01_F"},
            {"TNK", "C_Kart_01_F"},
            {"TH", "C_Kart_01_F"},
            {"AH", "C_Kart_01_F"},
            {"CAS", "C_Kart_01_F"},
            {"Technical", "C_Kart_01_F"}
        };
    };

    class RHS_US_ARMY_ACU {
        gear = "M4";
        uniform = "USA_ACU";
        name = "US Army 1st Cav";
        description = "US Army 1st Cavalry with M4s.";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {"woodland"};
        rolePrefix = "US Army";
        vehicleClassnames[] = {
            {"CO", "rhsusf_m1025_d"},
            {"SL", "rhsusf_m1025_d"},
            {"FT", "rhsusf_m1025_d_m2"},
            {"ATTCH", "rhsusf_M1083A1P2_WD_fmtv_usarmy"},
            {"ENG", "rhsusf_M1078A1P2_B_WD_CP_fmtv_usarmy"},
            {"APC", "rhsusf_m113d_usarmy_M240"},
            {"IFV", "RHS_M2A3"},
            {"SPAAG", "rhsusf_m113d_usarmy"},
            {"TNK", "rhsusf_m1a2sep1tuskiid_usarmy"},
            {"TH", "RHS_UH60M"},
            {"AH", "RHS_AH64D"},
            {"CAS", "RHS_A10"},
            {"Technical", "rhsusf_m1025_d_m2"}
        };
    };

    class 3CB_BAF_MTP {
        gear = "L85A2";
        uniform = "BAF_MTP";
        name = "BAF";
        description = "British Armed Forces MTP with L85A2s.";
        languages[] = {{"west", 100}};
        side = "west";
        camouflage[] = {"woodland"};
        rolePrefix = "British Army";
        vehicleClassnames[] = {
            {"CO", "UK3CB_BAF_LandRover_Soft_Sand_A"},
            {"SL", "UK3CB_BAF_LandRover_Soft_Sand_A"},
            {"FT", "UK3CB_BAF_LandRover_Soft_Sand_A"},
            {"ATTCH", "UK3CB_BAF_Coyote_Passenger_L111A1_D"},
            {"ENG", "UK3CB_BAF_Jackal2_L111A1_D"},
            {"APC", "UK3CB_BAF_FV432_Mk3_GPMG_Sand"},
            {"IFV", "I_APC_tracked_03_cannon_F"},
            {"SPAAG", "UK3CB_BAF_FV432_Mk3_RWS_Sand"},
            {"TNK", "rhsusf_m1a2sep1d_usarmy"},
            {"TH", "UK3CB_BAF_Merlin_HC3_18_GPMG"},
            {"AH", "UK3CB_BAF_Apache_AH1_DynamicLoadout"},
            {"CAS", "RHS_A10"},
            {"Technical", "UK3CB_BAF_LandRover_WMIK_GPMG_Green_A"}
        };
    };
};
