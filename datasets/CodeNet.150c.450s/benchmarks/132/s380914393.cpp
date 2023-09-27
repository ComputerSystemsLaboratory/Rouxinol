#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,p;
  while(cin>>n>>p, n){
    int vi[51]={};
    int i=0;
    while(1){
      int flag = 0;
      if(p){
        vi[i]++;
        p--;
      }
      else{
        p=vi[i];
        vi[i]=0;
      }
      for(int j=0;j<n;++j)
        if(j!=i && vi[j]) flag=1;
      if(flag==0 && p==0){
        cout<<i<<endl;
        break;
      }
      i++;
      if(i==n) i=0;
    }
  }
  return 0;
}