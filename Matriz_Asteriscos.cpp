//Cuadrado con Asteriscos
//Ordòñez Güemes Ana Gabriela
//Versiòn 1.0

#include <stdio.h>
int main()
{
	int n,fila,col;
	printf("tamaño del cuadrado: ");
	scanf("%d",&n);

	for (col=1;col<=n;col++)
		{
			printf("*");
		}
	printf("\n");

			for (fila=2;fila<n;fila++)
			{
				printf("*");

				for (col=2;col<n;col++)
					{
						printf(" ");
					}
					printf("*");
					printf("\n");
			}
	for (col=1;col<=n;col++)
		{
			printf("*");
		}
}
