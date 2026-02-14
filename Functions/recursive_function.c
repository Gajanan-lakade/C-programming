/*
 Program: Recursive Function Example
 Description: Demonstrates recursion using factorial calculation
 Author: Gajanan Lakade
*/

// Header file for input and output functions
#include <stdio.h>

// Function declaration
int factorial(int n);

// Main function: entry point of the program
int main(void) 
{
    int num = 5;
    printf("Factorial of %d is %d\n", num, factorial(num));

    return 0; // End of program
}

// Recursive function definition
int factorial(int num) 
{
    if (num == 0 || num == 1)
        return 1;

    return num * factorial(num - 1);
}
