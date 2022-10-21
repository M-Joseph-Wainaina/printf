#include "main.h"

/**
 * _printf - prints arguments passed to it
 * @format: string to be printed
 * Return: len
 */

int _printf(const char *format, ...)
{
	char *str;
	va_list args;
	char *s;
	int len, i, j;
	fmt_identifier fn_call[] = {
		{'c', c_handler},
		{'s', s_handler},
		{'i', i_handler}, 
	};
	
	va_start(args, format);
	s = NULL;
	str = NULL;
	s = _strcpy(str, format);
	len = _strlen(s);

	for (i = 0; i < len; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (s[i] == '%' && s[i + 1] == fn_call[j].fmt_char)
			{

				s = fn_call[j].fmt_f(s, i, args);
			}
		}
	}

	va_end(args);
	len = printStr(s);
	free(s);	
	return (len);
}
