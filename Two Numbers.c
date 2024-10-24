#include <stdio.h>
#include <math.h>

 int main()

{
    double A, B;

    scanf("%lf %lf", &A, &B);

    double result = A / B;

    printf("floor %.0lf / %.0lf = %.0lf\n", A, B, floor(result));
    printf("ceil %.0lf / %.0lf = %.0lf\n", A, B, ceil(result));
    printf("round %.0lf / %.0lf = %.0lf\n", A, B, round(result));

    return 0;
}

