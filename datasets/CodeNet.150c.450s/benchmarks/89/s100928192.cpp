#include <iostream>

using namespace std;

int main()
{
  constexpr int N = 1000000;

  bool is_not_prime[N] = { true, true };
  bool is_prime[N] = {};
  for( int i=2; i<N; ++i ) {
    if ( is_not_prime[i] )
      continue;

    is_prime[i] = true;

    for( int j=i; j<N; j+=i ) {
      is_not_prime[j] = true;
    }
  }


  int a, d, n;
  while( cin >> a >> d >> n ) {
    if ( a == 0 && d == 0 && n == 0 )
      break;

    int val = 0;
    for( int i=0, index=0; index<n; ++i ) {
      val = a + i * d;
      if ( is_prime[val] )
        ++index;
    }

    cout << val << endl;
  }
}