#include <stdio.h>
intmain()

{
    doublex,y,z; 
    //Lectura de datos
    printf("Escribe el primer n�mero");
    scanf("%lf",&x);
    printf("Escribe el segundo n�mero");
    scanf("%lf",&y);
    printf("Escribe el tercer n�mero");
    scanf("%lf",&z);

    if (x>y && x>z) 
    {
    //El mayor es x 
        if (y>z) 
            printf("\t%lf\t%lf\t%lf", x, y, z);
        else
            printf("\t%lf\t%lf\t%lf", x, z, y);}
    else if (y>x && y>z) 
    {
    //El mayor es y 
        if (x>z) 
            printf("\t%lf\t%lf\t%lf", y, x, z);
        else
            printf("\t%lf\t%lf\t%lf", y, z, x);
    }
    else
    {
    //El mayor es z 
        if (x>y) 
            printf("\t%lf\t%lf\t%lf", z, x, y);
        else
             printf("\t%lf\t%lf\t%lf", z, y, x);
    }
}
