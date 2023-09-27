#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <functional>
#include <numeric>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <utility>
#include <sstream>
#include <complex>
#include <fstream>
#include <bitset>

using namespace std;

typedef long long ll;
typedef pair<ll, ll> P;
typedef vector<ll> V;
typedef complex<double> Point;

#define PI acos(-1.0)
#define EPS 1e-10
const ll INF = 1e9 + 7;
const ll MOD = 1e9 + 7;

#define FOR(i,a,b) for(long long i=(a);i<(b);i++)
#define REP(i,N) for(long long i=0;i<(N);i++)
#define ALL(s) (s).begin(),(s).end()
#define EQ(a,b) (abs((a)-(b))<EPS)
#define EQV(a,b) ( EQ((a).real(), (b).real()) && EQ((a).imag(), (b).imag()) )
#define fi first
#define se second

ll x, y, s;
vector<P> vp;

ll calc(ll r, ll x){
	return r*(100 + x) / 100;
}

int main(){
	while (cin >> x >> y >> s&&x + y + s){
		vp.clear();
		ll num, ans = -1;
		FOR(i, 1, s + 1){
			FOR(j, 1, i){
				//cout << i << endl;
				//cout << calc(i, x) << calc(s - i, x) << endl;
				if (i - j < j)break;
				if (calc(j, x) + calc(i - j, x) == s){
					vp.push_back({ j, i - j });
				}
			}
		}
		REP(i, vp.size()){
			ans = max(ans, calc(vp[i].first, y) + calc(vp[i].second, y));
			//if (ans == 105)cout << vp[i].first << " " << vp[i].second << endl;
		}
		cout << ans << endl;
	}
}