#include<iostream>
using namespace std;

int main(){
  int n, x, z, s = 0;
  int S[100000] ={};

  for( int h = 0; 1; h++) {
    cin >> n >> x;
    if( n == 0 && x == 0) break;
    
    for( int i = 1; i <= n - 2; i++){
      for( int j = 1 + i; j <= n - 1; j++){
        for( int k = 1 + j; k <= n; k++){
          if( i + j + k == x) s++;
        }
      }
    }
    S[h] = s;
    s = 0;
    z = h;
  }

  for( int h = 0; h <= z; h++) {
    cout << S[h] << endl;
  }

  return 0;
}