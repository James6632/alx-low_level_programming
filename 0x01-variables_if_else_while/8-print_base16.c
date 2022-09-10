#include	<stdio.h>

/**
 * main	-	prints hexadecimal string
 *
 * Return:	Always	0	(success)
 */
int	main(void)
{
	char	c;

	for	(c	=	'0';	c	<=	'f';	c++)
	{
		putchar(c);
	}

	for	(c	=	'a';	c	<=	'f';	c++)
	{
		putchar(c);
	}

	putchar('\n');

	return	(0);
}
