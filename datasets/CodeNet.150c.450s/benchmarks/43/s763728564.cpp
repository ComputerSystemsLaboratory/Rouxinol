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

int n,a,b;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

	while(true) {
		cin>>n;
		if(n==0) break;
		int A=0,B=0;
		REP(i,n) {
			cin>>a>>b;
			if(a>b) A+=a+b;
			else if(a<b) B+=a+b;
			else A+=a,B+=b;
		}
		cout<<A<<' '<<B<<endl;
	}

	return 0;
}

