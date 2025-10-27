#include "main.h"

/**
* print_numbers- elle affiche les chiffres de 0 a 9
*
*
*/
void print_numbers(void)
{
	char c;

	for (c = 48; c < 58; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
