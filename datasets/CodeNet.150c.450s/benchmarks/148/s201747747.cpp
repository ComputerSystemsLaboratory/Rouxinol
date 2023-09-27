#include <bits/stdc++.h>

int main() {
  std::map<std::string, int> d;
  int n; std::cin >> n;
  while (n--) {
    std::string s; std::cin >> s;
    ++d[s];
  }
  std::cout << "AC" << " x " << d["AC"] << std::endl;
  std::cout << "WA" << " x " << d["WA"] << std::endl;
  std::cout << "TLE" << " x " << d["TLE"] << std::endl;
  std::cout << "RE" << " x " << d["RE"] << std::endl;
  
  return 0;
}