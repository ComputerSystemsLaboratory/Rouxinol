#include<bits/stdc++.h>
using namespace std;

void sorts(int* xx,int* yy);

int main(){
  int x,y;
  cin>>x>>y;
  sorts(&x,&y);
  x=x%y;
  if(!x){
    cout<<y<<endl;
    return 0;
  }
  int ans=y;
  for(int i=x;i>=0;i--){
    if(y%i==0 && x%i==0){
      ans=i;
      break;
    }
  }
  cout<<ans<<endl;
}

void sorts(int* xx,int* yy){
  if(*xx<*yy){
    int temp=*xx;
    *xx=*yy;
    *yy=temp;
  }
  return;
}