#include "holberton.h"
#include <stdio.h>
/**
 * display_complex_number - display complex number
 * @c: complex number to display
 * Return: nothing
 */
void display_complex_number(complex c)
{
	if (c.re != 0)
		printf("%.0f ", c.re);
	if (c.im < 0)
		printf("- %.0fi\n", (-1) * c.im);
	else
		if (c.im == 0)
			printf("\n");
		else
			printf("+ %.0fi\n", c.im);
}
