#include <bits/stdc++.h>
#define INF 1000000000000000001
#define ll long long
using namespace std;


int main()
{
  string X, Y;
  cin >> X >> Y;
  ll x = X.size(), y = Y.size();
  vector<vector<ll>> dp(x + 1, vector<ll>(y + 1, INF));
  for (ll i = 0; i < x; ++i)
  {
    dp.at(i).at(0) = i;
  }
  for (ll j = 0; j < y; ++j)
  {
    dp.at(0).at(j) = j;
  }
  // dp.at(1).at(0) = 1;
  // dp.at(0).at(1) = 1;
  for (ll i = 0; i < x; ++i)
  {
    for (ll j = 0; j < y; ++j)
    {
      // 削除
      dp.at(i + 1).at(j + 1) = min(dp.at(i + 1).at(j + 1), dp.at(i + 1).at(j) + 1);
      dp.at(i + 1).at(j + 1) = min(dp.at(i + 1).at(j + 1), dp.at(i).at(j + 1) + 1);
      //変更
      dp.at(i + 1).at(j + 1) = min(dp.at(i).at(j) + 1, dp.at(i + 1).at(j + 1));
      //一致
      if (X.at(i) == Y.at(j))
      {
        dp.at(i + 1).at(j + 1) = min(dp.at(i).at(j), dp.at(i + 1).at(j + 1));
      }
    }
  }
  cout << dp.at(x).at(y) << endl;
  // for (ll i = 0; i < min(x, y) + 1; ++i)
  // {
  //   cout << dp.at(i).at(i) << endl;
  // }
  // cout << dp.at(10).at(y) << endl;
  // for (ll i = 0; i < x + 1; ++i)
  // {
  //   for (ll j = 0; j < y + 1; ++j)
  //   {
  //     cout << dp.at(i).at(j) << ' ';
  //   }
  //   cout << endl;
  // }
}

