#include <iostream>

using namespace std;
 
int H;
int A[250 + 5];
 
int parent(int i) {
  return i / 2;
}
 
int left(int i) {
  return i * 2;
}
 
int right(int i) {
  return i * 2 + 1;
}
 
bool check(int i) {
  return 1 <= i && i <= H;
}
 
int main() {
  cin >> H;
  for (int i = 1; i <= H; i++) {
    cin >> A[i];
  }
  for (int i = 1; i <= H; i++) {
    cout << "node " << i << ": ";
    cout << "key = " << A[i] << ", ";
    if (check(parent(i))) {
      cout << "parent key = " << A[parent(i)] << ", ";
    }
    if (check(left(i))) {
      cout << "left key = " << A[left(i)] << ", ";
    }
    if (check(right(i))) {
      cout << "right key = " << A[right(i)] << ", ";
    }
    cout << endl;
  }
  return 0;
}
