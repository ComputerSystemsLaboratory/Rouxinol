#include <bits/stdc++.h>
#pragma GCC optimize("O3")
using ll = long long;
using namespace std;        
#define pb push_back
#define eb emplace_back
#define F first
#define S second
#define ar array


void solve(){
			int n,q; cin>>n;
			map<ll,ll> m;
			ll sum=0;
			for(int i=0;i<n;i++){
				ll x;cin>>x;
				m[x]++;
				sum+=x;
			}
			cin>>q;
			while(q--){
				ll a,b; cin>>a>>b;
				sum-=m[a]*a;
				sum+=m[a]*b;
				m[b]+=m[a];
				m[a]=0;
				cout<<sum<<endl;
			
			}
			

}

int main(){
	ios_base::sync_with_stdio(false);
   	cin.tie(NULL);
//	freopen("input.txt",r,"stdin");
	int t=1;
//	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}



