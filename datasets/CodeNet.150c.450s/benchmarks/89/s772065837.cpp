#include <iostream>
using namespace std;
const int MAX = 1000000;
int main(){
  int prime[MAX] = { 0 };
  int a, d, n;
  for ( int i = 0; i < MAX; i++ ) prime[i] = 1;
  prime[0] = 0;
  prime[1] = 0;
  for ( int i = 2; i < MAX; i++ ){
    if ( prime[i] ){
      for ( int j = i * 2; j < MAX; j += i ){
	prime[j] = 0;
      }
    }
  }
  while ( 1 ){
    cin >> a >> d >> n;
    if ( a == 0 && d == 0 && n == 0 ) break;
    int i;
    for( i = a; n > 0; i += d ){
      if ( prime[i] ){
	n--;
      }
    }
    cout << i - d << endl;
  }
  return 0;
}