#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  int n, i, j, flag;
  int *a;
  scanf("%d", &n);
  i = 0;
  a = (int *)malloc(sizeof(int) * n);
  for (i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  flag = 0;
  for (i = 0; i < n; i++)
  {
    for (j = i + 1; j < n; j++)
    {
      if (a[i] == a[j])
      {
        flag = 1;
      }
    }
  }
  if (flag == 0)
  {
    printf("YES\n");
  }
  else
  {
    printf("NO\n");
  }
  free(a);
  return 0;
}