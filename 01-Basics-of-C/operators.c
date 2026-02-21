/*
 Program: Operators in C
 Description: Demonstrates arithmetic, relational, and logical operators
 Author: Gajanan Lakade
*/

// Header file for input and output functions
#include <stdio.h>

// Main function: execution starts here
int main(void) 
{
    // Variable declarations
    int firstNumber = 10, secondNumber = 5;

    // Arithmetic Operators 
    printf("Operation of Arithmetic Operators\n");
    printf("Addition: %d\n", firstNumber + secondNumber);         // Addition of two numbers
    printf("Subtraction: %d\n", firstNumber - secondNumber);      // Subtraction of two numbers
    printf("Multiplication: %d\n", firstNumber * secondNumber);   // Multiplication of two numbers
    printf("Division: %d\n", firstNumber / secondNumber);         // Division of two numbers

// Relational Operators 
printf("\nOperation of Relational Operators\n");
printf("firstNumber > secondNumber: %d\n",firstNumber > secondNumber); // Comparing two values and printing the result: true (1) or false (0)
printf("firstNumber == secondNumber: %d\n",firstNumber == secondNumber); // Comparing two values and printing the result: true (1) or false (0)

// Logical Operators 
printf("\nOperation of Logical Operators\n");
printf("(firstNumber > secondNumber && secondNumber > 0): %d\n",(firstNumber > secondNumber && secondNumber > 0)); // Performing logical AND operation and printing result: true (1) or false (0)
printf("(firstNumber < secondNumber || secondNumber > 0): %d\n",(firstNumber < secondNumber || secondNumber > 0)); // Performing logical OR operation and printing result: true (1) or false (0)

    return 0; // End of program
}
