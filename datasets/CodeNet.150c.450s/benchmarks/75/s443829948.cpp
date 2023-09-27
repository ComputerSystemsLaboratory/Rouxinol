#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;
using vll = vector<ll>;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

void max_heapify(vll &a, int h, int i1) {
  int i = i1 - 1,
      l = i1 * 2 - 1,
      r = i1 * 2;
  int largest = i;
  
  if (l <= h && a[l] > a[i]) largest = l;
  if (r <= h && a[r] > a[largest]) largest = r;

  if (largest != i) {
    swap(a[i], a[largest]);
    max_heapify(a, h, largest + 1);
  }
}

void build_max_heap(vll &a, int h) {
  for (int i = h / 2; i >= 1; i--) max_heapify(a, h, i);
}

int main() {
  int h;
  cin >> h;
  
  vll heap(h);
  rep(i, h) cin >> heap[i];
  
  build_max_heap(heap, h);

  rep(i, h) printf(" %lld", heap[i]);
  cout << endl;
}

