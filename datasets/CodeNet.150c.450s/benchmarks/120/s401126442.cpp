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
#define INF 1000000000ll
#define MOD 1000000007ll
#define EPS 1e-8
#define rep(i,m) for(long long i=0; i<m; ++i)
#define repp(i,n,m) for(long long i=n; i<m; ++i)
#define all(v) v.begin(),v.end()
#define pb push_back
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
typedef long double ld;
typedef vector<int> vi;
typedef vector<vector<int> > vii;
typedef vector<long long> vl;
typedef vector<vector<long long> > vll;

int main() {
	ios::sync_with_stdio(false);
	while(1) {
		int r,c;
		cin>>r>>c;
		if(r==0&&c==0) break;
		vii snbi(r,vi(c));
		rep(i,r) {
			rep(j,c) cin>>snbi[i][j];
		}
		ll ret=0;
		rep(bit,(1<<r)) {
			vi used(r,false);
			ll buf=bit;
			rep(i,r) {
				if(buf%2==1) used[i]=true;
				buf/=2;
			}
			ll res=0;
			rep(i,c) {
				ll foo=0;
				rep(j,r) if(used[j]^snbi[j][i]) ++foo;
				res+=max(foo,r-foo);
			}
			ret=max(ret,res);
		}
		cout<<ret<<endl;
	}
}