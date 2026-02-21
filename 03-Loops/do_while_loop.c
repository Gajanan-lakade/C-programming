/*
 Program: Do While Loop Example
 Description: Prints numbers from 1 to 10 using do-while loop
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

    do 
    {
        printf("%d ", iterate);
        iterate++;
    } while (iterate <= num);// The do-while loop executes a block of code at least once and then repeats as long as the condition is true.

    printf("\n"); //  "\n" to print new line 
    return 0; // End of program
}

