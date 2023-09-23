#include <iostream>
int main(void){
  int n,ans=100000,t;
  std::cin>>n;
  for(int i=0;i<n;i++){
    ans*=1.05;
    t=ans%1000;
    if(t)ans=ans-t+1000;
  }
  std::cout<<ans<<std::endl;
  return 0;
}