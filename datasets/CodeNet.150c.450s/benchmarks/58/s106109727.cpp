#include <iostream>
#include <string>
#include <vector>
//#include <stack>
#include <cstdlib>

typedef class Stack{
private:
  std::vector<int> * v;
public:
  Stack(){
    v = new std::vector<int>();
  }
  ~Stack(){
    delete v;
  }

  int top(){
    return v->back();
  }

  void pop(){
    v->erase(v->end()-1);
  }

  void push(int p){
    return v->push_back(p);
  }

} Stack;

// without standard stack
int main(){
  //const int STACK_SIZE 200;
  std::string s;
  Stack stack;
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