/*
 Program: String Example
 Description: Demonstrates declaration, input,
              and output of strings in C
 Author: Gajanan Lakade
*/

// Header file for standard input and output functions
#include <stdio.h>

// Main function: program execution starts here
int main(void)
{
    // Declare a character array to store the string (name)
    // Maximum length allowed is 49 characters (+1 for null character)
    char name[50];

    // Variable used to control program repetition
    char choice;

    // do-while loop allows the program to execute at least once
    // and repeat based on user input
    do
    {
        // Prompt the user to enter a string
        printf("Enter your name: ");

        // Read string input from the user
        // scanf reads input until a whitespace is encountered
        scanf("%s", name);

        // Display the entered string
        printf("Entered name: %s\n", name);

        // Ask the user whether to continue or terminate the program
        printf("\nDo you want to continue (y/n): ");
        scanf(" %c", &choice);

    } while(choice == 'Y' || choice == 'y'); // Loop continues for Y or y

    
    return 0;// End of program
}
