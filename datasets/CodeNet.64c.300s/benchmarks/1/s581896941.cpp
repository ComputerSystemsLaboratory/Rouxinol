#include <iostream>
#include <stdlib.h>

#define MAX 100000

using namespace std;

int partition(int A[],int p,int r){

  int i;
  int j;
  int x;
  int temp;

  x = A[r];
  i = p-1;

  for(j = p;j < r;j++){
    if(A[j] <= x){
      i = i+1;
      temp = A[i];
      A[i] = A[j];
      A[j] = temp;
    }
  }

  temp = A[i+1];
  A[i+1] = A[r];
  A[r] = temp;
  return i+1;
}

int main(){

  int i;
  int n;
  int q;
  int *A;

  A = (int*)malloc(sizeof(int)*MAX);

  cin >> n;

  for(i = 0;i < n;i++){
    cin >> A[i];
  }

  q = partition(A,0,n-1);

  for(i = 0;i < n-1;i++){
    if(i == q){
      cout << '[' << A[i] << "] ";
    }
    else{
      cout << A[i] << ' ';
    }
  }
  cout << A[n-1] << endl;

  free(A);

  return 0;
}