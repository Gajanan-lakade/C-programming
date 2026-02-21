/*
 Program: Write a C program to scan a value from the user
 Description: This program demonstrates how to take input from the user
              using the scanf() function in C. It helps understand how
              user-provided values are stored in variables and later
              displayed in the program.
 Author: Gajanan Bharat Lakade
*/

// Header file for input and output functions
#include <stdio.h>

// Main function: execution starts here
int main(void)
{
    int age; // Variable declaration

    printf("Enter your age: ");
    scanf("%d", &age); // scanf() is a predefined function to read input from the user

    printf("Your age is: %d\n", age); // Prints the value entered by the user

    return 0; // End of program
}
