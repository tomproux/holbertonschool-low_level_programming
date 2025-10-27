#include "main.h"

/**
* print_diagonal- elle affiche les chiffres de 0 a 9
* @n: is the number of times the character _ should be printed
*
*/
void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < (n - 1); i++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}
