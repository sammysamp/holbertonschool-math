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
		printf("%.6g ", c.re);
	if (c.im < 0)
		printf("- %.6gi\n", (-1) * c.im);
	else
		if (c.im == 0)
			printf("\n");
		else
			if (c.re != 0)
				printf("+ %.6gi\n", c.im);
			else
				printf("%.6gi\n", c.im);
}

