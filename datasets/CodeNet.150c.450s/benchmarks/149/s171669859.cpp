#include<iostream>
using namespace std;

#define N 100003

int n, q;
int parent[N];

int root(int x) {
  if(x != parent[x]) x = parent[x] = root(parent[x]);
  return x;
}

void unite(int x, int y) {
  int px = root(x), py = root(y);
  if(px < py) {
    parent[py] = px;
  } else {
    parent[px] = py;
  }
}

int same(int x, int y) {
  return root(x) == root(y);
}

int main() {
  cin >> n >> q;
  for(int i=0; i<n; ++i) parent[i] = i;

  for(int i=0; i<q; ++i) {
    int com, x, y;
    cin >> com >> x >> y;
    if(com == 0) {
      unite(x, y);
    } else {
      cout << same(x, y) << endl;
    }
  }

  return 0;
}