#include <bits/stdc++.h>
using namespace std;
int main(){

  for(;;){

  int n,m,p;
  cin>>n>>m>>p;

  if(!n) break;

  int x[100],sum=0;
  for(int i=0;i<n;i++) cin>>x[i],sum+=x[i];

  if(!x[m-1]){
    cout<<0<<endl;
    continue;
  }
  sum*=100;
  sum-=sum*p/100;
  cout<<sum/x[m-1]<<endl;

  }

  return 0;

}

