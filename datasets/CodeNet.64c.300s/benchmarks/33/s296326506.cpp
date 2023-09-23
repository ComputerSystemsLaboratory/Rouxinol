#include<iostream>
int main(){
  int a,b;
  char op;
  while(1){
    std::cin >> a >> op >> b;
    if(op == '?') return 0;
    else if(op == '+') std::cout << a + b << std::endl;
    else if(op == '-') std::cout << a - b << std::endl;
    else if(op == '*') std::cout << a * b << std::endl;
    else if(op == '/') std::cout << a / b << std::endl;
  }
}