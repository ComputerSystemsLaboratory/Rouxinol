#include<bits/stdc++.h>
using namespace std;
int main(){
  while(1){
    int a,b,n;
    cin>>a>>b>>n;
    if(a==0&&b==0&&n==0) break;
    int count=0,s=0,ans;
    for(int j=a;count!=n;j+=b){
      s=0;
      for(int k=2;k<=sqrt(j)+1;k++){
	if(j==1) {
	  s=1;
	  break;
	}
	if(j==2){
	  break;
	}
	if(j%k==0){
	  s=1;
	  break;
	}
      }
      if(s==0){
	count++;
	ans=j;
      }
    }
    cout<<ans<<endl;
  }
  return 0;
}

