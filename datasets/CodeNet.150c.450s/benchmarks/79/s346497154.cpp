#include <iostream>

using namespace std;

int main(void) {
  int yama[51], tmp[51];

  int n, r;
  while (cin >> n >> r, (n || r)) {
    // initialization
    for (int i=0; i<n; i++) {
      yama[i] = i + 1;
    }

    // shuffle
    for (int i=0; i<r; i++) {
      int p, c;
      cin >> p >> c;

      for (int j=0; j<c; j++) {
        tmp[c-1-j] = yama[n-p-j];
      }
      for (int j=n-p+1; j<n; j++) {
        yama[j-c] = yama[j];
      }
      for (int j=0; j<c; j++) {
        yama[n-c+j] = tmp[j];
      }
    }

    cout << yama[n-1] << endl;
  }
  return 0;
}