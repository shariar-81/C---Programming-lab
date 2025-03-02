#include <stdio.h>

 void sum(int , int);
 int main() {
     int a, b;

     printf("Enter two number for sum: ");
     scanf("%d %d", &a, &b);

     sum(a, b);

     return 0;
 }

 void sum(int a, int b) {

      printf("The sum of two number is: %d\n", a+b);

 }


