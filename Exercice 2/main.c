#include <stdio.h>
#include <stdlib.h>

int puiss(int x, int y);

int puiss(int x, int y)
{
    int i,puissa=1;
    printf("x=");
    scanf("%d",&x);
    printf("y=");
    scanf("%d",&y);
    for(i=0;i<y;i++)
    {
        puissa*=x;
    }
    return puissa;
}
int main()
{
    int result,x,y;
    result=puiss(x,y);
    printf("puissance de x=%d",result);
    return 0;
}
