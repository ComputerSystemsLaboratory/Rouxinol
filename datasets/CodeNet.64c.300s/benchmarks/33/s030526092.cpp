#include<iostream>

int main(){
  int a,b;
  char op;

  while(1){

    std::cin >> a >> op >> b;
    if(op == '?') break;
    
    switch(op){
    case '+':
      std::cout << a + b << std::endl;
      break;
    case '-':
      std::cout << a - b << std::endl;
      break;
    case '*':
      std::cout << a * b << std::endl;
      break;
    case '/':
      std::cout << a / b << std::endl;
      break;
    }

  }

  return 0;
}