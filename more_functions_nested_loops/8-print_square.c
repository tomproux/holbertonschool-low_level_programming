#include "main.h"

/**
* print_square- elle affiche les chiffres de 0 a 9
* @size: is the number of times the character _ should be printed
*
*/
void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
