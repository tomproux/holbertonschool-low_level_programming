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
	size_t sizeMax = sizeof(*str) + 1;
	int *fd = malloc();

	if (fd != NULL)
	{
		write(*fd, str, sizeof(str));
		write(*fd, "\n", sizeof(str) + 1);
	}

	free (fd);
}
