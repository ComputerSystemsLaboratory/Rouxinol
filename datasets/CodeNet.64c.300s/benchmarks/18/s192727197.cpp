#include <bits/stdc++.h>
using namespace std;

// #define int long long

/* short */
#define pb push_back
#define print(Target) cout << Target << '\n'

/* REPmacro */
#define REP(i, n) for (int i = 0; i < (n); i++)
#define REPS(i, a, n) for (int i = (a); i < (n); i++)

/* typedef */
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<vector<int> > vii;
typedef pair<int, int> pii;

/* func */
inline bool is_uruu(int y) {return (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0));}

/* const */
const int INF = INT_MAX;

int dp[31];

int shinobu(int n)
{
  if (dp[n] != -1){
    return (dp[n]);
  }
  if (n == 1) return (1);
  if (n == 2) return (2);
  if (n == 3) return (4);
  return (shinobu(n - 1) + shinobu(n - 2) + shinobu(n - 3));
}

signed main()
{
  ios::sync_with_stdio(false);
  int n;

  while (cin >> n, n){
    fill(dp, dp + 31, -1);
    print(shinobu(n) / 3650 + 1);
  }
  return (0);
}