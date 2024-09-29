#include<stdio.h>

 int main()

 {
     float c,f;

     printf("Enter temperature in Celsius: ");
     scanf("%f",&c);

     f= (9.0/5.0 * c )+ 32 ;

     printf("%f Celsius is equal to %f Farhenheit.",c,f);

     return 0;


 }
