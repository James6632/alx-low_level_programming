#include "main.h"

/**
 * _strlen - returns the lenght of string
 * @s - string
 * Return: lenght as an integer
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}
