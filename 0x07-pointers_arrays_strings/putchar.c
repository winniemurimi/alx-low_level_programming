#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: Represents the character to print
 *
 * Return: On success 1.
 * On error, -1 is return
 */
int _putchar(char c)
{
	return(write(1, &c, 1));

}
