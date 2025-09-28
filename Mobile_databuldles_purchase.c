/*
Name:John Paul murithi 
Reg No:CT101/G/26544/25
Date:28/09/2025
Description: mobile_databuldle_purchase
*/

#include <stdio.h>
int main() {
    int choice;

    // Display menu
    printf("Mobile Data Bundle Purchase\n");
    printf(" 1. 100 MB @ 50 KES\n");
    printf(" 2. 500 MB @ 200 KES\n");
    printf(" 3. 1 GB   @ 350 KES\n");
    printf(" 4. 2 GB   @ 600 KES\n");

    // Ask for user's favorite choice
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    // Process choice using switch
    switch (choice) {
        case 1: printf("You selected 100MB. Cost = 50 KES\n"); break;
        case 2: printf("You selected 500MB. Cost = 200 KES\n"); break;
        case 3: printf("You selected 1GB. Cost = 350 KES\n"); break;
        case 4: printf("You selected 2GB. Cost = 600 KES\n"); break;
        default: printf("Invalid choice\n");}
        
        return 0;
   }