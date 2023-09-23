#include<iostream>

int main(){
  long long int n,ans=1;
  std::cin >> n;
  if(n==0){
    std::cout << 1 <<std::endl;
    return 0;
  }
  while(n>0){
    ans *= n;
    --n;
  }
  std::cout << ans << std::endl;
}