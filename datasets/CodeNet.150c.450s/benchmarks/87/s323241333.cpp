#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<stdio.h>
#include<time.h>
#include<math.h>
#include<algorithm>
#include<string>
#include<vector>
#include<list>
#include<queue>
#include<stack>
#include<deque>
#include<set>
#include<map>
#define REP(i, N) for(ll i = 0; i < N; ++i)
#define FOR(i, a, b) for(ll i = a; i < b; ++i)
#define ALL(a) (a).begin(),(a).end()
#define pb push_back
#define INF 1000000000
#define MOD 1000000007
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int qx[8] = {1, 1, 0, -1, -1, -1, 0, 1};
int qy[8] = {0, 1, 1, 1, 0, -1, -1, -1};

int main(void) {
	while(true) {
		ll h;
		cin>>h;
		if(h == 0) break;
		vector<string> s(5);
		REP(i, 5) {
			s[i].resize(h);
		}
		REP(i, h) {
			REP(j, 5) {
				cin>>s[j][h - 1 - i];
			}
		}
		ll score = 0;
		vector<P> majikesu;
		while(true) {
			REP(i, h) {
				ll cnt = 0;
				vector<ll> kesu;
				FOR(j, 1, 5) {
					if(s[j][i] == '0') continue;
					if(s[j][i] == s[j - 1][i]) {
						if(cnt == 0) {
							cnt = 2;
							kesu.pb(j);
							kesu.pb(j - 1);
						} else {
							++cnt;
							kesu.pb(j);
						}
						if(cnt == 3) {
							if(j + 1 < 5 && s[j + 1][i] == s[j][i]) {
								if(j + 2 < 5 && s[j + 2][i] == s[j][i]) {
									kesu.pb(j + 1);
									kesu.pb(j + 2);
								} else {
									kesu.pb(j + 1);
								}
							}
							break;
						}
					} else {
						kesu.resize(0);
						cnt = 0;
					}
				}
				if(kesu.size() >= 3) {
					if(s[kesu[0]][i] != 0) {
						score += (s[kesu[0]][i] - '0') * kesu.size();
						REP(k, kesu.size()) {
							majikesu.pb(P(kesu[k], i));
						}
					}
				}
			}
			if(majikesu.size() == 0) break;
			else {
				REP(j, majikesu.size()) {
					s[majikesu[j].first][majikesu[j].second] = '.';
				}
				REP(j, 5) {
					REP(k, s[j].size()) {
						if(s[j][k] == '.') {
							s[j].erase(s[j].begin() +  k);
							--k;
						}
					}
				}
				REP(j, 5) {
					REP(k, h - s[j].size()) {
						s[j] += "0";
					}
				}
				majikesu.resize(0);
			}
		}
		cout<<score<<endl;
	}
}