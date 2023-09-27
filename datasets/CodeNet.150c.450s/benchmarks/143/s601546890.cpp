#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
typedef long long ll;

int main(){
	int n; cin>>n;
	map<ll,ll> mp;
	ll sum=0;
	rep(i,n){
		int a; cin>>a;
		mp[a]++;
		sum+=a;
	}

	int q; cin>>q;
	rep(i,q){
		int b,c; cin>>b>>c;
		if(mp.find(b)==mp.end()) cout<<sum<<endl;
		else{
			sum=sum-b*mp[b]+c*mp[b];
			mp[c]+=mp[b];
			mp.erase(b);
			cout<<sum<<endl;
		}
	}
}