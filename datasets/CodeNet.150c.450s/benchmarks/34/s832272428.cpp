#include <iostream>
using namespace std;

int A[100];
int n;
int main () {
  while (cin >> n && n) {
    for (int i=3; i<n+1; ++i) {
      A[0] = 1;
      A[1] = 1;
      A[2] = 2;
      A[i] = A[i-1] + A[i-2] + A[i-3];
    }
    if (n == 1) {
      cout << 1 << endl;
    } else { cout << (((A[n-1] + A[n-2] + A[n-3])/3650) + 1) << endl;
    }
  }
}