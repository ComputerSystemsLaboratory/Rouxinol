#include <bits/stdc++.h>

using namespace std;

/*-------------------------------*/
#define FOR(i, a, b) for(int i = (a); i < (b); i++)  //a~(b - 1)?????§
#define all(i) (i).begin(),(i).end() //??¨??????(sort??¨???)
#define mp make_pair //mp(OO, OO)??¨???:::pint??¨???

typedef long long ll;
typedef pair<int, int> pint;
typedef vector<int> vi;
typedef vector<vector<int> > vii;
typedef vector<long long> llv;
typedef vector<pint> vpint;
/*-------------------------------*/

int main(void)
{
  int n; cin >> n;
  int dp[45] = {};
  dp[0] = 1; dp[1] = 1;

  FOR(i, 2, 45){
    dp[i] = dp[i - 1] + dp[i - 2];
  }
  cout << dp[n] << endl;
  return 0;
}