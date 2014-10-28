#include <stdio.h>
#include <string.h>

int main() {
  int i = 0;
  char filename[256], line[256];
  char *p;
  FILE *input;

  fgets(filename, 256, stdin);
  p = strchr(filename, '\n');
  *p = '\0';
  input = fopen(filename, "r");
  if (input == NULL) {puts ("Error"); }

  while (fgets(line, sizeof(line), input) != NULL) {
    printf("%6d  %s", ++i, line);
  }

  return 0;
}
