// Lec08-A Toggling Cases
#include<iostream>
#include<string>
int main(){
  std::string str;
  std::getline(std::cin, str);
  for(int i=0; i<str.length(); i++){
    if(str[i] >= 'A' && str[i] <= 'z') str[i]>='A'&&str[i]<='Z' ? str[i] += 32 : str[i] -= 32;
  }
  std::cout << str << std::endl;
  return 0;
}