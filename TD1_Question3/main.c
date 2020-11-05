#include <stdio.h>
#include <stdlib.h>

int fonction(int x, int y);
float divi(int a,int b);
float afficheMD(int a, int b, int x, int y);
float Somme(float c, float d, float e, float f, float g);
float afficheS(float c, float d, float e, float f, float g);
int cube(int h);
int afficheCube(int h);

int fonction(int x, int y)
{
    return x*y;
}

float divi(int a,int b)
{
    if(b!=0)
    {
        return ((float)a/(float)b);
    }
    else
    {
        printf("Division par 0");
        return 0;
    }
}

float afficheMD(int a, int b, int x, int y)
{
    printf("Multi : %d\n", fonction(x, y));
    printf("Divi : %f\n", divi(a, b));
    return 0;
}
float Somme(float c, float d, float e, float f, float g)
{
    return ((c+d+e+f+g)/5);

}
float afficheS(float c, float d, float e, float f, float g)
{
    printf("Somme : %f\n",Somme(c,d,e,f,g));
}

int cube(int h)
{
    if(h==0)
    {
        return 1;
    }
    else if(h==1)
    {
        return 3;
    }
    else
    {
        return(3*cube(h-1));
    }
}
int afficheCube(int h)
{
    printf("Cube : %d",cube(h));
    return 0;
}



int main()
{
    int a=0,b=0;
    int x,y;
    float c, d, e, f, g;
    int h;
    printf("multi 1:");
    scanf("%d",&x);
    printf("multi 2:");
    scanf("%d",&y);
    printf("divi haut:");
    scanf("%d",&a);
    printf("divi bas:");
    scanf("%d",&b);
    printf("c");
    scanf("%f",&c);
    printf("d");
    scanf("%f",&d);
    printf("e");
    scanf("%f",&e);
    printf("f");
    scanf("%f",&f);
    printf("g");
    scanf("%f",&g);
    printf("h");
    scanf("%d",&h);

    afficheMD(a,b,x,y);
    afficheS(c,d,e,f,g);
    afficheCube(h);

    return 0;
}

