//Suma de todo el Decremento de Números
//Ordòñez Güemes Ana Gabriela
//Versiòn 1.0

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
          
