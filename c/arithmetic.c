#include <stdio.h>
int main() {
   
   //Declare variables
   int number1, number2, addition, subtraction, multiplication, division, modulo;
   
   //get the input from user
   printf("Enter number 1:");
   scanf("%d", &number1);
   printf("Enter number 2:");
   scanf("%d", &number2);
   
   
   //adding two number in C
   addition = number1 + number2;
   
   //subtracting two numbers in C
   subtraction = number1 - number2;
   
   //multiplying two numbers in C
   multiplication = number1 * number2;
   
   //Dividing two numbers in C
   division = number1 / number2;
   
   //Get the modulo of two numbers in C
   modulo = number1 % number2;
   
   //print the results
   printf("\nAddition of %d and %d is equal to %d \n", number1, number2, addition);
   printf("Subtraction of %d and %d is equal to %d \n", number1, number2, subtraction);
   printf("Multiplication of %d and %d is equal to %d \n", number1, number2, multiplication);
   printf("Division of %d and %d is equal to %d \n", number1, number2, division);
   printf("Modulo of %d and %d is equal to %d \n", number1, number2, modulo);
   return 0;

}
