#include "stdio.h"

int main(){
  int height[10];
  for(int i = 0; i < 10; i++){
    scanf(" %d", &height[i]);
  }
  for(int numb = 0; numb < 9; numb++){
        for(int num = 0; num < 9-numb; num++){
            if(height[num] < height[num+1]){
                int stock = height[num];
                height[num] = height[num+1];
                height[num+1] = stock;
            }
        }
    }
  for(int a = 0; a < 3; a++){
    printf("%d\n", height[a]); 
  }
  return 0;
}