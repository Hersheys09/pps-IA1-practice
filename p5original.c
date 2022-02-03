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

}

void output(float n, float sqrt_result)
{
  printf("Square root of %f is %f", n, sqrt_result);
}

int main()
{
  float n, sqrt_result;
  n = input();
  sqrt_result = my_sqrt(n);
  output(n, sqrt_result);
  return 0;
}
