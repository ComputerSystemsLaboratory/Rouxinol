#include <iostream>
#include <sstream>
#include <cctype>

const int NUMBER_OF_OPERANDS = 100;
const int STACK_SIZE = NUMBER_OF_OPERANDS;

const char PLUS = '+';
const char MINUS = '-';
const char MULTIPLY = '*';

int main() {
  int pointer = 0;
  int stack[STACK_SIZE] = {0};

  std::string a;
  std::string b;

  while (std::cin >> a) {
    if ((a[0] == PLUS) || (a[0] == MINUS) || (a[0] == MULTIPLY)) {
      
      char op = a[0];
      
      pointer--;
      int y = stack[pointer];

      pointer--;    
      int x = stack[pointer];

      int z = 0;
    
      if (op == PLUS) {
	z = x + y;
      } else if (op == MINUS) {
	z = x - y;      
      } else if (op == MULTIPLY) {
	z = x * y;
      }
      
      stack[pointer] = z;
      pointer++;
    } else {
      int x = 0;

      std::stringstream ss;
      
      ss << a;
      ss >> x;
      
      stack[pointer] = x;
      pointer++;
    }
  }

  std::cout << stack[0] << std::endl;
  
  return 0;
}