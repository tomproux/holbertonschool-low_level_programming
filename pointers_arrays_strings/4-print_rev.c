#include "main.h"
#include <stdlib.h>

/**
* print_rev- permet d'inverser l'affichage
* @s: pointeur sur la chaine de caractere donner en parametre
*
*/
void print_rev(char *s)
{
	int i, j, len;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	len = i;

	for (j = len - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}
