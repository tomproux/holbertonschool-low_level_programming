#include "main.h"
#include <stdlib.h>

/**
* print_rev- permet d'inverser l'affichage
* @s: pointeur sur la chaine de caractere donner en parametre
*
*/
void print_rev(char *s)
{
	int count;
	char *tab = malloc(sizeof(*s));

	for (count = 0; *s != '\0'; count++)
	{
		s++;
	}
	if (*s == '\0')
	{
		while (*s != '\0')
		{
			s--;
			tab[count] = *s;
		}
	}
	_putchar('\n');
	free(tab);
}
