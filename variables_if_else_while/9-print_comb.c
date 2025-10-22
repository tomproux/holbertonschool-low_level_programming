#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);

		do {
			putchar(',');
			putchar(' ');
		} while (i < 57);
	}
	putchar('\n');

	return (0);
}
