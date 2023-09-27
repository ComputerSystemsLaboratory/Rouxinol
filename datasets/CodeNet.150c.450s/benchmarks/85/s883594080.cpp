#include <bits/stdc++.h>
#define INF 1000000001
using namespace std;
typedef long long ll;

int main()
{
  ll N;
  cin >> N;
  vector<pair<ll, ll>> M(N);
  for (ll i = 0; i < N; ++i)
  {
    cin >> M.at(i).first >> M.at(i).second;
  }
  vector<vector<ll>> dp(N, vector<ll>(N, INF));
  for (ll i = 0; i < N; ++i)
  {
    dp.at(i).at(i) = 0;
  }
  for (ll i = 0; i < N - 1; ++i)
  {
    dp.at(i).at(i + 1) = M.at(i).first * M.at(i).second * M.at(i + 1).second;
  }

  for (ll width = 1; width < N; ++width)
  {
    for (ll l = 0; l < N - width; ++l)
    {
      ll r = l + width;
      for (ll m = l + 1; m < r + 1; ++m)
      {
        dp.at(l).at(r) = min(dp.at(l).at(r), dp.at(l).at(m - 1) + dp.at(m).at(r) + M.at(l).first * M.at(m - 1).second * M.at(r).second);
      }
    }
  }
  cout << dp.at(0).at(N - 1) << endl;
  // for (ll i = 0; i < N; ++i)
  // {
  //   for (ll j = 0; j < N; ++j)
  //   {
  //     cout << dp.at(i).at(j) << ' ';
  //   }
  //   cout << endl;
  // }
}

