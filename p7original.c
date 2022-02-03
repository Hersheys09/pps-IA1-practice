//#include <stdio.h>

struct _complex
{
  float real, imaginary;
}
typedef _complex Complex;

Complex input_complex()
{
  Complex c;
  printf("Enter a Complex number:\n");
  scanf("%f+%fi", c.real, c.imaginary);
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
  
}

int main()
{
  return 0;
}