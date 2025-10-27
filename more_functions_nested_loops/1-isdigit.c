#include "main.h"

/**
* _isdigit- elle ecris les signes coucou c'est Tom
* @c: permet de donner la valeur absolu d'un int
* Return: Always 0 (Success)
*/
int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	return (0);
}
