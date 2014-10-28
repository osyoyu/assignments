#include <stdio.h>

int main() {
  char c, filename[1024];
  FILE *fp;

  scanf("%s", filename);

  fp = fopen(filename, "r");
  fseek(fp, -1L, SEEK_END);

  // surpress output of \n int the end of file
  c = fgetc(fp);
  if (c != '\n') { putc(c, stdout); }
  if (fseek(fp, -2L, SEEK_CUR) != 0) { puts (""); return 0; }

  while(1) {
    c = fgetc(fp);
    putc(c, stdout);
    if (fseek(fp, -2L, SEEK_CUR) != 0) { break; }
  }

  puts("");

  return 0;
}
