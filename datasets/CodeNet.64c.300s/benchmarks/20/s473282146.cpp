#include <iostream>

using namespace std;

int f(int x) {
  return x * x;
}

int main(int ac, char **av) {
  int d;
  while (cin >> d) {
    int a = 600 / d;
    int sum = 0;
    for (int i = 1; i < a; i++) {
      sum += f(i*d) * d;
    }
    cout << sum << endl;
  }
  return 0;
}