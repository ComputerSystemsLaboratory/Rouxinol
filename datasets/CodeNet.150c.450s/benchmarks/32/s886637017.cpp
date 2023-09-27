#include "bits/stdc++.h"
using namespace std;
#define int long long
#define endl '\n'
int mod=1e9+7;
int mod2=998244353;

signed main(){
  while(true){
    int n,nmin,nmax;
    cin>>n>>nmin>>nmax;
    if(!n&&!nmin&&!nmax)return 0;
    vector<int> p(n);
    for(int i=0;i<n;i++)cin>>p[i];
    int diff=-1;
    int id;
    for(int i=nmin-1;i<nmax;i++){
      if(abs(p[i]-p[i+1])>=diff){
        diff=abs(p[i]-p[i+1]);
        id=i;
      }
    }
    cout<<id+1<<endl;
  }
}

