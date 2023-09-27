#include <iostream>

int main(void){
  int submitted[30];
  for(int i=0; i < 30; i++){
    submitted[i] = 0;
  }
  for(int i=0; i < 28; i++){
    int ind;
    std::cin >> ind;
    submitted[ind - 1] = 1;
  }
  for(int i=0; i < 30; i++){
    if(submitted[i] == 0){
      std::cout << i+1 << std::endl;
    }
  }
  return 0;
}