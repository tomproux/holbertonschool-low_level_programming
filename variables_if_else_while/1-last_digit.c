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
	int tab[ (int) sizeof(int)];
	int i;
	char * Last_digit_of = "Last digit of";
	char * is = "is";

        srand(time(0));
        n = rand() - RAND_MAX / 2;

	i = 0;
	tab[i] = n;

	for(i; i < (int) sizeof(int); i++)
	{
       		if (n > 5)
       		{
               		printf("%s %d %s %d and is greater than 5\n", Last_digit_of, n, is, tab[0]);
       		}
       		if (n == 0)
       		{
               		printf("%s %d %s %d and is zero\n", Last_digit_of, n, is, tab[0]);
       		}
       		if (n < 6 && n!=0)
       		{
               		printf("%s %d %s %d and is less than 6\n", Last_digit_of, n, is, tab[0]);
       		}
	}

        return (0);
}
