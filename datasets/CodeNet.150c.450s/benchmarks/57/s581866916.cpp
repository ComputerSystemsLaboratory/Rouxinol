#include <iostream>
#include <iomanip>
#include <stdexcept>

class SymbolException : public std::logic_error {
public:
    SymbolException(): std::logic_error("????????????????????????") {}
};

int main() {
  while(1){
    try{
      int x=0,y=0;
      char symbol;
      std::cin >> x >> symbol >> y;
      if(symbol == '?') break;
      switch(symbol){
        case '+':
          std::cout << (x+y) << std::endl;
          break;
        case '-':
          std::cout << (x-y) << std::endl;
          break;
        case '*':
          std::cout << (x*y) << std::endl;
          break;
        case '/':
          std::cout << (x/y) << std::endl;
          break;
        default:
          throw SymbolException();
          break;
      }
    }catch (const SymbolException& e) {
        std::cerr << e.what() << std::endl;
    }
  }

  return 0;
}