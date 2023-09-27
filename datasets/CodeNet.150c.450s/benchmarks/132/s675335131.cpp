#include <iostream>

int main(void){
  while(1){
int stonNum[51] = {0};
    int p, n;
    std::cin >> n >> p;
    int first = p;
    if(n == 0 && p == 0)  return 0;
    int i=0;
    while(1){
      bool flag = true;
      if(p > 0){
        stonNum[i]++;
        p--;
        if(stonNum[i] == first){
        std::cout << i << std::endl;
        break;
        }
      }else{
        p += stonNum[i];
        stonNum[i] = 0;
      }
      if(i == n-1)  i = 0;
      else i++;
    }
  }
}