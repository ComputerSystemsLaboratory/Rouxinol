#include <iostream>
#include <numeric>
#include <stack>
#include <vector>
#include <algorithm>

int main() {
  char c;
  std::stack<int> s;
  std::stack<std::pair<int, int>> area;

  int i = 0;
  while (std::cin >> c) {
    ++i;
    if (c == '\\') {
      s.push(i);
    }
    if (c == '/') {
      if (s.empty())
        continue;
      int t = s.top();
      s.pop();
      int a = i - t;
      while (!area.empty() && area.top().first > t) {
        a += area.top().second;
        area.pop();
      }
      area.push({i, a});
    }
  }

  std::vector<int> res;
  while (!area.empty()) {
    res.push_back(area.top().second);
    area.pop();
  }
  std::reverse(res.begin(), res.end());
  std::cout << std::accumulate(res.begin(), res.end(), 0) << std::endl;
  std::cout << res.size();
  if (res.size())
    std::cout << " ";
  for (auto it = res.begin(); it != res.end(); ++it) {
    if (it != res.begin())
      std::cout << " ";
    std::cout << *it;
  }
  std::cout << std::endl;
}

