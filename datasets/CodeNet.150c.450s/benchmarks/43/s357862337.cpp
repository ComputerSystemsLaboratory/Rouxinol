#include <iostream>

int main(){
  int n;

  while(std::cin >> n, n){
    int A_point=0,B_point=0;
    int A_card,B_card;
    while(n--){
      std::cin >> A_card >> B_card;
      if(A_card > B_card){
        A_point += A_card + B_card;
      }else if(A_card < B_card){
        B_point += A_card + B_card;
      }else{
        A_point += A_card;
        B_point += B_card;
      }
    }
    std::cout << A_point << " " << B_point << std::endl;
  }

  return 0;
}