#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 *
 * Return: Always 0
 */

void more_numbers(void)
{
	int j1, j2;

	for (j1 = 0; j1 < 10; j1++)
	{
		for (j2 = 0; j2 <= 14; j2++)
		{
			if (j2 > 9)
			{
				putchar((j2 / 10) + '0');
			}
			putchar((j2 % 10) + '0');
		}
		putchar(10);
	}
}
