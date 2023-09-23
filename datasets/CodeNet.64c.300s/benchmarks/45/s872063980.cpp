#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m,p;
  while(cin>>n>>m>>p,n){
    int sum=0;
    int x[n+1];
    for(int i=1;i<=n;++i){
      cin>>x[i];
      sum+=x[i];
    }
    sum*=100-p;
    if(x[m])
      cout<<sum/x[m]<<endl;
    else
      cout<<0<<endl;
  }
  return 0;
}