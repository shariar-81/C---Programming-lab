#include <stdio.h>

int main() {
    int N, i = 1;
    long long sum = 0;

    printf("Enter a positive integer N: ");
    scanf("%d", &N);

    if (N < 1) {
        printf("N must be a positive integer.\n");
        return 1;
    }

    while (i <= N) {
        sum += i * i;
        i++;
    }

    printf("The sum of squares from 1 to %d is: %lld\n", N, sum);

    return 0;
}
