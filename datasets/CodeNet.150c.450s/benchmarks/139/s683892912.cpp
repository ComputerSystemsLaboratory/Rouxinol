#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  int n, m;
  cin >> n >> m;
  vector<vector<int>> to(n);
  for (int i = 0; i < m; i++)
  {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    to[a].push_back(b);
    to[b].push_back(a);
  }

  queue<int> q;
  vector<int> dist(n, -1);
  vector<int> pre(n, -1);

  dist[0] = 0;
  q.push(0);

  while (!q.empty())
  {
    int v = q.front();
    q.pop();
    for (int i : to[v])
    {
      if (dist[i] != -1)
      {
        continue;
      }
      dist[i] = dist[v] + 1;
      pre[i] = v;
      q.push(i);
    }
  }

  cout << "Yes" << endl;
  for (int i = 0; i < n; i++)
  {
    if (i == 0)
    {
      continue;
    }
    int ans = pre[i];
    ans++;
    cout << ans << endl;
  }
}
