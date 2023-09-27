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
typedef pair<ll,P> PP;

//-----------------------------------------------------------------------------


int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

	int num[185];
	for(int i=1;i<185;i++) {
		num[i-1]=i*(i+1)*(i+2)/6;
	}
	int dp[1000100],dp_odd[1000100];
	REP(i,1000100) dp[i]=dp_odd[i]=INF;
	dp[0]=dp_odd[0]=0;
	REP(i,1000000) {
		if(dp[i]!=INF) {
			REP(j,185) {
				if(num[j]+i>1000000) break;
				dp[i+num[j]]=min(dp[i+num[j]],dp[i]+1);
			}
		}
		if(dp_odd[i]!=INF) {
			REP(j,185) {
				if(num[j]+i>1000000) break;
				if(num[j]%2==0) continue;
				dp_odd[i+num[j]]=min(dp_odd[i+num[j]],dp_odd[i]+1);
			}
		}
	}

	while(true) {
		int n;
		cin>>n;
		if(n==0) break;
		cout<<dp[n]<<' '<<dp_odd[n]<<endl;
	}

	return 0;
}

