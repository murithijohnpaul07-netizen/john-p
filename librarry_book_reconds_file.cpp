#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char title[200];
    char choice;

    file = fopen("borrowed_books.txt", "a"); // Open in append mode
    if (file == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    do {
        printf("Enter the title of the borrowed book: ");
        fflush(stdin); // Clear input buffer
        fgets(title, sizeof(title), stdin);

        // Remove newline character from fgets input
        int i = 0;
        while (title[i] != '\0') {
            if (title[i] == '\n') {
                title[i] = '\0';
                break;
            }
            i++;
        }

        // Write title to file
        fprintf(file, "%s\n", title);
        printf("? Book title '%s' stored successfully.\n", title);

        printf("Do you want to add another title? (y/n): ");
        scanf(" %c", &choice);
        getchar(); // consume newline after choice
    } while (choice == 'y' || choice == 'Y');

    fclose(file);
    printf("\nAll entries saved in borrowed_books.txt\n");

    return 0;
}
