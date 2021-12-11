// add after #define GANG_FUNDS
#define LOAN life_loan
#define LIVREA life_livrea


// add if missing
#define NOV_PARAMS(TYPE,SETTING) TYPE(missionConfigFile >> "NovConfig" >> SETTING)
