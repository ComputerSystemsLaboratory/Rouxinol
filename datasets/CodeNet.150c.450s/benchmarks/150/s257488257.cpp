#include<iostream>
#include<algorithm>
#include<cstdlib>

using namespace std;

int n;

void countingSort(int *A, int *B, int k){
  int C[10010] = {};

  for(int i = 1;i <= n;i++) C[A[i]]++;
  for(int i = 1;i <= k;i++) C[i] += C[i - 1];
  for(int i = n;i >= 1;i--){
    B[C[A[i]]] = A[i];
    C[A[i]]--;
  }
}

int main(){

  int k = 0;
  int *a, *b;

  cin >> n;
  a = (int *)malloc(sizeof(int) * n + 1);
  b = (int *)malloc(sizeof(int) * n + 1);
  for(int i = 1;i <= n;i++){
    cin >> a[i];
    k = max(k, a[i]);
  }

  countingSort(a, b, k);

  for(int i = 0;i < n;i++){
    cout << (i?" ":"");
    cout << b[i + 1];
  }
  cout << endl;

  return 0;
}

