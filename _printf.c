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
	int len, i, j;
	fmt_identifier fn_call[] = {
		{'c', c_handler}
	};
	
	s = NULL;
	str = NULL;
	s = _strcpy(str, format);
	len = _strlen(s);

	for (i = 0; i < len; i++)
	{
		for (j = 0; j < 1; j++)
		{
			if (s[i] == '%' && format[i + 1] == fn_call[j].fmt_char)
			{
				s = fn_call[j].fmt_f(s, i, 'a');
			}
		}
	}
	len = printStr(s);
	free(s);

	return (len);
}
