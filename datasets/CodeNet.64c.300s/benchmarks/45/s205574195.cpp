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
  int m,n,p,q,r,x;
  while(cin>>n>>m>>p&&n+m+p){
    q=0;
    for(i=0;i<n;i++){
      cin>>x;
      q+=x;
      if(i+1==m)
	r=x;
    }
    if(r)
      cout<<q*(100-p)/r<<endl;
    else
      cout<<0<<endl;
  }
  return 0;
}