#include <iostream>
using namespace std;

int S[10000],t;
int n,q;


//線形探索
bool lenearSearch(int key){

  for ( int i = 0; i < n; i++ ) {
    
  if ( key == S[i] ) return true;
  
  }
  
  return false;
  
}

int main() {

  int cnt = 0;
  cin >> n;
  for ( int i = 0; i < n; i++ ) cin >> S[i];
  cin >> q;
  for ( int i = 0; i < q; i++ ) {
    cin >> t;
    if ( lenearSearch(t) ) {
      cnt++;
    }
  }

  cout << cnt << endl;
  
  return 0;
}