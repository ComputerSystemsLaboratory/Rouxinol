#include <cctype>
#include <iostream>
#include <string>

int main() {
  int counters[26] = {};
  std::string str;

  while (std::cin >> str) {
    for (auto ch : str) {
      char lower = std::tolower(static_cast<unsigned char>(ch));
      int index = lower - 'a';
      counters[index]++;
    }
  }
  for (int i = 0; i < 26; i++) {
    char ch = i + 'a';
    std::cout << ch << " : " << counters[i] << std::endl;
  }
  return 0;
}

