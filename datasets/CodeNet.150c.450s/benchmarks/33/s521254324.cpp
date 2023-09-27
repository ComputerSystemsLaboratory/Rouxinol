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

int calc(int a,int b) {
	return a*(100+b)/100;
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

	while(true) {
		int x,y,s;cin>>x>>y>>s;
		if(s==0) break;
		int ma=0;
		FOR(i,1,s) {
			FOR(j,1,s) {
				if(calc(i,x)+calc(j,x)!=s) continue;
				ma=max(ma,calc(i,y)+calc(j,y));
			}
		}
		cout<<ma<<endl;
	}

	return 0;
}

