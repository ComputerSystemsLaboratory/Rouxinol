#include<iostream>

int main(){
  int a, b;
  std::cin >> a;
  std::cin >> b;

  std::string op;
  if(a < b){
    op = "a < b";
  }else if(a > b){
    op = "a > b";
  }else{
    op = "a == b";
  }
  std::cout << op << std::endl;
    
  return 0;
}

