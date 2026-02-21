/*
 Program: Basic Function Example
 Description: Demonstrates defining and calling a simple function
 Author: Gajanan Bharat Lakade
*/

// Header file for input and output functions
#include <stdio.h>

// Function declaration (prototype)
void greet(void);

// Main function: entry point of the program
int main(void) 
{
    greet();  // Function call
    return 0; // End of program
}

// Function definition
void greet(void) 
{
    printf("Hello! Welcome to C programming.\n");
}
