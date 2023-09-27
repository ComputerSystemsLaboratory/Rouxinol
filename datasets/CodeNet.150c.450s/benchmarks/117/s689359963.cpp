#include <iostream>
#include <stdlib.h>

using namespace std;

#define MAX 500000
#define INF 1500000000

int cnt = 0;

void merge(int _array[],int _left,int _mid,int _right){

  int i;
  int j;
  int k;
  int n1;
  int n2;
  int *L;
  int *R;
  n1 = _mid-_left;
  n2 = _right-_mid;

  L = (int *)malloc(sizeof(int)*n1+1);
  R = (int *)malloc(sizeof(int)*n2+1);

  for(i = 0;i < n1;i++){
    L[i] = _array[_left+i];
  }
  for(i = 0;i < n2;i++){
    R[i] = _array[_mid+i];
  }

  L[n1] = INF;
  R[n2] = INF;

  for(i = 0,j =0,k = _left;k < _right;k++,cnt++){
    if(L[i] <= R[j]){
      _array[k] = L[i];
      i++;
    }
    else {
      _array[k] = R[j];
      j++;
    }
  }
  free(L);
  free(R);
}

void mergeSort(int _array[],int _left,int _right){

  int mid;

  if(_left+1 < _right){
    mid = (_left+_right)/2;
    mergeSort(_array,_left,mid);
    mergeSort(_array,mid,_right);
    merge(_array,_left,mid,_right);
  }

}

int main(){

  int i;
  int n;
  int A[MAX];

  cin >> n;

  for(i = 0;i < n;i++){
    cin >> A[i];
  }

  mergeSort(A,0,n);

  for(i = 0;i < n-1;i++){
    cout << A[i] << ' ';
  }
  cout << A[n-1] << endl;

  cout << cnt << endl;

  return 0;

}