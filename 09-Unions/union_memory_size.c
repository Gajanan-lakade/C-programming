/*
 Program: Size of Union Demonstration
 Description: This program demonstrates how the size of a union is determined in C.
              It prints the size of basic data types (int, float, char)
              and shows that the size of a union is equal to the size of
              its largest member.
 Author: Gajanan Bharat Lakade
*/

#include <stdio.h> // Standard input-output header file

// Define a union named Data
union Data
{
    int Integer;
    float Float;
    char Character;
};

// Main function: entry point of the program
int main(void)
{
    union Data size; // Declare a union variable

    // Display size of basic data types
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Size of float: %lu bytes\n", sizeof(float));
    printf("Size of char: %lu bytes\n", sizeof(char));

    // Size of union equals the size of its largest member
    // because all members share the same memory location
    printf("Size of union: %lu bytes\n", sizeof(size));

    return 0; // End of program
}
