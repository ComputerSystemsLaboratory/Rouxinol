#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll mod=1e9+7;
const ll N=1e5+1;
const ll INF=1e10;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	ll n,t,q;
	ll sum=0;
	cin>>n;
	vector<ll> cnt(N);
	for(int i=0;i<n;i++){
		cin>>t;
		cnt[t]++;
		sum+=t;
	}
	cin>>q;
	while(q--){
		ll b,c;
		cin>>b>>c;
		t=cnt[b];
		cnt[b]=0;
		sum-=(t*b);
		sum+=(t*c);
		cnt[c]+=t;
		cout<<sum<<'\n';
	}
}
