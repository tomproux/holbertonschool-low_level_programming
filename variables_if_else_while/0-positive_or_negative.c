#include <stdio.h>
#include <time.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;
	int RAND_MAX;

	RAND_MAX = sizeof(int);

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if(n > 0)
	{
		printf("is positive\n");
	}
	if(n = 0)
	{
		printf("is zero\n");
	}
	else
	{
		printf("is negative\n");
	}

	return (0);
}
