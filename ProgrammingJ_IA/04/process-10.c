#include <stdio.h>

int main()
{
  int i, input[10], sum = 0;
  double avg;

  for (i = 0; i < 10; i++)
  {
    scanf("%d", &input[i]);
    sum += input[i];
  }

  avg = (double)sum / 10;

  printf("sum=%d\navg=%f\nover avg=", sum, avg);

  for (i = 0; i < 10; i++)
  {
    if ((double)input[i] >= avg)
    {
      printf("%d ", input[i]);
    }
  }

  printf("\n");

  return 0;
}
