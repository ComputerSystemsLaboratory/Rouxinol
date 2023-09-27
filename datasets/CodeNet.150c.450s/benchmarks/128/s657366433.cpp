#include<iostream>
#include<string>

int main(){
  std::string str;

  std::cin >> str;

  int n = str.size();
  for(int j=n-1;j>=0;j--){
    std::cout << str[j];
  }
  std::cout << std::endl;
}