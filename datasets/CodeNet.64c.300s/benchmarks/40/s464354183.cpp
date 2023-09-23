#include <iostream>


int main() {
  char string[1200];
  int ascii_code;

  std::cin.getline(string, sizeof(string));

  for (int i = 0; string[i] != '\0'; i ++) {
    ascii_code = (int)string[i];
    if (65 <= ascii_code && ascii_code <= 90) {
      ascii_code += 32;
    } else if (97 <= ascii_code && ascii_code <= 122) {
      ascii_code -= 32;
    }
    std::cout << (char)ascii_code;
  }

  std::cout  << std::endl;

  return 0;
}

