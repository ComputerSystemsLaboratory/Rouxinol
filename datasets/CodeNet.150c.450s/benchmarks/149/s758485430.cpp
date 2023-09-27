#include <iostream>
using namespace std;

int P[10010]; // 親たち
int n, q;

void init() {
  for (auto i=0; i<n; i++) {
    P[i] = i;
  }
}

int root(int a) {
  if (P[a] == a) return a;
  return (P[a] = root(P[a]));
}

bool issame(int a, int b) {
  return root(a) == root(b);
}

void unite(int a, int b) {
  P[root(a)] = root(b);
}

int main() {
  cin >> n >> q;
  init();
  for (auto i=0; i<q; i++) {
    int com, x, y;
    cin >> com >> x >> y;
    if (com == 0) { // unite(x, y)
      unite(x, y);
    } else { // issame(x, y)
      if (issame(x, y)) {
	cout << 1 << endl; 
      } else {
	cout << 0 << endl;
      }
    }
  }
}