#include <stdio.h>

int input_n()
{
  int x;
  printf("Enter the number to find sum upto:\n");
  scanf("%d", &x);
  return x;
}

int sum_n(int n)
{
  int sum=0;
  for(int i=0; n+1>i; i++)
  {
    sum = sum + i;
  }
  return sum;
}

void output(int n, int sum)
{
  printf("Sum:\n");
  for(int i=0; n>i; i++)
  {
    printf("%d+", i);
  }
  printf("%d is %d", n, sum);
}

int main()
{
  int n, sum;
  n = input_n();
  sum = sum_n(n);
  output(n, sum);
  return 0;
}