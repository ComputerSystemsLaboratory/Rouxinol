#include <bits/stdc++.h>
using namespace std;

int uf[10101];

void init(int n)
{
  for (int i = 1; i <= n; i++){
    uf[i] = i;
  }
}

int root(int x)
{
  if (uf[x] == x) return x;

  return uf[x] = root(uf[x]);
}

void unite(int x, int y)
{
  int rx = root(x),
      ry = root(y);
  uf[ry] = rx;
}

bool same(int x, int y)
{
  return root(x) == root(y);
}

int main()
{
  int n, q;
  cin >> n >> q;

  init(n);

  for (int i = 0; i < q; i++){
    int f, x, y;
    cin >> f >> x >> y;

    if (f){
      cout << same(x, y) << endl;
    } else {
      unite(x, y);
    }
  }
}