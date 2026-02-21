/*
    File: append_file.c
    Description: Appending data to an existing file using C
*/

#include <stdio.h>   // Required for file handling functions

// Main function: entry point of the program
int main(void)
{
    FILE *fp;   // File pointer declaration

    // Open file in append mode ("a")
    // If file does not exist, it will be created
    // If it exists, new data will be added at the end
    fp = fopen("write_data.txt", "a");

    // Check if file opened successfully
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;   // Exit program with error code
    }

    // Write new content at the end of the file
    // '\n' moves the text to a new line
    fprintf(fp, "Appending new line to file.\n");

    // Close the file to save changes and free memory
    fclose(fp);

    // Confirmation message on screen
    printf("Data appended successfully.\n");

    return 0;   // Successful execution
}
