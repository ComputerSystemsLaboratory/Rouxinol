#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
#include <utility>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <deque>
#include <algorithm>
using namespace std;
typedef long double ld;
typedef long long ll;
typedef vector<int> vint;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<double, double> pdd;
#define rep(i,n)	for(int i=0;i<n;i++)
#define srep(i,a,n)	for(int i=a;i<n;i++)
#define REP(i,n)	for(int i=0;i<=n;i++)
#define SREP(i,a,n)	for(int i=a;i<=n;i++)
#define rrep(i,n)	for(int i=n-1;i>=0;i--)
#define all(a)	(a).begin(),(a).end()
#define mp(a,b)	make_pair(a,b)
#define fst	first
#define scn second

const ll inf = (ll)1e18;
const ll mod = (ll)1e9 + 7;
const ld eps = 1e-9;

int main() {
	ll m = 0, n = 0;	cin >> m >> n;
	ll ret = 1;
	while (n) {
		if (n & 1)	ret = (ret*m) % mod;
		m = (m*m) % mod;
		n >>= 1;
	}
	cout << ret << endl;
	return 0;
}