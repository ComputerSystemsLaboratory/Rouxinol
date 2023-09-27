#include <iostream>

int main(){
  int x;
  int i = 1;
  while(1){
    std::cin >> x;
    if(x==0){
      break;
    } else{
      std::cout << "Case " << i << ": " << x << std::endl;
      i++;
    }
  }
  
  return 0;
}