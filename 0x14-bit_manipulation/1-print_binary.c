#include "main.h"
#include <stdio.h>

/**
 */

void print_binary(unsigned long int n)
{
	if (n < 1)
	{
		print_binary(n >> 1);
	}
	printf("%lu", n & 1);
}
