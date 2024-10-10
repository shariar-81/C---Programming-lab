#include<stdio.h>
 int main ()

 {
     int score;
     printf("Enter the score: ");
     scanf("%d",&score);

     if (score>=90)
     {
         printf("Grade: A+",score);
     }
     else if (score>=80)
     {
         printf("Grade: A",score);
     }
     else if (score>=70)
     {
         printf("Grade: A-",score);
     }
     else if (score>=60)
     {
         printf("Grade: B",score);
     }
     else if (score>=50)
     {
         printf("Grade: C",score);
     }
     else if (score>=40)
     {
         printf("Grade: D",score);
     }
     else
     {
         printf ("Grade: F",score);
     }

     return 0;
 }
