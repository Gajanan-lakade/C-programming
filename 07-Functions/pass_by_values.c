/*
 Program: Addition of Two Numbers Using Function
 Description: This program accepts two integers from the user and calculates
              their sum using a user-defined function. The user can repeat
              the operation multiple times based on their choice.
 Author: Gajanan Bharat Lakade
*/

// Header file for standard input and output functions
#include <stdio.h>

// Function declaration (prototype)
// Returns the sum of two integers
int add(int, int);

// Main function: Entry point of the program
int main(void)
{
    // Variable declarations
    int num1, num2, sum;
    char choice = 'y';   // Controls loop execution

    // Loop allows user to repeat the addition process
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
        sum = add(num1, num2);

        // Display result
        printf("Sum: %d\n", sum);

        // Ask user whether to continue
        printf("Do you want to continue (y/n): ");
        scanf(" %c", &choice);   // Space before %c ignores leftover newline

    } while (choice == 'y' || choice == 'Y');   // Accept both 'y' and 'Y'

    return 0; // End of program
}

// Function definition
// Returns the sum of two integer values
int add(int num1, int num2)
{
    return num1 + num2;
}
