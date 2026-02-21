/*
    File: read_file.c
    Description: Reading data from a file using C
*/

#include <stdio.h>   // Required for file handling functions

// Main function: entry point of the program
int main(void)
{
    FILE *fp;     // File pointer to access the file
    char ch;      // Variable to store each character read from file

    // Open the file in read mode ("r")
    // The file must exist, otherwise fopen returns NULL
    fp = fopen("write_data.txt", "r");

    // Check if file was opened successfully
    if (fp == NULL) {
        printf("File not found!\n");
        return 1;   // Exit program with error code
    }

    // Read file character by character until End Of File (EOF)
    while ((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);   // Print each character to the screen
    }

    // Close the file after reading
    fclose(fp);

    return 0;   // Successful execution
}
