#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

int main(void)
{
  const int dataNum = 10;

  std::vector<int> vals;
  for (int i = 0; i < dataNum; i++) {
    int newVal;
    std::cin >> newVal;
    vals.push_back(newVal);
  }

  std::sort(vals.begin(), vals.end(), std::greater<int>());

  const int outputDataNum = 3;
  
  for (int i = 0; i < outputDataNum; i++) {
    std::cout << vals[i] << std::endl;
  }

  return 0;
}