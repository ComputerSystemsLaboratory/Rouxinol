#include<bits/stdc++.h>
using namespace std;

int main(){
  int n, m;
  std::cin >> n;
  set<string> u;
  for (int i = 0; i < n; i++) {
    string s;
    std::cin >> s;
    u.insert(s);
  }
  std::cin >> m;
  string t;
  bool lock = 1;
  for (int i = 0; i < m; i++) {
    std::cin >> t;
    if(u.find(t) != u.end()){
      if(lock == 1){
        std::cout << "Opened by " << t << std::endl;
      }else{
        std::cout << "Closed by " << t << std::endl;
      }
      lock = 1 - lock;
    }else{
      std::cout << "Unknown " << t << std::endl;
    }
  }
  return 0;
}