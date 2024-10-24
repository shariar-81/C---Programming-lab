#include<stdio.h>

 int main()

 {
    long long A, B;

    scanf("%lld %lld", &A, &B);

    int a = A % 10;
    int b = B % 10;

    int sum = a + b;


    printf("%d\n", sum);

    return 0;
}
