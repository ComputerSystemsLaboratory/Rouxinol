#include<iostream>
#include<map>
#include<string>

int main(){
  std::string str;
  std::string maxlen;
  std::string maxocc;
  std::map<std::string, int> occ;
  //std::cin >> str;
  //std::cout << str << std::endl;

  while(std::cin >> str){
    if(str.size()>maxlen.size()){
      maxlen = str;
    }
    occ[str]++;
    if(occ[str]>occ[maxocc]){
      maxocc = str;
    }
  }
  std::cout << maxocc << ' ' << maxlen << std::endl;
}