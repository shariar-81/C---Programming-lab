#include <stdio.h>

 int sum(int, int);
 int main() {
     int a, b;

     printf("\n Going to calculate the sum of two number: ");
     printf("\n Enter two number: ");
     scanf("%d %d", &a, &b);

     int result = sum(a, b);

     printf("\n The sum of two number is: %d\n", result);

     return 0;

 }
 int sum(int a, int b) {

     return a+b;
 }

