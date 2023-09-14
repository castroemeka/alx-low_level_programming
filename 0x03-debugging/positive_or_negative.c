#include "main.h"

/**
 * postive_or_negative - this is the postive_or_negative function
 * @i: the i returns number
*/

void postive_or_negative(int i)
{
	if (i > 0)
{
	printf("%dd is postive\n", i);
}
	else if (i == 0)
	printf("%d is zero\n", i);
	else
	printf("%d is negative\n", i);
}
