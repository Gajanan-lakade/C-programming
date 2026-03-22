/*
    File: random_access.c
    Description: Demonstrates fseek and ftell
*/

#include <stdio.h>

int main() {

    FILE *fp;
    fp = fopen("data.txt", "r");

    if (fp == NULL) {
        printf("File not found\n");
        return 1;
    }

    fseek(fp, 5, SEEK_SET);

    printf("Current position: %ld\n", ftell(fp));

    char ch = fgetc(fp);
    printf("Character at position: %c\n", ch);

    fclose(fp);

    return 0;
}
