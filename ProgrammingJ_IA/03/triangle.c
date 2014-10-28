#include <stdio.h>
#include <math.h>

int main() {
  double s;
  double a, b, c;

  while (1) {
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a == 0 && b == 0 && c == 0) break;
    if (!(a + b >= c && b + c > a && c + a > b)) {
      printf("not a triangle\n");
      continue;
    }

    s = (a + b + c) / 2;
    printf("%f\n", sqrt(s * (s - a) * (s - b) * (s - c)));
  }

  return 0;
}
