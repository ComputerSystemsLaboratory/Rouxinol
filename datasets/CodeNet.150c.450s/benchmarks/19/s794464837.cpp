#include <iostream>

int main(){
  int a,b;
  while(std::cin >> a >> b, (a|b)){
    [&a,&b] () -> void { if(a > b){ std::swap(a,b); } } ();
    std::cout << a << " " << b << std::endl;
  }
  return 0;
}