#include <iostream>
using namespace std;

const int block = 4;
const int floor = 3;
const int room = 10;

int main() {
  int b, f, r, v;
  int h[block][floor][room] = {0};
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> b >> f >> r >> v;
    h[b -1][f -1][r -1] += v;
  }
  for (int j = 0; j < block; j++) {
    for (int k = 0; k < floor; k++) {
      for (int l = 0; l < room; l++) {
        cout << " " << h[j][k][l];
      }
      cout << endl;
    }
    if (j == block - 1) break;
    cout << "####################" << endl;
  }
  return 0;
}