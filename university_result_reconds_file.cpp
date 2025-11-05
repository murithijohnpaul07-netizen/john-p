#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    char regNo[20];
    float totalMarks;
};

int main() {
    FILE *file;
    struct Student s;
    char choice;

    file = fopen("results.dat", "ab"); // append binary
    if (file == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    do {
        printf("Enter student name: ");
        fflush(stdin);
        fgets(s.name, sizeof(s.name), stdin);
        for (int i = 0; s.name[i] != '\0'; i++)
            if (s.name[i] == '\n') s.name[i] = '\0';

        printf("Enter registration number: ");
        scanf("%s", s.regNo);

        printf("Enter total marks: ");
        scanf("%f", &s.totalMarks);

        fwrite(&s, sizeof(struct Student), 1, file);
        printf("Record saved successfully!\n");

        printf("Add another record? (y/n): ");
        scanf(" %c", &choice);
        getchar();
    } while (choice == 'y' || choice == 'Y');

    fclose(file);
    return 0;
}
