#include <iostream>
#include <string>
#include <cctype>

int main() {
  const int N = 26; // number of alphabetical
  int a[N] = {};
  std::string str;

  while(std::getline(std::cin, str)) {
    for(int i = 0; str[i] != '\0'; ++i) {
      if(isupper(str[i])) str[i] = tolower(str[i]);
      int ch = str[i] - 'a';
      if(0 <= ch && ch < N) {
        a[ch]++;
      }
    }
  }

  for(int i = 0; i < N; ++i) {
    char c = i + 'a';
    std::cout << c << " : " << a[i] << std::endl;
  }

  return 0;
}