#include "main.h"

/**
* _isupper- elle ecris les signes coucou c'est Tom
* @c: permet de donner la valeur absolu d'un int
* Return: Always 0 (Success)
*/
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	return (0);
}
