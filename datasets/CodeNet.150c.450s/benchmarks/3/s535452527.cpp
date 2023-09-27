// Lec09-D Transformation
#include<iostream>
#include<string>
#include<algorithm>
int main(){
  static const std::string pri="print", rev="reverse", rep="replace";
  std::string str, comm, p;
  std::cin >> str;
  int q, a, b;
  for(std::cin >> q; q; q--){
    std::cin >> comm >> a >> b;
    if(pri == comm){
      for(; a<=b; a++) std::cout << str[a];
      std::cout << std::endl;
    }
    else if(rev == comm) std::reverse(str.begin()+a, str.begin()+b+1);
    else if(rep == comm){
      std::cin >> p;
      str.replace(a, b-a+1, p);
    }
  }
  return 0;
}