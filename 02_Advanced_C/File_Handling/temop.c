/*
#include <stdio.h>

int main() {

    FILE *fp;
    int numbers[5] = {10, 20, 30, 40, 50};
    int read_numbers[5];

    // Write
    fp = fopen("data.xlsx", "wb");
    size_t written = fwrite(numbers, sizeof(int), 5, fp);
    printf("Written: %zu integers\n", written);
    fclose(fp);

    // Read
    fp = fopen("data.xlsx", "rb");
    fread(read_numbers, sizeof(int), 5, fp);
    fclose(fp);

    // Print
    printf("Data in file: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", read_numbers[i]);
    }
    printf("\n");
    return 0;
}*/
/*
#include <stdio.h>

int main() {

    FILE *fp = fopen("students.csv", "w");

    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Header row (Excel column names)
    fprintf(fp, "Name,Age,Marks\n");

    // Data rows
    fprintf(fp, "Gajanan,22,89.5\n");
    fprintf(fp, "Rahul,21,78.0\n");
    fprintf(fp, "Sneha,23,92.3\n");

    fclose(fp);

    printf("Data written to students.csv\n");

    return 0;
}
*/


#include <stdio.h>

int main() {

    FILE *fp = fopen("students.csv", "a");  // append mode

    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    char name[50];
    int age;
    float marks;

    printf("Enter Name: ");
    scanf(" %[^\n]", name);   // allows spaces in name

    printf("Enter Age: ");
    scanf("%d", &age);

    printf("Enter Marks: ");
    scanf("%f", &marks);

    fprintf(fp, "%s,%d,%.2f\n", name, age, marks);

    fclose(fp);

    printf("Data saved to Excel file successfully!\n");

    return 0;
}
