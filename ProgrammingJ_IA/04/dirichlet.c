#include <stdio.h>

int MAX = 1000001;
int prime[1000001] = {0};

void make_prime(){
  int i, j;

  for (i = 2; i < MAX; i++) {
    prime[i] = 1;
  }

  for (i = 2; i * i < MAX; i++) {
    if (prime[i]){
      for (j = i * 2; j < MAX; j += i) {
        prime[j] = 0;
      }
    }
  }
}

int main() {
  int a, d, n;
  int i, count;

  make_prime();

  while (1) {
    scanf("%d %d %d", &a, &d, &n);
    if (a == 0 && d == 0 && n == 0) break;
    count = 0;

    for (i = 0; ; i++) {
      if (prime[a + i * d]) {
        if (++count == n) {
          printf("%d\n", a + i * d);
          break;
        }
      }
    }
  }

  return 0;
}
