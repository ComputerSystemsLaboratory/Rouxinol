#include <iostream>
#include <sstream>
#include <algorithm>

int main(int argc, char const *argv[]) {
  std::string search_word;
  std::cin >> search_word;
  int count=0;
  while(1){
    std::string s;
    std::getline(std::cin, s);
    if(s == "END_OF_TEXT")break;
    std::stringstream ss(s);
    std::string str;
    while(getline(ss,str,' ')){
      transform (str.begin (), str.end (), str.begin (), tolower);
      if(str == search_word){
        count++;
      }
    }
  }
  std::cout << count << std::endl;
  return 0;
}