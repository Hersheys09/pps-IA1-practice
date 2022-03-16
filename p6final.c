#include <stdio.h>

void input_two_string(char *a, char *b)
{
  printf("Enter two strings:\n");
  scanf("%s %s", a, b);
}

int strcmp(char *a, char *b)
{
  while(*a == *b && *a!='\0')
  {
    a++; b++;
  }
  return *a-*b;
}

void output(char *a, char *b, int result)
{
  if(result>0)
  {printf("%s is greater than %s\n", a, b);}
  else if (result<0)
  {printf("%s is greater than %s\n", b, a);}
  else
  {printf("%s is equal to %s\n", a, b);}
}

int main()
{
  char a[20], b[20];
  input_two_string(a, b);
  int result = strcmp(a, b);
  output(a, b, result);
return 0;
}