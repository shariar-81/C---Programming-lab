#include<stdio.h>
 int main ()

 {
     int marks;
     printf("Enter your marks: ");
     scanf("%d",&marks);

     if (marks >= 80 && marks <= 100)
     {
         printf("Congrats ! you scored grade: A+", marks);
     }
     else if (marks >= 75 && marks <= 80)
     {
         printf("Congrats ! you scored grade: A", marks);
     }
     else if (marks >= 70 && marks <= 75)
     {
         printf("Congrats ! you scored grade: A-", marks);
     }
     else if (marks >= 65 && marks <= 70)
     {
         printf("Congrats ! you scored grade: B+", marks);
     }
     else if (marks >= 60 && marks <= 65)
     {
         printf("Congrats ! you scored grade: B", marks);
     }
     else if (marks >= 55 && marks <= 60)
     {
         printf("Congrats ! you scored grade: B-", marks);
     }
     else if (marks >= 50 && marks <= 55)
     {
         printf("Congrats ! you scored grade: C+", marks);
     }
     else if (marks >= 45 && marks <= 50)
     {
         printf("Congrats ! you scored grade: C" ,marks);
     }
     else if (marks >= 40 && marks <= 45)
     {
         printf("Congrats ! you scored grade: D", marks);
     }
     else
     {
         printf("Sorry you are fail: Try your luck next time!");
     }

     return 0;
 }
