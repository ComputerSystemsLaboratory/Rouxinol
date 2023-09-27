#include<iostream>
#include<vector>

using std::begin;
using std::end;

int main() {
  char c;
  std::vector<int> s1;
  std::vector<std::pair<int, int>> s2;
  int i{0};
  int sum{0};
  while(std::cin >> c) {
    switch(c) {
    case '\\':
      s1.push_back(i);
      break;
    case '/':
    {
      if(s1.empty()) break;
      int p = s1.back();
      s1.pop_back();
      int area = i - p;
      sum += area;
      while(!s2.empty()) {
        auto pp = s2.back();
        if(p < pp.first) {
          s2.pop_back();
          area += pp.second;
        } else {
          break;
        }
      }
      s2.emplace_back(p, area);
      break;
    }
    case '_':
    default:
      // nop
      break;
    }

    ++i;
  }

  std::cout << sum << std::endl;

  std::cout << s2.size();
  for(auto p: s2) {
    std::cout << ' ' << p.second;
  }
  std::cout << std::endl;

  return 0;
}

