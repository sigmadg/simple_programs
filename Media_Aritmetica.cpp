//Serie de Numeros y Su media Aritmetica
//Ordòñez Güemes Ana Gabriela
//Versiòn 1.0

#include <stdio.h>
int main()
{
	int i,suma=0,cont=0;
	do
	{
		printf("\n Numero: ");
		scanf("%i",&i);
		suma+=i;

		if (i!=0) cont++;
	}
	while (i!=0);
		if (cont!=0)
			printf("\n Media: %5.2f ",(float)suma/cont);
		else 
			printf("\n Error ");
}


