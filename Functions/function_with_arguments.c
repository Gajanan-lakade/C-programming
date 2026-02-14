/*
 Program: Function with Arguments
 Description: Demonstrates passing parameters to a function
 Author: Gajanan Bharat Lakade
*/

// Header file for input and output functions
#include <stdio.h>

// Function declaration
void add(int, int);

// Main function: entry point of the program
int main(void)
{
    // Variable declarations
    int num1, num2;
    char choice = 'y'; // Controls loop execution

    // Loop allows user to repeat the swapping process
    do
    {
        // Accept first number from user
        printf("Enter first number: ");
        if (scanf("%d", &num1) != 1)
        {
            printf("Invalid input! Please enter an integer.\n");
            return 1;   // Exit if invalid input
        }

        // Accept second number from user
        printf("Enter second number: ");
        if (scanf("%d", &num2) != 1)
        {
            printf("Invalid input! Please enter an integer.\n");
            return 1;   // Exit if invalid input
        }

        // Function call
        add(num1, num2);
        // Ask user whether to continue
        printf("Do you want to continue (y/n): ");
        scanf(" %c", &choice); // Space before %c ignores leftover newline

    } while (choice == 'y'); // Repeat if user enters 'y'

    return 0; // End of program
}

// Function definition
void add(int num1, int num2)
{
    printf("Sum: %d\n", num1 + num2);
}
