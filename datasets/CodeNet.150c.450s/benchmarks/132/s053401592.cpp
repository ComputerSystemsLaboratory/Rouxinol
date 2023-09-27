#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,p;
  while(cin>>n>>p,n){
    int v[51]={};
    int i=0,a=p;
    while(1){
      if(a==0){
        a=v[i], v[i]=0;
      }else if(a)
        a--, v[i]++;
      if(a==0 && v[i]==p){
        cout<<i<<endl;
        break;
      }
      i++;
      if(i==n) i=0;
    }
  }
  return 0;
}