#include "main.h"

/**
 * i_handler - %i identifier
 * @str: string
 * @n: position
 * @args: variable arguments
 * Return: char pointer
 */

char *i_handler(char *str, int n, va_list args)
{
	char *s;
	char *p;
	char *c_h;
	int a, b;
	int i, j, k;

	s = itostr(va_arg(args, int));
	a = _strlen(s);
	b = _strlen(str);
	c_h = malloc(sizeof(char) * a + b);
	
	printf("%d %d\n", a , b);
	for (i = 0, j = 0; i < a + b;j++, i++)
	{
		c_h[i] = str[j];
		if (j == n)
		{
			for (k = 0; k < b;i++, k++)
			{
				c_h[i] = s[k];
			}
			j++;
		}
	}

	return (c_h);
}
