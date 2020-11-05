#include <stdio.h>
#include <stdlib.h>

unsigned int factorielle(unsigned int n);

unsigned int factorielle(unsigned int n)
{
    int i;
    int factorielle=1;
    for(i=n;i>0;i--)
    {
        factorielle*=i;
    }
    return factorielle;
}

int main()
{
    unsigned int n;
    printf("n = ");
    scanf("%d",&n);
    printf("la factorielle de %d est %d",n,factorielle(n));

    return 0;
}
