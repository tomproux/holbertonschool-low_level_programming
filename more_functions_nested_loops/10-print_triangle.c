#include "main.h"

/**
* print_triangle- elle affiche les chiffres de 0 a 9
* @size: is the number of times the character _ should be printed
*
*/
void print_triangle(int size)
{
	int i;
	int j;
	int n;

	if (size > 0)
	{
		for (i = size; i > 0; i--)
		{
			for (j = i; j > 0; j--)
			{
				_putchar(' ');
			}
			for (n = 0; n > i ; n++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else if (size <= 0)
	{
		_putchar('\n');
	}
}
