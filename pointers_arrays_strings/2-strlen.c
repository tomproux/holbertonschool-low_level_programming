#include "main.h"
#include <stdio.h>

/**
* _strlen- retourne la longueur d'une chaine de caractere
* @s: valeur parametre d'une chaine de caractere
* Return: Always 0 (Success)
*/
int _strlen(char *s)
{
	int len;

	len = puts(s);

	return (len - 1);
}
