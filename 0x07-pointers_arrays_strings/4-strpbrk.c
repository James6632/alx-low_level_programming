#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - searches a string for any set of byte
 * @s: string to search
 * @accept: string containing bytes
 *
 * Return: pointer to th byte in s in accept or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
