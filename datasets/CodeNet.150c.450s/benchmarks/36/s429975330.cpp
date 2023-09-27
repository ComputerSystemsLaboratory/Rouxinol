#include <iostream>

using namespace std;

int main() {
  int d; 

  while (cin >> d) {
    int s = 0;
    for (int x_i = 0; x_i <= 600-d; x_i += d)
      s += x_i*x_i*d;

    cout << s << endl;
  }

  return 0;
}