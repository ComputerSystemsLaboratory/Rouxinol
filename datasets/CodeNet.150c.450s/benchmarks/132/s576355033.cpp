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
  int i;
  int a[50],n,p,q;
  memset(a,0,sizeof(a));
  while(cin>>n>>p&&n+p){
    q=p;
    for(i=0;;i=(i+1)%n){
      if(p){
	p--;
	a[i]++;
	if(a[i]==q)
	  break;
      }else{
	p=a[i];
	a[i]=0;
      }
    }
    a[i]=0;
    cout<<i<<endl;
  }
  return 0;
}