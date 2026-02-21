/*
 Program: Basic Array Example
 Description: Demonstrates declaration, initialization,
              and access of array elements using switch-case
 Author: Gajanan Lakade
*/

// Header file for input and output functions
#include <stdio.h>

// Main function: entry point of the program
int main(void) 
{
    // Variable declarations
    // iterate : used as loop counter
    // size    : stores size of array for user input
    // option  : stores user choice for method selection
    int iterate, size, option;

    // choice variable is used to continue or terminate the program
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
        switch(option)
        {
            // Case 1: Default array initialization
            case 1: 
            {
                // Declare and initialize array with fixed values
                int numbers[] = {10, 20, 30, 40, 50};

                // Display array elements
                printf("\nArray elements:\n");
                for (iterate = 0; iterate < 5; iterate++)
                {
                    // Print index and value of each array element
                    printf("numbers[%d] = %d\n", iterate, numbers[iterate]);
                }
                break;
            }

            // Case 2: User-defined array input
            case 2: 
            {
                // Ask user for size of array
                printf("\nEnter size of array: ");
                scanf("%d", &size);

                // Declare array with user-defined size
                int numbers[size];

                // Read array elements from user
                printf("Enter array elements:\n");
                for (iterate = 0; iterate < size; iterate++)
                {
                    scanf("%d", &numbers[iterate]);
                }

                // Display array elements
                printf("\nArray elements:\n");
                for (iterate = 0; iterate < size; iterate++)
                {
                    printf("numbers[%d] = %d\n", iterate, numbers[iterate]);
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

    } while(choice == 'Y' || choice == 'y'); // Loop repeats if user enters Y or y
    
    return 0;// End of program
}
