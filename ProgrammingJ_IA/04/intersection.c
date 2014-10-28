#include <stdio.h>

int main()
{
  int i, j, a[10], b[10];

  for (i = 0; i < 10; i++)
  {
    scanf("%d", &a[i]);
  }
  
  for (i = 0; i < 10; i++)
  {
    scanf("%d", &b[i]);
  }

  for (i = 0; i < 10; i++)
  {
    for (j = 0; j < 10; j++)
    {
      if (a[i] == b[j]) {
        printf("%d ", a[i]);
        break;
      }
    }
  }

  return 0;
}
