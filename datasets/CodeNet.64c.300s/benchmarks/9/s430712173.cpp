#include <iostream>
#include <math.h>

int main(){
  int n;
  int debt = 100000;
  
  std::cin >> n;
  for(int i=0; i<n; i++){
    debt = round((double)debt * 1.05);
    int under = debt % 1000;
    if(under==0){}
    else{
      debt = debt - under + 1000;
    }
  }
  std::cout << debt << std::endl;
  
  return 0;
}