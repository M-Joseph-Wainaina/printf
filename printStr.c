#include "main.h"

/**
 * printStr - prints a string passed to it
 * @str: string to be printed
 * Return: void
 *
 */

int printStr(const char *str)
{
	int len, i;

	len = 0;
	len = _strlen(str);

	for (i = 0; i <= len; i++)
	{
		_putchar(str[i]);
	}
	return (len);
}
