#include <iostream>
#include <string>


int main()
{

  while(true){
    std::string str;
    std::cin >> str;
 
    if(str.size()==1 && str == "0")
      break;
 
    int sum =0;
    for(int i=0; i<str.size(); i++){
      sum += str[i] - '0';
    }
      std::cout << sum << std::endl;
  }
}