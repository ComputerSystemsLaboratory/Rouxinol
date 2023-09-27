#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <queue>
#include <stack>
#include <functional>
#include <bitset>
#include <assert.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<bool> vb;
typedef vector<double> vd;
typedef pair<ll,ll> P;
typedef vector<P> vpl;
typedef tuple<ll,ll,ll> tapu;
#define rep(i,n) for(ll i=0; i<(n); i++)
#define REP(i,a,b) for(int i=(a); i<(b); i++)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
const int inf = 1<<30;
const ll linf = 1LL<<62;
const int MAX = 510000;
ll dy[8] = {0,1,0,-1,1,-1,1,-1};
ll dx[8] = {1,0,-1,0,1,-1,-1,1};
const double pi = acos(-1);
const double eps = 1e-7;
template<typename T1,typename T2> inline bool chmin(T1 &a,T2 b){
	if(a>b){
		a = b; return true;
	}
	else return false;
}
template<typename T1,typename T2> inline bool chmax(T1 &a,T2 b){
	if(a<b){
		a = b; return true;
	}
	else return false;
}
template<typename T1,typename T2> inline void print2(T1 a, T2 b){cout << a << " " << b << "\n";}
template<typename T1,typename T2,typename T3> inline void print3(T1 a, T2 b, T3 c){
	cout << a << " " << b << " " << c << "\n";
}
const int mod = 1e9 + 7;
//const int mod = 998244353;

int main(){
	while(1){
		ll h; cin >> h;
		if(!h) break;
		ll w = 5;
		vvl a(h,vl(w));
		rep(i,h) rep(j,w) cin >> a[i][j];
		ll ans = 0;
		while(1){
			ll plus = 0;
			rep(i,h){
				rep(j,w){
					if(a[i][j] == -1) continue;
					ll t = j;
					while(t < w && a[i][t] == a[i][j]){
						t++;
					}
					if(t-j >= 3){
						REP(k,j,t) plus += a[i][k], a[i][k] = -1;
					}
				}
			}
			rep(j,w){
				ll modify = 0;
				for(ll i=h-1; i>=0; i--){
					if(a[i][j] == -1) modify++;
					else{
						if(modify){
							a[i+modify][j] = a[i][j];
							a[i][j] = -1;
						}
					}
				}
			}
			ans += plus;
			if(!plus) break;
		}
		cout << ans << endl;
	}
}
