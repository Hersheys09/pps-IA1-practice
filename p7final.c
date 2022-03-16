#include <stdio.h>

struct _complex
{
  float real, imaginary;
}
typedef Complex;

Complex input_complex()
{
  Complex c;
  printf("Enter a Complex number:\n");
  scanf("%f %f", &c.real, &c.imaginary);
  return c;
}

Complex add(Complex a, Complex b)
{
  Complex c;
  c.real = a.real + b.real;
  c.imaginary = a.imaginary + b.imaginary;
  return c;
}

void output(Complex a, Complex b, Complex c)
{
  printf("The sum of complex number %f + %fi and %f + %fi is %f + %fi", a.real, a.imaginary, b.real, b.imaginary, c.real, c.imaginary); 
}

int main()
{
  Complex a, b, c;
  a = input_complex();
  b = input_complex();
  c = add(a,b);
  output(a,b,c);
  return 0;
}