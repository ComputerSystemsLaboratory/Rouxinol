#include <bits/stdc++.h>

int main() {
  int m,v,r;
  std::queue<std::string> seiseki;
  while(1) {
    std::cin >> m >> v >> r;
    if(m == -1 && v == -1 && r == -1) {
      break;
    }else if(m + v >= 80  && m != -1 && v != -1) {
      seiseki.push("A");
    }else if(m + v >= 65 && m + v < 80 && m != -1 && v != -1) {
      seiseki.push("B");
    }else if(m + v >= 50 && m + v < 65 && m != -1 && v != -1) {
      seiseki.push("C");
    }else if(m + v >= 30 && m + v < 50 && m != -1 && v != -1) {
      if(r >= 50) {
        seiseki.push("C");
      }else if(r < 50){
        seiseki.push("D");
      }
    }else{
      seiseki.push("F");
    }
  }
  while(!seiseki.empty()) {
    std::cout << seiseki.front() << std::endl;
    seiseki.pop();
  }
}