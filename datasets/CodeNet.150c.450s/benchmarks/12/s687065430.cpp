#include <bits/stdc++.h>
using namespace std;

#define FOR(i, a, b) for (int i = (a); i < (b); i++)

typedef long long ll;

struct Node {
  int key = INT_MIN;
  int parent = INT_MIN;
  int left = INT_MIN;
  int right = INT_MIN;
};

int main() {
  int n;
  cin >> n;
  vector<Node> nodes(n);
  FOR(i, 0, n) {
    cin >> nodes[i].key;
    int parent_id = (i + 1) / 2 - 1;
    if (parent_id >= 0) {
      nodes[i].parent = nodes[parent_id].key;
      bool is_parent_left = (i % 2 == 1);
      if (is_parent_left) {
        nodes[parent_id].left = nodes[i].key;
      } else {
        nodes[parent_id].right = nodes[i].key;
      }
    }
  }
  FOR(i, 0, n) {
    cout << "node " << (i + 1) << ": key = " << nodes[i].key << ", ";
    if (nodes[i].parent != INT_MIN) {
      cout << "parent key = " << nodes[i].parent << ", ";
    }
    if (nodes[i].left != INT_MIN) {
      cout << "left key = " << nodes[i].left << ", ";
    }
    if (nodes[i].right != INT_MIN) {
      cout << "right key = " << nodes[i].right << ", ";
    }
    cout << endl;
  }
  return 0;
}
