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
	int a;
	char * Last_digit_of = "Last digit of";
	char * is = "is";

        srand(time(0));
        n = rand() - RAND_MAX / 2;

	a = 0;

	if (n > 5)
	{
        	a = scanf("%d", &n);
		printf("%s %d %s %d and is greater than 5\n", Last_digit_of, n, is, a);
       	}
       	if (n == 0)
       	{
               	a = scanf("%d", &n);
		printf("%s %d %s %d and is zero\n", Last_digit_of, n, is, a);
       	}
       	if (n < 6 && n!=0)
       	{
		a = scanf("%d", &n);
		printf("%s %d %s %d and is less than 6\n", Last_digit_of, n, is, a);
       	}

        return (0);
}
