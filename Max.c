#include <stdio.h>

 int main() {

     int n, max, i, x;

     scanf("%d", &n);
     scanf("%d", &max);

     for (i = 1; i < n; i++)
     {
         scanf("%d", &x);

         if (x > max)
         {
             max = x;
         }
     }
     printf("%d\n", max);

     return 0;
 }
