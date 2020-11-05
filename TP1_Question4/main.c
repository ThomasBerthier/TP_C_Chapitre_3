#include <stdio.h>
#include <stdlib.h>

int pgcd(int a, int b);

pgcd(int a, int b)
{

    int t=0;
    while(b!=0)
    {
        t = b;
        b = a%b;
        a = t;
    }
    return a;
}

int main()
{
    int a,b;
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    printf("%d",pgcd(a,b));
    return 0;
}
