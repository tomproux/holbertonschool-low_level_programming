#include "main.h"

/**
* print_line- elle affiche les chiffres de 0 a 9
* @n: is the number of times the character _ should be printed
*
*/
void print_line(int n)
{
	if (n > 0)
	{
		_putchar(n * '_');
		_putchar('\n');
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}
