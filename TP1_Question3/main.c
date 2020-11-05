#include <stdio.h>
#include <stdlib.h>

float max(float* tab);
float min(float *tab);

float max(float* tab)
{
    int i;
    float max=tab[0];
    for(i=0;i<8;i++)
    {
        if(tab[i]>max)max=tab[i];
    }
    return max;
}

float min(float *tab)
{
    int i;
    float min=tab[0];
    for(i=0;i<8;i++)
    {
        if(tab[i]<min)min=tab[i];
    }
    return min;
}
int main()
{
    float liste[8]={1.6,-6.9,9.67,5.90,345,-23.6,78,34.6,} ;
    printf("la valeur min est : %f\n",min(liste));
    printf("la valeur max est : %f",max(liste));
    return 0;
}
