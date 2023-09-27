#include <iostream>
#include <string>
#include <cstdlib>
int main(int argc, char const *argv[]) {

  while(1){
    std::string s;
    int sum=0;
    std::getline(std::cin, s);
    if(atoi(s.c_str()) == 0)break;
    std::string::const_iterator it = s.begin();
    while(it != s.end()){
      std::string c;
      int x;
      c = *it;
      x = atoi(c.c_str());
      sum += x;
      it++;
    }
    std::cout << sum << std::endl;
  }

  return 0;
}