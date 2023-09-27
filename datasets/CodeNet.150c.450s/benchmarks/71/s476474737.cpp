#include <stdio.h>
#include <iostream>
#include <math.h>

int main(){
  int n, num;
  
  while(scanf("%d", &n)!=EOF){
    num = 0;
    for(int i=0; i<10; i++){
      for(int j=0; j<10; j++){
        for(int k=0; k<10; k++){
          for(int l=0; l<10; l++){
            if(i+j+k+l==n) num++;
          }
        }
      }
    }
    std::cout << num << std::endl;
  }
  
  return 0;
}