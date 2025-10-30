/*
Name: john paul murithi
Reg No:CT101/G/26544+/25
Description:hotel_revenue_management_1D
#include <stdio.h>
*/
#include <stdio.h>
int main() {
    float revenue[7];
    float total = 0.0, average;
    int i;

    printf("Enter the revenue for each day of the week:\n");

    // Input daily revenues
    for (i = 0; i < 7; i++) {
        printf("Day %d: ", i + 1);
        scanf("%f", &revenue[i]);
        total += revenue[i]; // Add to total
    }

    // Calculate average
    average = total / 7;

    // Display results
    printf("\n--- Weekly Revenue Report ---\n");
    printf("Total weekly revenue: Ksh %.2f\n", total);
    printf("Average daily revenue: Ksh %.2f\n", average);

    return 0;
}