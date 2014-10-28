#include <stdio.h>

int main() {
  int count = 0;
  FILE *fp = fopen("input1.txt", "r");

  while (!feof(fp)) {
    fgetc(fp);
    count++;
  }

  printf("%d\n", count - 1);

  return 0;
}
