/*
 Program: Pointer with Array
 Description: Demonstrates how pointers work with arrays
 Author: Gajanan Lakade
*/

// Header file for input and output functions
#include <stdio.h>

// Main function: entry point of the program
int main(void)
{
    int option, size, iterate;
    char choice;

    // do-while loop to repeat the program based on user choice
    do
    {
        // Display menu options to the user
        printf("\nMethod one for default input");
        printf("\nMethod two for user input");
        printf("\nSelect the method: ");

        // Read user-selected option
        scanf("%d", &option);

        // switch-case to handle different input methods
        switch (option)
        {
        // Case 1: Default array initialization
        case 1:
        {
            // Declare array with user-defined size1
            int arr[size];
            int *ptr = arr; // Pointer points to first element of array
                            // Ask user for size of array
            printf("\nEnter size of array: ");
            scanf("%d", &size);

            // Read array elements from user
            printf("Enter array elements:\n");
            for (iterate = 0; iterate < size; iterate++)
            {
                scanf("%d", &arr[iterate]);
            }

            for (iterate = 0; iterate < size; iterate++)
            {
                printf("Value: %d\n", *(ptr + iterate)); // Pointer arithmetic
            }
            break;
        }
        case 2:
        {
            int arr[3] = {10, 20, 30};
            int *ptr = arr; // Pointer points to first element of array

            for (iterate = 0; iterate < 3; iterate++)
            {
                printf("Value: %d\n", *(ptr + iterate)); // Pointer arithmetic
            }
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
