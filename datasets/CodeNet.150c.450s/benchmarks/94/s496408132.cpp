#include <iostream>
#include <climits>
#include <stdio.h>

void bubbleSort(int A[], int N)
{
  int swapCount = 0;
  for (int i = 0; i <= N - 1; i++)
  {
    for (int j = N - 1; j >= i + 1; j--)
    {
      if (A[j] < A[j - 1])
      {
        std::swap(A[j], A[j - 1]);
        swapCount++;
      }
    }
  }

  for (int k = 0; k < N; k++)
  {
    std::cout << A[k];
    if (k != N - 1)
    {
      std::cout << " ";
    }
  }
  std::cout << std::endl;
  std::cout << swapCount << std::endl;
}

int main(int argc, char *argv[])
{
  int N, i, j;
  int A[100];

  scanf("%d", &N);
  for (i = 0; i < N; i++)
    scanf("%d", &A[i]);

  bubbleSort(A, N);

  return 0;
}

