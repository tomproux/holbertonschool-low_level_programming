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

	if (size > 0)
	{
		for (i = size - 1; i > -1; i--)
		{
			for (j = i - 1; j > -1; j--)
			{
				_putchar(' ');
			}
			_putchar('#');
			_putchar('\n');
		}
	}
	else if (size <= 0)
	{
		_putchar('\n');
	}
}
