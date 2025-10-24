#include "main.h"

/**
* print_last_digit- elle ecris les signes coucou c'est Tom
* @i: permet de donner la valeur absolu d'un int
* Return: Always 0 (Success)
*/

int print_last_digit(int i)
{
	int j;
	int n;

	i = i % 10;
	j = i * 10;
	n = j + i;

	if (i > 0)
	{
		return (n);
	}
	else if (i < 0)
	{
		return (-n);
	}
	return (n);
}
