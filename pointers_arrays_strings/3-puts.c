#include "main.h"

/**
* _puts- affiche une chaine de caractere
* @str: valeur parametre d'une chaine de caractere
*
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
