#include "main.h"

/**
 * s_handler - handles %s
 * @str: string
 * @n: position of %
 * @args: variable arguments list
 * Return: char *
 */

char *s_handler(char *str, int n, va_list args)
{
	int a, b;
	char *ptr;
	char *c_h;
	int i, j, k, l;

	ptr = va_arg(args, char *);
/*	printf("%s\n %s\n",str, ptr);*/
	a = _strlen(str);
	b = _strlen(ptr);
	c_h = malloc(sizeof(char) * (a + b));

	for (i = 0, j = 0; i < a + b; i++, j++)
	{
		c_h[i] = str[j];
		if (j == n)
		{
			for(k = 0; k < b; k++, i++)
			{
				c_h[i] = ptr[k];
			}
			i--;
			j++;
		}
	}
	
	return (c_h);
}
