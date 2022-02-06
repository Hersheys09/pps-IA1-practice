#include <stdio.h>

struct _complex
{
float real,imaginary;
}
typedef Complex;

int get_n()
{
  int n;
  printf("Enter the number of complex numbers you will enter:");
  scanf("%d", &n);
  return n;
}

Complex input_complex(int n)
{
  Complex x;
  printf("Enter the real and imaginary part of Complex number:\n");
  scanf("%f %f", &x.real, &x.imaginary);
  return x;
}

void input_n_complex(int n, Complex c)
{
  for(int i=0; n>i; i++)
  {
    c = input_complex(n);
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
  Complex sum;
  for(int i=0; n>i; i++)
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
  int n = get_n();
  Complex c[100];
  input_n_complex(n, c);
  Complex result = add_n_complex(n, c);
  output(n, c,result);
  return 0;
}