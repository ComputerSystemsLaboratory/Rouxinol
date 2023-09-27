#include <iostream>

int main(void){
  int price;

  while(1){
    int cnt = 0;
    std::cin >> price;
    if(price == 0)  return 0;
    price = 1000 - price;
    while(1){
      if(price >= 500){
        cnt++; price -= 500;
      }else if(price >= 100){
        cnt++; price -= 100;
      }else if(price >= 50){
        cnt++;  price -= 50;
      }else if(price >= 10){
        cnt++; price -=10;
      }else if(price >= 5){
        cnt++; price -= 5;
      }else{
        cnt += price;
        break;
      }
    }
    std::cout << cnt << std::endl;
  }
}