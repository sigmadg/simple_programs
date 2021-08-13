//Tipos de Triangulos
//Ordoñez Güemes Ana Gabriela
//Versiòn 1.0

#include <stdio.h>
int main()
{
	int x,y,z;
	printf ("\n Primer Lado  ");
	scanf("%i",&x);
	printf ("\n Segundo Lado ");
	scanf("%i",&y);
	printf ("\n Tercer Lado  ");
	scanf("%i",&z);
	printf("\n\n\n");

	if ((x+y>z) && (x+z>y) && (y+z)>x)
		{
			if (x==y && x==z) 
				printf ("Equilátero");
			else
				if (x==y || x==z || y==z) 
					printf ("Isósceles");
				else
					printf("Escaleno");
		}
	else
		printf("Error");
return 0;
}
