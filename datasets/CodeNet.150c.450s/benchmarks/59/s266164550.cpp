#include <iostream>
#include <stdio.h>

using namespace std;

static const int maxN = 100;

void printarray(int* array,int length)
{
  for(int i = 0; i < length-1; i++)
  {
    printf("%d ",array[i]);
  }
  printf("%d\n",array[length-1]);
}

void insertionSort(int* array, int length)
{
  printarray(array,length);

  for(int i = 1; i < length; i++)
  {
    int key = array[i];
    int j = i - 1;
    for(; j >= 0 & array[j] > key; j--  )
    {
      array[j+1] = array[j];
    }
    array[j+1] = key;

    printarray(array,length);
  }
  return ;
}
int main()
{
  int N;
  int A[maxN];

  cin >> N;
  for(int i = 0; i < N ; i++)
  {
    cin >> A[i];
  }

  insertionSort(A,N);

  return 0;

}

