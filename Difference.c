#include<stdio.h>
   int main ()

{
    long long a,b,c,d,e;

    scanf("%lld %lld %lld %lld",&a,&b,&c,&d);

    e=(a*b)-(c*d);

    printf("Difference = %lld",e);

    return 0;

}
