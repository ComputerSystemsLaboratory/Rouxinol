#include<iostream>
#include<iomanip>
#include<math.h>
#include<vector>
#include<algorithm>
#include<set>
#include<map>
#include<queue>
#include<stack>
#include<string>
#include<complex>

#define INF (long long)1000000000
#define MOD 1000000007
#define EPS 1e-8

#define REP(i, m) for(long long i = 0; i < m; ++i)
#define FOR(i, n, m) for(long long i = n; i < m; ++i)
#define ALL(v) v.begin(), v.end()
#define pb push_back

using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
typedef long double ld;

int main() {
	int n,m,l;
	cin>>n>>m>>l;
	ll a[n][m];
	ll b[m][l];
	REP(i,n) REP(j,m) cin>>a[i][j];
	REP(i,m) REP(j,l) cin>>b[i][j];
	REP(i,n) {
		REP(j,l) {
			ll res = 0;
			REP(k,m) res += a[i][k]*b[k][j];
			cout<<res;
			if(j!=l-1) cout<<" ";
			else cout<<endl;
		}
	}
}