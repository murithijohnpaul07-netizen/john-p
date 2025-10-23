/*
Name:John paul murithi
Reg No:CT101/G/26544/25
Description:Electricalbill_calculation_Cfunction
*/

#include <stdio.h>

int calculateElectricBill(int units) {
    int total_cost = 0;

    if (units <= 100) {
        total_cost = units * 10;
    } else if (units <= 200) {
        total_cost = (100 * 10) + ((units - 100) * 15);
    } else {
        total_cost = (100 * 10) + (100 * 15) + ((units - 200) * 20);
    }

    return total_cost;
}

int main() {
    int units;
    printf("Enter units consumed: ");
    scanf("%d", &units);

    int bill = calculateElectricBill(units);
    printf("Total bill: KSh. %d\n", bill);

    return 0;
}
