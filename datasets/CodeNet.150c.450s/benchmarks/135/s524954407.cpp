#include<algorithm>
#include<iostream>
#include<string>
#include<cstdlib>
#include<cstring>
#include<cmath>
using namespace std;
int c[1500001],d[1500001],x[1500001],y[1500001];
int main(){
  int i,j;
  int m,n,w,h;
  int ct;
  x[0]=y[0]=0;
  while(cin>>w>>h&&w+h){
    memset(c,0,sizeof(c));
    m=1;
    for(i=0;i<w;i++){
      int p;
      cin>>p;
      n=1;
      for(j=0;j<m;j++){
	y[n]=x[j]+p;
	n++;
      }
      for(j=1;j<m;j++)
	c[x[j]]++;
      for(j=1;j<n;j++)
	x[j]=y[j];
      m=n;
    }
    for(i=1;i<m;i++)
      c[x[i]]++;

    memset(d,0,sizeof(c));
    m=1;
    for(i=0;i<h;i++){
      int p;
      cin>>p;
      n=1;
      for(j=0;j<m;j++){
	y[n]=x[j]+p;
	n++;
      }
      for(j=1;j<m;j++)
	d[x[j]]++;
      for(j=1;j<n;j++)
	x[j]=y[j];
      m=n;
    }
    for(i=1;i<m;i++)
      d[x[i]]++;

    ct=0;
    for(i=1;i<1500001;i++)
      ct+=c[i]*d[i];

    cout<<ct<<endl;
  }
  return 0;
}