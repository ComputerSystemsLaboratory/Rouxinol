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

ll h;
vector<ll> v[5];

int main(){
	while (cin >> h&&h){
		ll ans = 0;
		REP(i, 5){
			v[i].clear();
			v[i].resize(h);
		}
		REP(i, h){
			REP(j, 5){
				cin >> v[j][h - 1 - i];
			}
		}
		bool f = 1;
		while (f){
			//REP(i, 5){
			//	REP(j, v[i].size()){
			//		cout << v[i][j] << "  ";
			//	}
			//	cout << endl;
			//}
			f = 0;
			vector<pair<P, ll>> vpi;
			REP(i, h){
				ll cnt = 1, pos = 0;
				REP(j, 5 - 1){
					if (v[j][i] == v[j + 1][i]){
						if (v[j][i] != -1)cnt++;
						else cnt = 0;
					}
					else{
						if (cnt >= 3){
							vpi.push_back({ P(pos, cnt), i });
						}
						pos = j + 1;
						cnt = 1;
					}
				}
				if (cnt >= 3){
					vpi.push_back({ P(pos, cnt), i });
				}
			}
			REP(i, vpi.size()){
				f = 1;
				ll he = vpi[i].second, pos = vpi[i].first.first, cnt = vpi[i].first.second;
				//cout << he << " " << pos << " " << cnt << endl;
				ans += (v[pos][he] * cnt);
				REP(j, cnt)v[pos + j][he] = -1;
			}
			REP(i, 5){
				auto it = v[i].begin();
				while (it != v[i].end()){
					if (*it == -1){
						it = v[i].erase(it);
					}
					else it++;
				}
			}
			REP(i, 5){
				while (v[i].size() < h){
					v[i].push_back(-1);
				}
			}
		}
		cout << ans << endl;
	}
}