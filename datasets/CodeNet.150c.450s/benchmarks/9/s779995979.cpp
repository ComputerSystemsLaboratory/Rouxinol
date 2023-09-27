#include<iostream>

int main(){

  while(true){
    std::string str;
    std::cin >> str;
    if(str == "-") break;

    int m;
    std::cin >> m;

    int s = 0;
    for(int i = 0; i < m; i++){
      int h;
      std::cin >> h;
      s += h;
    }

    int cut = s % str.length();
    std::string shuf = str.substr(cut, str.length() - cut) + str.substr(0, cut);
    std::cout << shuf << std::endl;
  }

  return 0;
}

