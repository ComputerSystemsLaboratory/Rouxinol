#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef pair<ll,ll> p2;
ll basis[60];
ll insert(ll mask){
	ll p=1;
	for(ll i=0;i<60;i++){
		if(!(mask&p)){
			p*=2;
			continue;
		}
		if(!basis[i]){
			basis[i]=mask;
			return 1;
		}
		mask^=basis[i];
		p*=2;
	}
	return 0;
}
void solve(){
	ll n;
	cin>>n;
	string s;
	vector<ll> v(n);
	for(ll i=0;i<n;i++)
	cin>>v[i];
	cin>>s;
	for(ll i=n-1;i>=0;i--)
	if(s[i]=='0')
	insert(v[i]);
	else if(s[i]=='1'){
		if(!insert(v[i]))
		continue;
		cout<<"1\n";
		return;
	}
	cout<<"0\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll qc=1;
    cin>>qc;
    for(ll i=1;i<=qc;i++){
		solve();
		for(ll j=0;j<60;j++)
		basis[j]=0;
	}	
}
