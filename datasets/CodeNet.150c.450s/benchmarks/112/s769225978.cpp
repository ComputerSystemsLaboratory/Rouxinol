#include <iostream>
#include <unordered_map>


int main() {
  int n, m, i;
  char l, r, temp;
  std::unordered_map<char, char> trans_map; 
  while (std::cin >> n) {
    if (n == 0) break;

    for (i = 0; i < n; i ++) {
      std::cin >> l >> r;
      trans_map[l] = r;
    }

    std::cin >> m;
    for (i = 0; i < m; i ++) {
      std::cin >> temp;
      std::unordered_map<char, char>::iterator it = trans_map.find(temp);
      if (it != trans_map.end()) std::cout << it->second;
      else std::cout << temp;
    }
    std::cout << std::endl;
    trans_map.clear();
  }
  return 0;
}