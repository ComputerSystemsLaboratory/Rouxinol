#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;
  int A[N];
  for(int i=0;i<N;i++){
    cin >> A[i];
  }

  int v,k;
  for(int j=1;j<=N;j++){
    for(int l=0;l<N-1;l++){
      cout << A[l] << " ";
    }
    cout << A[N-1] << endl;
    v = A[j];
    k = j - 1;
    while( k>=0 && A[k]>v){
      A[k+1] = A[k];
      k--;
    }
    A[k+1] = v;
  }
  
  return 0;
}