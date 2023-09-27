#include <bits/stdc++.h>

using namespace std;

int main() {
  int a, b;
  while (cin >> a >> b) {
    stringstream ss;
    ss << a + b;
    cout << ss.str().size() << endl;
  }
}