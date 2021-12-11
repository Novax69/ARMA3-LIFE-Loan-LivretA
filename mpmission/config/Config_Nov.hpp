
class NovConfig {
	//Here are all the config you can edit freely without problem :

	//variable similar to all my script if you have it don't copy it
	nov_useDonator = false; //Enable donators bonuses


	/* Params used for Loan */
	nov_loanAmmountLimit = 300000; // Can't ask for a loan bigger than 300.000 $
	nov_interestPercent = 10; // Percent interest for non donor
	/* Params used for the Livret A */
	nov_depositLimit = 10000; // set up the max ammount that can be deposit on the livret A
	nov_numberAddedDonor = 10000; // This number add 10.000 * donor level as limit
	nov_percentToAdd = 2; // 2 % added every 30 minutes, can be changed; for donors it's LEVEL divided by 4 added to the percent here
};