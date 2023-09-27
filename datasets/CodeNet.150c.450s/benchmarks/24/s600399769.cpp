#include<map>
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
  int b,m,n;
  map<int,int,greater<int> > a;
  map<int,int,greater<int> >::iterator it;
  while(cin>>n>>m&&n+m){
    a.clear();
    for(i=0;i<n;i++){
      int d,p;
      cin>>d>>p;
      a[p]+=d;
    }
    b=0;
    for(it=a.begin();it!=a.end();it++){
      if((*it).second>m){
	b+=(*it).first*((*it).second-m);
	m=0;
      }else
	m-=(*it).second;
    }
    cout<<b<<endl;
  }
  return 0;
}