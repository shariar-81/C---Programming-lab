#include <stdio.h>

int main() {
    long long a, b;
    char S;

    scanf("%lld %c %lld", &a, &S, &b);

    switch (S) {
        case '+':
            printf("%lld\n", a + b);
            break;
        case '-':
            printf("%lld\n", a - b);
            break;
        case '*':
            printf("%lld\n", a * b);
            break;
        case '/':
            if (b != 0) {
                printf("%lld\n", a / b);
            } else {
                printf("Error: Division By Zero.\n");
            }
            break;
        default:
            printf("Error: Invalid operator\n");
            break;
    }

    return 0;
}
