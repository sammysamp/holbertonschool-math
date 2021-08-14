#ifndef HERON_H
#define HERON_H
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
typedef struct cell
{
	double elt;
	struct cell *next;
} t_cell;
t_cell *heron(double p, double x0);
#endif
