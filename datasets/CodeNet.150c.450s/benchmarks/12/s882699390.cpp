#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int h;
  cin >> h;
  
  vector<ll> heap(h);
  rep(i, h) cin >> heap[i];

  for (int i = 1; i <= h; i++) {
    printf("node %d: key = %lld, ", i, heap[i - 1]);
    int parent = i / 2 - 1, left = i * 2 - 1, right = i * 2;

    if (parent >= 0 && parent < h) printf("parent key = %lld, ", heap[parent]);
    if (left >= 0 && left < h) printf("left key = %lld, ", heap[left]);
    if (right >= 0 && right < h) printf("right key = %lld, ", heap[right]);
    cout << endl;
  }
}

