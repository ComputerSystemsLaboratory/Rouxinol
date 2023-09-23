#include <iostream>
#include <math.h>
using namespace std;

int main(){
  int n ,x=0 ,hoge[1000000]={} ,ans=0;
  while( cin >> n ){
    for( int i=2 ; i<=sqrt(n) ; i++ ){
      for( int j=i*2 ; j<=n ; j+=i ){
	hoge[j] = 1;
      }
    }
    
    for( int i=2 ; i<=n ; i++ ){
      if( hoge[i] == 0 ) ans++;
    }
    cout << ans << endl;
    ans = 0;
  }
}
  