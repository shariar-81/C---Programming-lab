#include <stdio.h>
#include <ctype.h>

int countVowels(const char *str) {
    int count = 0;
    while (*str) {
        if (strchr("aeiouAEIOU", *str)) {
            count++;
        }
        str++;
    }
    return count;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int vowels = countVowels(str);

    printf("Number of vowels in the string: %d\n", vowels);

    return 0;
}

