#include "holberton.h"
#include <stdio.h>
#include <float.h>
#include <limits.h>
/**
 * conjugate - calculate the conjugate of a complex
 * @c: complex to evaluated
 * Return: complex conjugated
 */
complex conjugate(complex c)
{
	complex c2;

	c2.re = c.re;
	c2.im = (-1) * c.im;
	return (c2);
}

