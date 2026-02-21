/*
 Program: Switch Case Example
 Description: Simple calculator using switch case
 Author: Gajanan Lakade
*/

// Header file for input and output functions
#include <stdio.h>

// Main function: entry point of the program
int main(void) 
{
    // Variable declarations
    int a, b;     // Two numbers for calculation
    char op;      // Operator entered by user

    // Asking user to enter the operator
    printf("Addation(+), \nSustraction(-), \nMultiplication(*), \nDivision(/)\n");
    printf("\nEnter operator : ");
    scanf(" %c", &op);

    // Asking user to enter two numbers
    printf("Enter 1st numbers: ");
    scanf("%d", &a);
    printf("Enter 2nd numbers: ");
    scanf("%d", &b);

    // Switch case to perform operation based on operator
    switch (op) {
        case '+':
            printf("Result: %d\n", a + b);  // Addition
            break;

        case '-':
            printf("Result: %d\n", a - b);  // Subtraction
            break;

        case '*':
            printf("Result: %d\n", a * b);  // Multiplication
            break;

        case '/':
            // Check for division by zero
            if (b != 0)
                printf("Result: %d\n", a / b);  // Division
            else
                printf("Division by zero not allowed\n"); // Error message
            break;

        default:
            printf("Invalid operator\n"); // If user enters wrong operator
    }

    return 0; // End of program
}
