#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char tab[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for(i = 0; i < 26; i++)
	{
		printf("%c\n", tab[i]);
	}

	return (0);
}


