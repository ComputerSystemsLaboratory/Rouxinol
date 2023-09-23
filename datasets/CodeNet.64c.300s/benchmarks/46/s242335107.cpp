#include <iostream>
using namespace std;
#define N 1000000
int main(){
  int a,d,n;
  bool is_prime[N];

  for( int i=0;i<N;i++ )
    is_prime[i] = true;

  is_prime[0] = is_prime[1] = false;
  for( int i=2;i<N;i++ ){
    if( !is_prime[i] )
      continue;
    for( int j = 2*i; j<N;j+=i )
      is_prime[j] = false;
  }

  while(cin>>a>>d>>n,a){
    while( n ){
      if( is_prime[a] ){
	n--;
	if( !n )
	  break;
      }

      a += d;
    }
    cout << a << endl;
  }

  return 0;
}