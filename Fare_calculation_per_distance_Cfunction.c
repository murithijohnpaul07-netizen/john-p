/*
Name:John paul murithi
Reg No:CT101/G/26544/25
Description:Fare_calculation/distance
*/

#include <stdio.h>

int calculateFare(double distance) {
    int fare_rate = 50; // KSh. 50 per km
    return (int)(distance * fare_rate);
}

int main() {
    double distance;
    printf("Enter distance traveled (km): ");
    scanf("%lf", &distance);

    int total_fare = calculateFare(distance);
    printf("Total fare: KSh. %d\n", total_fare);

    return 0;
}