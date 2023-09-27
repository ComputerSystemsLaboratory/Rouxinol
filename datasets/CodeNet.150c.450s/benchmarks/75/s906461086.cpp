#include <bits/stdc++.h>
using namespace std;

#define FOR(i, a, b) for (int i = (a); i < (b); i++)

typedef long long ll;

int GetLeftIndex(vector<int> &nodes, const int &i) {
  if (2 * i + 1 < nodes.size()) return 2 * i + 1;
  return -1;
}

int GetRightIndex(vector<int> &nodes, const int &i) {
  if (2 * i + 2 < nodes.size()) return 2 * i + 2;
  return -1;
}

void MaxHeepify(vector<int> &nodes, const int &index) {
  int left_index = GetLeftIndex(nodes, index);
  int right_index = GetRightIndex(nodes, index);
  int largest_index;
  if (left_index != -1 && nodes[left_index] > nodes[index]) {
    largest_index = left_index;
  } else {
    largest_index = index;
  }
  if (right_index != -1 && nodes[right_index] > nodes[largest_index]) {
    largest_index = right_index;
  }
  if (largest_index != index) {
    swap(nodes[index], nodes[largest_index]);
    MaxHeepify(nodes, largest_index);
  }
}

void BuildMaxHeap(vector<int> &nodes) {
  for (int i = (nodes.size() - 1) / 2; i >= 0; i--) {
    MaxHeepify(nodes, i);
  }
}

int main() {
  int n;
  cin >> n;
  vector<int> nodes(n);
  FOR(i, 0, n) { cin >> nodes[i]; }
  BuildMaxHeap(nodes);
  FOR(i, 0, n) { cout << " " << nodes[i]; }
  cout << endl;
  return 0;
}
