// ?????????Coin Changing Problem
#include <iostream>
#include <utility>
#include <string>
#include <algorithm>
#include <set>
#include <deque>
#include <vector>
#define MAX 50010
#define rep(i,p) for(int i=0;i<p;i++)
#define pb push_back
using namespace std;
int n,m,temp;
std::vector<int> C;
int dp[MAX];
int main(){
  cin >> n >> m;
  rep(i,m) {
    cin >> temp;
    C.pb(temp);
  }
  rep (i,n+10) dp[i] = MAX; 
  dp[0] = 0;
  for (int i=0; i<m ; i++)
    for (int j=C.at(i); j<=n; j++)
      dp[j] = min(dp[j],dp[j-C.at(i)]+1);
  cout << dp[n] << endl;
  return 0;
}