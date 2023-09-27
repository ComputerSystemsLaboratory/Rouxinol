#include<iostream>

int main(){

  int n,k;

  while(std::cin >> n){
    k=0;
    for(int a=0;a<10;a++){
      for(int b=0;b<10;b++){
        for(int c=0;c<10;c++){
          for(int d=0;d<10;d++){
            if(a+b+c+d==n){
              ++k;
            }
          }
        }
      }
    }
    std::cout << k << std::endl;
  }
}