class Life_livretA_management {
    idd = 690001;
    name= "life_livretA_menu";
    movingEnable = 0;
    enableSimulation = 1;

    class controlsBackground {
        class Life_RscTitleBackground: Life_RscText {
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
            idc = 690011;
            x = 0.421249 * safezoneW + safezoneX;
            y = 0.248 * safezoneH + safezoneY;
            w = 0.1575 * safezoneW;
            h = 0.028 * safezoneH;
        };

        class MainBackground: Life_RscText {
            colorBackground[] = {0, 0, 0, 0.7};
            idc = -1;
            x = 0.42125 * safezoneW + safezoneX;
            y = 0.29 * safezoneH + safezoneY;
            w = 0.1575 * safezoneW;
            h = 0.294 * safezoneH;
        };
    };

    class controls {
        class Title: Life_RscTitle {
            colorBackground[] = {0, 0, 0, 0};
            idc = -1;
            text = "Gestion du Livret A"; // Eng : Managing Livret A
            x = 0.421249 * safezoneW + safezoneX;
            y = 0.248 * safezoneH + safezoneY;
            w = 0.1575 * safezoneW;
            h = 0.028 * safezoneH;
        };
        class CashTitleLivreA: Life_RscStructuredText { //The ammount of cash
            idc = 690012;
            text = "";
            x = 0.434375 * safezoneW + safezoneX;
            y = 0.304 * safezoneH + safezoneY;
            w = 0.13125 * safezoneW;
            h = 0.098 * safezoneH;
        };
        class livreADeposit : Life_RscButtonMenu {
            idc = 690013;
            text = "Déposer: Livret A";
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
            onButtonClick = "[] call life_fnc_NovDepositLivreA";
            x = 0.434375 * safezoneW + safezoneX;
            y = 0.472 * safezoneH + safezoneY;
            w = 0.13125 * safezoneW;
            h = 0.042 * safezoneH;
        };
        class livreAWithdraw : Life_RscButtonMenu {
            idc = 690014;
            text = "Retirer: Livret A";
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
            onButtonClick = "[] call life_fnc_NovWithdrawLivreA";
            x = 0.434375 * safezoneW + safezoneX;
            y = 0.528 * safezoneH + safezoneY;
            w = 0.13125 * safezoneW;
            h = 0.042 * safezoneH;
        };

        class moneyEdit: Life_RscEdit {
            idc = 690015;
            text = "1";
            sizeEx = 0.030;
            x = 0.434375 * safezoneW + safezoneX;
            y = 0.416 * safezoneH + safezoneY;
            w = 0.13125 * safezoneW;
            h = 0.028 * safezoneH;
        };
        class CloseButtonKey: Life_RscButtonMenu {
            idc = -1;
            text = "$STR_Global_Close";
            onButtonClick = "closeDialog 0;";
            x = 0.42125 * safezoneW + safezoneX;
            y = 0.598 * safezoneH + safezoneY;
            w = (6.25 / 40);
            h = (1 / 25);
        };


    };
};