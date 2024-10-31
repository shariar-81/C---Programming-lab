#include <stdio.h>

 int main()

{
    char X,x;

    scanf("%c", &X);

   if (X >= 'A' && X <= 'Z')
   {
       x = X + 32;
   }
   else if (X >= 'a' && X <= 'z')
   {
       x = X - 32;
   }
   printf("%c\n", x);

   return 0;

}

