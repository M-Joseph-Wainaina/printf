#include "main.h"

/**
 * _strlen - counts the length of a string
 * @str: string
 * Return: string length
 */

int _strlen(const char *str)
{
	int i;

	i = 0;

	while (str[i])
	{
		i++;
	}

	return (i);
}

/**
 * _strcpy - copies string source into dest
 * @source: string to be copied
 * @dest: destination
 * Return: copied string
 */

char *_strcpy(char *dest, const char *src)
{
	int len;
	int i;

	len = _strlen(src);
	
	dest = malloc(sizeof(char) * len + 1);
	if (dest == NULL)
	{
		free(dest);
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
