#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inverse(char *ch);

void inverse(char *ch)
{
    strrev(ch);

    return;
}

int main()
{
    char ch[100];
    printf("Entrez votre chaine : ");
    gets(ch);
    inverse(ch);
    printf("%s", ch);

    return 0;
}
