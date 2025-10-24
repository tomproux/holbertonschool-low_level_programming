#include "main.h"

/**
* print_last_digit- elle ecris les signes coucou c'est Tom
* @i: permet de donner la valeur absolu d'un int
* Return: Always 0 (Success)
*/

int print_last_digit(int i)
{
	i = i % 10;

	if (i < 0)
	{
		i *= -1;
	}
	_putchar('0' + i);
	return (i);
}
