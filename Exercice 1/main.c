#include <stdio.h>
#include <stdlib.h>

int absolue(int a);

int absolue(int a)
{
    printf("Entrez une valeur");
    scanf("%d",&a);
    if(a<0) a=-a;
    printf("%d",a);
    return;
}

int main()
{
    int a;
    absolue(a);
}


