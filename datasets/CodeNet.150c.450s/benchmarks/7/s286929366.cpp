#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
  std::vector<int> hills;
  int temp;
  while(std::cin >> temp) {
    hills.push_back(temp);
  }
  std::sort(hills.begin(), hills.end());

  auto it = hills.rbegin();
  for(int i = 0; i < 3; ++i) {
    std::cout << *it << std::endl;
    it++;
  }
}