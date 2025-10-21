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
	char * Last_digit_of = "Last digit of";
	char * is = "is";

        srand(time(0));
        n = rand() - RAND_MAX / 2;

	if (n > 5)
	{
		printf("%s %d %s %1d and is greater than 5\n", Last_digit_of, n, is, n);
       	}
       	if (n < 6)
       	{
		if (n == 0)
        	{
                	printf("%s %d %s %1d and is zero\n", Last_digit_of, n, is, n);
        	}
		else
		{
			printf("%s %d %s %1d and is less than 6 and not 0\n", Last_digit_of, n, is, n);
       		}
	}

        return (0);
}
