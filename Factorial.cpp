//Factorial de Un numero Entero
//Ordòñez Güemes Ana Gabriela
//Verciòn 1.0

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
