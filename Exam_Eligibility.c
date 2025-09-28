/*
Name:John Paul murithi 
Reg No:CT101/G/26544/25
Date:28/09/2025
Description:Exam_Eligibility
*/

#include <stdio.h>
int main()
{
   float attendance;
   float average_marks;
   
   //input attendance & average_marks
   printf("enter your attendance percentage:");
   scanf("%f", &attendance);
    
   printf("enter your average marks:"); 
   scanf("%f", &average_marks);
   
   //analysing eligibility 
   if(attendance>=75 && average_marks>=40)
   {printf("You are eligible for final_exam.\n");} else
   {printf("You are Not_eligible for final_exam.\n");}
    return 0;
    }