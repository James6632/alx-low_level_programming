#include	<stdio.h>

/**
 * main	-	prints	the	numbers	from	0	to	9
 *
 * Return:	Always	0	(success)
 */
int	main(void)
{
	int	n;

	for	(n	=	0;	<	10;	n++)
	putchar((n	%	10)	+	'0');

	putchar('\n');

	return	(0);
}
