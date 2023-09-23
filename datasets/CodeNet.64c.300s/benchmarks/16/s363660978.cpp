#include<iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  int R[200010];
  for (int i = 0; i < n; i++) {
    cin >> R[i];
  }

  int max_v = -1000000000;
  int min_R = R[0];
  for (int i = 1 ; i < n; i++) {
    int v = R[i] - min_R;
    if (v > max_v) {
      max_v = v;
      //cout << "i:" << i << ", R:" << R[i] << ", min_R:" << min_R << ", max_v:" << max_v << endl;
    }
    if (R[i] < min_R) {
      min_R = R[i];
    }
  }
  cout << max_v << endl;
}

