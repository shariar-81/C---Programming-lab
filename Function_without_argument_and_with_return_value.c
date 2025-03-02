#include <stdio.h>

 float square();
 int main() {
     printf("\n Going to calculate a area of the square: ");

     float area = square();

     printf(" The area of the square is: %.2f\n", area);
     return 0;

 }

float square() {
    float a;

    printf("\n\n Enter the length of the side in meters: ");
    scanf("%f", &a);

    return a*a;

}

