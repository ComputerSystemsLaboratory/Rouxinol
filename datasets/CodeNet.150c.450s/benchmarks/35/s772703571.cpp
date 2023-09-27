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
	while (true) {
		int n;	cin >> n;
		if (n == 0)	break;
		vint a(n, 0);
		rep(i, n)	cin >> a[i];
		vector<ll> sum(n + 1, 0);
		rep(i, n)	sum[i + 1] = sum[i] + a[i];
		ll ret = -1e18;
		REP(i, n)	rep(j, i)	ret = max(ret, sum[i] - sum[j]);
		cout << ret << endl;
	}
	return 0;
}