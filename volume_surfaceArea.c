/*
Name  :John paul murithi
Reg No:CT101/G/26544/25
Date  :21/09/2025
desciption:Volume_surfaceArea_calculation
*/

#include<stdio.h> 
#define PI3.141593654
int main ()
{
	float r, h, Volume, Surface area;

// input: radius & height
	printf("Enter the radius of the cylinder:");
	scanf("%f", &r);
	
	printf("Enter the height of the cylinder:");
	scanf("%f", &h);

//formulas; volume & surface area	
	Volume=(PI*r*r*h);
	Surface area=(2*PI*r*r)+(2*PI*r*h);
	
//output result,		
	printf("Volume of the cylinder:%2f\n",volume);
	printf("Surface area of the cylinder:%2f\n",Surface area);
	
	return 0;

}

