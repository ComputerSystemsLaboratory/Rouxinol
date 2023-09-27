#include "bits/stdc++.h"
using namespace std;

int main(){
  while(1){
    int flag=0;
    int h,w;
    cin>>h>>w;
    if(h==0&&w==0)break;
    int n=h*h+w*w;
    int ans=1e9+7;
    for(int i=1;i<151;i++){
      for(int j=i+1;j<151;j++){
        int x=i*i+j*j;
        if(n==x&&i>h){
          cout<<i<<" "<<j<<endl;
          flag=1;
          break;
        }
        if(flag==1)break;
        if(n<x){
          ans=min(ans,x);
        }
        if(flag==1)break;
      }
      if(flag==1)break;
    }

    for(int i=1;i<151;i++){
      if(flag==1)break;
      for(int j=i+1;j<151;j++){
        int x=i*i+j*j;
        if(x==ans){
          cout<<i<<" "<<j<<endl;
          flag=1;
        }
        if(flag==1)break;
      }
      if(flag==1)break;
    }
  }
  return 0;
}