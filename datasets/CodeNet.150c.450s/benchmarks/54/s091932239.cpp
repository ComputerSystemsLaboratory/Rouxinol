#include <iostream>
#include <string>
#include <vector>
#include <boost/algorithm/string.hpp>

int countWord(std::string& word, std::string& text) {
  std::vector<std::string> words;
  boost::to_lower(text);
  boost::split(words, text, boost::is_space());

  int count = 0;
  for (auto s : words) {
    if (s == word) count++;
  }
  return count;
}

int main() {
  std::string word, buf, text = "";
  const std::string eot = "END_OF_TEXT";

  std::cin >> word;
  while (std::cin >> buf) {
    if (text == eot) break;
    text += buf + " ";
  }

  std::cout << countWord(word, text) << std::endl;
  return 0;
}

