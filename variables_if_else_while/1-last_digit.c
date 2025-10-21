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
		printf("%s %d %s 8 and is greater than 5\n", Last_digit_of, n, is);
       	}
       	if (n == 0)
       	{
		printf("%s %d %s 0 and is zero\n", Last_digit_of, n, is);
       	}
       	if (n < 6 && n!=0)
       	{
		printf("%s %d %s -8 and is less than 6 and not 0\n", Last_digit_of, n, is);
       	}

        return (0);
}
