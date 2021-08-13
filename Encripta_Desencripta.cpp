
//*******************************************************************************************
//                                Ordóñez Güemes Ana Gabriela
//*******************************************************************************************
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
//*******************************************************************************************
//                                Encripta & Desenpcrypta
//*******************************************************************************************
void cadenas(){ 
      srand(time(NULL));
      char cadena[100];
      int k=0,g=0;         
      char opcion;
      printf("\n Welcome! ^-^ \n");
      printf("\nIngrese Los Caracteres: \n");
      fflush(stdin);
      gets(cadena);

printf("\n 1.Encriptar \n ");
printf("\n 2.Desencriptar \n");
scanf("%c",&opcion);


      switch(opcion){   
//*******************************************************************************************
//                                Crea La clave de La Cadena
//*******************************************************************************************           

          case '1': g=1+rand()%(10-1);
                     do{if (cadena[k]>=65 && cadena[k]<=122){
                     cadena[k]+=g;}
                     k++; }while(cadena[k]!='\0');
                     printf("\n Caracter: %s \n \n",cadena);
                     printf("\n Encryptacion: %d \n \n",g);
          break;
//*******************************************************************************************
//                                Pide La llave 
//*******************************************************************************************          
          case '2':printf("\n Ingrese la Llave de Encriptacion: \n ");
                   scanf("%d",&g);             
                   do{if (cadena[k]>=65 && cadena[k]<=122){
                                           cadena[k]-=g;}
                   k++;
                   }while(cadena[k]!='\0');

          printf("\n Desencryptacion: %s \n",cadena);
          break;
          
          default: printf("\n Error: \n");
          break;}
          
getchar();}
//*******************************************************************************************
//                                Avandonar el Programa
//******************************************************************************************* 
int main(){

    bool salir = false;
    char exit;
    do{cadenas();
    printf("\n Desea Otra clave, S para SALIR ");
    fflush(stdin);
    scanf ("%c",&exit);
    if(exit=='S' || exit == 's')
    salir=true;
    }while (salir==false);}
