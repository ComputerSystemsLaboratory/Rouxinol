#include <iostream>
#include <string>
#include <cctype>

int main(int argc, char const *argv[]) {
  char alpha = 'a';
  int count[26]={};
  std::string s;
  while(std::getline(std::cin, s)){
    std::string::const_iterator it = s.begin();
    while(it != s.end()){
      char c = *it;
      if(std::isupper(c)){
        c = (char)std::tolower(c);
      }
      int num = c - 'a';
      count[num]++;
      it++;
    }
  }

  for(int i=0;i<26;i++){
    std::cout << alpha << " : " << count[i] << std::endl;
    alpha++;
  }
  return 0;
}