#include <iostream>
#include <stdio.h>
void swap(int *a, int *b){

  int v = *a;
  
  *a = *b;

  *b = v;
}

int bubblesort(int *A, int N){

  int count = 0;
  int i,j;
  for(j = 1; j < N; j++){
    for(i = N-1; i >= j ;i--){
      if(A[i] < A[i-1]){
	swap(&A[i],&A[i-1]);
	count++;
      }
    }
  }
  return count;
}


int main(void){

  int N;
  int i;
  int c;

  while(~scanf("%d",&N)){
    
    int *A = new int[N];
    
    for(i=0;i < N;i++) scanf("%d", &A[i]);
    
    c = bubblesort(A, N);
    
    std::cout << A[0];
    for(i=1;i < N;i++){
      std::cout << " " << A[i]; 
    }
    std::cout << std::endl;
    std::cout << c << std::endl;
    
    delete []A;

  }
  
  return 0;
}