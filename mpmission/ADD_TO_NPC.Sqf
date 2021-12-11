// Add this code inside the NPC / Object
/*
	##
	## For the Loan / Pour l'emprunt bancaire
	##
*/
this enableSimulation false; 
this allowDamage false; 
// FRENCH :
this addAction["<t color='#ADFF2F'>Emprunt bancaire</t>",nov_fnc_NovLoanMenu,"",0,FALSE,FALSE,"",' isNull objectParent player && player distance _target < 4 '];
// ENGLISH :
this addAction["<t color='#ADFF2F'>Bank Loan</t>",nov_fnc_NovLoanMenu,"",0,FALSE,FALSE,"",' isNull objectParent player && player distance _target < 4 '];

/*
	##
	## For the Livret A / Pour le Livret A
	##
*/
this enableSimulation false; 
this allowDamage false; 
// FRENCH :
this addAction["<t color='#ADFF2F'>Votre Livret A</t>",nov_fnc_NovLivretAMenu,"",0,FALSE,FALSE,"",' isNull objectParent player && player distance _target < 4 '];
// ENGLISH :
this addAction["<t color='#ADFF2F'>Your Livret A</t>",nov_fnc_NovLivretAMenu,"",0,FALSE,FALSE,"",' isNull objectParent player && player distance _target < 4 '];
