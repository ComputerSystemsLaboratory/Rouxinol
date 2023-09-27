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
int main(){
  int i,j,k;
  int a[10000][10],m,n;
  int r,s,t;
  while(cin>>n>>m&&n+m){
    for(i=0;i<n;i++)
      for(j=0;j<m;j++)
	cin>>a[j][i];
    r=0;
    for(i=0;i<(1<<(n-1));i++){
      s=0;
      for(j=0;j<m;j++){
	t=0;
	for(k=0;k<n;k++)
	  t+=(a[j][k]+!!(i&(1<<k)))&1;
	s+=max(t,n-t);
      }
      r=max(r,s);
    }
    cout<<r<<endl;
  }
  return 0;
}