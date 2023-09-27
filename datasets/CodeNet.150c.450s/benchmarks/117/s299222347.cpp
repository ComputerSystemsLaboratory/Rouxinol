#include <iostream>
using namespace std;
#define INFTY 1000000001

int cnt = 0;

void merge(int *A, int left, int mid, int right) {
  int n1 = mid - left;
  int n2 = right - mid;
  int *L, *R;
  L = new int[n1+1];
  R = new int[n2+1];
  
  for (int i = 0; i < n1; i++) L[i] = A[left+i];
  for (int i = 0; i < n2; i++) R[i] = A[mid+i];
  L[n1] = INFTY;
  R[n2] = INFTY;
  
  int i = 0, j = 0;
  for (int k = left; k < right; k++) {
    if (L[i] <= R[j]) {
      A[k] = L[i++];
    } else {
      A[k] = R[j++];
    }
    cnt++;
  }
  
  delete[] L;
  delete[] R;
}

void msort(int *A, int left, int right) {
  if (right - left > 1) {
    int mid = (left + right) / 2;
    msort(A, left, mid);
    msort(A, mid, right);
    merge(A, left, mid, right);
  }
}

int main(void){
  int A[500000], n;
  
  cin >> n;
  for (int i = 0; i < n; i++) cin >> A[i];
  
  msort(A, 0, n);
  
  for (int i = 0; i < n; i++) {
    if (i != 0) cout << " ";
    cout << A[i];
  }
  cout << endl;
  cout << cnt << endl;
  
  return 0;
}