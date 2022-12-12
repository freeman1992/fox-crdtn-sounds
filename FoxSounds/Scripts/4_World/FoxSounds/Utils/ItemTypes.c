class FOX_ItemTypes
{
    
    static ref array<typename> CLOTHING = {
        Clothing_Base, 
        Clothing
    };

	static ref array<typename> FOOD = {
        Edible_Base,
        Rice,
        Marmalade,
        BakedBeansCan,
        BakedBeansCan_Opened,
        PeachesCan,
        PeachesCan_Opened,
        TacticalBaconCan,
        TacticalBaconCan_Opened,
        SpaghettiCan,
        SpaghettiCan_Opened,
        SardinesCan,
        SardinesCan_Opened,
        TunaCan,
        TunaCan_Opened,
        Apple,
        Plum,
        Pear,
        Banana,
        Orange,
        Tomato,
        GreenBellPepper,
        Zucchini,
        Pumpkin,
        SlicedPumpkin,
        Potato,
        Kiwi,
        SambucusBerry,
        CaninaBerry,
        Cannabis,
        HumanSteakMeat,
        GoatSteakMeat,
        MouflonSteakMeat,
        BoarSteakMeat,
        PigSteakMeat,
        DeerSteakMeat,
        WolfSteakMeat,
        BearSteakMeat,
        CowSteakMeat,
        SheepSteakMeat,
        FoxSteakMeat,
        ChickenBreastMeat,
        RabbitLegMeat,
        CarpFilletMeat,
        MackerelFilletMeat,
        Lard,
        Carp,
        Sardines,
        Mackerel,
        Worm,
        MushroomBase
    };

    static ref array<typename> MED_PILLS = {
        PurificationTablets,
        CharcoalTablets,
        PainkillerTablets,
        VitaminBottle,
        TetracyclineAntibiotics
    };
	

    static ref array<typename> WEAPON_PARTS = {
		ItemOptics,
		ItemSuppressor,
        AK_Bayonet,
        M9A1_Bayonet,
        Mosin_Bayonet,
        SKS_Bayonet,
        Mosin_Compensator,
        MP5_Compensator,
        ImprovisedSuppressor,
        M4_Suppressor,
        AK_Suppressor,
        PistolSuppressor,
        MakarovPBSuppressor,
        M4_OEBttstck,
        M4_MPBttstck,
        M4_CQBBttstck,
        AK_WoodBttstck,
        AK74_WoodBttstck,
        AK_FoldingBttstck,
        AK_PlasticBttstck,
        AKS74U_Bttstck,
        MP5k_StockBttstck,
        Red9Bttstck,
        Fal_OeBttstck,
        Fal_FoldingBttstck,
        Saiga_Bttstck,
        M4_PlasticHndgrd,
        M4_RISHndgrd,
        M4_MPHndgrd,
        AK_WoodHndgrd,
        AK74_Hndgrd,
        AK_RailHndgrd,
        AK_PlasticHndgrd,
        MP5_PlasticHndgrd,
        MP5_RailHndgrd,
        M249_Hndgrd,
        M249_RisHndgrd,
        AtlasBipod,
        M249_Bipod
    };

    static ref array<typename> BAGS = {
        TaloonBag_ColorBase,
        TortillaBag,
        CourierBag,
        FurCourierBag,
        ImprovisedBag,
        FurImprovisedBag,
        DryBag_ColorBase,
        HuntingBag,
        MountainBag_ColorBase,
        SmershBag,
        ChildBag_ColorBase,
        GhillieBushrag_ColorBase,
        GhillieTop_ColorBase,
        GhillieSuit_ColorBase,
        LeatherSack_ColorBase,
        AssaultBag_ColorBase,
        CoyoteBag_ColorBase,
        AliceBag_ColorBase
    };

    static ref array<typename> GLASSES = {
        SportGlasses_ColorBase,
        AviatorGlasses,
        DesignerGlasses,
        ThickFramesGlasses,
        ThinFramesGlasses,
        TacticalGoggles,
        NVGHeadstrap,
        NVGoggles
    };

    static ref array<typename> GLOVES = {
        WorkingGloves_ColorBase,
        TacticalGloves_ColorBase,
        NBCGloves_ColorBase,
        SurgicalGloves_ColorBase,
        LeatherGloves_ColorBase,
        OMNOGloves_ColorBase
    };
	
	static ref array<typename> CONSTRUCTION = {
        MediumTent,
        LargeTent,
        CarTent,
        PartyTent,
        CamoNetShelter,
        FenceKit,
        WatchtowerKit,
        BarbedWire,
        CombinationLock,
        CombinationLock4,
        CamoNet,
        SeaChest,
        WoodenCrate,
        Spotlight,
        XmasLights,
        Refridgerator,
        PowerGenerator,
        CableReel,
        BatteryCharger,
        HescoBox,
        Fabric,
        ShelterBase,
        TerritoryFlagKit,
        Flag_Base,
        Paper,
        DuctTape
	};

/*
            Container_Base


        ItemOptics

        Edible_Base
        Book_Base
        Clothing
        Switchable_Base

        HouseNoDestruct
        TentBase
        Box_Base
        WorldContainer_Base
        Bottle_Base
        Transmitter_Base
        FishingRod_Base
        Powered_Base
        Trap_Base
        ItemBarrel
        
        FishingRod_Base_New
        BaseBuildingBase

        LargeTentBackPack
        CivilianBelt
        MilitaryBelt
        LeatherKnifeSheath
        NylonKnifeSheath
        LeatherBelt_ColorBase


        BallisticHelmet_ColorBase
        BaseballCap_ColorBase
        ZSh3PilotHelmet
        ConstructionHelmet_ColorBase
        BurlapSackCover
        BeanieHat_ColorBase
        Ushanka_ColorBase
        PumpkinHelmet
        MotoHelmet_ColorBase
        DarkMotoHelmet_ColorBase
        Headtorch_ColorBase
        Bandana_ColorBase
        BandanaHead_ColorBase
        RadarCap_ColorBase
        MilitaryBeret_ColorBase
        FlatCap_ColorBase
        ZmijovkaCap_ColorBase
        CowboyHat_ColorBase
        BoonieHat_ColorBase
        OfficerHat
        PoliceCap
        PilotkaCap
        TankerHelmet
        GorkaHelmet
        FirefightersHelmet_ColorBase
        SkateHelmet_ColorBase
        WeldingMask
        PrisonerCap
        GhillieHood_ColorBase
        LeatherHat_ColorBase
        MedicalScrubsHat_ColorBase
        GreatHelm
        Ssh68Helmet
        DirtBikeHelmet_ColorBase
        DirtBikeHelmet_Visor
        DirtBikeHelmet_Mouthguard
        NBCHoodBase
        HockeyHelmet_ColorBase
        SantasHat
        Mich2001Helmet
        GasMask
        BandanaMask_ColorBase
        NioshFaceMask
        GP5GasMask
        AirborneMask
        GP5GasMask_Filter
        Balaclava3Holes_ColorBase
        SantasBeard
        MouthRag
        SurgicalMask
        HockeyMask
        Jeans_ColorBase
        CargoPants_ColorBase
        TTSKOPants
        HunterPants_ColorBase
        CanvasPants_ColorBase
        CanvasPantsMidi_ColorBase
        TrackSuitPants_ColorBase
        GorkaPants_ColorBase
        PolicePants
        PolicePantsOrel
        ParamedicPants_ColorBase
        FirefightersPants_ColorBase
        PrisonUniformPants
        LeatherPants_ColorBase
        MedicalScrubsPants_ColorBase
        USMCPants_ColorBase
        SlacksPants_ColorBase
        BDUPants
        NBCPantsBase
        Breeches_ColorBase
        ShortJeans_ColorBase
        Skirt_ColorBase
        JumpsuitPants_ColorBase
        AthleticShoes_ColorBase
        HikingBoots_ColorBase
        HikingBootsLow_ColorBase
        Wellies_ColorBase
        WorkingBoots_ColorBase
        JungleBoots_ColorBase
        DressShoes_ColorBase
        MilitaryBoots_ColorBase
        CombatBoots_ColorBase
        JoggingShoes_ColorBase
        LeatherShoes_ColorBase
        Sneakers_ColorBase
        NBCBootsBase
        Ballerinas_ColorBase
        TTSKOBoots
        Armband_ColorBase
        Sweater_ColorBase
        Shirt_ColorBase
        TShirt_ColorBase
        Hoodie_ColorBase
        TacticalShirt_ColorBase
        HikingJacket_ColorBase
        Raincoat_ColorBase
        M65Jacket_ColorBase
        TTsKOJacket_ColorBase
        GorkaEJacket_ColorBase
        RidersJacket_ColorBase
        WoolCoat_ColorBase
        TrackSuitJacket_ColorBase
        PoliceJacket
        PoliceJacketOrel
        ParamedicJacket_ColorBase
        FirefighterJacket_ColorBase
        PrisonUniformJacket
        MiniDress_ColorBase
        QuiltedJacket_ColorBase
        BomberJacket_ColorBase
        LeatherJacket_ColorBase
        HuntingJacket_ColorBase
        MedicalScrubsShirt_ColorBase
        LabCoat
        NurseDress_ColorBase
        USMCJacket_ColorBase
        Blouse_ColorBase
        NBCJacketBase
        DenimJacket
        TelnyashkaShirt
        ChernarusSportShirt
        JumpsuitJacket_ColorBase
        BDUJacket
        ManSuit_ColorBase
        WomanSuit_ColorBase
        LeatherShirt_ColorBase
        PlateCarrierVest
        SmershVest
        PressVest_ColorBase
        UKAssVest_ColorBase
        PoliceVest
        PlateCarrierHolster
        ChestHolster
        HighCapacityVest_ColorBase
        LeatherStorageVest_ColorBase
        HuntingVest
        ReflexVest
        ItemBook
        MediumTent
        LargeTent
        CarTent
        PartyTent
        CamoNetShelter
        FenceKit
        WatchtowerKit
        BarbedWire
        CombinationLock
        CombinationLock4
        CamoNet
        SeaChest
        WoodenCrate
        Spotlight
        XmasLights
        Refridgerator
        PowerGenerator
        CableReel
        BatteryCharger
        HescoBox
        Fabric
        ShelterBase
        TerritoryFlagKit
        Flag_Base
        Paper
        DuctTape
        Rag
        BurlapStrip
        Stone
        SmallStone
        Firewood
        Battery9V
        LargeGasCanister
        MediumGasCanister
        SmallGasCanister
        ButaneCanister
        Spraycan_ColorBase
        Matchbox
        NailBox
        Roadflare
        Chemlight_ColorBase
        Pelt_Base
        TannedLeather
        Hook
        BoneHook
        Bark_ColorBase
        Nail
        Bone
        Bait
        BoneBait
        GardenLime
        Netting
        WoodenPlank
        MetalPlate
        WoodenLog
        Barrel_ColorBase
        Refrigerator
        RefrigeratorMinsk
        TrashCan
        FirstAidKit
        SmallProtectorCase
        PlateCarrierPouches
        AmmoBox
        Bear_ColorBase
        WaterproofBag_ColorBase
        GiftBox_Base
        FireplaceBase
        BarrelHoles_ColorBase
        Pot
        FryingPan
        PortableGasStove
        PortableGasLamp
        Candle
        PetrolLighter
        Tripod
        BurlapSack
        Rope
        MetalWire
        WoodenStick
        Torch
        ChickenFeather
        LongWoodenStick
        SharpWoodenStick
        GorkaHelmetVisor
        HandDrillKit
        Spear
        SeedBase
        TomatoSeedsPack
        PepperSeedsPack
        PumpkinSeedsPack
        ZucchiniSeedsPack
        CannabisSeedsPack
        PlantMaterial
        AntiPestsSpray
        Canteen
        WaterBottle
        Vodka
        WaterPouch_ColorBase
        SodaCan_ColorBase
        SodaCan_Empty
        BoxCerealCrunchin
        PowderedMilk
        SmallGuts
        Guts
	
	
        Rice
        Marmalade
        BakedBeansCan
        BakedBeansCan_Opened
        PeachesCan
        PeachesCan_Opened
        TacticalBaconCan
        TacticalBaconCan_Opened
        SpaghettiCan
        SpaghettiCan_Opened
        SardinesCan
        SardinesCan_Opened
        TunaCan
        TunaCan_Opened
        Apple
        Plum
        Pear
        Banana
        Orange
        Tomato
        GreenBellPepper
        Zucchini
        Pumpkin
        SlicedPumpkin
        Potato
        Kiwi
        SambucusBerry
        CaninaBerry
        Cannabis
        HumanSteakMeat
        GoatSteakMeat
        MouflonSteakMeat
        BoarSteakMeat
        PigSteakMeat
        DeerSteakMeat
        WolfSteakMeat
        BearSteakMeat
        CowSteakMeat
        SheepSteakMeat
        FoxSteakMeat
        ChickenBreastMeat
        RabbitLegMeat
        CarpFilletMeat
        MackerelFilletMeat
        Lard
        Carp
        Sardines
        Mackerel
        Worm
        MushroomBase
	
	
        BandageDressing
        DisinfectantSpray
        DisinfectantAlcohol
        
        
        
        
        
        Epinephrine
        Morphine
        Syringe
        ClearSyringe
        BloodSyringe
        InjectionVial
        SalineBag
        StartKitIV
        SalineBagIV
        BloodBagEmpty
        BloodBagFull
        BloodBagIV
        BloodTestKit
        Splint
        Thermometer
        Defibrillator
        CigarettePack_ColorBase
        ItemMap
        ItemCompass
        ChernarusMap
        Compass
        Rangefinder
        Binoculars
        PersonalRadio
        BaseRadio
        Megaphone
        Radio
        Flashlight
        Pen_ColorBase
        CanOpener
        Heatpack
        MessTin
        Pliers
        Lockpick
        WeaponCleaningKit
        SewingKit
        LeatherSewingKit
        Handcuffs
        HandcuffKeys
        Cassette
        Shovel
        FieldShovel
        Crowbar
        FireExtinguisher
        Hammer
        MeatTenderizer
        Wrench
        LugWrench
        Pipe
        Screwdriver
        Sickle
        Hacksaw
        KitchenKnife
        SteakKnife
        HayHook
        StoneKnife
        Mace
        FarmingHoe
        ImprovisedFishingRod
        ObsoleteFishingRod
        FishingRod
        SledgeHammer
        Iceaxe
        Broom
        Paddle
        ElectronicRepairKit
        EpoxyPutty
        Whetstone
        HandSaw
        BearTrap
        LandMineTrap
        SmallFishTrap
        FishNetTrap
        TripwireTrap
        RabbitSnareTrap
        TruckBattery
        CarBattery
        BrakeFluid
        EngineOil
        CarRadiator
        HeadlightH7
        HeadlightH7_Box
        SparkPlug
        TireRepairKit
        CanisterGasoline
        CarWheel
        CarDoor
        AmmoBox_556x45_20Rnd
        AmmoBox_556x45Tracer_20Rnd
        AmmoBox_308Win_20Rnd
        AmmoBox_308WinTracer_20Rnd
        AmmoBox_762x54_20Rnd
        AmmoBox_762x54Tracer_20Rnd
        AmmoBox_762x39_20Rnd
        AmmoBox_762x39Tracer_20Rnd
        AmmoBox_22_50Rnd
        AmmoBox_357_20Rnd
        AmmoBox_45ACP_25rnd
        AmmoBox_9x19_25rnd
        AmmoBox_380_35rnd
        AmmoBox_00buck_10rnd
        AmmoBox_12gaSlug_10Rnd
        AmmoBox_12gaRubberSlug_10Rnd
        AmmoBox_12gaBeanbag_10Rnd
        AmmoBox_545x39_20Rnd
        AmmoBox_545x39Tracer_20Rnd
        AmmoBox_9x39AP_20Rnd
        AmmoBox_9x39_20Rnd
        UniversalLight
        TLRLight



        GhillieAtt_ColorBase
        Grenade_Base
        WoodAxe
        Hatchet
        FirefighterAxe
        Cleaver
        CombatKnife
        HuntingKnife
        Machete
        Pitchfork
        Pickaxe
        Sword
        BaseballBat
        NailedBaseballBat
        PipeWrench
        BrassKnuckles_ColorBase
        TelescopicBaton
        HockeyStick
        NewHockeyStick
        PoliceBaton
        Chainsaw
        CattleProd
        StunBaton
*/

}