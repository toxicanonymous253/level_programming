#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - display output
 *
 * Return: Always 0
 */
int main(void)
{
		int n;
		int lastdig = n % 10;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					/* your code goes there */
				if (lastdig > 5)
				{
					printf("Last digit of %d is %d and is greater than 5", n, lastdig);
				}
				else if (lastdig == 0)
				{
					printf("Last digit of %d is %d and is 0", n, lastdig);
				}
				else if (lastdig < 6)
				{
					printf("Last digit of %d is %d and is less than 6 and not 0", n, lastdig);
				}
				printf("\n");

					return (0);
}
