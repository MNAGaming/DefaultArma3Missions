author = $STR_A3_Bohemia_Interactive;
allowSubordinatesTakeWeapons = 1;
enableCampaignSystems = 1;

#define SET_MISSION_META(_stage,_class,_version,_name,_text) \
	onLoadName = _name; \
	onLoadMission = _text; \
	stage = _stage; \
	name = _name; \
	loadScreen = \a3\Missions_F_EPA\data\img\##_class##_overview_CA.paa; \
	briefingName = _name; \
	overviewPicture = \a3\Missions_F_EPA\data\img\##_class##_overview_CA.paa; \
	overviewText = _text;

#ifndef _CAMPAIGN
#include "\A3\Missions_F_EPA\Campaign_shared\cfgHubs.hpp"
#include "\A3\Missions_F_EPA\Campaign_shared\cfgMissions.hpp"
#include "\A3\Missions_F_EPA\Campaign_shared\cfgTimeline.hpp"
#include "\A3\Missions_F_EPA\Campaign_shared\cfgWorldObjects.hpp"
#include "\A3\Missions_F_EPA\Campaign_shared\cfgHubObjects.hpp"
#include "\A3\Missions_F_EPA\Campaign_shared\cfgPOIs.hpp"
#include "\A3\Missions_F_EPA\Campaign_shared\cfgHints.hpp"
#include "\A3\Missions_F_EPA\Campaign_shared\cfgVehicles.hpp"
#endif

// Hotfix to disable loading/restarting if required by BIS_fnc_cinemaBorder
onPauseScript[] = {BIS_fnc_disableLoading};
class CfgFunctions
{
	class A3_Splendid
	{
		tag = "BIS";
		#include "\A3\Missions_F_EPA\Campaign_shared\cfgFunctions.hpp"

		class A_m04
		{
			class a_m04_addWaypoints		{ file = "A3\Missions_F_EPA\Campaign\Missions\A_m04.Stratis\functions\fn_addWaypoints.sqf"; };
			class a_m04_handleDamage		{ file = "A3\Missions_F_EPA\Campaign\Missions\A_m04.Stratis\functions\fn_handleDamage.sqf"; };
			class a_m04_spawnDead			{ file = "A3\Missions_F_EPA\Campaign\Missions\A_m04.Stratis\functions\fn_spawnDead.sqf"; };
			class a_m04_bombardment			{ file = "A3\Missions_F_EPA\Campaign\Missions\A_m04.Stratis\functions\fn_bombardment.sqf"; };
			class a_m04_firing			{ file = "A3\Missions_F_EPA\Campaign\Missions\A_m04.Stratis\functions\fn_firing.sqf"; };
			class a_m04_flare			{ file = "A3\Missions_F_EPA\Campaign\Missions\A_m04.Stratis\functions\fn_flare.sqf"; };
			class a_m04_nikosScenePrepare		{ file = "A3\Missions_F_EPA\Campaign\Missions\A_m04.Stratis\functions\fn_nikosScenePrepare.sqf"; };
			class a_m04_particleEffect		{ file = "A3\Missions_F_EPA\Campaign\Missions\A_m04.Stratis\functions\fn_particleEffect.sqf"; };
			class a_m04_spawnGroupInBuilding	{ file = "A3\Missions_F_EPA\Campaign\Missions\A_m04.Stratis\functions\fn_spawnGroupInBuilding.sqf"; };
			class a_m04_streetLightsBlinking	{ file = "A3\Missions_F_EPA\Campaign\Missions\A_m04.Stratis\functions\fn_streetLightsBlinking.sqf"; };
			class a_m04_updateTriggerPosition	{ file = "A3\Missions_F_EPA\Campaign\Missions\A_m04.Stratis\functions\fn_updateTriggerPosition.sqf"; };
		};
		//B_in
		class B_in {
			class B_in_aftermath		{ file = "A3\Missions_F_EPA\Campaign\Missions\B_in.Altis\functions\fn_aftermath.sqf"; };
			class B_in_chopperReinforcements{ file = "A3\Missions_F_EPA\Campaign\Missions\B_in.Altis\functions\fn_chopperReinforcements.sqf"; };
			class B_in_vehicleTraffic	{ file = "A3\Missions_F_EPA\Campaign\Missions\B_in.Altis\functions\fn_vehicleTraffic.sqf"; };
			class B_in_firing		{ file = "A3\Missions_F_EPA\Campaign\Missions\B_in.Altis\functions\fn_firing.sqf"; };
		};

		//B_m01
		class B_m01 {
			class B_m01_alarm		{ file = "A3\Missions_F_EPA\Campaign\Missions\B_m01.Altis\functions\fn_alarm.sqf"; };
			class B_m01_debugStage		{ file = "A3\Missions_F_EPA\Campaign\Missions\B_m01.Altis\functions\fn_debugStage.sqf"; };
			class B_m01_supplyAdd		{ file = "A3\Missions_F_EPA\Campaign\Missions\B_m01.Altis\functions\fn_supplyAdd.sqf"; };
			class B_m01_supplyGet		{ file = "A3\Missions_F_EPA\Campaign\Missions\B_m01.Altis\functions\fn_supplyGet.sqf"; };
			class B_m01_suppressiveFire	{ file = "A3\Missions_F_EPA\Campaign\Missions\B_m01.Altis\functions\fn_suppressiveFire.sqf"; };
		};

		//B_m02_1
		class B_m02_1 {
			class B_m02_1_holder		{ file = "A3\Missions_F_EPA\Campaign\Missions\B_m02_1.Altis\functions\fn_holder.sqf"; };
			class B_m02_1_holderSpecial	{ file = "A3\Missions_F_EPA\Campaign\Missions\B_m02_1.Altis\functions\fn_holderSpecial.sqf"; };
			class B_m02_1_take		{ file = "A3\Missions_F_EPA\Campaign\Missions\B_m02_1.Altis\functions\fn_take.sqf"; };
		};

		//B_m02_2
		class B_m02_2
		{
			class B_m02_2_alarm   		{ file = "A3\Missions_F_EPA\Campaign\Missions\B_m02_2.Stratis\functions\fn_alarm.sqf"; };
			class B_m02_2_chaos   		{ file = "A3\Missions_F_EPA\Campaign\Missions\B_m02_2.Stratis\functions\fn_chaos.sqf"; };
			class B_m02_2_flare   		{ file = "A3\Missions_F_EPA\Campaign\Missions\B_m02_2.Stratis\functions\fn_flare.sqf"; };
			class B_m02_2_initGroup  	{ file = "A3\Missions_F_EPA\Campaign\Missions\B_m02_2.Stratis\functions\fn_initGroup.sqf"; };
			class B_m02_2_site   		{ file = "A3\Missions_F_EPA\Campaign\Missions\B_m02_2.Stratis\functions\fn_site.sqf"; };
			class B_m02_2_siteCleared  	{ file = "A3\Missions_F_EPA\Campaign\Missions\B_m02_2.Stratis\functions\fn_siteCleared.sqf"; };
			class B_m02_2_siteDetected 	{ file = "A3\Missions_F_EPA\Campaign\Missions\B_m02_2.Stratis\functions\fn_siteDetected.sqf"; };
		};

		class C_m02
		{
			class C_m02_convoy				{ file = "A3\Missions_F_EPA\Campaign\Missions\C_m02.Altis\functions\fn_convoy.sqf"; };
			class C_m02_groupManager			{ file = "A3\Missions_F_EPA\Campaign\Missions\C_m02.Altis\functions\fn_groupManager.sqf"; };
			class C_m02_bombardment				{ file = "A3\Missions_F_EPA\Campaign\Missions\C_m02.Altis\functions\fn_bombardment.sqf"; };
			class C_m02_fakeFiring				{ file = "A3\Missions_F_EPA\Campaign\Missions\C_m02.Altis\functions\fn_fakeFiring.sqf"; };
			class C_m02_suppressiveFireVehicle		{ file = "A3\Missions_F_EPA\Campaign\Missions\C_m02.Altis\functions\fn_suppressiveFireVehicle.sqf"; };
			class C_m02_fireFromCover			{ file = "A3\Missions_F_EPA\Campaign\Missions\C_m02.Altis\functions\fn_fireFromCover.sqf"; };
			class C_m02_medicHealingWounded			{ file = "A3\Missions_F_EPA\Campaign\Missions\C_m02.Altis\functions\fn_medicHealingWounded.sqf"; };
			class C_m02_fogInterpolate			{ file = "A3\Missions_F_EPA\Campaign\Missions\C_m02.Altis\functions\fn_fogInterpolate.sqf"; };
			class C_m02_support				{ file = "A3\Missions_F_EPA\Campaign\Missions\C_m02.Altis\functions\fn_support.sqf"; };
			class C_m02_musicQueue				{ file = "A3\Missions_F_EPA\Campaign\Missions\C_m02.Altis\functions\fn_musicQueue.sqf"; };
			class C_m02_talkOnRadio				{ file = "A3\Missions_F_EPA\Campaign\Missions\C_m02.Altis\functions\fn_talkOnRadio.sqf"; };
			class C_m02_vehicleWheels			{ file = "A3\Missions_F_EPA\Campaign\Missions\C_m02.Altis\functions\fn_vehicleWheels.sqf"; };
			class C_m02_playerDamageOnly			{ file = "A3\Missions_F_EPA\Campaign\Missions\C_m02.Altis\functions\fn_playerDamageOnly.sqf"; };
		};

		class C_out1
		{
			class C_out1_playerDamageOnly			{ file = "A3\Missions_F_EPA\Campaign\Missions\C_out1.Altis\functions\fn_playerDamageOnly.sqf"; };
			class C_out1_suppressiveFireVehicle		{ file = "A3\Missions_F_EPA\Campaign\Missions\C_out1.Altis\functions\fn_suppressiveFireVehicle.sqf"; };
		};
	};
};