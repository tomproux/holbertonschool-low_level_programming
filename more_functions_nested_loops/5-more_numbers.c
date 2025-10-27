#include "main.h"

/**
* more_numbers- elle affiche les chiffres de 0 a 9
*
*
*/
void more_numbers(void)
{
	char c1;
	char c2;
	int i;

	for (i = 0; i < 11; i++)
	{
		for (c1 = 48; c1 < 58 ; c1++)
		{
			_putchar(c1);
		}
		for (c2 = 48; c2 < 53; c2++)
		{
			_putchar('1' + c2);
		}
		_putchar('\n');
	}
}
