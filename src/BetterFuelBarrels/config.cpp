class CfgPatches
{
  class BetterFuelBarrels
  {
    requiredVersion = 0.1;
    requiredAddons[] =
        {
            // ""
    };
  }
} 
class CfgMods
{
  class BetterFuelBarrels
  {
    type = "mod";
    name = "Better Fuel Barrels";
    tooltip = "Use barrels for fuel!";
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