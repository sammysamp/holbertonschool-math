#include "holberton.h"
#include <stdio.h>
#include <math.h>
/**
 * modulus - calculate the modulus of a complex
 * @c: complex to evaluated
 * Return: modulus calculated
 */
double modulus(complex c)
{
	double z;

	z = sqrt(pow(c.re, 2) + pow(c.im, 2));
	return (z);
}

