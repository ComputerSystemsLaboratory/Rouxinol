#include <bits/stdc++.h>
using namespace std;

#define INF 1.1e9
#define LINF 1.1e18
#define FOR(i,a,b) for (int i=(a);i<(b);++i)
#define REP(i,n) FOR(i,0,n)
#define ALL(v) (v).begin(),(v).end()
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define BIT(x,n) bitset<n>(x)
#define PI 3.14159265358979323846

typedef long long ll;
typedef pair<int,int> P;
typedef pair<int,P> PP;

//-----------------------------------------------------------------------------


int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

	while(true) {
		int n,m;
		map<char,char> mp;
		cin>>n;
		if(n==0) break;
		REP(i,n) {
			char a,b;cin>>a>>b;
			mp[a]=b;
		}
		cin>>m;
		while(m--) {
			char ch;
			cin>>ch;
			if(mp.count(ch)) cout<<mp[ch];
			else cout<<ch;
		}
		cout<<endl;
	}

	return 0;
}

