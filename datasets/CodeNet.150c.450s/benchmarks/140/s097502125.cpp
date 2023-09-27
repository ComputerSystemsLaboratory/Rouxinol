#include <bits/stdc++.h>
using namespace std;
#define INF 100000000000

int MAX_N = 10000;
vector<int> par(MAX_N);//MAX_N == num of node
vector<int> tree_rank(MAX_N);

void init(int n)
{
  for (int i = 0; i < n; ++i)
  {
    par.at(i) = i;
    tree_rank.at(i) = 0;
  }
}

int find(int x)
{
  if (par.at(x) == x)
  {
    return x;
  }
  else
  {
    return par.at(x) = find(par.at(x));
  }
}

void unite(int x, int y)
{
  x = find(x);
  y = find(y);
  if (x == y)
  {
    return;
  }
  if (tree_rank.at(x) < tree_rank.at(y))
  {
    par.at(x) = y;
  }
  else
  {
    par.at(y) = x;
    if (tree_rank.at(x) == tree_rank.at(y))
    {
      tree_rank.at(x)++;
    }
  }
}

bool same(int x, int y)
{
  return find(x) == find(y);
}
// =======================================

// ==============kruskal==================

struct edge{int u, v, cost;}; // 辺u, v をつなぐコストが cost
bool comp(const edge& e1, const edge& e2)
{
  return e1.cost < e2.cost;
}
const int MAX_E = 100000;
edge es[MAX_E];
int V, E; // V 頂点、E 辺　の数

int kruskal()
{
  sort(es, es + E, comp);
  init(V);
  int ans = 0;
  for (int i = 0; i < E; ++i)
  {
    edge e = es[i];
    if (!same(e.u, e.v))
    {
      unite(e.u, e.v);
      ans += e.cost;
    }
  }
  return ans;
}


// =======================================


int main()
{
  cin >> V >> E;
  int s, t, w;
  for (int i = 0; i < E; ++i)
  {
    cin >> s >> t >> w;
    es[i] = {s, t, w};
  }
  int ans = kruskal();
  cout << ans << endl;
}

