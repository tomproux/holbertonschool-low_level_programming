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

	if (n < 0)
	{

	}
	else
	{
		for (i = 0; i <= n - 1; i++)
		{
			if (i != n - 1)
			{
				printf("%d, ", a[i]);
			}
			else
			{
				printf("%d\n", a[i]);
			}
		}
	}
}
