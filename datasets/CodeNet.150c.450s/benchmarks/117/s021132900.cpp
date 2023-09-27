#include<iostream>
#include<string>
#include<math.h>
#include<iomanip>
using namespace std;

int cnt = 0;

void merge(int *A, int left, int mid, int right){
  int n1 = mid - left;
  int n2 = right - mid;

  int *L = new int[n1 + 1];
  int *R = new int[n2 + 1];

  for(int i = 0; i < n1; i++){
    L[i] = A[left + i];
  }

  for(int i = 0; i < n2; i++){
    R[i] = A[mid + i];
  }

  L[n1] = 1000000000;
  R[n2] = 1000000000;

  int i = 0, j = 0;

  for(int k = left; k < right; k++){
    if(L[i] <= R[j]){
      A[k] = L[i];
      i++;
    }
    else{
      A[k] = R[j];
      j++;
    }
    cnt++;
  }

  delete[] L;
  delete[] R;
}


void mergesort(int *A, int left, int right){
  if(left + 1 < right){
    int mid = (left + right) / 2;
    mergesort(A, left, mid);
    mergesort(A, mid, right);
    merge(A, left, mid, right);
  }
}

int main(){

  int n;

  cin >> n;
  int *A = new int[n];

  for(int i = 0; i < n; i++){
    cin >> A[i];
  }


  mergesort(A, 0, n);

  for(int i = 0; i < n - 1; i++){
    cout << A[i] << ' ';
  }

  cout << A[n - 1] << endl << cnt << endl;


  delete[] A;
  return 0;
}

