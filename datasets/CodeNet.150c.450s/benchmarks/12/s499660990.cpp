
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
// #define NIL -1

int parent(int i) { return i / 2; }
int left(int i) { return i * 2; }
int right(int i) { return i * 2 + 1; }

int main() {
  int n;cin>>n;
  int heap[n+1];



  for(int i = 1; i < n+1; i++) {
    cin >> heap[i];
  }

  for(int i = 1; i < n+1; i ++) {
    cout << "node " << i << ": ";
    cout << "key = " << heap[i] << ", ";
    if (parent(i) >= 1) cout << "parent key = " << heap[parent(i)] << ", ";
    if (left(i) <= n) cout << "left key = " << heap[left(i)] << ", ";
    if (right(i) <= n) cout << "right key = " << heap[right(i)] << ", ";
    cout << endl;
  }
  return 0;
}

