#include <iostream>
#include <stack>

int main(int argc,char* argv[]){
  std::stack<int> vec;
  int temp;
  
  while(std::cin >> temp){
    if(temp == 0){
      int a = vec.top();
      std::cout << a << std::endl;
      vec.pop();
      continue;
    }else{
      vec.push(temp);
      continue;
    }
  }

  return 0;
  
}