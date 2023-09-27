#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main(){
  int n;
  long long ans;
  
  scanf(" %d",&n);
  
  ans=1;
  for(int i=1;i<=n;i++){
    ans*=i;
  }
  
  printf("%lld\n",ans);
  
  return 0;
}