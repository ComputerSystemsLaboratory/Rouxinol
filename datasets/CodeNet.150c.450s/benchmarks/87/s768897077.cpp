#include <iostream>
#include <iomanip>
#include <vector>
#include <set>
#include <string>
#include <queue>
#include <algorithm>
#include <map>
#include <cmath>
#include <numeric>
#include <list>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <tuple>

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep1(i, n) for (int i = 1; i <= (n); i++)
#define show(a, n) rep(i,n) {cout<<a[i]<<' ';} cout<<endl
#define show2(a, n, m) rep(i, n) { rep(j, m) {cout << a[i][j] << ' ';} cout << endl;} 
#define chmin(a, b) a = min(a, b)
#define chmax(a, b) a = max(a, b)

using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<long long, long long> pll;
typedef long double ld;

const int INF = 1 << 30;
const long long INFL = 1LL << 60;
const int MOD = 1000000007;
const int MAX = 100000;
const int N = 100010;

void fills(vector<vi>& s) {
	int h = s.size();
	rep(j, 5) {
		int d = h-1;
		for(int i = h-1; i >= 0; i--) {
			if(s[i][j] == 0) continue;
			swap(s[i][j], s[d][j]);
			d--;
		}
	}
}

int delsl(vi& s) {
	int len = 0;
	int l = 0, r = 0;
	for(r = 1; r < 5; r++) {
		if(s[l] != s[r]) {
			if(len >= 3) break;
			else l = r;
		}
		else if(r - l >= 2) {
			chmax(len, r - l + 1);
		}
	}
	int ret = s[l] * len;
	for(int i = l; i < len + l; i++) s[i] = 0;
	return ret;
}

int dels(vector<vi>& s) {
	int ret = 0;
	int h = s.size();
	rep(i, h) ret += delsl(s[i]);
	return ret;
}

int score(vector<vi>& s) {
	int ret = 0;
	int add;
	while(add = dels(s)) {
		ret += add;
		fills(s);
	}
	return ret;
}

int main() {
//	cout << fixed << setprecision(15);
	int h;
	vi ans;
	while(true) {
		cin >> h;
		if(h == 0) break;
		vector<vi> s(h, vi(5));
		rep(i, h) rep(j, 5) cin >> s[i][j];
		ans.push_back(score(s));
	}
	for(auto i: ans) cout << i << endl;
}

