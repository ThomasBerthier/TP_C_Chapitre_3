#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *mot_de_passe(char *pass);

char *mot_de_passe(char *pass)
{
    int i=0;
    printf("Entrez votre chaine :\n");

    do{
        pass[i]=getch();
        if(pass[i]!='\r')
        {
            printf("*");
        }
            i++;

    }while(pass[i-1]!='\r');



    pass[i-1]='\0';
    getch();

    return pass;
}

int main()
{
    char pass[100];

    mot_de_passe(pass);

    printf("\n%s",pass);
    return 0;
}
