#include <iostream>
#include <vector>
using namespace std;
int parent(int p) {
  return (p+1)/2-1;
}

int left(int p) {
  return (p+1)*2-1;
}

int right(int p) {
  return (p+1)*2;
}

int main() {
  int H; cin >> H;
  vector<int> heap(H);
  for (int i = 0; i < H; i++) {
    cin >> heap[i];
  }
  for (int i = 0; i < H; i++) {
    cout << "node " << i+1 << ": key = " << heap[i] << ", ";
    if (i != 0) {
      cout << "parent key = " << heap[parent(i)] << ", ";
    }
    if (left(i) < H) {
      cout << "left key = " << heap[left(i)] << ", ";
    }
    if (right(i) < H) {
      cout << "right key = " << heap[right(i)] << ", ";
    }
    cout << endl;
  }
}


