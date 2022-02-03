#include <stdio.h>

struct _complex
{
float real,imaginary;
}
typedef _complex Complex;

int get_n()
{
  int n;
  printf("Enter the number of complex numbers you will enter:");
  scanf("%d", &n);
  return n;
}

Complex input_complex()
{
  Complex c;
  printf("Enter the real and imaginary part of Complex number:\n");
  scanf("%f %f", c.real, c.imaginary);
  return c;
}

void input_n_complex(int n, Complex c[n]);
Complex add(Complex a, Complex b);
Complex add_n_complex(int n, Complex c[n]);
void output(int n, Complex c[n], Complex result);

int main()
{
  Complex c[n];
  int n = get_n();
  input_n_complex(n, c[n])
}