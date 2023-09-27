#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,y,m,d;
  int ans;
  int Y[1000];
  cin>>n;
  for(int i=0;i<n;i++){
    ans=0;
    for(int j=0;j<1000;j++){
      if(j%3==2)Y[j]=200;
      else Y[j]=195;
    }
    cin>>y>>m>>d;
    for(int j=y-1;j<1000;j++){
      ans+=Y[j];
    }
    for(int j=1;j<m;j++){
      if(y%3==0) ans-=20;
      else if(j%2==0) ans-=19;
      else if(j%2==1) ans-=20;
    }
    for(int j=0;j<d;j++){
      ans--;
    }
    cout<<ans-194<<endl;
  }
  return 0;
}

