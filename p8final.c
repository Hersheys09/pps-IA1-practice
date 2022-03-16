#include <stdio.h>

struct complex
{
float real,imaginary;
}
typedef Complex;

int get_n()
{
  int n;
  printf("Enter number of Complex numbers you will enter: ");
  scanf("%d", &n);
  return n;
}

Complex input_complex()
{
  Complex c;
  printf("Enter the real and imaginary value of Complex number:");
  scanf("%f %f", &c.real, &c.imaginary);
  return c;
}

void input_n_complex(int n, Complex c[n])
{
  for(int i = 0; n>i; i++)
  {
    printf("Enter real and imaginary value of Complex number:\n");
    scanf("%f %f", &c[i].real, &c[i].imaginary);
  }
}

Complex add(Complex a, Complex b)
{
  Complex c;
  c.real = a.real + b.real;
  c.imaginary = a.imaginary + b.imaginary;
  return c;
}

Complex add_n_complex(int n, Complex c[n])
{
  Complex sum={0,0};
  for(int i = 0; n>i; i++)
  {
    sum = add(sum, c[i]);
  }
  return sum;
}

void output(int n, Complex c[n], Complex result)
{
  printf("The sum of ");
  for(int i=0; n-1>i; i++)
  {
    printf("%f + %fi + ", c[i].real, c[i].imaginary);
  }
  printf("%f + %fi = %f + %fi\n", c[n-1].real, c[n-1].imaginary, result.real, result.imaginary);
}

int main()
{
  int n;
  n = get_n();
  Complex c[n];
  input_n_complex(n, c);
  Complex result = add_n_complex(n, c);
  output(n, c, result);
  return 0;
}
