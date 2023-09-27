#include <iostream>
#include <cstring>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <map>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,b) FOR(i,0,b)
#define PB push_back
#define MP make_pair
int main(){
  int n;
  while(cin>>n){
    if(n==0)break;
    int a[5000],sum[5001];
    sum[0]=0;
    for(int i=0;i<n;i++){
      cin>>a[i];
      sum[i+1]=sum[i]+a[i];
    }
    int ans=-1000000;
    for(int i=0;i<n;i++){
      for(int j=i+1;j<=n;j++){
        ans=max(ans,sum[j]-sum[i]);
      }
    }
    cout<<ans<<endl;
  }
}