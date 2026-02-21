/*
 Program: For Loop Example
 Description: Prints numbers from 1 to 10 using for loop
 Author: Gajanan Lakade
*/

// Header file for input and output functions
#include <stdio.h>

// Main function: entry point of the program
int main(void) 
{
    // Variable declarations
    int iterate;
    int num = 1;

    printf("Numbers from 1 to num:\n");

    for (iterate = 10; iterate >= num; iterate--) // The for loop executes a block of code repeatedly as long as the given condition is true once the condition is failed it stop 
    {
        printf("%d ", iterate);
    }

    printf("\n"); //  "\n" to print new line 
    return 0; // End of program
}

