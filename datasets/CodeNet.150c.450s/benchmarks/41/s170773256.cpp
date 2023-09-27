#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, a, b) for (int i = int(a); i < int(b); ++i)
typedef long long ll;
long long mod = 1e9 + 7;
const long long INF = 0x3f3f3f3f3f3f3f3f;
using namespace std;

template <class T>
inline bool chmin(T &a, T b)
{
  if (a > b)
  {
    a = b;
    return true;
  }
  return false;
}

template <class T>
inline bool chmax(T &a, T b)
{
  if (a < b)
  {
    a = b;
    return true;
  }
  return false;
}

int main()
{
  int V, E;
  cin >> V >> E;

  ll d[110][110];
  memset(d, 0x3f, sizeof(d));

  rep(i, V)
  {
    rep(j, V)
    {
      d[i][j] = INF;
    }
    d[i][i] = 0;
  }

  rep(i, E)
  {
    int s, t, dist;
    cin >> s >> t >> dist;
    d[s][t] = dist;
  }

  rep(k, V) rep(i, V) rep(j, V)
  {
    if (d[i][k] != INF && d[k][j] != INF)
      d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
  }

  rep(i, V)
  {
    rep(j, V)
    {
      if (d[i][i] != 0)
      {
        cout << "NEGATIVE CYCLE" << endl;
        return 0;
      }
    }
  }

  rep(i, V)
  {
    rep(j, V)
    {
      if (d[i][j] >= INF)
        cout << "INF";
      else if (i == j)
        cout << 0;
      else
        cout << d[i][j];
      if (j != V - 1)
        cout << " ";
    }
    cout << endl;
  }

  return 0;
}
