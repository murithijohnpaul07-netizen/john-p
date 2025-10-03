/*
Name  :John paul murithi
Reg No:CT101/G/26544/25
Date  :12/09/2025
desription:Personal_details
*/

#include<stdio.h>
int main()
{
   float height;
   double bank_balance;
   long long phone_number;

        printf("Enter your height:\n");
        scanf("%f", &height);

        printf("Enter your bank_balance:\n");
        scanf("%lf", &bank_balance);

        printf("Enter your phone_number:\n");
        scanf("%lld", &phone_number);

        printf("your height:%.2f\n",height);
        printf("your bank_balance:%.2f\n",bank_balance);
        printf("your phone_number:%lld\n",phone_number);
return 0;
}


