#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <list>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char const *argv[]) {
  string a, result;
  std::cin >> a;
  // a = "hello";
  for (size_t i = a.size(); i > 0; i--) {
    result += a[i - 1];
  }
  std::cout << result << '\n';
  return 0;
}

