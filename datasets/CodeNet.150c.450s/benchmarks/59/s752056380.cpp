#include <iostream>
#include <climits>
#include <stdio.h>

void insertionSort(int A[], int N)
{
  for (int i = 0; i <= N - 1; i++)
  {
    int v = A[i];
    int j = i - 1;
    while (j >= 0 && A[j] > v)
    {
      A[j + 1] = A[j];
      j--;
    }
    A[j + 1] = v;

    for (int k = 0; k < N; k++)
    {
      std::cout << A[k];
      if (k != N - 1)
      {
        std::cout << " ";
      }
    }
    std::cout << std::endl;
  }
}

int main(int argc, char *argv[])
{
  int N, i, j;
  int A[100];

  scanf("%d", &N);
  for (i = 0; i < N; i++)
    scanf("%d", &A[i]);

  insertionSort(A, N);

  return 0;
}

