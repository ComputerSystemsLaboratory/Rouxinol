#include <iostream>
#include <vector>
using namespace std;
int main() {
  int w, n;
  while (cin >> w >> n) {
    vector<int> vec;
    for (int i = 0; i < w; ++i) {
      vec.push_back(i + 1);
    }
    for (int i = 0; i < n; ++i) {
      int a, b;
      scanf("%d,%d", &a, &b);
      a -= 1;
      b -= 1;
      int tmp = vec[a];
      vec[a] = vec[b];
      vec[b] = tmp;
    }
    for (int i = 0; i < vec.size(); ++i) {
      cout << vec[i] << endl;
    }
  }
  return 0;
}