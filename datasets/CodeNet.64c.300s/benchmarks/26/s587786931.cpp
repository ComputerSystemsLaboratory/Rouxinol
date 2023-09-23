//#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
using namespace std;

#define INF 1.1e9
#define LINF 9223372036854775807
#define FOR(i,a,b) for (int i = (a); i < (b); ++i)
#define REP(i,n) FOR(i,0,n)
#define ALL(v) (v).begin(), (v).end()

typedef long long ll;
typedef pair<ll, ll> P;

ll m,n;
const ll MOD=1e9+7;

ll calc(ll a, ll b) {
	ll res=1;
	if(b>0) {
		res=calc(a,b/2);
		if(b%2==0) res=(res*res)%MOD;
		else res=(((res*res)%MOD)*a)%MOD;
	}
	return res;
}

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);

	cin>>m>>n;
	cout<<calc(m,n)<<endl;

	return 0;
}