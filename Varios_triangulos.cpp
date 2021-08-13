//Varios Tipos de Triangulos
//Ordòñez Güemes Ana Gabriela
//Versiòn 1.0

#include <stdio.h>
int main()
{
    int x,y,z;
    char resp;
    do
    {
        printf ("Escribe el primer lado");
        scanf("%i",& x);
        printf ("\nEscribe el segundo lado");
        scanf("%i",& y);
        printf ("\nEscribe el tercer lado");
        scanf("%i",& z);
        printf("\n\n\n");

        if ((x+y>z)&&(x+z>y)&&(y+z)>x)
            {
                if (x==y && x==z) 
                    printf ("Equilatero");
                else
                    if (x==y || x==z || y==z) 
                        printf ("Isosceles");
                    else
                        printf("Escaleno");
            }
        else
            printf("Error"); 
            printf("\n Quieres Intentarlo de Nuevo (S/N) )");
            scanf("%c",& resp);
    }
    while (resp!='N' && resp!='n');
}
