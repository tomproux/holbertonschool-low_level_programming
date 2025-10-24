#include "main.h"

/**
* print_last_digit- elle ecris les signes coucou c'est Tom
* @i: permet de donner la valeur absolu d'un int
* Return: Always 0 (Success)
*/

int print_last_digit(int i)
{
	if (i > 0)
	{
		return (i % 10);
	}
	else if (i < 0)
	{
		i = i % 10;
		return (-i);
	}
	return (i % 10);
}
