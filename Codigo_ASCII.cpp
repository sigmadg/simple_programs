//Codigo ASCII
//Ord��ez G�emes Ana Gabriela
//Versi�n 1.0

#include <stdio.h>
int main()
{
     for (int i=0;i<=255;i++)
     {
          printf("%c(%i)\t",i,(int)i);
          if (i%10==5) 
               printf("\n");}
}
