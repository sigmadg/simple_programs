//Factorial de Un numero Entero
//Ord��ez G�emes Ana Gabriela
//Verci�n 1.0

#include <stdio.h>
int main()
{ 
    int x;
    double fact=1;
    printf("Escriba el numero: ");
    scanf("%i",&x);

    while(x>1) 
        fact*=x--;
    printf("Factorial =%lf",fact);
}
