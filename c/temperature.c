#include <stdio.h>

int main()
{
	// declare the variables
	double tmp, result;
	char *choice_text;
	
	// get the choice from the user
	int choice;
	printf("Select your choice: \n");
	printf("1. Celsius to Fahrenheit \n2. Fahrenheit to Celsius\n");
	
	printf("Enter your choice: ");
	scanf("%d", &choice);

	// let's use switch case to find the temperature
	switch(choice)
	{
		case 1:
			printf("Enter the temperature in Celsius: ");
			scanf("%lf", &tmp);
			choice_text = "Fahrenheit";
			
			//formula to convert F to C
			result = (tmp * 9 / 5) + 32;
			break;
		case 2:
			printf("Enter the temperature in Fahrenheit: ");
			scanf("%lf", &tmp);
			choice_text = "Celsius";
			
			//formula to convert C to F
			result = (tmp - 32) * 5 / 9;
			break;

		// print default incase if the user does not select 1 or 2
		default: 
			printf("Sorry Invalid choice, you can either select 1 or 2! \n");
			return 0;
	}

	// Printing out the result according to the computation
	printf("Temperature in %s is: %.1f", choice_text, result);
	return 0;
}
