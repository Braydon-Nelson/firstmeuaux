#define _ARMA_
class ACE_Medical_Treatment_Actions
{
    class Morphine;
    class PlasmaIV;
    class OPTRE_Medigel;
    class OPTRE_Biofoam;
    class ApplyTourniquet;
    class RemoveTourniquet;
    class BasicBandage;
    
    class MEU_compat_Ibuprofen: Morphine
    {
        displayName = "Ibuprofen Bottle";
        displayNameProgress = "Having some Water and rest...";
        allowedSelections[] = {"Head"};
        items[] = {"MEU_compat_Ibuprofen"};
        treatmentTime = 1;
    };
	class ACE_Banana: Morphine
    {
        displayName = "Banana";
        displayNameProgress = "Committing unga bunga long sleep";
        allowedSelections[] = {"Head"};
        items[] = {"ACE_Banana"};
        treatmentTime = 1;
    };
    class MEU_PlasmaIV : PlasmaIV
    {
        displayName = "Plasma 2.5L";
        displayNameProgress = "Pushing 2 and a half litres";
        treatmentTime = 12;
        items[] = {"MEU_PlasmaIV"};
    };
    class MEU_Heavy_Medigel: OPTRE_Medigel
    {
        displayName = "Apply Heavy Medigel";
        displayNameProgress = "Applying lots of Medigel";
        items[] = {"MEU_Heavy_Medigel"};
        callbackSuccess = "OPTRE_fnc_treatmentBandageAndPainReduction";
        consumeItem = 0;
        category = "bandage";
        medicRequired = 1;
    };
    class MEU_Heavy_Biofoam : OPTRE_Biofoam
    {
        displayName = "Inject Heavy Biofoam";
        displayNameProgress = "Injecting lots of Biofoam";
        items[] = {"MEU_Heavy_Biofoam"};
        callbackSuccess = "OPTRE_fnc_treatmentBandageAndPainReduction";
        consumeItem = 0;
        category = "bandage";
        medicRequired = 1;
    };
	class MEU_Medigel: OPTRE_Medigel
    {
        displayName = "Apply Medigel";
        displayNameProgress = "Applying Medigel";
        items[] = {"MEU_Medigel"};
        callbackSuccess = "OPTRE_fnc_treatmentBandageAndPainReduction";
        category = "bandage";
    };
    class MEU_Biofoam : OPTRE_Biofoam
    {
        displayName = "Inject Biofoam";
        displayNameProgress = "Injecting Biofoam";
        items[] = {"MEU_Biofoam"};
        callbackSuccess = "OPTRE_fnc_treatmentBandageAndPainReduction";
        category = "bandage";
    };
    class MEU_ApplyTourniquet: ApplyTourniquet
    {
        displayName = "Constrict Suit";
        displayNameProgress = "Constrict Suit";
        allowedSelections[] = {"LeftArm", "RightArm", "LeftLeg", "RightLeg"};
        items[] = {"MEU_tourniquet"};
        treatmentTime = 3;
        consumeItem = 0;
        category = "bandage";
    };
    class MEU_RemoveTourniquet: RemoveTourniquet
    {
        displayName = "Deconstrict";
        displayNameProgress = "Deconstrict";
        items[] = {"MEU_tourniquet"};
        treatmentTime = 3;
        callbackSuccess = "MEU_fnc_tourniquetRemove";
        consumeItem = 0;
        category = "bandage";
    };
};