#include<bits/stdc++.h>
using namespace std;

int N;

int func( int bef, int sum ) {
  if( sum == N ) return 1;
  if( sum > N ) return 0;
  return func( bef + 1, sum + bef + 1 );
}

int main()
{
  while( cin >> N, N ) {
    int ans = 0;
    for(int i=1; i<=N/2; i++) {
      ans += func( i, i );
    }

    cout << ans << endl;
  }
}