#include "main.h"

/**
 * _printf - prints arguments passed to it
 * @format: string to be printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i;
	char *str;
	char *s;
	int len;	

	s = _strcpy(str, format);
	len = printStr(s);
	free(s);

	return (len);
}
