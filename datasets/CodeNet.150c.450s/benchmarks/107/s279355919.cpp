#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vvi vector<vector<int>>
#define vec vector
#define pq priority_queue
#define all(v) (v).begin(), (v).end()
#define uniqueV(x) sort(x.begin(), x.end()); x.erase(unique(x.begin(), x.end()), x.end());
#define rep(i, n) for (int (i) = (0); (i) < (n); ++(i))
#define repp(i, m, n) for (int (i) = (m); (i) < (n); ++(i))
#define dbg(x) cerr << #x << ": " << x << endl;
#define dbg2(x, y) cerr<<"("<<#x<<", "<<#y<<") = "<<"("<<x<<", "<<y<<")"<<endl;
#define dbg3(x, y, z) cerr<<"("<<#x<<", "<<#y<<", "<<#z<<") = "<<"("<<x<<", "<<y<<", "<<z<<")"<<endl;
#define dbgB(value, size) cerr<<#value<<": "<<bitset<size>(value) << endl;
#define line() cerr << "---------------" << endl;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, -1, 1};
const double PI = 3.14159265358979323846;

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }

template<typename T>
void printA(vector<T> &printArray, char between = ' ') {
   int paSize = printArray.size();
   for (int i = 0; i < paSize; i++) { cerr << printArray[i] << between;}
   if (between != '\n') {cerr << endl;}
}

// ------------------------------------------------------------------------------------------

int dp[11111][11111];
string s, t;

void print() {
   int n = s.size(), m = t.size();
   rep (i, n+1) {
      rep (j, m+1) {
         printf("%2lld ", dp[i][j]);
      }
      puts("");
   }
}

int dist() {
   s = "*" + s;
   t = "*" + t;
   int n = s.size(), m = t.size();
   rep (i, n) { dp[0][i] = i; }
   rep (i, m) { dp[i][0] = i; }

   repp (i, 1, n) {
      repp (j, 1, m) {
         int cost = dp[i-1][j-1] + (s[i] == t[j] ? 0 : 1);
         dp[i][j] = min({dp[i-1][j]+1, dp[i][j-1]+1, cost});
      }
   }

   return dp[n-1][m-1];
}

signed main() {
   cin >> s >> t;
   fill(dp[0], dp[1010], 1 << 28);
   dp[0][0] = 0;
   dp[0][0] = 0;
   int N = s.size(), M = t.size();
   rep (i, N+1) dp[i][0] = i;
   rep (i, M+1) dp[0][i] = i;

   rep (i, N) {
      rep (j, M) {
         dp[i+1][j+1] = min({dp[i][j+1]+1, dp[i+1][j]+1, dp[i][j] + (s[i] != t[j])});
      }
   }

   cout << dp[N][M] << endl;

   return 0;
}
