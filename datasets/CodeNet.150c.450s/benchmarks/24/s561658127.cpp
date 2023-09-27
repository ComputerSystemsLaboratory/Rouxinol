#include<iostream>
#include<string>
#include<vector>
#include<utility>
#include<queue>
#include<algorithm>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<map>
#include<complex>
#define INF 2147483647
#define llINF 9223372036854775807
#define pb push_back
#define mp make_pair 
#define F first
#define S second
#define ll long long

using namespace std;
int main(){
  ll n,m;
  while(cin>>n>>m,n+m){
    ll ans=0;
    vector<pair<int,int> >pii(n);
    for(int i=0;i<n;i++){
      cin>>pii[i].S>>pii[i].F;
      ans+=pii[i].S*pii[i].F;
    }
    int po=n-1;
    sort(pii.begin(),pii.end());
    while(po>=0){
      if(m-pii[po].S>=0){
	ans-=pii[po].F*pii[po].S;
	m-=pii[po].S;
      }else{
	ans-=pii[po].F*m;
	break;
      }
      po--;
    }
    cout<<ans<<endl;
  }
  return 0;
}

