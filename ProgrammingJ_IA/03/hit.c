#include <stdio.h>
#include <math.h>

int main() {
  double x, y;
  scanf("%lf %lf", &x, &y);

  if (x * x + y * y == 25) {
    printf("円周上\n");
  } else if (x * x + y * y > 25) {
    printf("外部\n");
  } else if (x * x + y * y < 25) {
    printf("内部\n");
  }

  return 0;
}
