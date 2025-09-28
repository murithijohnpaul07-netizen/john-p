/*
Name:John Paul murithi 
Reg No:CT101/G/26544/25
Date:28/09/2025
Description:Water_bill_calculator
*/

#include <stdio.h>
int main() {
    int units;
    float bill = 0.0;

    // Prompt user to enter water units consumed
    printf("Enter water units consumed: ");
    scanf("%d", &units);

    // Calculate bill using if-else
    if (units <= 30) {bill = units * 20;}else 
    if (units <= 60) {bill = units * 25;}else
    {bill = units * 30;}

    // Display total bill
    printf("Total water bill: %.2f KES\n", bill);

    return 0;
}