/*
 Program: Swap Two Numbers Using Call by Reference (Pointers)
 Description:his program demonstrates call by reference in C using pointers.
			 It accepts two integer values from the user, swaps them using
			 a separate function, and displays the result. The user can
			 repeat the process multiple times.
 Author: Gajanan Bharat Lakade
*/

// Header file for standard input and output functions
#include <stdio.h>

// Function prototype declaration
// This function swaps two integers using pointers (call by reference)
void swap(int *, int *);

// Main function: Entry point of the program
int main(void)
{
	// Variable declarations
	int num1, num2;
	char choice = 'y'; // Controls loop execution

	// Loop allows user to repeat the swapping process
	do
	{
		// Accept first number from user
		printf("Enter num1: ");
		scanf("%d", &num1);

		// Accept second number from user
		printf("Enter num2: ");
		scanf("%d", &num2);

		// Display values before swapping
		printf("Before swap: num1 = %d  num2 = %d\n", num1, num2);

		// Function call: passing addresses of num1 and num2
		// This allows the swap function to modify original values
		swap(&num1, &num2);

		// Display values after swapping
		printf("After swap: num1 = %d  num2 = %d\n", num1, num2);

		// Ask user whether to continue
		printf("Do you want to continue (y/n): ");
		scanf(" %c", &choice); // Space before %c ignores leftover newline

	} while (choice == 'y'); // Repeat if user enters 'y'

	return 0; // End of program
}

// Function Definition
// Swaps the values of two integers using pointer dereferencing
void swap(int *num1, int *num2)
{
	int temp; // Temporary variable for swapping

	temp = *num1;  // Store value at num1 address in temp
	*num1 = *num2; // Copy value of num2 into num1
	*num2 = temp;  // Copy temp value into num2
}
