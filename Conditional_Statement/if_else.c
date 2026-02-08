/*
 Program: If-Else Example
 Description: Checks whether a number is even or odd
 Author: Gajanan Lakade
*/

// Header file for input and output functions
#include <stdio.h>

// Main function: entry point of the program
int main(void) 
{
    // Variable declarations
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    // The modulus operator % is used to find the remainder after dividing two numbers
    if (num % 2 == 0)// Checks if the number is divisible by 2
    {
        printf("Number is Even\n");
    } else 
    {
        printf("Number is Odd\n");
    }

    return 0;// End of program
}

