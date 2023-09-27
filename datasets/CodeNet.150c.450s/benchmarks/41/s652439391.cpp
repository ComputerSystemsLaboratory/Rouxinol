#include<iostream>
#include<algorithm>
#define F first
#define S second
#define PII pair<pair<long long, long long>, long long>

using namespace std;

const long long MX = 1e18;
const int N = 200;
long long n, m, d[N], a, b, c, di[N][N];
PII p[10000];

int main() {
  cin >> n >> m;
  fill(d, d + n, MX);
  for(int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++)
      di[i][j] = MX;
  }
  for (int i = 0; i < N; i++)
    di[i][i] = 0;
  d[0] = 0;
  for (int i = 0; i < m; i++) {
    cin >> a >> b >> c;
    if (a == b && c < 0)
      return cout << "NEGATIVE CYCLE", 0;
    di[a][b] = min(di[a][b], c);
    p[i].F.F = a;
    p[i].F.S = b;
    p[i].S = c;
  }
  for (int i = 1; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if(d[p[j].F.S] > d[p[j].F.F] + p[j].S && d[p[j].F.F] != MX)
        d[p[j].F.S] = d[p[j].F.F] + p[j].S;
    }
  }
  for (int i = 0; i < m; i++) {
    if(d[p[i].F.S] > d[p[i].F.F] + p[i].S && d[p[i].F.F] != MX)
      return cout << "NEGATIVE CYCLE" << '\n', 0;
  }
  for (int k = 0; k < n; k++) {
    for (int v = 0; v < n; v++) {
      for (int u = 0; u < n; u++) {
        if (di[v][u] > di[v][k] + di[k][u] && di[v][k] != MX && di[k][u] != MX)
          di[v][u] = di[v][k] + di[k][u];
      }
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0;  j < n; j++) {
      di[i][j] == MX ? cout << "INF" : cout << di[i][j];
      if (j != n - 1)
        cout << ' ';
    }
    cout << '\n';
  }
}

