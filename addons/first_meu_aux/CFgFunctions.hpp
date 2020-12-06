class CfgFunctions
{
    class V_FZ
    {
        class PelicanMagLiftSystem
		{
            class PelicanLoadValidate
            {
                file = "first_meu_aux\Functions\fn_PelicanLoadValidate.sqf";
            };
            class PelicanUnLoadValidate
            {
                file = "first_meu_aux\Functions\fn_PelicanUnLoadValidate.sqf";
            };
        };
    };
    class MEU
    {
        class compat
        {
            class fn_meuPainReduce
            {
                file = "first_meu_aux\Functions\fn_meuPainReduce.sqf";
            };
            class fn_meuPainReduceLocal
            {
                file = "first_meu_aux\Functions\fn_meuPainReduceLocal.sqf";
            };
        };
    };
    class TAS
	{
		tag = "TAS";
		class TAS_Keybinds
		{
			class keybinds
			{
				file = "first_meu_aux\functions\keybinds.sqf";
				postInit = 1;
			};
		};
                class TAS_utility_functions
		{
			class get_config_attribute
			{
				file = "first_meu_aux\functions\utility\get_config\get_config_attribute.sqf";
			};
			class integer_to_boolean
			{
				file = "first_meu_aux\functions\utility\get_config\integer_to_boolean.sqf";
			};
		};
    };
        
        class MEU_2 //tag
	{
		class RLB
		{
			class Afterburners_Engage {file = "first_meu_aux\functions\fn_Afterburners_Engage.sqf";};
		};
	};
	class MEU_3 //tag
	{
		class RLF
		{
			class Afterburners_Disengage {file = "first_meu_aux\functions\fn_Afterburners_Disengage.sqf";};
		};
	};
        class tcw_functions
	{
		tag = "tcw";
		class afterburner_functions
		{
			file = "first_meu_aux\functions\afterburnerMk1";
			class Afterburners_Disengage;
			class Afterburners_Engage;
		};
	};
};