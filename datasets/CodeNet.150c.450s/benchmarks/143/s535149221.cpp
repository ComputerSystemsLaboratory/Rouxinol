#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ll jum=0,n;
	map<ll,ll>m;
	cin >> n;
	for(int i=1; i<=n; i++){
		ll x;
		cin >> x;
		jum+=x;
		m[x]++;
	}
	ll q,a,b;
	cin >> q;
	while(q--){
		cin >> a >> b;
		cout << jum-a*m[a]+b*m[a] << endl;
		jum=jum-a*m[a]+b*m[a];
		m[b]+=m[a];
		m[a]=0;
	}
}