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
typedef pair<int,ll> P;
typedef pair<ll,P> PP;

//-----------------------------------------------------------------------------

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

	int a,b,c,d,e,f;
	while(cin>>a>>b>>c>>d>>e>>f) {
		double y=(double)(c*d-a*f)/(double)(b*d-a*e);
		double x=(c-b*y)/a;
		printf("%.3f %.3f\n",x,y);
	}

	return 0;
}

