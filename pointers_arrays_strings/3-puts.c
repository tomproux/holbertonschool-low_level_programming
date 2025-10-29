#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
* _puts- affiche une chaine de caractere
* @str: valeur parametre d'une chaine de caractere
*
*/
void _puts(char *str)
{
	int count;
	int *tab = (int *) malloc(sizeof(int));

	if (tab != NULL)
	{
		write(*tab, str, sizeof(int));

		for (count = 0; *str != '\0'; count++)
		{
			str++;
		}

		if (*str == '\0')
		{
			tab[count + 1] = '\n';
		}
	}

	free(tab);
}
