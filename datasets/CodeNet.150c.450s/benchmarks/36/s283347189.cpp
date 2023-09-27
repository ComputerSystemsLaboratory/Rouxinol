#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int approx(int d) {
  int acc = 0;
  for (int x = 0; x < 600; x += d) {
    acc += x * x * d;
  }
  return acc;
}

int main() {
  string line;
  while (getline(cin, line)) {
    int d = atoi(line.c_str());
    cout << approx(d) << endl;
  }

  return 0;
}