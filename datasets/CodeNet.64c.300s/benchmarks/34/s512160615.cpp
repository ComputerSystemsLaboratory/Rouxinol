#include <iostream>
using namespace std;

const int MAX_N=100;

void print(int *A,int n){
  for(int j=0; j<n; j++){
    if(j==n-1) cout << A[j] << endl;
    else cout << A[j] << " ";
  }
}

int main(){
  int n;
  int A[MAX_N];
  int tmp;

  cin >> n;

  for(int i=0; i<n; i++){
    cin >> A[i];
  }

  print(A, n);
  for(int i=1; i<n; i++){
    tmp = A[i];
    int j=i-1;
    while(A[j]>tmp && j>=0){
      A[j+1] = A[j];
      j--;
    }
    A[j+1] = tmp;
    print(A, n);
  }
}

