#include <stdio.h>
#include <stdlib.h>

void numero();

int main()
{
int a=0, b=0;
    printf ("Ingrese el primer valor :\t");
    scanf ("%d",&a);
    printf ("Ingrese el segundo valor :\t");
    scanf ("%d",&b);
    system ("cls");
    numero(a,b);
    return 0;
}
void numero(int a, int b){
    printf ("Los valores ingresados fueron:\n%d \n%d", a, b);
}
