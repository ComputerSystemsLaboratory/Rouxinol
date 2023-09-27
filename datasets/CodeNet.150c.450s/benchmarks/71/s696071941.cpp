#include <iostream>
#include <algorithm>
#include <string>

int main(void)
{
  int n;
  
  const int minVal = 0;
  const int maxVal = 9;
  
  while (std::cin >> n) {
    int count = 0;
    for (int a = minVal; a <= maxVal; a++) {
      for (int b = minVal; b <= maxVal; b++) {
        for (int c = minVal; c <= maxVal; c++) {
          for (int d = minVal; d <= maxVal; d++) {
            if (a + b + c + d == n) {
              count++;
            }
          }
        }
      }
    }
    std::cout << count << std::endl;
  }
}