#include<iostream>
#include<map>
#include<string>
#include<vector>
using namespace std;
int inf = 10000000;

int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  for(int i=0; i<n; i++) cin >> a[i];

  vector< vector<bool> > dp(n, vector<bool> (2000*20+1, false));
  dp[0][ a[0] ] = true;
  for(int i=0; i<n-1; i++){
    dp[i+1][a[i+1]] = true;
    for(int j=0; j<dp[i].size(); j++){
      if( dp[i][j] ){
        dp[i+1][j] = true;
        if( j + a[i+1] < dp[i].size()-1 ) dp[i+1][j + a[i+1]] = true;
        // if( j - a[i+1] > 0) dp[i+1][j - a[i+1]] = true;
      }
    }
  }


  int q; cin >> q;
  for(int i=0; i<q; i++){
    int m;
    cin >> m;
    cout << ( dp[n-1][m] ? "yes" : "no" ) << endl;
  }

  // for(int i=0; i<dp[n-1].size(); i++) if( dp[n-1][i] ) cerr << i << endl;

  return 0;
}