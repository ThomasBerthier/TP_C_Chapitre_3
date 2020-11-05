#include <stdio.h>
#include <stdlib.h>

int puiss(int x,int y);

int puiss(int x,int y)
{
    return pow(x,y);
}

int main()
{
    int x,y;
    printf("entrez un nombre : ");
    scanf("%d",&x);
    printf("entrez un exposant : ");
    scanf("%d",&y);
    printf("%d",puiss(x,y));

    return 0;
}
