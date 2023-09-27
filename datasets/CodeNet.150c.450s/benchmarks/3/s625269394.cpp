#include <iostream>
#include <algorithm>

int main(void) {
  std::string input;
  int q;

  std::cin >> input;
  std::cin >> q;

  for (int i = 0; i < q; i++) {
    std::string command;
    int start = 0;
    int end = 0;
    
    std::cin >> command;
    std::cin >> start >> end;
      
    if (command == "print") {
      std::string output = input.substr(start, end - start + 1);

      std::cout << output << std::endl;
    } else if (command == "reverse") {
      for (int i = 0; i < ((end - start + 1) / 2); i++) {
	char tmp = input[start + i];
	input[start + i] = input[end - i];
	input[end - i] = tmp;
      }
    } else if (command == "replace") {
      std::string target;
      std::cin >> target;
      
      input = input.replace(start, end - start + 1, target);
    }
  }
  
  return 0;
}