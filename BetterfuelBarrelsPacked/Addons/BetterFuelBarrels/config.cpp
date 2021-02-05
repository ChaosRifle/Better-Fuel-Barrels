class CfgPatches
{
  class BetterFuelBarrels
  {
    requiredVersion = 0.1;
    requiredAddons[] =
    {
      // ""
    };
  };
};
class CfgMods
{
  class BetterFuelBarrels
  {
    type = "mod";
    name = "Better Fuel Barrels";
    //picture = "";
		//logo = "";
		//logoSmall = "";
		//logoOver = "";
    tooltip = "Better Barrels Full of Fuel";
    author = "ChaosRifle";
    dependencies[]=
		{
			"World"
		};
    class defs
    {
      class worldScriptModule
      {
        value = "";
        files[] = 
        {
          "BetterFuelBarrels/4_World"
        };
      };
    };
  };
};