#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <cstdlib>



void swap(int &a, int &b){
  int tmp;
  tmp = a;
  a = b;
  b = tmp;
}

int main(){
  //const int STACK_SIZE 200;
  std::string s;
  std::stack<int> stack;
  while(std::cin >> s){
    if (s == "+" || s == "*" || s == "-"){
      const int var2 = stack.top(); stack.pop();
      const int var1 = stack.top(); stack.pop();
      int res;
      
      if (s == "+"){
	res = var1 + var2;
      }
      else if (s == "*"){
	res = var1 * var2;
      }
      else if (s == "-"){
	res = var1 - var2;
      }
      stack.push(res);
    }
    else{
      stack.push(atoi(s.c_str()));
    }
  }
  
  std::cout << (stack.top()) << std::endl;
}