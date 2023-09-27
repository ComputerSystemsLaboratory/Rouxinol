#include<iostream>
#include<vector>

int main(){
  int n,k;
  long long int ans=-1000000000;
while(true){
  std::cin>>n>>k;
if(n==0&&k==0)break;
  std::vector<long long int>vec(n+1,0);
  long long int sub;
  for(int i=1;i<=n;i++){
    std::cin>>sub;
    vec.at(i)=vec.at(i-1)+sub;
  }
  for(int i=n;i>=k;i--){
    ans=std::max(vec.at(i)-vec.at(i-k),ans);
  }
  std::cout<<ans<<std::endl;
}
  return 0;
}

