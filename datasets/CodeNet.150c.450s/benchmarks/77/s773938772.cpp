#include<algorithm>
#include<iostream>
#include<string>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
using namespace std;
int main(){
  int i,j,k;
  int a[21][21],d,m,n,x,y,vx,vy;
  char c;
  while(cin>>n&&n){
    memset(a,0,sizeof(a));
    for(i=0;i<n;i++){
      int p,q;
      cin>>p>>q;
      a[p][q]=1;
    }
    cin>>m;
    x=y=10;
    k=0;
    if(a[x][y]){
      a[x][y]=0;
      k++;
    }
    for(i=0;i<m;i++){
      cin>>c>>d;
      if(0){
      }else if(c=='N'){
	vx=0;
	vy=1;
      }else if(c=='E'){
	vx=1;
	vy=0;
      }else if(c=='S'){
	vx=0;
	vy=-1;
      }else if(c=='W'){
	vx=-1;
	vy=0;
      }
      for(j=0;j<d;j++){
	x+=vx;
	y+=vy;
	if(a[x][y]){
	  a[x][y]=0;
	  k++;
	}
      }
    }
    if(k==n)
      cout<<"Yes"<<endl;
    else
      cout<<"No"<<endl;
  }
  return 0;
}