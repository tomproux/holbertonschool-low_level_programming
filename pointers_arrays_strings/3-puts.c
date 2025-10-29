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
	size_t sizeMax;
	int *fd;

	sizeMax = *str;

	fd = (int *) malloc(sizeMax + 1);

	if (fd != NULL)
	{
		write(*fd, str, sizeMax);
		write(*fd, "\n", sizeMax + 1);
	}

	free(fd);
}
