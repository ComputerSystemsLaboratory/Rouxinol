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

using namespace std;

#define FOR(i,a,b) for(long long i=(a);i<(b);i++)
#define REP(i,N) for(long long i=0;i<(N);i++)
#define ALL(s) (s).begin(),(s).end()
#define fi first
#define se second

#define PI acos(-1.0)
#define INF 10e9+9
#define EPS 1e-10
#define MAX_N 100100
#define MAX_M 100100

typedef long long ll;
typedef pair<ll, ll> P;
typedef pair<double, double> PD;
typedef pair<string, ll> PS;
typedef vector<ll> V;
typedef pair<P, char> PC;

ll n, m;
vector<P> vp;

int main(){
	while (cin >> n >> m&&n + m){
		vp.clear();
		REP(i, n){
			ll d, p;
			cin >> d >> p;
			vp.push_back(P(p, d));
		}
		sort(ALL(vp), greater<P>());
		ll ans = 0;
		REP(i, vp.size()){
			if (m - vp[i].second < 0){
				if (m <= 0){
					ans += vp[i].first*vp[i].second;
				}
				else{
					ans += vp[i].first*(vp[i].second - m);
					m -= vp[i].second;
				}
			}
			else{
				m -= vp[i].second;
			}
		}
		cout << ans << endl;
	}
}