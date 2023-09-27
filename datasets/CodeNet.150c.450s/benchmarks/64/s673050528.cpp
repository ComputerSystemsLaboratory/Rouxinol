#include <iostream>
using namespace std;

int n,q,Mi,A[1000];

// mがつくれるかどうか判定
int check ( int i , int m ) {
  if ( m == 0 ) return 1; //mがつくれる場合
  if ( i >= n ) return 0; //mがつくれない場合
  int rec = check ( i + 1, m ) || check ( i + 1, m - A[i] );
  //i番目の要素を選ぶか選ばないかで場合分け
  return rec;
}

int main() {
  
  cin >> n;
  for ( int i = 0; i < n; i++ ) cin >> A[i];

  cin >> q;
  for ( int i = 0; i < q; i++ ) {
    cin >> Mi;
    if ( check( 0, Mi ) ) cout << "yes" << endl;
    else cout << "no" << endl;
  }
  
  return 0;
}