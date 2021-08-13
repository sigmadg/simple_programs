/*Se tiene m tiros al blanco con coordenadas (x,y), 
cada tiro propuesto por el usuario. 
Hacer un programa que indique el puntaje total,
si el blanco esta en el centro de las coordenadas XY,
como se muestra en la figura. Los datos que se tienen son*/

// Ana Gabriela Ordoñez Güemes

#include <stdio.h>
#include <conio.h>
#include <math.h>

void funr1(void);
void funr2(void);
void funr3(void);

//resultado
float r;
//contador
int contador;
//acumulador
int acumulador;

int main ()
{
    //coordenadas
    
    int x;
    int y;
    
    int option;
    
    contador=0;
    acumulador=0;
    
    //diametros
    float r1;
    r1=10;
    float r2;
    r2=30;
    float r3;
    r3=60;
    
    do //hacer
    
    {
    
     //clrscr ();
    
    contador++;
    
    printf ("\n\nTiro %d",contador);
    printf ("\n\npuntuacion %d",acumulador);
    
    printf ("\n\n\nCoordenadas");
    printf ("\n\n Eje x: ");
    scanf ("%d",&x);
    printf ("\n\n Eje y: ");
    scanf ("%d",&y);
    
    r=sqrt (x*x+y*y);
    
    if (r>=0 && r<=r1)
    
    funr1();
    
    if (r>r1 && r<=r2)
    
    funr2();
    
    if (r>r2 && r<=r3)
    
    funr3();
    
    
    getch ();
    
    printf ("\n\n Desea hacer otro tiro:");
    printf ("\n1.-Si\n2.-No");
    printf ("\n\n Option: ");
    scanf ("%d",&option);
    }// do end
    
    while (option==1);
    return 0;
}

void funr1(void)
{
     acumulador=acumulador+100;
     
     printf ("\n\n Tu tiro fue de 100 puntos tu puntuacion es %d",acumulador);
     
     
}
void funr2(void)
{
     acumulador=acumulador+50;
     
     printf ("Tu tiro fue de 50 puntos tu puntuacion es %d",acumulador);
     
     
}
void funr3(void)
{
     acumulador=acumulador+10;
     
     printf ("Tu tiro fue de 10 puntos tu puntuacion es %d",acumulador);
     
     
}
