#include <stdio.h>
void demo () ;
void main ()
{ int x=1,y=2;
printf("\navant d’appeler demo(),x=%d et y=%d",x,y);
demo() ;
printf("\naprès avoir appelé demo(),x=%d et y=%d",x,y);
}
void demo()
{
int x=88,y=99;
printf("\ndans la fonction demo(),x=%d et y=%d",x,y);
}


//premier printf x=1,y=2
//deuxieme printf (dans fonction demo)x=88,y=99
//troisieme printf (retour dans main) x=1,y=2
