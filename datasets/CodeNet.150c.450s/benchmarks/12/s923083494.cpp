# include <bits/stdc++.h>

# define rep(i, n) for (int i = 0; i < (int)(n); i++)
# define irep(i, n) for (int i = int(n) - 1; i >= 0; i--)
# define FOR(i, m, n) for (int i = int(m); i < (int)(n); i++)

using namespace std;

// namespace utils
namespace utils{
  template <typename T> void print(vector<vector<T>> mat) {
    rep (i, mat.size()) {
      rep (j, mat[0].size()) cout << mat[i][j] << ' ';
      cout << endl;
    }
  }

  template <typename T> void print(vector<T> v) {
    rep (i, v.size()) cout << v[i] << ' ';
    cout << endl;
  }
// end namespace utils
}

class Heap {

  public:
    Heap(int H) {
      W.resize(H+1);
    }

    vector<int> W;
    bool check(int i);
};


bool Heap::check(int i) {
  if (1 <= i && i < (int)W.size()) return true;
  else return false;
}


int main() {
  int H;
  vector<int> W;

  cin >> H;
  Heap heap = Heap(H);

  rep (i, H) cin >> heap.W[i+1];
  for (int i=1; i<=H; i++) {
    cout << "node " << i << ": ";
    cout << "key = " << heap.W[i] << ", ";
    if (heap.check(i/2)) cout << "parent key = " << heap.W[i/2] << ", ";
    if (heap.check(i*2)) cout << "left key = " << heap.W[i*2] << ", ";
    if (heap.check(i*2+1)) cout << "right key = " << heap.W[i*2+1] << ", ";
    cout << endl;
  }
}