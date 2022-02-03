//#include <stdio.h>

int input_array_size()
{
  int x;
  printf("Enter the no. of values you will enter:\n");
  scanf("%d", &x);
  return x;
}

void input_array(int n, int a[n])
{
  for(int i=0; n>i; i++)
  {
    printf("Enter a number: ");
    scanf("%d", &a[i]);
  }
}

int sum_n_arrays(int n, int a[n])
{
  int sum = 0;
  for(int i=0; n>i; i++)
  {
    sum = sum + a[i];
  }
  return sum;
}

void out_put(int n, int a[n], int sum)
{
  for(int i=0; n-1>i; i++)
  {
    printf("%d + ", a[i]);
  }
  printf("%d = %d", a[n], sum);
}

int main()
{
  int n, a[n], sum;
  n = input_array_size();
  input_array(n, a[n]);
  sum = sum_n_arrays(n, a[n]);
  out_put(n, a[n], sum);
  return 0;
}
