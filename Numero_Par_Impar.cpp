/* Ana Gabriela Ordoñez Güemes */
/* Número par o impar */

#include <stdio.h>
intmain()
{
	int x;
	printf("Escribe el número (sin decimales");
	scanf("%i",&x);

	if (x%2==0) 
		printf("Es par");
	else
		printf("Es impar");
}
 
