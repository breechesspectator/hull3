#include "hull3_macros.h"

class Hull3 {
    isEnabled = 1;

    #include "mission_params.h"

    #include "factions.h"

    class Uniform {
        #include "assign\uniform\Default.h"
        #include "assign\uniform\BAF_MTP.h"
        #include "assign\uniform\USA_ACU.h"

        unitBaseClass = "Rifleman";
    };

    class Gear {
        #include "assign\gear\Default.h"
        #include "assign\gear\M4.h"
        #include "assign\gear\L85A2.h"

        unitBaseClass = "Rifleman";
        vehicleBaseClass = "Vehicle";
    };

    class Briefing {
        blufor = ADDON_PATH(briefing\blufor.sqf);
        opfor = ADDON_PATH(briefing\opfor.sqf);
        indfor = ADDON_PATH(briefing\indfor.sqf);
        civilian = ADDON_PATH(briefing\civilian.sqf);
    };

    class Group {
        assignedTeams[] = {
            {"FTL", "RED"},
            {"AR", "BLUE"},
            {"AAR", "BLUE"},
            {"RAT", "RED"}
        };
    };

    class Marker {
        isGroupEnabled = 1;
        isFireTeamEnabled = 1;

        defaultDelay = 4;

        class MedicMarker {
            size[] = {0.5, 0.5};
        };

        class FireTeamMemberMarker {
            color = "ColorYellow";
            size[] = {0.6, 0.6};
        };

        class DefaultCustomMarker {
            shape = "ICON";
            type = "Dot";
            color = "ColorPink";
            size[] = {1, 1};
            text = "";
        };
    };

    class ACRE {
        class Babel {
            languages[] = {
                {"west", "WEST"},
                {"east", "EAST"},
                {"resistance", "RESISTANCE"},
                {"civ", "CIV"}
            };
        };

        class ShortRange {
            baseFrequency = 2400;
            radios[] = {"ACRE_PRC343"};
            defaultChannel = 5;
            channels[] = {
                {"A", 1},
                {"B", 2},
                {"C", 3},
                {"D", 4}
            };
        };

        class LongRange {
            baseFrequency = 32;
            channelNames[] = {"Command", "Air"};
            radios[] = {"ACRE_PRC148", "ACRE_PRC152", "ACRE_PRC117F"};
            defaultChannel = 1;
            channels[] = {
                {"TH", 2},
                {"AH", 2},
                {"CAS", 2}
            };
        };

        class Radio {
            class ACRE_PRC343 {
                channelCount = 256;
            };

            class ACRE_PRC148 {
                channelCount = 32;
                channelNameField = "label";
                power = 5000;
            };

            class ACRE_PRC152 {
                channelCount = 99;
                channelNameField = "description";
                power = 5000;
            };

            class ACRE_PRC117F {
                channelCount = 100;
                channelNameField = "name";
                power = 2000;
            };
        };

        class Steps {
            channel = 1;
            west = 0.2;
            east = 0.4;
            resistance = 0.6;
            default = 0.8;
        };
    };

    class General {
        BIS_noCoreConversations = 1;                    // Disables BIS unit conversations
        enableSaving = 0;                               // Enables game saving
        disableRemoteSensors = 1;                       // Disables RemoteSensors
        enableEnvironment = 0;                          // Disables ambient animals but keeps sounds
    };

    class GarbageCollector {
        isEnabled = 1;
        canRemoveCorpses = 1;
        canRemoveWrecks = 1;
        canRemoveGroups = 1;

        panicCps = 30;

        corpseLimit = 40;
        panicCorpseLimit = 10;
        corpseMaxTime = 600;
        panicCorpseMaxTime = 20;

        wreckLimit = 10;
        panicWreckLimit = 3;
        wreckMaxTime = 600;
        panicWreckMaxTime = 60;

        groupMaxTime = 90;
        checkDelay = 30;
    };
};
