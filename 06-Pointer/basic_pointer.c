/*
 Program: Basic Pointer Example
 Description: Demonstrates pointer declaration, initialization, and dereferencing
 Author: Gajanan Lakade
*/

// Header file for input and output functions
#include <stdio.h>

// Main function: entry point of the program
int main(void)
{
    char choice;
    int option;

    do
    {
        // Display menu options to the user
        printf("\nMethod one for default input");
        printf("\nMethod two for user input");
        printf("\nSelect the method: ");
        // Read user-selected option
        scanf("%d", &option);
        switch (option)
        {
        case 1:
        {
            int number = 10;    // Normal integer variable
            int *ptr = &number; // Pointer storing address of number

            printf("Value of number: %d\n", number);
            printf("Address of number: %p\n", (void *)&number);

            printf("Value stored in ptr (address): %p\n", (void *)ptr);
            printf("Value pointed by ptr: %d\n", *ptr); // Dereferencing
            break;
        }
        case 2:
        {
            int number; // Normal integer variable

            printf("Enter a number: ");
            scanf("%d", &number);
            int *ptr = &number; // Pointer storing address of number
            printf("Value of number: %d\n", number);
            printf("Address of number: %p\n", (void *)&number);

            printf("Value stored in ptr (address): %p\n", (void *)ptr);
            printf("Value pointed by ptr: %d\n", *ptr); // Dereferencing
            break;
        }
            // Default case: handles invalid option
        default:
            printf("\nError: Please select correct method");
        }
        // Ask user whether to continue or not
        printf("\nDo you want to continue (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'Y' || choice == 'y'); // Loop repeats if user enters Y or y

    return 0; // End of program
}
