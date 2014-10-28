#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  int i;
  char input[64];
  fgets(input, sizeof(input), stdin);

  for (i = ((int)strlen(input) - 1); i >= 0; i--)
  {
    printf("%c", input[i]);
  }

  printf("\n");

  return 0;
}
