#include <iostream>
#include<stdio.h>
#define MAXSIZE 100
#define PI 3.141592653589
using namespace std;
int main(){

  while (1) {
    int n,x;
    std::cin >> n>>x;
    if(0==n&&0==x){
      break;
    }
    int cnt=0;
    for(int i=1;i<=n;i++){
      for(int j=i+1;j<=n;j++){
        for(int k=j+1;k<=n;k++){
          if(x==i+j+k)cnt++;
        }
      }
    }
    std::cout << cnt << '\n';
  }
}