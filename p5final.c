#include <stdio.h>

float input()
{
  float x;
  printf("Enter the number to find square root of: ");
  scanf("%f", &x);
  return x;
}

float my_sqrt(float n)
{
  float x=n/2;
  float sqrt;
  sqrt = 0.5*(x+(n/x));
  while((x-sqrt)>0.00001)
  {
    x = sqrt;
    sqrt = 0.5*(x+(n/x));
  }
  return sqrt;
}

void output(float n, float sqrt_result)
{
  printf("Square root of %f is %f\n", n, sqrt_result);
}

int main()
{
  float n, sqrt_result;
  n = input();
  sqrt_result = my_sqrt(n);
  output(n, sqrt_result);
  return 0;
}
