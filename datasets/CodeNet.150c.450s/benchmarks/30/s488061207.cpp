#include <iostream>
#include <climits>
#include <stdio.h>

void selectionSort(int A[], int N)
{
  int swapCount = 0;
  for (int i = 0; i <= N - 1; i++)
  {
    int mini = i;
    for (int j = i; j <= N - 1; j++)
    {
      if (A[j] < A[mini])
      {
        mini = j;
      }
    }
    std::swap(A[i], A[mini]);
    if (i != mini)
      swapCount++;
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

  selectionSort(A, N);

  return 0;
}

