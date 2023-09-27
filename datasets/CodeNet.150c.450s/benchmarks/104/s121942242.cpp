#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

int main() {
  int i, temp;
  int w, n, ai, bi;

  cin >> w;
  cin >> n;

  vector<int> amida;

  // initialize
  for (i = 0; i < w; i++) {
    amida.push_back(i + 1);
  }

  for (i = 0; i < n; i++) {
    scanf("%d,%d", &ai, &bi);

    // swap
    temp = amida.at(ai - 1);
    amida.at(ai - 1) = amida.at(bi - 1);
    amida.at(bi - 1) = temp;
  }

  for (i = 0; i < w; i++) {
    cout << amida.at(i) << endl;
  }

  return 0;
}