/*
 Program: Function with Return Value
 Description: This program demonstrates the use of a user-defined function
              that returns a value. It multiplies two integers and displays
              the result.
 Author: Gajanan Bharat Lakade
*/

// Header file for standard input and output functions
#include <stdio.h>

// Function declaration (prototype)
// Returns the product of two integers
int multiply(int, int);

// Main function: Entry point of the program
int main(void)
{
    // Variable declaration and initialization
    int num1 = 5;
    int num2 = 4;
    int result;

    // Function call
    result = multiply(num1, num2);

    // Display result
    printf("Multiplication Result: %d\n", result);

    return 0; // End of program
}

// Function definition
// Multiplies two integers and returns the result
int multiply(int num1, int num2)
{
    return num1 * num2;
}
