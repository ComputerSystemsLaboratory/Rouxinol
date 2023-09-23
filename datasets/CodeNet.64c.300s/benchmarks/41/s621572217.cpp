#include <bits/stdc++.h>
using namespace std;

#define MAX 500000
int n;

void maxHeapify(int A[], int i){
  int l = 2*i;
  int r = l + 1;
  int m, tmp;

  if(l <= n && A[l] > A[i]) m = l;
  else m = i;

  if(r <= n && A[r] > A[m]) m = r;

  if(m != i){
    tmp = A[i];
    A[i] = A[m];
    A[m] = tmp;
    maxHeapify(A, m);
  }
}

void buildMaxHeap(int A[]){
  for(int i = n/2; i > 0; i--){
    maxHeapify(A,i);
  }
}

int main(){
  int A[MAX+1];

  cin >> n;

  for(int i = 1; i <= n; i++){
    cin >> A[i];
  }

  buildMaxHeap(A);

  for(int i = 1; i <= n; i++){
    cout << " " << A[i];
  }
  cout << endl;



}