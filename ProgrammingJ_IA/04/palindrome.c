#include <stdio.h>

int main(void) {
  char s[30];   /* 入力される文字列のための配列 */
  int length;       /* 長さ */
  int i, j;         /* 文字列を前方と後方から参照するための添字 */

  printf("input string: ");
  scanf("%s", s);

  for (length = 0; s[length] != '\0'; length++) {
  }

  for (i = 0, j = length-1; i < j; i++, j--) {
    if (s[i] != s[j]) {
      printf("not palindrome\n");
      return 0;
    }
  }

  printf("palindrome\n");

  return 0;
}

