#include<iostream>
int main(){
  int n,i,temp;
  std::cin >> n;
  for(i=1; i<=n; i++){
    for(temp=i; temp!=0;){
      if(!((temp - 3) % 10) || !(i % 3)){
        std::cout << " " << i;
        break;
      }
      else temp /= 10;
    }
  }
  std::cout << std::endl;
  return 0;
}