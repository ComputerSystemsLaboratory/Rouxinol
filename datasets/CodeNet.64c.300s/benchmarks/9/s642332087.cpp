#include<iostream>
#include<cstdio>
using namespace std;
int main(){
  int n;
  int ans=100000;
  cin>>n;
  for(int i=0;i<n;i++){
    ans=ans+ans/100*5;
   /*   ans+=900;
   ans=(int)ans/1000;
   ans=ans*1000;*/
    if(ans%1000!=0)ans+=1000-ans%1000;
  }
  printf("%d\n",ans);
  //cout<<(int)ans<<endl;
}