#include "main.h"
#include <stdio.h>

/**
* print_array- permet d'afficher les elements d'un tableau
* @a: pointeur designant un tableau
* @n: nombre de caracteres du tableau
*
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf(", %d", a[i]);
		}
	}
	printf("\n");
}
