#include <iostream>
#include <stack>
int main(){
  std::stack<int> i;
  int n=0;
  while(std::cin>>n){
    if(!n)std::cout<<i.top()<<std::endl,i.pop();
    else{i.push(n);}
  }
  return 0;
}