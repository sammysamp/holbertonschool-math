#include "holberton.h"
#include <stdio.h>
#include <float.h>
#include <limits.h>
/**
 * display_complex_number - display complex number
 * @c: complex number to display
 * Return: nothing
 */
void display_complex_number(complex c)
{
	if (c.re == '\0')
		c.re = 0;
	if (c.im == '\0')
		c.im = 0;
	if (c.re < DBL_MAX && c.im < DBL_MAX)
	{
		if (c.re != 0)
			printf("%g ", c.re);
		if (c.im < 0)
			if (c.re != 0)
				if (c.im == -1)
					printf("- i\n");
				else
					printf("- %gi\n", (-1) * c.im);
			else
				printf("%gi\n", c.im);
		else
			if (c.im == 0)
				if (c.re != 0)
					printf("\n");
				else
					printf("0\n");
			else
				if (c.re != 0)
					if (c.im == 1)
						printf("+ i\n");
					else		
						printf("+ %gi\n", c.im);
				else
					if (c.im == 1)
						printf("i");
					else
						printf("%gi\n", c.im);
	}
}

