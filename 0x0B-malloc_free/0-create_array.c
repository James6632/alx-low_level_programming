#include "main.h"
#include <stdlib.h>
/**
 * *create_array - creates an array of chars and initialize it
 * @size: array of size
 * @c: char to initialize array
 *
 * Return: NULL if its fails or
 *
 * pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
