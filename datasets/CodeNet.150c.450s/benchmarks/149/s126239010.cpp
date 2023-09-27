#include <iostream>
#include <vector>

using namespace std;

struct edge {
  int dest;
  int weight; // = dest minus curr
};

class UF {
public:
  vector<edge> v;
  UF(int n) { v = vector<edge>(n, {-1, 0}); }
  void unite(int x, int y, int y_minus_x) {
    int loc_x = find(x);
    int loc_y = find(y);
    if (loc_x == loc_y)
      return;
    if (v[loc_x].dest <
        v[loc_y].dest) { // x's set has more elements -- join y to x
      v[loc_x].dest += v[loc_y].dest;
      v[loc_y] = {loc_x, -y_minus_x};
    } else {
      v[loc_y].dest += v[loc_x].dest;
      v[loc_x] = {loc_y, y_minus_x};
    }
  }
  void unite(int x, int y) { unite(x, y, 0); }

  // if weighted = true, returns the difference of the root and the current node
  // if weighted = false, returns the id of the root
  int find(int x, bool weighted = false) {
    int tmp = 0;
    while (v[x].dest >= 0) {
      tmp += v[x].weight;
      x = v[x].dest;
    }
    return (weighted ? tmp : x);
  }
  // pre: x and y are in the same set
  // post: returns y - x
  int get_difference(int x, int y) {
    int root_minus_x = find(x, true);
    int root_minus_y = find(y, true);
    return root_minus_x - root_minus_y;
  }
};

int main() {
  int n, q;
  cin >> n >> q;
  UF uf(n);
  int c, x, y;
  while (cin >> c >> x >> y) {
    if (c == 0)
      uf.unite(x, y);
    if (c == 1)
      cout << (uf.find(x) == uf.find(y)) << endl;
  }
}
