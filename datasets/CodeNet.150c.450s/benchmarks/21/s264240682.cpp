#include <iostream>
#include <string>

int main(){
  int result, given_number;
  std::cin >> given_number;
  result = given_number * given_number * given_number;
  std::cout << result << std::endl;
  return 0;
}