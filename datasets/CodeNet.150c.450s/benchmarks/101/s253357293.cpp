#include <iostream>
#include <cstdio>
#include <climits>
#include <cmath>
#include <algorithm>
#include <utility>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#define MAX 100000
#define INFTY 1<<30 // 2^30
using namespace std;
typedef long long llong;

static const int NIL = -1;

int n;
vector<int> G[MAX];
int color[MAX];

void dfs(int r, int c)
{
  stack<int> S;
  S.push(r);
  color[r] = c;
  while(!S.empty())
  {
    int u = S.top(); S.pop();
    for(int i = 0; i < G[u].size(); i++)
    {
      int v = G[u][i];
      if(color[v] == NIL)
      {
        color[v] = c;
        S.push(v);
      }
    }
  }
}

void assingColor()
{
  int id = 1;
  for(int i = 0; i < n; i++) color[i] = NIL;
  for(int u = 0; u < n; u++)
    if(color[u] == NIL) dfs(u,id++);
}

int main()
{
  int s, t, m ,q;
  cin >> n >> m;
  for(int i = 0; i < m; i++)
  {
    cin >> s >> t;
    G[s].push_back(t);
    G[t].push_back(s);
  }

  assingColor();

  cin >> q;
  for(int i = 0; i < q; i++)
  {
    cin >> s >> t;
    cout << ((color[s] == color[t]) ? "yes" : "no") << endl;
  }
  return 0;
}