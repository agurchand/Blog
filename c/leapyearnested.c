// include the header files
#include <stdio.h>
#include <stdlib.h>

void main() {
	
  int x;
  printf("Enter a year:");
  scanf("%d", & x);
  
  // nested if statements to check Leap year 
  if (x % 4 == 0) {
    if (x % 100 == 0) {
      if (x % 400 == 0) {
        printf("%d is a leap year", x);
        exit(0);
      } else {
        printf("%d is not a leap year", x);
        exit(0);
      }
    } else {
      printf("%d is a leap year", x);
    }
  } else {
    printf("%d is not a leap year", x);
  }

}
