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
  int a[31],b;
  memset(a,0,sizeof(a));
  for(i=0;i<28;i++){
    cin>>b;
    a[b]=1;
  }
  for(i=1;i<31;i++){
    if(a[i]==0)
      cout<<i<<endl;
  }
  return 0;
}