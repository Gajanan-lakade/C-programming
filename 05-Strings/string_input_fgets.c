/*
 Program: String Input using fgets
 Description: Reads a full line including spaces
 Author: Gajanan Lakade
*/

// Header file for standard input and output functions
#include <stdio.h>

// Main function: program execution starts here
int main(void)
{

    // Variable used to control program repetition
    char choice;

    // do-while loop allows the program to execute at least once
    // and repeat based on user input
    do
    {
       char name[50];

        printf("Enter your full name: ");

        // fgets reads entire line including spaces
        fgets(name, sizeof(name), stdin);

        printf("Hello, %s", name);  

        // Ask the user whether to continue or terminate the program
        printf("\nDo you want to continue (y/n): ");
        scanf(" %c", &choice);

    } while(choice == 'Y' || choice == 'y'); // Loop continues for Y or y

    
    return 0;// End of program
}
