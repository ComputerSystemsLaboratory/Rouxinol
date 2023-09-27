#include <iostream>

void swap(int &a, int &b){
  int tmp;
  tmp = a;
  a = b;
  b = tmp;
}

int main(){
  int a, b;
  std::cin>>a;
  std::cin>>b;

  if (a > b) swap(a,b);
  // b >= a;
  
  while(a>0){
    int r = b%a;
    //int c = b/a;
    //b = a*c + r
    b = a;
    a = r;
  }
  
  std::cout << b << std::endl;
}