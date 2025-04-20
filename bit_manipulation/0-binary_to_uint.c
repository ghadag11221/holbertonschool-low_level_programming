#include "main.h"
/**
 * binary_to_unit - converts a binary number to an unsigned int
 * @b:pointer to a sting of 0 and 1 character
 * return; the converted number, or 0 if string is invalid
 */
unsigned int binary_to_unit(const char *b)
{
unsigned int result =0;
if (b==null)
	return (0);
result = result * 2+(*b-'0');
b++;
}
return (result);
}
