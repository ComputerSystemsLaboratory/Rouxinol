#include <bits/stdc++.h>

using namespace std;

/*-------------------------------*/
#define FOR(i, a, b) for(int i = (a); i < (b); i++)  //a~(b - 1)?????§
#define print(i) cout << i << endl //?°??????????Python?????????
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
  int n;
  int dp[35] = {1, 1, 2};

  FOR(i, 3, 31){
    dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
  }

  while (cin >> n){
    if (n == 0) break;
    cout << dp[n] / 10 / 365 + 1 << endl;
  }

  return 0;
}