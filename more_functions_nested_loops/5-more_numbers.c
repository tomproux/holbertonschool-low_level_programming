#include "main.h"

/**
* more_numbers- elle affiche les chiffres de 0 a 9
*
*
*/
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 11; i++)
	{
		for (j = 0; j < 15 ; j++)
		{
			if (j >= 10)
			{
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
