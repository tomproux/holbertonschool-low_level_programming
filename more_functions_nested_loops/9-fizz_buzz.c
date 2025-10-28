#include "main.h"
#include <stdio.h>

/**
* main- elle affiche les chiffres de 1 a 100
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	for (n = 1; n < 101; n++)
	{
		if (n == (n / 3))
		{
			printf("Fizz");
		}
		else if (n == (n / 5))
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", n);
		}
	}

	return (0);
}
