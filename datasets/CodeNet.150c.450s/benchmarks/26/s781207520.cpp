#include <iostream>

using namespace std;

const char* cmp(int a, int b) {
  if (a == b)
    return "==";
  if (a < b)
    return "<";
  return ">";
}

int main() {
  int a, b;
  cin >> a >> b;
  cout << "a " << cmp(a, b) << " b" << endl;
  return 0;
}