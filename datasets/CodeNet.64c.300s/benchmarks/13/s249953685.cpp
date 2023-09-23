#include <bits/stdc++.h>
using namespace std;
 
// #define int long long
 
/* short */
#define pb push_back
#define print(x) cout << x << '\n'
 
/* REPmacro */
#define REP(i, n) for (int i = 0; i < (n); i++)
#define REPS(i, a, n) for (int i = (a); i < (n); i++)
 
/* typedef */
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<vector<int> > vii;
typedef pair<int, int> pii;

/* const */
const int INF = INT_MAX;
const int dx[] = {0, 1, 0, -1}, dy[] = {1, 0, -1, 0};

/* func */
inline bool is_uruu(int y) {return (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0));}

int dp[45];

int fibo(int n)
{
  if (dp[n] != -1){
    return (dp[n]);
  }

  if (n == 0 || n == 1){
    return (1);
  }
  return (dp[n] = fibo(n - 1) + fibo(n - 2));
}

signed main()
{
  ios::sync_with_stdio(false);
  int n;
  cin >> n;
  fill(dp, dp + 45, -1);
  print(fibo(n));
  return (0);
}