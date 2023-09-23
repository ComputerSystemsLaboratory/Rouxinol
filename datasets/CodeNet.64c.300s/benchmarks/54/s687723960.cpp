#include<algorithm>
#include<iostream>
#include<string>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
using namespace std;
int main(){
  int i,j;
  int a[100],n;
  long long p[21],q[21];
  cin>>n;
  for(i=0;i<n;i++)
    cin>>a[i];
  memset(p,0,sizeof(p));
  p[a[0]]=1;
  for(i=1;i<n-1;i++){
    memset(q,0,sizeof(q));
    for(j=0;j<21;j++){
      if(p[j]){
	if(0<=j+a[i]&&j+a[i]<=20)
	  q[j+a[i]]+=p[j];
	if(0<=j-a[i]&&j-a[i]<=20)
	  q[j-a[i]]+=p[j];
      }
    }
    memcpy(p,q,sizeof(p));
  }
  cout<<p[a[i]]<<endl;
  return 0;
}