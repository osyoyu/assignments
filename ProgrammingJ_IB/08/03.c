#include <stdio.h>

int main() {
  FILE *input  = fopen("input2.txt", "rb");
  FILE *output = fopen("output2.txt", "wb");
  char copy;

  while (1) {
    fread(&copy, sizeof(copy), 1, input);

    if (feof(input)) { break; }

    fwrite(&copy, sizeof(copy), 1, output);
  }

  return 0;
}
