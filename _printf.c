#include "main.h"

/**
 * _printf - prints arguments passed to it
 * @format: string to be printed
 * Return: len
 */

int _printf(const char *format, ...)
{
	char *str;
	char *s;
	int len;

	str = NULL;
	s = _strcpy(str, format);
	len = printStr(s);
	free(s);

	return (len);
}
