#include <iostream>
#include<stdio.h>
#define MAXSIZE 10000
#define PI 3.141592653589
using namespace std;
int main(){
  int n;
  std::cin >> n;

  for(int i=1;i<=n;i++){
    if(i%3==0){
      std::cout << " "<<i;
      continue;
    }

    int j=i;

    while(j>=10){
      if(j%10==3){
        std::cout << " "<<i;
        break;
      }else{
        j=j/10;
      }
    }
    if(j==3){
      std::cout << " "<<i;
    }


  }
  std::cout  << '\n';

}