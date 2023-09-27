#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <map>
#include <stack>
#include <queue>
#include <set>
#include <cstring>

using namespace std;
// ascending order
#define vsort(v) sort(v.begin(), v.end())
// descending order
#define vsort_r(v) sort(v.begin(), v.end(), greater<int>())
#define vunique(v) v.erase(unique(v.begin(), v.end()), v.end())
#define mp make_pair
#define ts(x) to_string(x)
#define rep(i, a, b) for(int i = (int)a; i < (int)b; i++)
#define repm(i, a, b) for(int i = (int)a; i > (int)b; i--)
#define bit(a) bitset<8>(a)
#define des_priority_queue priority_queue<int, vector<int>, greater<int> >
typedef long long ll;
typedef pair<int, int> P;
const ll INF = 1e18;

#define MAX_V 1000000

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);

  string s1, s2;
  cin >> s1 >> s2;

  int dp[s1.size() + 1][s2.size() + 1];
  memset(dp, 0, sizeof(dp));
  rep(i, 0, s1.size() + 1) dp[i][0] = i;
  rep(j, 0, s2.size() + 1) dp[0][j] = j;

  rep(i, 0, s1.size()) {
    rep(j, 0, s2.size()) {
      if(s1[i] == s2[j]) {
        dp[i + 1][j + 1] = dp[i][j];
      } else {
        dp[i + 1][j + 1] = min(dp[i][j] + 1, min(dp[i + 1][j] + 1, dp[i][j + 1] + 1));
      }
    }
  }
  cout << dp[s1.size()][s2.size()] << endl;
}

