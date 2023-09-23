#include <bits/stdc++.h>
using namespace std;
  
// #define int long long
#define pb push_back
#define print(Target) cout << Target << '\n'
#define REP(i, n) for (int i = 0; i < (n); i++)
#define REPS(i, a, n) for (int i = (a); i < (n); i++)

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<vector<int> > vii;

bool is_uruu(int y) {return (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0));}

signed main()
{
  ios::sync_with_stdio(false);
    
  int a, b;
  while (cin >> a >> b, a || b){
    int n, dp[17][17] = {0};
    bool check[17][17] = {false};
    cin >> n;
    REP(i, n){
      int x, y;
      cin >> x >> y;
      check[y][x] = true;
    }

    dp[1][1] = 1;
    REPS(i, 1, b + 1){
      REPS(j, 1, a + 1){
        if (!check[i][j] && (i != 1 || j != 1)){
          dp[i][j] = dp[i][j - 1] + dp[i - 1][j];
        }
      }
    }
    print(dp[b][a]);
  }

  return (0);
}