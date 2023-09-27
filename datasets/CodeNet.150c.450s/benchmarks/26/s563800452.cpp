#include <iostream>
#include <string>

int main() {
    int a, b;
    std::string result;
    std::cin >> a;
    std::cin >> b;
    if((a - b) > 0){
      result = "a > b";
    }
    if((a - b) < 0){
      result = "a < b";
    }
    if((a - b) == 0){
      result = "a == b";
    }
    std::cout << result << std::endl;
}
