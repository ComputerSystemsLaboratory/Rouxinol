#include <iostream>
#include <string>
#include <algorithm>

int main() {
  std::string word;
  std::cin >> word;
  std::transform(word.begin(), word.end(), word.begin(), ::tolower);

  int cnt = 0;
  std::string text;
  while(1) {
    std::cin >> text;
    if(text == "END_OF_TEXT") break;
    std::transform(text.begin(), text.end(), text.begin(), ::tolower);
    if(text == word) cnt++;
  }
  std::cout << cnt << std::endl;

  return 0;
}