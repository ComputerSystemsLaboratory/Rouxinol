#include <iostream>
#include <vector>

int main(void){
  int n, q, cnt = 0;
  std::vector<int> S;
  
  std::cin >> n;
  for (int i = 0; i < n; i++) S.push_back([]{int v; std::cin >> v; return v; }());
  
  std::cin >> q;
  for (int i = 0; i < q; i++) {
    int v;
    std::cin >> v;
    for (auto itr = S.begin(); itr != S.end(); itr++) {
      if (*itr == v) {
        cnt++;
        break;
      }
    }
  }
  
  std::cout << cnt << std::endl;
  
  return 0;
}