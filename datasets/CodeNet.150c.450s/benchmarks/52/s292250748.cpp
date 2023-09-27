#include<iostream>

int main(){
  int i,a;
  int train[1000];

  i = -1;

  while(std::cin >> a){
    if(a == 0){
      std::cout << train[i] << std::endl;
      --i;
      continue;
    }
    ++i;
    train[i] = a;
  }
}