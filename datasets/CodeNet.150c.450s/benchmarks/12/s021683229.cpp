#include<iostream>
using namespace std;

void print(int A[], int n) {
  int i, x;
  for (i = 0; i < n; i++) {
    x = i + 1;
    cout << "node " << x << ": ";
    cout << "key = " << A[i] << ", ";

    if (i != 0) {
      cout << "parent key = " << A[x / 2 - 1] << ", ";
    }

    if (x * 2 <= n) {
      cout << "left key = " << A[x * 2 - 1] << ", ";
    }

    if (x * 2 + 1 <= n) {
      cout << "right key = " << A[x * 2] << ", ";
    }

    cout << "\n";
  }
}

int main() {
  int n, i;
  cin >> n;

  int H[n];
  for (i = 0; i < n; i++) cin >> H[i];

  print(H, n);

  return 0;
}

