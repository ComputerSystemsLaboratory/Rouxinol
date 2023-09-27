#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
  int n,a,mini,ans=-(1<<30);
  scanf("%d %d",&n,&mini);
  for(int i=0;i<n-1;i++){
    scanf("%d",&a);
    if(a-mini>ans)ans=a-mini;
    if(mini>a)mini=a;
  }
  cout<<ans<<endl;
  return 0;
}
