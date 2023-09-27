/*input
3
2
1 2
10
2
1 1
10
6
2 3 4 5 6 7
111000
*/
#include <bits/stdc++.h>
#pragma GCC optimize("unroll-loops,no-stack-protector")
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef pair<ld,ld> pdd;
#define IOS ios_base::sync_with_stdio(0); cin.tie(0)
#define ALL(a) a.begin(),a.end()
#define SZ(a) ((int)a.size())
#define F first
#define S second
#define REP(i,n) for(int i=0;i<((int)n);i++)
#define eb emplace_back
#define pb push_back
#define MP(a,b) make_pair(a,b)
#define SORT_UNIQUE(c) (sort(c.begin(),c.end()), c.resize(distance(c.begin(),unique(c.begin(),c.end()))))
#define GET_POS(c,x) (int)(lower_bound(c.begin(),c.end(),x)-c.begin())
#define EL cout<<'\n'
#define BS(a,x) binary_search(ALL(a),x)
template<typename T1,typename T2>
ostream& operator<<(ostream& out,pair<T1,T2> P){
	out<<'('<<P.F<<','<<P.S<<')';
	return out;
}
template<typename T>
ostream& operator<<(ostream& out,vector<T> V){
	REP(i,SZ(V)) out<<V[i]<<((i!=SZ(V)-1)?" ":"");
	return out;
}
//}}}
const ll maxn=300005;
const ll maxlg=20;
const ll INF64=1e18;
const int INF=0x3f3f3f3f;
const ll MOD=ll(1e9+7);
const ld PI=acos(-1);
const ld eps=1e-9;
//const ll p=880301;
//const ll P=31;

ll mypow(ll a,ll b){
	ll res=1LL;
	while(b){
		if(b&1) res=res*a%MOD;
		a=a*a%MOD;
		b>>=1;
	}
	return res;
}

int n;
string s;
ll a[maxn];


ll v[60];
bitset<60> vis;

void solve(){
	vis.reset();

	cin>>n;
	REP(i,n) cin>>a[i];
	cin>>s;

	bool flag = 0;
	for(int i=n-1;i>=0;i--){
		if(s[i]=='1'){
			for(int j=60;j>=0;j--) if(a[i]&(1LL<<j)){
				if(!vis[j]) flag = 1;
				else{
					a[i]^=v[j];
				}
			}
			if(flag) break;
		}
		else{
			for(int j=60;j>=0;j--) if(a[i]&(1LL<<j)){
				if(!vis[j]){
					vis[j] = 1;
					v[j]=a[i];
					break;
				}
				else{
					a[i]^=v[j];
				}
			}
		}
	}
	cout<<flag<<'\n';
}

int main(){
	IOS;
	int T;
	cin>>T;
	while(T--) solve();
	return 0;
}
