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
    Heap() {
      W.push_back(0);
    }

    vector<int> W;
    bool check(int);
    void maxHeapify(int);
    void rmaxHeapify(int);
    void buildHeap();
    void insert(int);
    int parent(int);
    int left(int);
    int right(int);
    int pop();
};

void Heap::insert(int v) {
  W.push_back(v);
  rmaxHeapify(W.size()-1);
}

int Heap::pop() {
  int result = W[1];
  // cout << result << endl;
  W[1] = W[W.size()-1];
  W.resize(W.size()-1);
  maxHeapify(1);
  return result;
}

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

void Heap::rmaxHeapify(int i) {
  if (i == 1) return;
  int p = parent(i);

  if (W[p] < W[i]) {
    swap(W[i], W[p]);
    rmaxHeapify(p);
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
  Heap heap = Heap();
  string s;
  int k;

  while (cin >> s) {
    // cout << s << endl;
    // utils::print(heap.W);


    if (s == "insert") {
      cin >> k;
      heap.insert(k);
    } else if (s == "extract") {
      cout << heap.pop() << endl;
    } else {
      // rep (i, heap.W.size()) cout << heap.W[i] << endl;
    }
  }
}