#include<iostream>
#include<cstdio>
using namespace std;
int main(){
  while(1){
    int n,r,a,b,yama[51],tmp[51];
    cin>>n>>r;
    if(n+r==0)break;
    for(int i=0;i<=n;i++)yama[i]=i;
    for(int i=0;i<r;i++){
      cin>>a>>b;
      for(int j=0;j<b;j++)tmp[j]=yama[n-(a+b-2)+j];
      for(int j=0;j<a-1;j++)yama[n-(a+b-2)+j]=yama[n-a+2+j];
      for(int j=0;j<b;j++)yama[n-b+1+j]=tmp[j];
    }
    cout<<yama[n]<<endl;
  }
  return 0;
}