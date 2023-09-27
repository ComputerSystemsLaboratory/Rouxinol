#include <bits/stdc++.h>

using namespace std;

#define REP(i,m) for(int i=0; i<m; i++)
#define FOR(i,n,m) for(int i=n; i<m; i++)
#define INF 1000000007
#define INFL (1LL << 60)
#define MOD 998244353
#define ALL(v) v.begin(),v.end()
#define pb push_back
#define ll long long int
#define P pair<ll, ll>

int main(){
	bool s[30] = { };
	REP(i, 28){
		int x;
		cin >> x;
		s[x-1] = true;
	}
	REP(i, 30) if(!s[i]) cout << i+1 << endl;
	return 0;
} 
