/*
 Program: Else-If Ladder Example
 Description: Displays grade based on marks
 Author: Gajanan Lakade
*/

// Header file for input and output functions
#include <stdio.h>

// Main function: entry point of the program
int main(void) 
{
    // Variable declaration
    int marks;

    // Asking user to enter marks
    printf("Enter marks (0-100): ");
    scanf("%d", &marks);  // Read marks from user

    // Checking marks and printing grade
    if (marks >= 90) 
    {
        printf("Grade: A\n");   // Check wether the marks 90 or above
    } 
    else if (marks >= 75) 
    {
        printf("Grade: B\n");   // Check wether the marks between 75 and 89
    } 
    else if (marks >= 50) 
    {
        printf("Grade: C\n");   // Check wether the marks between 50 and 74
    } 
    else 
    {
        printf("Grade: Fail\n"); // Check wether the marks below 50
    }

    return 0;  // End of program
}


