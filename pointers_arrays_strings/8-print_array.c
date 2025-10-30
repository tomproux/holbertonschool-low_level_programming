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
	for (n = 0; n != '\0'; n++)
	{
		printf("%d, ", a[n]);
	}
	if (n == '\0')
	{
		a[n + 1] = '\n';
	}
}
