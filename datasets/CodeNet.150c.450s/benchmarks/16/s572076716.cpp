#include <iostream>
#include <stack>
#include <string>
#include <numeric>
#include <vector>

std::vector<int> countPuddle(std::string str) {
  std::stack<int> s;
  std::vector<int> puddles(20000, 0);
  for (int i = 0; i < (int)str.size(); ++i) {
    char c = str[i];    
    switch (c) {
    case '\\':
      s.push(i);
      break;
    case '/':
      if (s.empty())
        break;
      int j = s.top(); s.pop();
      for (int k = j; k <= i; ++k) {
        puddles[k] += (k == i || k == j) ? 1 : 2;
      }
      break;
    }
  }
  return puddles;
}

int main() {
  std::string str;
  std::cin >> str;
  std::vector<int> ans = countPuddle(str);
  std::cout << std::accumulate(ans.begin(), ans.end(), 0) / 2 << std::endl;
  int sum = 0;
  std::vector<int> fin;
  for (int i = 0; i < (int)ans.size(); ++i) {
    if (ans[i] <= 1 && sum != 0) {
      sum += ans[i];
      fin.push_back(sum / 2);
      sum = 0;
    }
    else
      sum += ans[i];
  }
  std::cout << fin.size();
  for (auto a : fin) {
    std::cout << " " << a;
  }
  std::cout << std::endl;
}