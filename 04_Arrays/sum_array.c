/*
 Program: Basic Array Example
 Description: Demonstrates array operations such as
              declaration, initialization, user input,
              and calculation of sum using switch-case
 Author: Gajanan Lakade
*/

// Header file for standard input and output functions
#include <stdio.h>

// Main function: execution of the program starts here
int main(void)
{
    // Variable declarations
    // iterate : loop counter variable
    // size    : stores size of array for user input
    // option  : stores user-selected method
    // sum     : stores sum of array elements
    int iterate, size, option, sum;

    // choice : used to repeat or terminate the program
    char choice;

    // do-while loop to execute the program at least once
    // and repeat based on user choice
    do
    {
        // Display available input methods
        printf("\nMethod one for default input");
        printf("\nMethod two for user input");
        printf("\nSelect the method: ");

        // Read the user's menu selection
        scanf("%d", &option);

        // switch-case to perform operations based on option
        switch(option)
        {
            // Case 1: Use default initialized array
            case 1:
            {
                // Declare and initialize array with fixed values
                int numbers[] = {10, 20, 30, 40, 50};

                // Initialize sum to zero
                sum = 0;

                // Loop to calculate sum of default array elements
                for (iterate = 0; iterate < 5; iterate++)
                {
                    sum += numbers[iterate];
                }

                // Display sum of array elements
                printf("Sum of array elements: %d\n", sum);
                break;
            }

            // Case 2: Take array elements from the user
            case 2:
            {
                // Prompt user to enter size of array
                printf("\nEnter size of array: ");
                scanf("%d", &size);

                // Declare array with user-defined size
                int numbers[size];

                // Initialize sum to zero
                sum = 0;

                // Read array elements from user
                printf("Enter array elements:\n");
                for (iterate = 0; iterate < size; iterate++)
                {
                    scanf("%d", &numbers[iterate]);
                }

                // Loop to calculate sum of user-entered elements
                for (iterate = 0; iterate < size; iterate++)
                {
                    sum += numbers[iterate];
                }

                // Display sum of array elements
                printf("Sum of array elements: %d\n", sum);
                break;
            }

            // Default case: executes when invalid option is selected
            default:
                printf("\nError: Please select correct method");
        }

        // Ask the user whether to continue or exit
        printf("\nDo you want to continue (y/n): ");
        scanf(" %c", &choice);

    } while(choice == 'Y' || choice == 'y'); // Loop continues for Y or y

    // Return 0 indicates successful program termination
    return 0;// End of program
}
