#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int t, nas = 0;
	unsigned long int current;

	for (t = 63; t >= 0; t--)
	{
		current = n >> t;

		if (current & 1)
		{
			_putchar('1');
			nas++;
		}
		else if (nas)
			_putchar('0');
	}
	if (!nas)
		_putchar('0');
}
