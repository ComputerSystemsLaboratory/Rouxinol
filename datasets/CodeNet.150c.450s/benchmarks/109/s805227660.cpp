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
const int N = 86410;

int sec(string s) {
	string a, b, c;
	a = s.substr(0, 2);
	b = s.substr(3, 2);
	c = s.substr(6, 2);
	return stoi(a) * 60 * 60 + stoi(b) * 60 + stoi(c);
}

int main() {
//	cout << fixed << setprecision(15);
	vi c(N), ans;
	while(true) {
		int n;
		cin >> n;
		if(n == 0) break;
		fill(c.begin(), c.end(), 0);
		rep(i, n) {
			string s, t;
			cin >> s >> t;
			c[sec(s)]++;
			c[sec(t)]--;
		}
		rep(i, N-1) c[i+1] += c[i];
		int _ans = 0;
		rep(i, N) chmax(_ans, c[i]);
		ans.push_back(_ans);
	}
	for(int i: ans) cout << i << endl;
}

