#include <iostream>
using namespace std;

int C[2000001];
unsigned short A[2000001], B[2000001];

int main() {
  
  int n; cin >> n;
  
  //初期化
  for ( int i = 0; i <= 10000; i++ ) {
    C[i] = 0;
  }

  //カウント
  for ( int i = 1; i <= n; i++ ) {
    cin >> A[i];
    C[A[i]]++;
  }

  //累積和を求める
  for ( int i = 1; i <= 10000; i++ ) {
    C[i] = C[i] + C[i-1];
  }

  //後ろから要素をコピー
  for ( int j = n; j >= 1; j-- ) {
    B[C[A[j]]] = A[j];
    C[A[j]]--;
  }


  int i;
  for ( i = 1; i < n; i++ ) {
    cout << B[i] << " ";
  }
  cout << B[i] << endl;
  return 0;
}