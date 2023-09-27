#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int, int>;

int const MAX = 255;

int parent(int i) {
  return i / 2;
}
int left(int i) {
  return 2 * i;
}
int right(int i) {
  return 2*i + 1;
}

int main() {
  int n;
  int heap[MAX];
  cin >> n;
  rep(i,n) cin >> heap[i+1];

  for (int i=1; i<=n; ++i) {
    cout << "node " << i << ": key = " << heap[i] << ", ";
    if (parent(i) >= 1) cout << "parent key = " << heap[parent(i)] << ", ";
    if (left(i) <= n) cout << "left key = " << heap[left(i)] << ", ";
    if (right(i) <= n) cout << "right key = " << heap[right(i)] << ", ";
    cout << endl;
  }
  
  return 0;
}

