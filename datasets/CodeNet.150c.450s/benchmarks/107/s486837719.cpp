
#include<cstring>
#include<string>
#include<vector>
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<stack>
#include<queue>
#include<cmath>
#include<algorithm>
#include<list>
#include<set>
#include<map>
#include<sstream>
#include<climits>
#define rep(X,Y) for (int (X) = 0;(X) < (Y);++(X))
#define rrep(X,Y) for (int (X) = (Y)-1;(X) >=0;--(X))
#define all(X) (X).begin(),(X).end()
#define fi first
#define sc second
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
const int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};

const int MAX = 1000, INF = 1e9;
int dp[MAX+1][MAX+1];

int main() {
  string str1, str2;
  cin >> str1 >> str2;

  int s1 = (int)str1.size(), s2 = (int)str2.size();

  rep(j,s2+1) dp[0][j] = j;
  rep(i,s1+1) dp[i][0] = i;
  
  for (int i = 1; i <= s1; ++i) {
    for (int j = 1; j <= s2; ++j) {
      int t = INF;
      if (str1[i-1] == str2[j-1]) t = min(t, dp[i-1][j-1]);
      else t = min(t, dp[i-1][j-1]+1);
      t = min(t, dp[i-1][j]+1);
      t = min(t, dp[i][j-1]+1);
      dp[i][j] = t;
    }
  }

  cout << dp[s1][s2] << endl;

  return 0;
}