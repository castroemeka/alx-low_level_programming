#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int rag_val = 0;

	if (!a)
		return (0);

	for (i = 0; a[i]; i++)
	{
		if [a[i] < '0' || a[i] > '1')
			return (0);
		rag_val = 2 * rag_val + (a[i] - '0');
	}

	return (rag_val);
}
