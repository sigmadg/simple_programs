//Serie de Numeros y el mayor
//Ord��ez G�emes Ana Gabriela
//Versi�n 1.0

#include <stdio.h>
int main()
{
    int i,mayor=0;
    do
    {
        printf("\n Numero: ");
        scanf("%i",&i);

        if (mayor<i) 
            mayor=i;
    }
    while(i!=0);
    printf("\n El mayor es %i",mayor);
}
