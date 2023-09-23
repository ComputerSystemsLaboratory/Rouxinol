#include <iostream>
#include <string>

using namespace std;

int main() {
  string l;
  int n = 1;
  while (getline(std::cin, l)) {
    if (l == "0")
      break;
    cout << "Case " << n << ": " << l << endl;
    ++n;
  }
  return 0;
}