#include <iostream>
#include <set>
#include <string>

int main(){
  std::ios_base::sync_with_stdio(false);

  std::set<std::string> dic;

  unsigned n;
  std::cin >> n;

  std::string buf;
  for(unsigned i = 0; i < n; i++){
    std::cin >> buf;
    if(buf == "insert"){
      std::cin >> buf;
      dic.insert(buf);
    }
    if(buf == "find"){
      std::cin >> buf;
      std::cout << ((dic.find(buf) == dic.end())?"no":"yes") << '\n';
    }
  }
}