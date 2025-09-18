//cashRegister.c - A simple Cash register simulator program made by Zephaniah .A
//Student name: Abiodun Opeoluwa Zephaniah
//Student number: 101376259

//History:
// 09-Sept-25  A. Zephaniah         Created Project.
// 09-Sept-25  A. Zephaniah         Updated floats.
// 13-Sept-25  A. Zephaniah			Created integers
// 13-Sept-25  A. Zephaniah			Created calculation code block
// 
// 
// ...


#include <stdio.h>//include the standard C input/output library

int main() 
{
	/* These are floats that are used to store the costs of items */

	//Floats
	float cost_item1 = 0.0f;
	float cost_item2 = 0.0f;
	float cost_item3 = 0.0f;

	/*I learned it's good practice to keep variables separate from the rest of your code*/

	//Integers
	int num_dollars;
	int num_quarters;
	int num_dimes;
	int num_nickels;
	int num_cents;
	

	/*
		Variable initialization hindered my code from working initially, for about 20 minutes
		But once I went back to te output log, I realized how important it really is.
	*/

	
	//Giving the cash register a little personality :D
	printf("Hello there user I will need you to input the cost of three of your items,please and thank you.\n");
	printf("Alrighty then go ahead and inut the cost of your items\n\n\n");
	//He's pretty polite

	printf("\nCash Register");
	/* This block of code handles the users input of three item costs*/
	printf("\nEnter the cost of item 1: $");
	scanf_s("%f", &cost_item1);//Accepts float input 1

	printf("\nEnter the cost of item 2: $");
	scanf_s("%f", &cost_item2);//Accepts float input 2

	printf("\nEnter the cost of item 3: $");
	scanf_s("%f", &cost_item3);//Accepts float input 3

	//Had an error here but I learned an "&" sign is required in front of the variable to allow input acceptance
	

	
	
	/*These were some interesting learning material to work with*/

	//printf("The total cost as a float is $%.2f\n", total_cost);
	//printf("the total cost in cents as an integer is %d\n\n", remainder);



	/*This block of code handles the calculation*/
	float total_cost = cost_item1 + cost_item2 + cost_item3;//Be careful here according to you Prof.Watler.
	
	int remainder = total_cost * 100 + 0.0001;//499.000077 -> 499, correct!

	//Dollars
	num_dollars	= remainder / 100;
	remainder	= remainder % 100;

	//Quarters
	num_quarters = remainder / 25;//25 pennies in one quarter
	//499/25=19.96 -> 19 quarters
	remainder	= remainder % 25;//499%25=19 rem 24 -> remainder becomes 24

	//Dimes
	num_dimes	= remainder / 10;
	remainder	= remainder % 10;

	//Nickels
	num_nickels	= remainder / 5;
	remainder	= remainder % 5;

	//Pennies
	num_cents	= remainder / 1;
	remainder	= remainder % 1;

	//Final Output
	printf("Total cost is: $ %.2f", total_cost);
	printf("\nYou used %d dollars, %d quarters, %d dimes, %d nickels, and %d pennies\n",
		num_dollars,num_quarters,num_dimes,num_nickels,num_cents);

	return 0;


	//Output should resemble this format: You used <num_dollars> dollars, <num_quarters> quarters, <num_dimes> dimes, <num_nickels> nickels and <num_cents> pennies.
}

