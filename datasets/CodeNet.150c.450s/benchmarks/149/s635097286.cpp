#include<iostream>
#include<vector>

using namespace std;

vector<int> UFtree;

int root(int i) {
  if(UFtree[i] == i) return i;
  return (UFtree[i] = root(UFtree[i]));
}

bool is_same_set(int i, int j) {
  return root(i) == root(j);
}

void unite(int i, int j) {
  UFtree[root(i)] = root(j);
}


int main() {
  int n, q, op, x, y;
  cin >> n >> q;
  for(int i = 0; i < n; i++) UFtree.push_back(i);
  for(int i = 0; i < q; i++) {
    cin >> op >> x >> y;
    if(op == 0) unite(x, y);
    else cout << is_same_set(x, y) << endl;
  }
  return 0;
}