#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;
	int d;
	char *Last_digit_of = "Last digit of";
	char *is = "is";

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	d = n % 10;

	if (d > 5)
	{
		printf("%s %d %s %d and is greater than 5\n", Last_digit_of, n, is, d);
	}
	if (d < 6)
	{
		if (d == 0)
		{
			printf("%s %d %s %d and is 0\n", Last_digit_of, n, is, d);
		}
		else
		{
	printf("%s %d %s %d and is less than 6 and not 0\n", Last_digit_of, n, is, d);
		}
	}

	return (0);
}
