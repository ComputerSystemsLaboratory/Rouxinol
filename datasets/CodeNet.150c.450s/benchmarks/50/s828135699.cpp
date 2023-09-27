#include<iostream>
using namespace std;
int t[]={500,100,50,10,5,1};
int main(){
  while(1){
    int n,ans=0;
    cin>>n;
    if(n==0)break;
    n=1000-n;
    for(int i=0;i<6;i++)ans+=n/t[i],n%=t[i];
    cout<<ans<<endl;
  }
  return 0;
}