#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, r;
  cin >> n >> r;

  if (!n) return 0;

  vector<int> ary;
  for (int i = n; i >= 1; i--) {
    ary.push_back(i);
  }
  for (int i = 0; i < r; i++) {
    vector<int> tmp;
    int p, c;
    cin >> p >> c;
    for (int j = 0; j < c; j++) {
      tmp.push_back(ary[p - 1 + j]);
    }
    for (int j = p - 2; j >= 0; j--) {
      ary[j + c] = ary[j];
    }
    ary = tmp;
    tmp.clear();
  }
  cout << ary[0] << endl;

  main(); // kikaku ihan dakedo
}