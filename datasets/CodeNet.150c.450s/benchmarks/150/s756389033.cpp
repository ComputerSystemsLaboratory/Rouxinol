#include <iostream>
using namespace std;

int n, A[2000001], B[2000001];

void CountingSort(int A[], int B[], int n){
  int C[10010] = {0};
  for(int i=0;i<n;i++){
    C[A[i]]++;
  }
  for(int j=1;j<10001;j++){
    C[j] += C[j-1];
  }
  for(int i=0;i<n;i++){
    B[C[A[i]]] = A[i];
    C[A[i]]--;
  }
}

int main(){
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> A[i];
  }

  CountingSort(A, B, n);

  for(int i=1;i<=n;i++){
    if(i-1) cout << " ";
    cout << B[i];
  }
  cout << endl;
  return 0;
}

