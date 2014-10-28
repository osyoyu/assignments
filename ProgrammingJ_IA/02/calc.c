#include <stdio.h>

const double PI = 3.141592;

int main() {
  double radius;

  printf("Type a \"radius\" in double: ");
  scanf("%lf", &radius);

  printf("Length of circumference: %f\n", 2.0 * PI * radius);
  printf("Area: %f\n", PI * radius * radius);
  printf("Surface area: %f\n", 4.0 * PI * radius * radius);
  printf("Volume: %f\n", (4.0 / 3.0) * PI * radius * radius * radius);

  return 0;
}
