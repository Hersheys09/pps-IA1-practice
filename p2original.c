#include <stdio.h>

int input()
  {
    int x;
    printf("Enter a value:\n");
    scanf("%d", &x);
    return x;
  }

int cmp(int a, int b, int c)
  {
    int x;
    if(a>b && a>c)
    {
      return a;
    }
    else if (b>a && b>c)
    {
      return b;
    }
    else
    {
      return c;
    }
}

void output(int a, int b, int c, int L)
{
  printf("The greatest value out of %d, %d, %d is %d\n", a, b, c, L);
}

int main()
{
  int a, b, c, L;
  a = input();
  b = input();
  c = input();
  L = cmp(a, b, c);
  output(a, b, c, L);
return 0;
}