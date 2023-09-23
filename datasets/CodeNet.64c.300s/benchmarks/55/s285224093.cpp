#include <iostream>

using namespace std;

int main() {
  int h[10000];
  int i;
  for (i = 0; ; i++) {
    cin >> h[i];
    if (h[i] == 0) {
      break;
    }
  }
  for (int j = 0; j < i; j++) {
    cout << "Case " << j + 1 << ": " << h[j] << endl;
  }
}
