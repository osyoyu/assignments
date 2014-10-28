#include <stdio.h>

int main(void) {
  int tall, weight;

  printf("Your tall in cm: ");
  scanf("%d", &tall);
  printf("Your weight in kg: ");
  scanf("%d", &weight);

  printf("Your BMI: %.1f\n", (double)weight / ((double)(tall * tall) / 10000));
  printf("Your optimal weight: %.1f\n", 22.0 * ((double)(tall * tall) / 10000));

  return 0;
}
