#include <iostream>
#include <stdio.h>

using namespace std;

static const int maxN = 100;

void swap(int* a, int* b)
{
  int p = *a;
  *a = *b;
  *b = p;
  return ;
}

void printarray(int* array,int length)
{
  for(int i = 0; i < length-1; i++)
  {
    printf("%d ",array[i]);
  }
  printf("%d\n",array[length-1]);
}

int bubblesort(int* A, int N)
{
  int sc = 0;
  for(int i = 0; i < N-1; i++)
  {
    //printarray(A,N);
    for (int j = N-1 ; j > i; j--)
    {
      if(A[j] < A[j-1])
      {
        swap(&A[j],&A[j-1]);
        sc++;
      }
    }
  }
  return sc;
}

int main()
{
  int N;
  int A[maxN];

  cin >> N;

  for(int i = 0; i < N; i++)
  {
    cin >> A[i];
  }

  int swap_count = bubblesort(A,N);

  printarray(A,N);
  printf("%d\n",swap_count);

  return 0;
}

