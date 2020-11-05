#include <stdio.h>
#include <stdlib.h>

void affiche(int *t);

void affiche(int *t)
{
    int i;
    for(i=0;i<10;i++)
    {
        printf("%d : %d\n",i,t[i]);
    }
    return ;
}
int main()
{
    int tab[10]={1,2,4,8,16,32,64,128,256,512} ;
    affiche(tab);
    return 0;
}
