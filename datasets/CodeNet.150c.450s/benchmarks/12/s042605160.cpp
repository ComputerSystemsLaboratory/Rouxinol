#include <iostream>
using namespace std;

const int MAX = 300;
int A[MAX];

int main() {
  int h;
  cin >> h;
  for (int i = 1; i <= h; i++) {
    cin >> A[i];
  }

  for (int i = 1; i <= h; i++) {
    cout << "node " << i << ": key = " << A[i] << ", "; 
    if (i != 1) {
      cout << "parent key = " << A[i / 2] << ", ";
    }
    int left_id = 2 * i;
    if (left_id <= h) {
      cout << "left key = " << A[left_id] << ", ";
    }
    int right_id = 2 * i + 1;
    if (right_id <= h) {
      cout << "right key = " << A[right_id] << ", ";
    }
    cout << endl;
  }
}

