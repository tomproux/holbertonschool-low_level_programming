#include "main.h"

/**
* swap_int- permet de swap deux entiers
* @a: premier pointeur entier
* @b: deuxieme pointeur entier
*
*/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
