//Suma de 8 Números 
//Ordòñez Güemes Ana Gabriela
//Ejercicio 5

#include <conio.h>
#include <stdio.h>

main(){
int Dato1,Dato2,Dato3,Dato4,Dato5,Dato6,Dato7,Dato8,Res;

      printf("Ingrese el primer dato: ");
    scanf("%i",&Dato1);
      printf("Ingrese el segundo dato: ");
    scanf("%i",&Dato2);
      printf("Ingrese el tercer dato: ");
    scanf("%i",&Dato3);
      printf("Ingrese el cuarto dato: ");
    scanf("%i",&Dato4);
      printf("Ingrese el quinto dato: ");
    scanf("%i",&Dato5);
      printf("Ingrese el sexto dato: ");
    scanf("%i",&Dato6);
      printf("Ingrese el septimo dato: ");
    scanf("%i",&Dato7);
      printf("Ingrese el octavo dato: ");
    scanf("%i",&Dato8);
    
    Res=Dato1+Dato2+Dato3+Dato4+Dato5+Dato6+Dato7+Dato8;
    printf("El resultado es %i\n\n",Res);
    getch();
return 0;
}
