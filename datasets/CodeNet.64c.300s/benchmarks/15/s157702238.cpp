#include <iostream>
#include <stdio.h>
static const int Nmax = 100;

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

int selectionSort(int* A, int N){
  int i;
  int sc = 0;
  for (i = 0; i < N; i++){
    int min_index = i;
    int j;
    for(j = i; j < N; j++){
      if(A[j] < A[min_index]){
        min_index = j;
      }
    }
    if (min_index != i){
      swap(&A[i],&A[min_index]);
      sc++;
    }
    //printarray(A,N);
  }
  return sc;
}

int main(){
  int N;
  int A[Nmax];

  std::cin >> N;
  for(int i = 0; i < N; i ++){
    std::cin >> A[i];
  }
  int swap_count = selectionSort(A,N);
  printarray(A,N);
  printf("%d\n",swap_count);

  return 0;
}

