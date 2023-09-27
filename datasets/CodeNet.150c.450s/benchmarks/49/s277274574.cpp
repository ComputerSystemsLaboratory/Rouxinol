#include <iostream>

int main(){
  while(1){
    int n;
    std::cin>>n;
    if(n==0)break;
    int maxs=-1,mins=1001;
    int sum=0;
    for(int i=0;i<n;++i){
      int s;
      std::cin>>s;
      if(maxs<s) maxs=s;
      if(mins>s) mins=s;
      sum += s;
    }
    std::cout<<(sum-mins-maxs)/(n-2)<<std::endl;
  }
  return 0;
}