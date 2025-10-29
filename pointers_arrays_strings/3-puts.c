#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/**
* _puts- affiche une chaine de caractere
* @str: valeur parametre d'une chaine de caractere
*
*/
void _puts(char *str)
{
	size_t sizeMax;
	int *fd;

	sizeMax = strlen(str);

	fd = (int *) malloc(sizeMax);

	if (fd != NULL)
	{
		write(*fd, str, sizeMax);
	}

	free(fd);
}
