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

vi prime_number(int max_n) {
	vector<bool> vb(max_n + 1, true);
	vb[0] = vb[1] = false;
	vi ret;
	for(int i = 2; i <= max_n; i++) {
		if(!vb[i]) continue;
		for(int j = 2 * i; j <= max_n; j += i) {
			vb[j] = false;
		}
	}
	for(int i = 2; i <= max_n; i++) {
		if(vb[i]) ret.push_back(i);
	}
	return ret;
}

int main() {
//	cout << fixed << setprecision(15);
	int n;
	cin >> n;
	int tmp = n;
	vi p = prime_number(100000);
	vi ans;
	rep(i, p.size()) {
		if(n < p[i]) break;
		while(n % p[i] == 0) {
			n /= p[i];
			ans.push_back(p[i]);
		}
	}
	if(n != 1) ans.push_back(n);
	cout << tmp << ":";
	for(auto i: ans) cout << " " << i;
	cout << endl;
}

