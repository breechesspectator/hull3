#include "hull3_macros.h"

#include "\x\ark\addons\hull3\log\postinit.h"
#include "logbook.h"


if (hull3_isEnabled) then {
    [] call hull3_settings_fnc_init;
    [] call hull3_mission_fnc_init;
    [] call hull3_acre_fnc_postInit;
    [] call hull3_marker_fnc_postInit;

    if (!isDedicated) then {
        [] spawn hull3_unit_fnc_playerInit;
        if (isServer) then {
            [] call hull3_mission_fnc_serverInit;
            [] spawn hull3_gc_fnc_start;
        };
    } else {
        [] call hull3_mission_fnc_serverInit;
        [] spawn hull3_gc_fnc_start;
    };
};