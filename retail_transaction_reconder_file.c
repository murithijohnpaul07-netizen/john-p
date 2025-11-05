#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    float amount, total = 0.0;

    // (i) Open the file for reading
    file = fopen("sales.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open file 'sales.txt'.\n");
        return 1;
    }

    // (ii) Read all transactions and calculate total sales
    while (fscanf(file, "%f", &amount) == 1) {
        total += amount;
    }

    // (iii) Display total sales for the day
    printf("Total Sales for the Day: $%.2f\n", total);

    // Ensure the file is properly closed
    fclose(file);

    return 0;
}

