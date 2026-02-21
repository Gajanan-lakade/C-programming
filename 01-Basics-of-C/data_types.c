/*
 Program: C program to store and display values using different data types
 Description: Demonstrates the use of basic C data types such as int, float,
              char, and double.
 Author: Gajanan Bharat Lakade
*/

// Header file for input and output functions
#include <stdio.h>

// Main function: entry point of the program
int main(void) 
{
    // Variable declarations
    int age = 25;                 // Stores whole numbers (integers)
    float temperature = 36.5;     // Stores decimal numbers (single precision)
    char grade = 'A';             // Stores a single character
    double distance = 12345.6789; // Stores decimal numbers (double precision, more accurate than float)

    // Displaying the values stored in variables
    printf("Age: %d\n", age);
    printf("Temperature: %.1f\n", temperature);
    printf("Grade: %c\n", grade);
    printf("Distance: %.4lf\n", distance);

    return 0; // End of program
}
