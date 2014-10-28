#include <stdio.h>

int main()
{
  int i, input[64], sum = 0, count = 0;
  double avg;

  for (i = 0; ; i++)
  {
    scanf("%d", &input[i]);
    if (input[i] < 0) break;
    sum += input[i];
    count++;
  }

  avg = (double)sum / count;

  printf("sum=%d\navg=%f\nover avg=", sum, avg);

  for (i = 0; i < count; i++)
  {
    if ((double)input[i] >= avg)
    {
      printf("%d ", input[i]);
    }
  }

  printf("\n");

  return 0;
}
