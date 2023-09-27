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

using namespace std;

#define FOR(i,a,b) for(long long i=(a);i<(b);i++)
#define REP(i,N) for(long long i=0;i<(N);i++)
#define ALL(s) (s).begin(),(s).end()
#define fi first
#define se second

#define PI acos(-1.0)
#define INF 1000000007
#define EPS 1e-10

typedef long long ll;
typedef pair<ll, ll> P;
typedef pair<double, double> PD;
typedef pair<string, ll> PS;
typedef vector<ll> V;
typedef pair<P, char> PC;

ll n, m, num;
vector<ll> t, h;

int main(){
	while (cin >> n >> m&&n + m){
		t.clear(); h.clear();
		ll tsum = 0, hsum = 0;
		ll MIN = INF;
		bool f = 0;
		REP(i, n){
			cin >> num;
			t.push_back(num);
			tsum += num;
		}
		REP(i, m){
			cin >> num;
			h.push_back(num);
			hsum += num;
			if (find(ALL(t), num) != t.end()){
				MIN = min(MIN, num);
				f = 1;
			}
		}

		if (f&&hsum == tsum){
			cout << MIN << " " << MIN << endl;
			continue;
		}

		P ans;
		MIN = INF;
		f = 0;
		REP(i, n){
			REP(j, m){
				if (tsum - t[i] + h[j] == hsum - h[j] + t[i]){
					if (t[i] + h[j] < MIN){
						ans = P(t[i], h[j]);
						MIN = t[i] + h[j];
						f = 1;
					}
				}
			}
		}
		if (!f)cout << -1 << endl;
		else cout << ans.first << " " << ans.second << endl;
	}
}