#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *transfo(char *chaine);

int *transfo(char *chaine)
{
    int nb=0;
    for(int i=0;i<=strlen(chaine);i++)
    {
        if((chaine[i]>=97) && (chaine[i]<=122))
        {
            chaine[i]=chaine[i]-32;
            nb++;
        }
    }
    return nb;
}

int main()
{
    char chaine[50];
    printf("Entrez la chaine\n");
    gets(chaine);

    int nb=transfo(chaine);
    printf("Chaine sans minuscule : %s\nNombres de caracteres changes : %d",chaine,nb);
}
