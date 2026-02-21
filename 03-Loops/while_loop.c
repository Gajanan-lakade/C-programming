/*
 Program: While Loop Example
 Description: Prints numbers from 1 to 10 using while loop
 Author: Gajanan Lakade
*/

// Header file for input and output functions
#include <stdio.h>

// Main function: entry point of the program
int main(void) 
{
    // Variable declarations
    int iterate = 1;
    int num = 10;

    printf("Numbers from 1 to num:\n");

    while (iterate <= num) // The while loop executes a block of code repeatedly while the specified condition remains true
    {
        printf("%d ", iterate);
        iterate++;
    }

    printf("\n"); //  "\n" to print new line 
    return 0; // End of program
}

