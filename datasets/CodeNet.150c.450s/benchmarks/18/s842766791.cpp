#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  int ans = 100000;
  cin >> n;
  while( n-- ) {
    ans += ans / 100 * 5;
    if( ans % 1000 > 0 ) {
      ans = ans / 1000 * 1000;
      ans += 1000;
    }
  }

  cout << ans << endl;
}