class CfgPatches
{
	class cTab_MSG_Notifications
	{
		addonRootClass=""
		requiredAddons[]={};
		author="Arcanist";
		version="1.0.0";
		versionStr="1.0.0";
		versionAr[]={1,0,0};
	};
};

class CfgNotifications
{
    class Default
	{
		title = "DEFAULT";				// Title displayed as text on black background. Filled by arguments.
		iconPicture = "";		// Small icon displayed in left part. Colored by "color", filled by arguments.
		iconText = "";			// Short text displayed over the icon. Colored by "color", filled by arguments.
		description = "%1";		// Brief description displayed as structured text. Colored by "color", filled by arguments.
		color[] = {1,1,1,1};	// Icon and text color
		duration = 5;			// How many seconds will the notification be displayed
		priority = 0;			// Priority; higher number = more important; tasks in queue are selected by priority
		difficulty[] = {};		// Required difficulty settings. All listed difficulties has to be enabled
	};

	// Example 1
	class CTabMessage
	{
		title = "Message from %1";
		iconPicture = "\cTab-msg-notifications\addons\icon_mail_ca.paa";
		description = "%2";
		priority = 7;
        color[] = {1,1,1,1};	// Icon and text color
		duration = 5;			// How many seconds will the notification be displayed
		priority = 0;			// Priority; higher number = more important; tasks in queue are selected by priority
		difficulty[] = {};
	};
};

class CfgFunctions
{
	class nf
	{
		class initcall
		{
			file = "\cTab-msg-notifications\addons";

			class player_init{};
		}
	}
};

class Extended_PostInit_EventHandlers
{
	class Ctab_notification_init
	{
		clientInit = "call nf_fnc_player_init";
	}
};