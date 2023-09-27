#include <iostream>
#include <cmath>
int n;
int a[1000];
int min = 1000000;

int main(){
  while(true){
    std::cin >> n;
    if(n == 0){
      break;
    }
    else{
      for(int i = 0; i < n; i++){
        std::cin >> a[i];
      }
      for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
           if(std::abs(a[i] - a[j]) < min){
             min = std::abs(a[i] - a[j]);
           }
        }
      }
      std::cout << min << std::endl;
      min = 1000000;
    }
  }
  return 0;
}
