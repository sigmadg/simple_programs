//Suma de todo el Decremento de N�meros
//Ord��ez G�emes Ana Gabriela
//Versi�n 1.0

#include<stdio.h>
int main()
{
    int x,sum=0 ,i;
    do
    {
        printf ("Ingres un Valor:   ");
        scanf("%d",&x);
        sum+=x;
    }
    while(x!=0);
    {
        printf("La suma Total es: ");
        printf("%d\n",sum);
        return 0;
    }
}
          
