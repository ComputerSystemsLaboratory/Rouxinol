#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  int x[3000], y[3000];
  int i;
  for (i = 0; ; i++) {
    cin >> x[i] >> y[i];
    if (x[i] == 0 && y[i] == 0) {
      break;
    }
  }
  for (int j = 0; j < i; j++) {
    if (x[j] > y[j]) {
      swap(x[j], y[j]);
    }
  }
  for (int j = 0; j < i; j++) {
    cout << x[j] << " " << y[j] << endl;
  }
}
