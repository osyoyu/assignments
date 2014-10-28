#include <stdio.h>
#include <math.h>

int main() {
  double input;
  printf("input n: ");
  scanf("%lf", &input);
  printf("%d\n", (int)input == 0 ? 1 : ((int)log10((int)input) + 1));
  return 0;
}
