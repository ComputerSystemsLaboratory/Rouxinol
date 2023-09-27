#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  int maxs,mins,sum;
  while(cin>>n,n){
    sum=0;
    maxs=0;
    mins=2000;
    for(int i=0,tmp;i<n;i++){
      cin>>tmp;
      sum+=tmp;
      maxs=max(maxs,tmp);
      mins=min(mins,tmp);
    }
    sum-=mins;
    sum-=maxs;
    cout<<sum/(n-2)<<endl;
  }
}