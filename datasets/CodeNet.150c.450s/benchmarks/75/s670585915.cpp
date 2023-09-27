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
}
// end namespace utils

class Heap {

  public:
    Heap(int H) {
      W.resize(H+1);
    }

    vector<int> W;
    bool check(int);
    void maxHeapify(int);
    void buildHeap();
    int parent(int);
    int left(int);
    int right(int);
};


bool Heap::check(int i) {
  if (1 <= i && i < (int)W.size()+1) return true;
  else return false;
}

void Heap::buildHeap() {
  for (int i=((int)W.size()-1)/2; i>0; i--) {
    maxHeapify(i);
  }
}

void Heap::maxHeapify(int i) {
  int l = left(i);
  int r = right(i);

  int largest;
  if (l <= (int)W.size()-1 && W[l] > W[i]) largest = l;
  else largest = i;
  if (r <= (int)W.size()-1 && W[r] > W[largest]) largest = r;

  if (largest != i) {
    swap(W[i], W[largest]);
    maxHeapify(largest);
  }
}

int Heap::parent(int i) {
  return i/2;
}

int Heap::left(int i) {
  return i*2;
}

int Heap::right(int i) {
  return i*2+1;
}


int main() {
  int H;
  vector<int> W;

  cin >> H;
  Heap heap = Heap(H);

  rep (i, H) cin >> heap.W[i+1];
  // utils::print(heap.W);
  heap.buildHeap();
  for (int i=1; i<H+1; i++) {
    cout << " " << heap.W[i];
  }
  cout << endl;

}