#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

using ll = long long;

#define FOR(i, a, b) for(int i=(a);i<(b);++i)
#define REP(i, n) for(int i=0;i<(n);++i)
#define ALL(v) (v).begin(),(v).end()

typedef pair<int, int> P;

const int MOD = (int) 1e9 + 7;

template<class T>
bool chmax(T &a, const T &b) {
	if (a < b) {
		a = b;
		return 1;
	}
	return 0;
}

template<class T>
bool chmin(T &a, const T &b) {
	if (b < a) {
		a = b;
		return 1;
	}
	return 0;
}

int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

bool compare(P a, P b) {
	if (a.first * a.first + a.second * a.second == b.first * b.first + b.second * b.second) return a.first < b.first;
	return a.first * a.first + a.second * a.second < b.first * b.first + b.second * b.second;
}

int main(void) {
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	while (1) {
		int h, w;
		cin >> h >> w;
		if (h == 0) break;
		
		vector<P> v;
		FOR(i, 1, 151) {
			FOR(j, i + 1, 151) {
				v.push_back(P(i, j));
			}
		}
		
		sort(ALL(v), compare);
		
		int t;
		REP(i, v.size()) {
			if (P(h, w) == v[i]) {
				t = i;
				break;
			}
		}
		
		cout << v[t + 1].first << " " << v[t + 1].second << endl;
		
	}
	
	
	return 0;
}
