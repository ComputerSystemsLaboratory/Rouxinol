#include <iostream>
using namespace std;

int main() {
  int tracks[10];
  int n;
  int p;

  p = 0;
  while (cin >> n) {
    if (n) {
      tracks[p++] = n;
    } else {
      cout << tracks[--p] << endl;
    }
  }

  return 0;
}