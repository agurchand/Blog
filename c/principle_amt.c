#include <stdio.h>
int main()
{
	//declare variables
	float Principal, Time, Rate, SimpleInterest;
    
	//get the values from user
	printf("Enter Principal Amount:");
	scanf("%f", &Principal);
	printf("Enter Rate of interest:");
	scanf("%f",&Rate);
	printf("Enter the Time:");
	scanf("%f", &Time);
    
	//find the Simple Interest
	SimpleInterest = (Principal * Rate * Time)/ 100;
    
	//print the valuee
	printf("Simple Interest is :%.2f",SimpleInterest);
	return 0;

}
