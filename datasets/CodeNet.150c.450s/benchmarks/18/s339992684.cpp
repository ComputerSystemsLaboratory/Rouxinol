#include<iostream>

int main(){
  long int n,M;

  M = 100000;

  std::cin >> n;

  for(int i=0;i<n;i++){
    M = M * 1.05;
    if(M%1000!=0){
      M = M - (M%1000) + 1000;
    }
  }
  std::cout << M << std::endl;
}