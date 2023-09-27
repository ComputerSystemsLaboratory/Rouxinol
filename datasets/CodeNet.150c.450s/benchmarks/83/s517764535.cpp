 #include <iostream>
#include <utility>
#include <string>
#include <algorithm>
#include <set>
#include <vector>
#define rep(i,p) for(int i=0;i<p;i++)
#define pb push_back
using namespace std;
int N,W,temp1,temp2;
std::vector<int> v;
std::vector<int> w;
int dp[150][10100] = {0};
int main(){
  cin >> N >> W;

  v.pb(0);
  w.pb(0);

  rep(i,N) {
    cin >> temp1 >> temp2;
    v.pb(temp1); // ??????
    w.pb(temp2); // ??????
  }

  for (int i=1; i<=N; i++)
    for (int c=1; c<=W; c++) {
      temp1 = v.at(i);
      temp2 = w.at(i);
      if (c-temp2 < 0)
        dp[i][c] = dp[i-1][c];
      else
        dp[i][c] = max(temp1+dp[i-1][c-temp2],dp[i-1][c]);
    }
  // rep(i,N+1) {
  //   rep(c,W+1) cout << dp[i][c] << " ";
  //   cout << endl;
  // } 
  cout << dp[N][W] << endl;
  return 0;
}