modded class Barrel_ColorBase : DeployableContainer_Base
{
  override void SetActions()
  {
	super.SetActions();
	AddAction(ActionFillFuel);
	AddAction(ActionFillGeneratorTank);
	AddAction(ActionExtinguishFireplaceByLiquid);
	AddAction(ActionFillBottleBase);
	AddAction(ActionWaterGardenSlot);
	AddAction(ActionWaterPlant);
	AddAction(ActionForceDrink);
	AddAction(ActionEmptyBottleBase);
	//AddAction(ActionDrink);
	AddAction(ActionTransferLiquid);

	}
}