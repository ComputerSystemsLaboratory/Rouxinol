#include<bits/stdc++.h>
#define ll long long 
#define ld long double
#define X first
#define Y second
#define pb push_back
#define max_el(x) max_element(x.begin(),x.end())-x.begin()
#define min_el(x) min_element(x.begin(),x.end())-x.begin()
#define mp make_pair
#define endl '\n'
#define fastread ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
// DONT USE MEMSET, USE VECTORS


int d = 63;
vector<ll> basis;

bool insert(ll v, bool upd){
	for(int bit = 0; bit < d; bit++){
		if(!(v&(1LL<<bit))) continue;

		if(!basis[bit]){
			if(upd) basis[bit] = v;
			return 1;
		}

		v ^= basis[bit];
	}
	return 0;
}




void solve(){
	int n;
	cin>>n;
	basis = vector<ll>(d);
	vector<ll> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}	
	string s;
	cin>>s;

	for(int i=n-1;i>=0;i--){
		if(s[i] == '0'){
			insert(a[i], 1);
		}
		else{
			if(insert(a[i],0)){
				cout<<1<<endl;
				return;
			}
		}
	}
	cout<<0<<endl;
}

int main(){
	fastread;
	int t = 1;
	cin>>t;
	for(int i=1;i<=t;i++){
		// cout<<"Case #"<<i<<": ";
		solve();
	}
	return 0;
}
