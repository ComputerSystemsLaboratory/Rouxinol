#include <iostream>
 
int main() {
  int heights[16] = { 0 };
  int temp_result = 0;
  int index = 12;
 
  for(int i = 0; i < 10; i++) {
    std::cin >> heights[i];
  }
 
  for(int j = 0; j < 3; j++) {
    heights[index] = 0;
    index = 0;
    temp_result = 0;
    for(int i = 0; i < 10; i++) {
      if(temp_result < heights[i]) {
        temp_result = heights[i];
        index = i;
      }
    }
    std::cout << temp_result << std::endl;
  }
 
 
  return 0;
}
 