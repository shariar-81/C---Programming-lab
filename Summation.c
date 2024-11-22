#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    long long sum = 0;

    scanf("%d", &N);

    for (int i = 0; i < N; i++)

    {
        int num;
        scanf("%d", &num);

        sum += num;
    }

    printf("%lld\n", llabs(sum));

    return 0;
}
