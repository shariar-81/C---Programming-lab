#include <stdio.h>

 int main()

{
    long long X;

    scanf("%lld", &X);

    while (X >= 10)
    {
        X /= 10;
    }
    if (X % 2 == 0)
    {
        printf("EVEN\n");
    }
    else
    {
        printf("ODD\n");
    }

    return 0;
}
