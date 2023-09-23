#include <bits/stdc++.h>
using namespace std;

int ans,sum;

void dfs( int i, int s, int n ) {
  
  if ( s == sum && n== 0 ) {
    ans++;
    return;
  }

  if ( i == 10 || n == 0 ) return;


  dfs(i+1,s+i,n-1);
  dfs(i+1,s,n);
}

int main() {
  int n;
  while ( cin >> n >> sum, n || sum ) {
    ans = 0;
    dfs(0,0,n);
    cout << ans << endl;
  }
  return 0;
}