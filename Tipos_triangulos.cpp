//Tipos de Triangulos
//Ordo�ez G�emes Ana Gabriela
//Versi�n 1.0

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
				printf ("Equil�tero");
			else
				if (x==y || x==z || y==z) 
					printf ("Is�sceles");
				else
					printf("Escaleno");
		}
	else
		printf("Error");
return 0;
}
