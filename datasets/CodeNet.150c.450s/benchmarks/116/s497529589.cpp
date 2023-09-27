#include<iostream>
#include<string>
#include<vector>
#include<utility>
#include<queue>
#include<algorithm>
#include<cmath>
#include<cstdio>
#define INF 2147483647
#define llINF 9223372036854775807
#define pb push_back
#define mp make_pair 
#define F first
#define S second
#define ll long long

using namespace std;
int main(){
  int n,k;
  while(cin>>n>>k,n+k){
    vector<ll>sum(n);
    ll ans=-llINF;
    for(int i=0;i<k-1;i++){
      cin>>sum[i];
    }
    for(int i=k-1;i<n;i++){
      cin>>sum[i];
      ll mi=0;
      for(int j=0;j<k;j++){
	mi+=sum[i-j];
      }
      //cout<<mi<<endl;
	ans=max(mi,ans);
    }
    cout<<ans<<endl;
  }
  return 0;
}