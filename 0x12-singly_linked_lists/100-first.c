#include <stdio.h>

/**
 * lastings - function executed before main
 * Return: function is executed.
 */

void __attribute__((constructor)) lastings()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
