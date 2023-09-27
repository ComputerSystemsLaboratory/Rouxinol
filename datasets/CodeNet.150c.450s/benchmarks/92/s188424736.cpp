#include <stdio.h>
#include <iostream>

int main(){
  int a, b, c;
  int i;
  int num;
  
  while(scanf("%d", &a)!=EOF){
    scanf("%d", &b);
    
    i = 10;
    num = 1;
    c = a + b;
    while(1){
      if(c/i!=0){
        num++;
        i *= 10;
      }else{
        break;
      }
    }
    std::cout << num << std::endl;
  }
  
  return 0;
  
}