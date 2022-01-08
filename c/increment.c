#include<stdio.h>
#include <unistd.h>

int main(void) {
	
	//declare variables
    int num = 0; 
    int increment; 
    
    //Enter the increment number 
    printf("Enter increment value:");
    scanf("%d", &increment);
    
    // While num's Value is less than 100, we'll increment the Value of num by 1 every second.
    while(num < 100) {
        sleep(1); // Wait 1 second each time, num has it's Value incremented
        num += increment; // Increment num
        printf("%d\n", num); // Print the current Value of num
    }

    return 0;
}
