/***** Ana Gabriela Ordo�ez G�emes */
/***** Compara 2 n�meros */

#include <stdio.h>
int main()
{
    
    double x,y;
    printf("Escribe el primer numero \n");
    scanf("%lf",& x);
    printf("Escribe el segundo numero \n");
    scanf("%lf",& y);

    if (x>y) 
        printf("El mayor es %f \n",x);
    else if (y>x) 
        printf("El mayor es %f \n",y);
    else
    printf("Son iguales");
}




