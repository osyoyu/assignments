#include <stdio.h>

int main() {
  int i, hand, score = 0;

  for (i = 0; i < 10; i++) {
    printf("Goo=1, Choki=2, Paa=3: ");
    scanf("%d", &hand);
    printf("You: %d\nComputer:1\n", hand);

    if (hand == 1) {
      printf("Aiko\n");
    } else if (hand == 2) {
      printf("I win!\n");
      score--;
    } else if (hand == 3) {
      printf("You win!\n");
      score++;
    } else {
      printf("invalid input\n");
      i--;
      continue;
    }
  }

  printf("Score=%d\n", score);
  return 0;
}
