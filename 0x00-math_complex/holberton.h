#ifndef COMPLEX_H
#define COMPLEX_H
/**
 * struct Complex - struct of complex number
 * @re: real part
 * @im: imaginary part
 */
typedef struct Complex
{
	double re;
	double im;
} complex;
void display_complex_number(complex c);
complex conjugate(complex c);
double modulus(complex c);
#endif
