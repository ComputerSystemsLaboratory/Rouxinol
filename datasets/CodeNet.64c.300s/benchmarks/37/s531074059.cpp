#include<iostream>
using namespace std;
int main(){
  while(1){
    int n,ans=0,sum=0;
    cin>>n;
    if(n==0)break;
    for(int i=1;i<=500;i++){
      sum=i;
      for(int j=i+1;j<=500;j++){
	sum+=j;
	if(sum==n)ans++;
	if(sum>n)break;
      }
    }
    cout<<ans<<endl;
  }
  return 0;
}