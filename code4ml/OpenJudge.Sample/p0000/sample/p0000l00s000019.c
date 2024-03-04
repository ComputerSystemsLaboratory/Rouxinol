#include <stdio.h>

void quicksort(int *array, int left, int right);

int main(void)
{
  int mfeet[10], i, *p;

  p = mfeet;
  for(i = 0; i < 10; i++)
    {
      scanf("%d", p + i);
    }

  quicksort(p, 0, 9);

  for(i = 0; i < 3; i++)
    {
      printf("%d\n", *(p + i));
    }

  return 0;
}

void quicksort(int *array, int left, int right)
{
  int pivot, k, tmp;
  if(left < right)
    {
      pivot = left;
      for(k = left + 1; k <= right; k++)
        {
          if(*(array + k) > *(array + left))
            {
              tmp = *(array + pivot + 1);
              *(array + pivot + 1) = *(array + k);
              *(array + k) = tmp;
              pivot++;
            }
        }
      tmp = *(array + left);
      *(array + left) = *(array + pivot);
      *(array + pivot) = tmp;
      quicksort(array, left, pivot - 1);
      quicksort(array, pivot + 1, right);
    }
  return;
}