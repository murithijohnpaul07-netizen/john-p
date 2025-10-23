/*
Name       :John paul murithi
Reg No     :CT101/G/26544/25
Description:Converstion_of_Temperature
*/

#include <stdio.h>

double convertToCelsius(double Fahrenheit) {
    return (Fahrenheit - 32) * 5.0 / 9.0;
}

int main() {
    double tempF;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%lf", &tempF);

    double tempC = convertToCelsius(tempF);
    printf("Temperature in Celsius: %.2f\n", tempC);

    return 0;
}