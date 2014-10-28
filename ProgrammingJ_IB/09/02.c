#include <stdio.h>

int find_and_print(FILE *fp, long position) {
  char name[64], address[64];
  position = 128 * position;

  fseek(fp, position, SEEK_SET);
  fgets(name, 64, fp);
  fseek(fp, 1L, SEEK_CUR);
  fgets(address, 64, fp);
  printf("name=%s\naddress=%s\n", name, address);

  return 0;
}

int main() {
  int position;
  char filename[1024];
  FILE *fp;

  scanf("%s", filename);
  fp = fopen(filename, "r");

  if (fp == NULL) {
    puts("File open error");
  }

  scanf("%d", &position);
  find_and_print(fp, position);

  return 0;
}
