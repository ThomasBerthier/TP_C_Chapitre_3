#include <stdio.h>
#include <stdlib.h>

int pair(int x);
int Multiple3(int x);

int pair(int x)
{
    int BoolPair;
    if(x%2==0)BoolPair=1;
    else if(x%2!=0)BoolPair=0;
    return BoolPair;
}

int Multiple3(int x)
{
    int BoolMult3;
    if(x%3==0)BoolMult3=1;
    else if(x%3!=0);
    return BoolMult3;
}


int main()
{
    int x;
    printf("Entrez un nombre : ");
    scanf("%d",&x);
    if((pair(x))==1)printf("%d est pair\n",x);
    else if((pair(x))==0)printf("%d est impair\n",x);
    else printf("ERREUR\n");
    if((Multiple3(x))==1)printf("%d est multiple de 3\n",x);
    else if((Multiple3(x))==0)printf("%d n'est pas un multiple de 3\n",x);
    else printf("ERREUR");
    if(((Multiple3(x))==1)&&(pair(x)==0))printf("%d n'est pas un multiple de 6",x);
    else if(((Multiple3(x))==1)&&(pair(x)==1))printf("%d est un multiple de 6",x);


    return 0;
}
