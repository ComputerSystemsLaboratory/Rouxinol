#include<bits/stdc++.h>
int mire(int y, int m, int d){
  int ans=0;
  int sumy=0;
  for(int i=y+1;i<1000;i++){
    if(i%3!=0) sumy++;
  }
  ans+=(999-y)*10*20;
  ans-=(sumy*5);
  if(y%3==0){
    for(int i=m+1;i<11;i++){
      ans+=20;
    }
  }
  else{
    for(int i=m+1;i<11;i++){
      if(i%2==1)ans+=20;
      else ans+=19;
    }
  }
  if(y%3==0 || m%2==1){
    for(int i=d;i<21;i++){
      ans++;
    }
  }
  else{
    for(int i=d;i<20;i++){
      ans++;
    }
  }
  return ans;
}
using namespace std;
int main(){
  int n,y[105],m[105],d[105];
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>y[i]>>m[i]>>d[i];
  }
  for(int i=0;i<n;i++){
    cout<<mire(y[i],m[i],d[i])<<endl;
  }
  return 0;
}
