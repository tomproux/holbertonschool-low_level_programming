#include "main.h"

/**
* _abs- elle ecris les signes coucou c'est Tom
* @i: permet de donner la valeur absolu d'un int
* Return: Always 0 (Success)
*/

int _abs(int i)
{
	if (i > 0)
	{
		return (i);
	}
	else if (i < 0)
	{
		return (-i);
	}
	return (i);
}
