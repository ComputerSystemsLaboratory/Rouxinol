#include <iostream>
#include <stack>

int main(){
  std::stack<int> s;
  std::string buf;

  while(std::cin >> buf){
    try{
      int i = stoi(buf);
      s.push(i);
    }
    catch(...){
      int a = s.top();
      s.pop();
      if(buf == "+"){
        s.top() += a;
      }
      else if(buf == "-"){
        s.top() -= a;
      }
      else{
        s.top() *= a;
      }
    }
  }
  std::cout << s.top() << std::endl;
}