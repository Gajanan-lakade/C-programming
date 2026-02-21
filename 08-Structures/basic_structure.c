/*
 Program: Basic Structure Example
 Description: Demonstrates structure declaration and usage
 Author: Gajanan Lakade
*/

#include <stdio.h>

// Structure declaration
struct Student
{
    int rollNumber;
    char grade;
    float marks;
};

// Header file for input and output functions
#include <stdio.h>

// Main function: entry point of the program
int main(void)
{
    // Structure variable declaration
    struct Student s1;

    // Assigning values
    s1.rollNumber = 101;
    s1.grade = 'A';
    s1.marks = 89.5;

    // Printing values
    printf("Roll Number: %d\n", s1.rollNumber);
    printf("Grade: %c\n", s1.grade);
    printf("Marks: %.2f\n", s1.marks);

    return 0; // End of program
}
