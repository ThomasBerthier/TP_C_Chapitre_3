#include <stdio.h>
#include <stdlib.h>

int *lire(int *tab);
int indice_min(int *tab, int i1, int i2);
int *trier(int *tab);
void *affiche(int *lire);

int *lire(int *tab)
{
    for(int i=0;i<=19;i++)
    {
        printf("Entrez des valeurs : ");
        scanf("%d",&tab[i]);
    }
    return tab;
}

int indice_min(int *tab, int i1, int i2)
{
    if(tab[i1]<tab[i2])
    {
        return i1;
    }else{
        return i2;
    }
}

int *trier(int *tab)
{

    int i,j,temp;
    for(i=0;i<=19;i++)
    {
        for(j=i+1;j<=19;j++)
        {
            if(indice_min(tab,i,j)==j)
            {
                temp=tab[j];
                tab[j]=tab[i];
                tab[i]=temp;
            }
        }
    }
    return tab;
}
void *affiche(int *tab)
{
    int i;
    for(i=0;i<=19;i++)
    {
        printf("%d\n",tab[i]);
    }
}

int main()
{

    int tab[19];
    lire(tab);
    trier(tab);
    affiche(tab);


}

