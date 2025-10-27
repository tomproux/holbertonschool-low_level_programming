#include "main.h"

/**
* print_most_numbers- elle affiche les chiffres de 0 a 9
*
*
*/
void print_most_numbers(void)
{
	char c;

	for (c = 48; c < 58; c++)
	{
		if (c != 50 && c != 52)
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}
