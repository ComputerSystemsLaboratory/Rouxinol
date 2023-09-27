#include<bits/stdc++.h>
using namespace std;
int ca[51],tmp[51];
int main(){
  int n,r;
  while(cin>>n>>r,n+r){
    for(int i=0;i<n;++i) ca[i]=n-i;
    int p,c;
    for(int i=0;i<r;++i){
      cin>>p>>c;
      for(int j=0;j<c;++j) tmp[j]=ca[p+j-1];
      for(int j=p-2;j>=0;--j) ca[j+c]=ca[j];
      for(int j=0;j<c;++j) ca[j]=tmp[j];
    }
    cout<<ca[0]<<endl;
  }
  return 0;
}