#include <iostream>

int main(){
  int n;
  std::cin >> n;
  std::cout << n << ":";
  
  int i = 2;
  int odd = 0;
  while(i<=n){
    if(n%i==0){
        std::cout << " " << i;
        n /= i;
        i = 2;
        odd = 0;
     }else{
        if(i==2 && odd==0){
          odd = 1;
          i = 3;
        }
        else if(i>n/2){
        i = n;
        }else{
          if(odd==1) i += 2;
          else       i++;
        }
     }
  }
  std::cout << std::endl;
  
  return 0;
}