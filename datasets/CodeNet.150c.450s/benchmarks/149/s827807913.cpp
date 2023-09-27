#include <iostream>

using namespace std;

int roots[10000];

int root(int x) {
  if (x == roots[x]) {
    return x;
  } else {
    //roots[x] = root(roots[x]); //attach all to root
    return root(roots[x]);
  }
}
          
  
bool same(int x, int y) {
  return (root(x) == root(y));
}

void unite(int x, int y) {
  roots[root(x)] = root(y);
}


int main() {

  int n, q;
  cin >> n >> q;

  for (int i = 0; i < n; i++) {
    roots[i] = i;
  }

  for (int i = 0; i < q; i++) {

    int com, x, y;
    cin >> com >> x >> y;
    //cout << "command is " << com << endl;
    //for (int j = 0; j < n; j++) {
    //cout << "node + " << j << " has root: " << roots[j] << endl;
    //}
    if (com == 0) {
      unite(x, y);
    } else if (com == 1) {
      if (same(x, y)) {
	cout << 1 << endl;
      } else {
	cout << 0 << endl;
      }
    }
  }
    

  
}