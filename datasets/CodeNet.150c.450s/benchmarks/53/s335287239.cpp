#include<iostream>
#include<math.h>

int main(){
  int n;
  std::cin >> n;
  std::cout << n << ":";
  
  int div = 2;
  int sq = (int)sqrt(n);
  while(div <= sq){
    if(n % div == 0){
      std::cout << " " << div;
      n /= div;
      sq = (int)sqrt(n);
    }else{
      if(div == 2) div = 3;
      else div += 2;
    }
  }
  std::cout << " " << n << std::endl;

  return 0;
}

