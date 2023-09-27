#include<vector>
#include<list>
#include<algorithm>
#include<iostream>
#include<string>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
using namespace std;
int f(int a[][52],int b[][52],int x,int y){
  if(a[x][y]==0||b[x][y]==1)
    return 0;
  else{
    b[x][y]=1;
    f(a,b,x-1,y-1);
    f(a,b,x,y-1);
    f(a,b,x+1,y-1);
    f(a,b,x-1,y);
    f(a,b,x+1,y);
    f(a,b,x-1,y+1);
    f(a,b,x,y+1);
    f(a,b,x+1,y+1);
    return 1;
  }
}
int main(){
  int i,j;
  int a[52][52],b[52][52],w,h;
  int ct;
  while(cin>>w>>h&&w+h){
    memset(a,0,sizeof(a));
    for(i=1;i<h+1;i++)
      for(j=1;j<w+1;j++)
	cin>>a[j][i];
    memset(b,0,sizeof(b));
    ct=0;
    for(i=1;i<h+1;i++)
      for(j=1;j<w+1;j++)
	ct+=f(a,b,j,i);
    cout<<ct<<endl;
  }
  return 0;
}