#include<stdio.h>

 int main() {
     char a;

     printf("Enter a character: ");
     scanf("%c", &a);

     switch (a) {
     case 'a':
     case 'e':
     case 'i':
     case 'o':
     case 'u':
     case 'A':
     case 'E':
     case 'I':
     case 'O':
     case 'U':
     printf("%c is a Vowel.\n", a);
     break;
    default:
    if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
    {
        printf("%c is a Consonant.\n", a);
    }else{
        printf("%c is not a Alphabet.\n", a);
    }

     }

 return 0;
 }

