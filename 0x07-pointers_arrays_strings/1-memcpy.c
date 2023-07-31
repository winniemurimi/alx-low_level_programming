#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@d: memory where is stored
 *@s: memory where is copied
 *@n: number of bytes
 *
 *Return: copied memory with n bytes changed
 */
char *_memcpy(char *d, char *s, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		d[r] = s[r];
		n--;
	}
	return (d);
}

