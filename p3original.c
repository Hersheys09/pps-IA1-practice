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
  int sum;
  for(i=0; n>i; i++)
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
  sum = sum_n();
  output(n, sum);
  return 0;
}