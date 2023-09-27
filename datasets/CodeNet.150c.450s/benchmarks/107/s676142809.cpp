#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define ALL(a)  (a).begin(),(a).end()
#define SZ(a) int((a).size())
#define SORT(c) sort((c).begin(),(c).end())
#define PB push_back
#define MP make_pair
#define MEMSET(v, h) memset((v), h, sizeof(v))
#define sqr(x)  ((x) * (x)) 
#define cub(x)  ((x) * (x) * (x))
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
// int gcd(int a,int b){return b?gcd(b,a%b):a;}

int dp[1010][1010];

int main() {
  string s1,s2; cin >> s1 >> s2;

  FOR(i,0,s1.length()) dp[i][0] = i;
  FOR(i,0,s2.length()) dp[0][i] = i;

  FOR(i,1,s1.length()){
    FOR(j,1,s2.length()){
      int x = 1;
      if(s1[i-1]==s2[j-1]) x = 0;
      dp[i][j] = min({dp[i-1][j-1] + x, dp[i-1][j] + 1, dp[i][j-1] + 1});
    }
  }

  cout << dp[s1.length()][s2.length()] << endl;
}


