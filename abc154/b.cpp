#include <stdio.h>
#include <string.h>

int main()
{
  char s[100], x[101];
  scanf("%s", s);
  int i = 0;
  while (s[i] != '\0')
  {
    x[i] = 'x';
    i++;
  }
  printf("%s\n", x);

  return 0;
}