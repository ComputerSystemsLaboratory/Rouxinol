#include <iostream>
using namespace std;
int main(){

  int n,k,w[100000],i;

  cin>>n>>k;
  for(i=0;i<n;i++) cin>>w[i];

  long long l=0,r=100000*10000,m;
  while(r-l>1){
    m=(l+r)/2;
    int cnt=0;
    for(int j=0;j<k;j++){
      long long s=0;
      while(s+w[cnt]<=m){
        s+=w[cnt];
        cnt++;
        if(cnt==n) break;
      }
      if(cnt==n) break;
    }

    if(cnt>=n) r=m;
    else l=m;
  }
  cout<<r<<endl;

  return 0;

}