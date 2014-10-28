#include <stdio.h>
#include <string.h>

int main() {
  int i;
  char str[64], before, after;

  printf("Input a string and two characters: ");
  scanf("%s %c %c", str, &before, &after);

  printf("Result: ");

  for (i = 0; i < strlen(str); i++)
  {
    printf("%c", str[i] == before ? after : str[i]);
  }

  printf("\n");

  return 0;
}
