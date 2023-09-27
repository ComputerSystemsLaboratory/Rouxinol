#include <iostream>
#include <stack>
#include <string>
#include <vector>

int main() {
  std::string s;
  std::cin >> s;

  std::stack<uint32_t> slopes;
  std::stack<std::pair<uint32_t, uint32_t>> lakes;

  std::pair<uint32_t, uint32_t> lake = std::make_pair(0, 0);  // start, area
  for (size_t i = 0; i < s.size(); i++) {
    if (s[i] == '\\') {
      slopes.push(i);
    } else if (s[i] == '/' && !slopes.empty()) {
      lake.first = slopes.top();
      lake.second += i - slopes.top();
      slopes.pop();
    }

    if (lake.second > 0 &&
        (slopes.empty() || s[i] == '\\' || i == s.size() - 1)) {
      while (!lakes.empty() && lake.first < lakes.top().first) {
        lake.second += lakes.top().second;
        lakes.pop();
      }
      lakes.push(lake);
      lake.first = 0;
      lake.second = 0;
    }
  }

  uint32_t sum = 0;
  std::vector<uint32_t> lakes_ans(lakes.size());
  auto itr = lakes_ans.rbegin();
  while (!lakes.empty()) {
    *itr = lakes.top().second;
    sum += *itr;
    lakes.pop();
    itr++;
  }
  std::cout << sum << std::endl;
  std::cout << lakes_ans.size();
  for (auto &&a : lakes_ans) std::cout << " " << a;
  std::cout << std::endl;

  return 0;
}
