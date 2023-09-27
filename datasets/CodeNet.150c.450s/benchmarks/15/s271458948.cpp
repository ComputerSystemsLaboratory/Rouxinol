#include <vector>
#include <iostream>

typedef unsigned uint;

unsigned count(std::vector<uint> s, std::vector<uint> t){
  uint n = 0;
  for(uint i = 0; i < t.size(); i++){
    for(uint j = 0; j < s.size(); j++){
      if(s[j] == t[i]){n++;break;}
    }
  }
  return n;
}

int main(){
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(0);
  std::vector<uint> s,t;

  {
    uint n,buf;
    std::cin >> n;
    for(; n; n--){
      std::cin >> buf;
      s.push_back(buf);
    }
  }

  {
    uint q,buf;
    std::cin >> q;
    for(; q; q--){
      std::cin >> buf;
      t.push_back(buf);
    }
  }

  std::cout << count(s,t) << '\n';
}