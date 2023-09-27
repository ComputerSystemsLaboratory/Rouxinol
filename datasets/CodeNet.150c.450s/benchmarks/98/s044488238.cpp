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
  int i,j;
  int a[100],b[100],c,d,e,f,m,n;
  while(cin>>n>>m&&n+m){
    c=d=0;
    for(i=0;i<n;i++){
      cin>>a[i];
      c+=a[i];
    }
    for(i=0;i<m;i++){
      cin>>b[i];
      d+=b[i];
    }
    e=f=101;
    for(i=0;i<n;i++){
      for(j=0;j<m;j++){
	if(c+b[j]-a[i]==d+a[i]-b[j]){
	  if(e+f>a[i]+b[j]){
	    e=a[i];
	    f=b[j];
	  }
	}
      }
    }
    if(e==101&&f==101)
      cout<<-1<<endl;
    else
      cout<<e<<" "<<f<<endl;
  }
  return 0;
}